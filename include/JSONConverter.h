#ifndef JSONCONVERTER_H
#define JSONCONVERTER_H

#include "../lib/cJSON.h"

#define DEFAULTSTRING "N/A"

String get_cjson_string(const cJSON* parent, const char* key) {
    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    
    if (item != nullptr && cJSON_IsString(item)) {
        const char* value = cJSON_GetStringValue(item);
        if (value != nullptr) {
            return String(value); 
        }
    }
    return DEFAULTSTRING; 
}

int get_cjson_int(const cJSON* parent, const char* key) {
    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    if (item != nullptr && cJSON_IsNumber(item)) {
        return (int)item->valuedouble;
    }
    return 0;
}


double get_cjson_double(const cJSON* parent, const char* key) {
    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    if (item != nullptr && cJSON_IsNumber(item)) {
        return item->valuedouble;
    }
    return 0.0;
}

int64_t get_cjson_int64(const cJSON* parent, const char* key) {
    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    if (item != nullptr && cJSON_IsNumber(item)) {
        return (int64_t)item->valuedouble;
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
                Flight flight;
                flight.callsign = get_cjson_string(flight_json, "callsign");
                flight.clicks = get_cjson_int(flight_json, "clicks");
                flight.flightNumber = get_cjson_string(flight_json, "flight"); 
                flight.flightId = get_cjson_string(flight_json, "flight_id");
                flight.fromCity = get_cjson_string(flight_json, "from_city");
                flight.fromIata = get_cjson_string(flight_json, "from_iata");
                flight.model = get_cjson_string(flight_json, "model");
                flight.squawk = get_cjson_string(flight_json, "squawk");
                flight.toCity = get_cjson_string(flight_json, "to_city");
                flight.toIata = get_cjson_string(flight_json, "to_iata");
                flight.type = get_cjson_string(flight_json, "type");
                
                flight_list.add(flight); 
            }
        }
    }
    
    cJSON_Delete(root);
    
    return flight_list;
}

SpecificFlightData parseJsonToSpecificFlightData(const char* json_string) {
    cJSON* root = cJSON_Parse(json_string);
    SpecificFlightData flightData;

    if (root == nullptr) {
        logWarning("root == nullptr");
        return flightData;
    }

    cJSON* identification = cJSON_GetObjectItemCaseSensitive(root, "identification");
    if (identification) {
        flightData.callsign = get_cjson_string(identification, "callsign");
    }

    cJSON* aircraft = cJSON_GetObjectItemCaseSensitive(root, "aircraft");
    if (aircraft) {
        cJSON* model = cJSON_GetObjectItemCaseSensitive(aircraft, "model");
        flightData.aircraftModel.code = get_cjson_string(model, "code");
        flightData.aircraftModel.text = get_cjson_string(model, "text");
    }

    cJSON* airline = cJSON_GetObjectItemCaseSensitive(root, "airline");
    if (airline) {
        flightData.airline.airlineName = get_cjson_string(airline, "name");
        flightData.airline.airlineShort = get_cjson_string(airline, "short");
    }

    cJSON* time = cJSON_GetObjectItemCaseSensitive(root, "time");
    if (time) {
        cJSON* scheduled = cJSON_GetObjectItemCaseSensitive(time, "scheduled");
        if (scheduled) {
            flightData.times.scheduledDeparture = get_cjson_int64(scheduled, "departure");
            flightData.times.scheduledArrival = get_cjson_int64(scheduled, "arrival");
        }
        
        cJSON* real = cJSON_GetObjectItemCaseSensitive(time, "real");
        if (real) {
            flightData.times.realDeparture = get_cjson_int64(real, "departure");
            flightData.times.realArrival = get_cjson_int64(real, "arrival");
        }
        
        cJSON* estimated = cJSON_GetObjectItemCaseSensitive(time, "estimated");
        if (estimated) {
            flightData.times.estimatedArrival = get_cjson_int64(estimated, "arrival");
        }
    }

    cJSON* trail_array = cJSON_GetObjectItemCaseSensitive(root, "trail");
    if (trail_array != nullptr && cJSON_IsArray(trail_array)) {
        cJSON* point_json = nullptr;
        cJSON_ArrayForEach(point_json, trail_array) {
            if (cJSON_IsObject(point_json)) {
                FlightTrackPoint point;
                point.lat = get_cjson_double(point_json, "lat");
                point.lng = get_cjson_double(point_json, "lng");
                point.alt = (int32_t)get_cjson_int(point_json, "alt");
                point.spd = (int32_t)get_cjson_int(point_json, "spd");
                point.ts = get_cjson_int64(point_json, "ts");
                point.hd = (int32_t)get_cjson_int(point_json, "hd");
                
                flightData.trail.add(point);
            }
        }
    }

    cJSON_Delete(root);
    
    return flightData;
}

#endif // JSONCONVERTER_H