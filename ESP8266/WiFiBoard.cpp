#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClientSecure.h>

#include "../secrets/Secrets.h"

const char* apiHost = "flight-radar1.p.rapidapi.com";
const char* apiUrl  = "https://flight-radar1.p.rapidapi.com/flights/list-most-tracked";

void setup() {
    Serial.begin(115200);
    Serial.println();

    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI, WIFIPASS);
  
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println(WiFi.localIP());

    std::unique_ptr<BearSSL::WiFiClientSecure> client(new BearSSL::WiFiClientSecure);
    client->setInsecure(); 

    HTTPClient https;

    if (https.begin(*client, apiUrl)) {
        https.addHeader("x-rapidapi-key", APIKEY);
        https.addHeader("x-rapidapi-host", apiHost);
    
        int httpCode = https.GET();

        if (httpCode > 0) {
            if (httpCode == HTTP_CODE_OK) {
                String payload = https.getString();
                Serial.println(payload);
            } else {
                Serial.print("API Error: ");
                Serial.println(httpCode);
                Serial.println(https.errorToString(httpCode));
            }
        } 
        else {
            Serial.print("Connection Error: ");
            Serial.println(https.errorToString(httpCode));
        }
        https.end();
    } 
    else {
        Serial.println("Unable to connect");
    }
}

void loop() {
}