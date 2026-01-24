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
    
    Serial.begin(460800);
    inputString.reserve(200);
    
    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI, WIFIPASS);
    
    int wifiTimeout = 0;
    while (WiFi.status() != WL_CONNECTED && wifiTimeout < 40) { 
        delay(500);
        wifiTimeout++;
    }
    
    digitalWrite(LED_BUILTIN, LOW);
    
    if (WiFi.status() == WL_CONNECTED) {
        Serial.print("READY\x04");
    } else {
        Serial.print("WIFI_FAIL\x04");
    }
    
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
}

void streamFilteredJSON(WiFiClient* source, Stream* dest) {
    char window[10] = {0}; 
    int winIdx = 0;

    enum State { 
        NORMAL,
        SKIP_OBJECT,
        TRAIL_FIRST_ITEM,
        SKIP_TRAIL_REST
    };
    State state = NORMAL;
    
    int bracketLevel = 0;
    unsigned long lastByteTime = millis();

    while (source->connected() || source->available()) {
        if (source->available()) {
            char c = source->read();
            lastByteTime = millis();

            window[winIdx] = c;
            winIdx = (winIdx + 1) % 10;
            
            auto windowEndsWith = [&](const char* str) -> bool {
                int len = strlen(str);
                for (int i = 0; i < len; i++) {
                    int idx = (winIdx - 1 - i + 10) % 10;
                    if (window[idx] != str[len - 1 - i]) return false;
                }
                return true;
            };

            switch (state) {
                case NORMAL:
                    dest->write(c);

                    if (c == ':' && windowEndsWith("\"images\":")) {
                        dest->print("null"); 
                        state = SKIP_OBJECT;
                        bracketLevel = 0;
                    }
                    else if (c == ':' && windowEndsWith("\"trail\":")) {
                        state = TRAIL_FIRST_ITEM;
                        bracketLevel = 0;
                    }
                    break;

                case SKIP_OBJECT:
                    if (bracketLevel == 0) {
                        if (c == '{' || c == '[') bracketLevel = 1;
                        else if (c != ' ' && c != '\n' && c != '\r') {
                             state = NORMAL;
                             dest->write(c);
                        }
                    } else {
                        if (c == '{' || c == '[') bracketLevel++;
                        if (c == '}' || c == ']') bracketLevel--;
                        
                        if (bracketLevel == 0) {
                            state = NORMAL;
                        }
                    }
                    break;

                case TRAIL_FIRST_ITEM:
                    dest->write(c);
                    
                    if (c == '{') bracketLevel++;
                    if (c == '}') bracketLevel--;
                    
                    if (bracketLevel == 0 && c == '}') {
                        state = SKIP_TRAIL_REST;
                    }
                    if (c == ']') {
                        state = NORMAL;
                    }
                    break;

                case SKIP_TRAIL_REST:
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

void performRequest(String url, String host, bool useFilter) {
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
        http.addHeader("x-rapidapi-host", host);
        http.addHeader("Connection", "close");
        
        int httpCode = http.GET();
        if (httpCode > 0) {
            WiFiClient *stream = http.getStreamPtr();
            
            if (useFilter) {
                streamFilteredJSON(stream, &Serial);
            } else {
                http.writeToStream(&Serial);
            }
            
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
            performRequest("https://flight-radar1.p.rapidapi.com/flights/list-most-tracked", APIHOST, false);
        } 
        else if (inputString.startsWith("DETAIL:")) {
            String flightId = inputString.substring(7);
            flightId.trim();
            if (flightId.length() > 0) {
                performRequest("https://flight-radar1.p.rapidapi.com/flights/detail?flight=" + flightId, APIHOST, true);
            }
        }
        else if (inputString.startsWith("ROUTE:")) {
            int firstColon = 5; 
            int secondColon = inputString.indexOf(':', firstColon + 1);
            
            if (secondColon > 0) {
                String from = inputString.substring(firstColon + 1, secondColon);
                String to = inputString.substring(secondColon + 1);
                from.trim();
                to.trim();
                
                if (from.length() > 0 && to.length() > 0) {
                    String url = "https://flight-radar8.p.rapidapi.com/flights/flight-by-route?airportFrom=" + from + "&airportTo=" + to + "&limit=9";
                    performRequest(url, "flight-radar8.p.rapidapi.com", false);
                }
            }
        }
        else if (inputString.startsWith("SEARCH:")) {
            String query = inputString.substring(7);
            query.trim();
            if (query.length() > 0) {
                 String url = "https://flight-radar8.p.rapidapi.com/flights/search?query=" + query;
                 performRequest(url, "flight-radar8.p.rapidapi.com", false);
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