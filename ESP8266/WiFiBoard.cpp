#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClientSecure.h>

#include "../secrets/Secrets.h"

String inputString = "";
bool stringComplete = false;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH); 
    
    // 115200 Baud ist stabil und sicher
    Serial.begin(115200);
    inputString.reserve(200);
    
    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI, WIFIPASS);
    
    int wifiTimeout = 0;
    while (WiFi.status() != WL_CONNECTED && wifiTimeout < 40) { 
        delay(500);
        wifiTimeout++;
    }
    
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
}

// Der "Super-Filter": Entfernt Bilder UND kürzt Trail
void streamFilteredJSON(WiFiClient* source, Stream* dest) {
    // Kleiner Puffer, um nach Keys zu suchen (letzte 10 Zeichen merken)
    char window[10] = {0}; 
    int winIdx = 0;

    enum State { 
        NORMAL,           // Alles durchleiten
        SKIP_OBJECT,      // Wir sind in "images": { ... } -> alles verwerfen
        TRAIL_FIRST_ITEM, // Wir sind in "trail": [ ... ] -> nur erstes Item
        SKIP_TRAIL_REST   // Rest des Trails verwerfen
    };
    State state = NORMAL;
    
    int bracketLevel = 0;
    unsigned long lastByteTime = millis();

    while (source->connected() || source->available()) {
        if (source->available()) {
            char c = source->read();
            lastByteTime = millis();

            // 1. Sliding Window aktualisieren
            window[winIdx] = c;
            winIdx = (winIdx + 1) % 10;
            
            // Hilfsfunktion: Prüfen ob das Window mit einem String endet
            auto windowEndsWith = [&](const char* str) -> bool {
                int len = strlen(str);
                for (int i = 0; i < len; i++) {
                    // Ringbuffer Logik rückwärts
                    int idx = (winIdx - 1 - i + 10) % 10;
                    if (window[idx] != str[len - 1 - i]) return false;
                }
                return true;
            };

            // 2. Zustandsmaschine
            switch (state) {
                case NORMAL:
                    // Zeichen normal senden
                    dest->write(c);

                    // Prüfen auf "images":
                    if (c == ':' && windowEndsWith("\"images\":")) {
                        // Letztes geschrieben war "images": -> Jetzt kommt das Objekt
                        // Wir haben "images": schon gesendet, ersetzen den Wert durch null
                        dest->print("null"); 
                        // Aber eigentlich kommt jetzt { ... }. 
                        // Wir müssen warten bis das nächste Zeichen kommt, um zu sehen ob { startet
                        // Vereinfachung: Wir gehen in SKIP_OBJECT Vorbereitung
                        state = SKIP_OBJECT;
                        bracketLevel = 0;
                    }
                    // Prüfen auf "trail":
                    else if (c == ':' && windowEndsWith("\"trail\":")) {
                        state = TRAIL_FIRST_ITEM;
                        bracketLevel = 0;
                    }
                    break;

                case SKIP_OBJECT:
                    // Wir warten auf den Start des Objekts oder Arrays
                    // Wenn wir ' ' oder '\n' haben, ignorieren wir es hier nicht, sondern schauen auf { oder [
                    if (bracketLevel == 0) {
                        if (c == '{' || c == '[') bracketLevel = 1;
                        // Falls der Wert "null" war, springen wir sofort zurück (keine Klammer)
                        else if (c != ' ' && c != '\n' && c != '\r') {
                             state = NORMAL; // War wohl kein Objekt, zurück
                             dest->write(c);
                        }
                    } else {
                        // Wir sind IM Objekt -> NICHTS senden (löschen)
                        if (c == '{' || c == '[') bracketLevel++;
                        if (c == '}' || c == ']') bracketLevel--;
                        
                        if (bracketLevel == 0) {
                            // Objekt vorbei.
                            state = NORMAL;
                        }
                    }
                    break;

                case TRAIL_FIRST_ITEM:
                    // Wir leiten das erste Item durch
                    dest->write(c);
                    
                    if (c == '{') bracketLevel++;
                    if (c == '}') bracketLevel--;
                    
                    // Erstes Objekt im Array geschlossen?
                    if (bracketLevel == 0 && c == '}') {
                        state = SKIP_TRAIL_REST;
                    }
                    // Array leer?
                    if (c == ']') {
                        state = NORMAL;
                    }
                    break;

                case SKIP_TRAIL_REST:
                    // Rest bis ] ignorieren
                    if (c == ']') {
                        dest->write(c);
                        state = NORMAL;
                    }
                    break;
            }
        } else {
            delay(1);
            if (millis() - lastByteTime > 3000) break;
        }
    }
}

void performRequest(String url, bool useFilter) {
    if (WiFi.status() != WL_CONNECTED) {
        Serial.print("{\"error\": \"No WiFi\"}\x04"); 
        return;
    }

    digitalWrite(LED_BUILTIN, LOW);
    WiFiClientSecure client;
    client.setInsecure();
    client.setTimeout(5000); 

    HTTPClient http;
    http.setReuse(false);

    if (http.begin(client, url)) {
        http.addHeader("x-rapidapi-key", APIKEY);
        http.addHeader("x-rapidapi-host", APIHOST);
        http.addHeader("Connection", "close");
        
        int httpCode = http.GET();
        if (httpCode > 0) {
            WiFiClient *stream = http.getStreamPtr();
            
            if (useFilter) {
                streamFilteredJSON(stream, &Serial);
            } else {
                http.writeToStream(&Serial);
            }
            
            // SOFORT EOT senden
            Serial.write('\x04');
            Serial.flush(); 
            
        } else {
            Serial.print("{\"error\": \"HTTP Code " + String(httpCode) + "\"}\x04");
        }
        http.end();
    } else {
        Serial.print("{\"error\": \"Connection failed\"}\x04");
    }
    
    digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
    if (stringComplete) {
        inputString.trim();
        if (inputString == "LIST") {
            performRequest("https://flight-radar1.p.rapidapi.com/flights/list-most-tracked", false);
        } 
        else if (inputString.startsWith("DETAIL:")) {
            String flightId = inputString.substring(7);
            flightId.trim();
            if (flightId.length() > 0) {
                performRequest("https://flight-radar1.p.rapidapi.com/flights/detail?flight=" + flightId, true);
            }
        }
        inputString = "";
        stringComplete = false;
    }

    while (Serial.available()) {
        char inChar = (char)Serial.read();
        if (inChar == '\n') stringComplete = true;
        else inputString += inChar;
    }
}