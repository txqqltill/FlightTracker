#ifndef JSONCONVERTER_H
#define JSONCONVERTER_H

#include "List.h"
#include "Flight.h"
#include "../lib/cJSON.h"

#include "yahal_String.h" 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

String get_cjson_string(const cJSON* parent, const char* key) {
    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    
    if (item != nullptr && cJSON_IsString(item)) {
        const char* value = cJSON_GetStringValue(item);
        if (value != nullptr) {
            return String(value); 
        }
    }
    return String(); 
}

int get_cjson_int(const cJSON* parent, const char* key) {
    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    if (item != nullptr && cJSON_IsNumber(item)) {
        return (int)item->valuedouble;
    }
    return 0;
}

List<Flight> parseJsonToFlightList(const char* json_string) {
    
    cJSON* root = cJSON_Parse(json_string);

    if (root == nullptr) {
        return List<Flight>(); 
    }

    List<Flight> flight_list;

    cJSON* data_array = cJSON_GetObjectItemCaseSensitive(root, "data");

    if (data_array != nullptr && cJSON_IsArray(data_array)) {
        
        cJSON* flight_json = nullptr;
        cJSON_ArrayForEach(flight_json, data_array) {
            
            if (cJSON_IsObject(flight_json)) {
                String callsign = get_cjson_string(flight_json, "callsign");
                int clicks = get_cjson_int(flight_json, "clicks");
                String flightNumber = get_cjson_string(flight_json, "flight"); 
                String flightId = get_cjson_string(flight_json, "flight_id");
                String fromCity = get_cjson_string(flight_json, "from_city");
                String fromIata = get_cjson_string(flight_json, "from_iata");
                String model = get_cjson_string(flight_json, "model");
                String squawk = get_cjson_string(flight_json, "squawk");
                String toCity = get_cjson_string(flight_json, "to_city");
                String toIata = get_cjson_string(flight_json, "to_iata");
                String type = get_cjson_string(flight_json, "type");
                if (fromIata == "") fromIata = "N/A";
                if (fromCity == "") fromCity = "N/A"; 
                if (toIata == "") toIata = "N/A";
                if (toCity == "") toCity = "N/A";
                if (flightNumber == "") flightNumber = "N/A";
                
                Flight flight(
                    callsign, 
                    clicks, 
                    flightNumber, 
                    flightId, 
                    fromCity, 
                    fromIata, 
                    model, 
                    squawk, 
                    toCity, 
                    toIata, 
                    type
                );
                
                flight_list.add(flight); 
            }
        }
    }
    
    cJSON_Delete(root);
    
    return flight_list;
}

#endif // JSONCONVERTER_H