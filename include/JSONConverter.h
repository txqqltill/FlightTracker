#ifndef JSONCONVERTER_H
#define JSONCONVERTER_H

#include "../extern/cJSON.h"

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

AirportPosition parseAirportPosition(cJSON* position_json) {
    AirportPosition position;
    if (position_json) {
        position.latitude = get_cjson_double(position_json, "latitude");
        position.longitude = get_cjson_double(position_json, "longitude");
        position.altitude = get_cjson_int(position_json, "altitude");
        cJSON* region = cJSON_GetObjectItemCaseSensitive(position_json, "region");
        if (region) {
            position.city = get_cjson_string(region, "city");
        }
        cJSON* country = cJSON_GetObjectItemCaseSensitive(position_json, "country");
        if (country) {
            position.countryName = get_cjson_string(country, "name");
            position.countryCode = get_cjson_string(country, "code");
        }
    }
    return position;
}

AirportData parseAirportData(cJSON* airport_json) {
    AirportData data;
    if (airport_json) {
        data.name = get_cjson_string(airport_json, "name");
        
        cJSON* code = cJSON_GetObjectItemCaseSensitive(airport_json, "code");
        if (code) {
            data.code.iata = get_cjson_string(code, "iata");
            data.code.city = get_cjson_string(code, "city");
        }
        
        cJSON* position_json = cJSON_GetObjectItemCaseSensitive(airport_json, "position");
        data.position = parseAirportPosition(position_json);
        
        cJSON* timezone = cJSON_GetObjectItemCaseSensitive(airport_json, "timezone");
        if (timezone) {
            data.timezoneName = get_cjson_string(timezone, "name");
        }
        
        cJSON* info = cJSON_GetObjectItemCaseSensitive(airport_json, "info");
        if (info) {
            data.gate = get_cjson_string(info, "gate");
        }
    }
    return data;
}

FlightHistoryEntry parseFlightHistoryEntry(cJSON* history_json) {
    FlightHistoryEntry entry;
    if (history_json) {
        cJSON* identification = cJSON_GetObjectItemCaseSensitive(history_json, "identification");
        if (identification) {
            entry.flightId = get_cjson_string(identification, "id");
            cJSON* number = cJSON_GetObjectItemCaseSensitive(identification, "number");
            if (number) {
                entry.flightNumber = get_cjson_string(number, "default");
            }
        }
        
        cJSON* time = cJSON_GetObjectItemCaseSensitive(history_json, "time");
        if (time) {
            cJSON* real = cJSON_GetObjectItemCaseSensitive(time, "real");
            if (real) {
                entry.realDepartureTime = get_cjson_int64(real, "departure");
            }
        }
        
        cJSON* airport = cJSON_GetObjectItemCaseSensitive(history_json, "airport");
        if (airport) {
            cJSON* origin = cJSON_GetObjectItemCaseSensitive(airport, "origin");
            entry.originAirport = parseAirportData(origin);
            
            cJSON* destination = cJSON_GetObjectItemCaseSensitive(airport, "destination");
            entry.destinationAirport = parseAirportData(destination);
        }
    }
    return entry;
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
    
    cJSON* airport = cJSON_GetObjectItemCaseSensitive(root, "airport");
    if (airport) {
        cJSON* origin = cJSON_GetObjectItemCaseSensitive(airport, "origin");
        flightData.originAirport = parseAirportData(origin);
        
        cJSON* destination = cJSON_GetObjectItemCaseSensitive(airport, "destination");
        flightData.destinationAirport = parseAirportData(destination);
    }
    
    cJSON* history = cJSON_GetObjectItemCaseSensitive(root, "flightHistory");
    if (history) {
        cJSON* aircraft_array = cJSON_GetObjectItemCaseSensitive(history, "aircraft");
        if (aircraft_array != nullptr && cJSON_IsArray(aircraft_array)) {
            cJSON* history_entry_json = nullptr;
            cJSON_ArrayForEach(history_entry_json, aircraft_array) {
                if (cJSON_IsObject(history_entry_json)) {
                    FlightHistoryEntry entry = parseFlightHistoryEntry(history_entry_json);
                    flightData.flightHistory.add(entry);
                }
            }
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