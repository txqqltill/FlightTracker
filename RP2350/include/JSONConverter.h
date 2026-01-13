#ifndef JSONCONVERTER_H
#define JSONCONVERTER_H

#include "../../extern/cJSON.h"
#include "FlightTimeConverter.h"
#include <ctime>
#include <cstring> // Für strchr

// Deine Header-Strukturen
#include "../FlightData/SpecificFlight.h"

#define DEFAULTSTRING "N/A"

// --- Helper Funktionen (Robust gegen null) ---

String get_cjson_string(const cJSON* parent, const char* key) {
    if (parent == nullptr || cJSON_IsNull(parent)) return DEFAULTSTRING;

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
    if (parent == nullptr || cJSON_IsNull(parent)) return 0;

    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    if (item != nullptr && cJSON_IsNumber(item)) {
        return (int)item->valuedouble;
    }
    return 0;
}

double get_cjson_double(const cJSON* parent, const char* key) {
    if (parent == nullptr || cJSON_IsNull(parent)) return 0.0;

    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    if (item != nullptr && cJSON_IsNumber(item)) {
        return item->valuedouble;
    }
    return 0.0;
}

int64_t get_cjson_int64(const cJSON* parent, const char* key) {
    if (parent == nullptr || cJSON_IsNull(parent)) return 0;

    cJSON* item = cJSON_GetObjectItemCaseSensitive(parent, key);
    if (item != nullptr && cJSON_IsNumber(item)) {
        return (int64_t)item->valuedouble;
    }
    return 0; 
}

std::time_t get_cjson_time_t(const cJSON* parent, const char* key) {
    return (std::time_t)get_cjson_int64(parent, key);
}

// --- Sub-Parser ---

AirportPosition parseAirportPosition(cJSON* position_json) {
    AirportPosition position;
    position.latitude = 0.0;
    position.longitude = 0.0;
    position.altitude = 0;
    position.city = DEFAULTSTRING;
    position.countryName = DEFAULTSTRING;
    position.countryCode = DEFAULTSTRING;

    if (position_json == nullptr || cJSON_IsNull(position_json)) {
        return position;
    }

    position.latitude = get_cjson_double(position_json, "latitude");
    position.longitude = get_cjson_double(position_json, "longitude");
    position.altitude = get_cjson_int(position_json, "altitude");
    
    cJSON* region = cJSON_GetObjectItemCaseSensitive(position_json, "region");
    if (region && !cJSON_IsNull(region)) {
        position.city = get_cjson_string(region, "city"); 
    }
    
    cJSON* country = cJSON_GetObjectItemCaseSensitive(position_json, "country");
    if (country && !cJSON_IsNull(country)) {
        position.countryName = get_cjson_string(country, "name");
        position.countryCode = get_cjson_string(country, "code");
    }
    
    return position;
}

AirportData parseAirportData(cJSON* airport_json) {
    AirportData data;
    data.name = DEFAULTSTRING;
    data.code.iata = DEFAULTSTRING;
    data.code.city = DEFAULTSTRING;
    data.timezoneName = DEFAULTSTRING;
    data.gate = DEFAULTSTRING;

    if (airport_json == nullptr || cJSON_IsNull(airport_json)) {
        return data; 
    }

    data.name = get_cjson_string(airport_json, "name");
    
    cJSON* code = cJSON_GetObjectItemCaseSensitive(airport_json, "code");
    if (code) {
        data.code.iata = get_cjson_string(code, "iata");
        data.code.city = get_cjson_string(code, "city");
    }
    
    cJSON* position_json = cJSON_GetObjectItemCaseSensitive(airport_json, "position");
    data.position = parseAirportPosition(position_json);
    
    if (data.position.city != DEFAULTSTRING) {
        data.code.city = data.position.city;
    }
    
    cJSON* timezone = cJSON_GetObjectItemCaseSensitive(airport_json, "timezone");
    if (timezone) {
        data.timezoneName = get_cjson_string(timezone, "name");
    }
    
    cJSON* info = cJSON_GetObjectItemCaseSensitive(airport_json, "info");
    if (info) {
        data.gate = get_cjson_string(info, "gate");
    }

    return data;
}

FlightHistoryEntry parseFlightHistoryEntry(cJSON* history_json) {
    FlightHistoryEntry entry;
    entry.flightId = DEFAULTSTRING;
    entry.flightNumber = DEFAULTSTRING;
    entry.realDepartureTime = 0;

    if (history_json && !cJSON_IsNull(history_json)) {
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

// --- Haupt Parsing Funktionen ---

List<Flight> parseJsonToFlightList(const char* json_string) {
    // FIX: Suche nach dem Start des JSON-Objekts '{'
    // Ignoriert Müll wie "220d" am Anfang
    const char* json_start = strchr(json_string, '{');
    if (json_start == nullptr) {
        return List<Flight>(); 
    }

    cJSON* root = cJSON_Parse(json_start); // Parse ab der Klammer
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
    SpecificFlightData flightData;
    
    // Defaults
    flightData.callsign = DEFAULTSTRING;
    flightData.aircraftModel.code = DEFAULTSTRING;
    flightData.aircraftModel.text = DEFAULTSTRING;
    flightData.airline.airlineName = DEFAULTSTRING;
    flightData.airline.airlineShort = DEFAULTSTRING;
    
    flightData.trail.lat = 0.0;
    flightData.trail.lng = 0.0;
    flightData.trail.alt = 0;
    flightData.trail.spd = 0;
    flightData.trail.hd = 0;
    flightData.trail.ts = 0;

    // FIX: Suche nach dem Start des JSON-Objekts '{'
    // Ignoriert Müll wie "220d" am Anfang
    const char* json_start = strchr(json_string, '{');
    if (json_start == nullptr) {
        return flightData;
    }

    cJSON* root = cJSON_Parse(json_start); // Parse ab der Klammer
    if (root == nullptr) {
        return flightData;
    }

    cJSON* identification = cJSON_GetObjectItemCaseSensitive(root, "identification");
    if (identification) {
        flightData.callsign = get_cjson_string(identification, "callsign");
        if (flightData.callsign == DEFAULTSTRING) {
            cJSON* number = cJSON_GetObjectItemCaseSensitive(identification, "number");
            if (number) flightData.callsign = get_cjson_string(number, "default");
        }
    }

    cJSON* aircraft = cJSON_GetObjectItemCaseSensitive(root, "aircraft");
    if (aircraft) {
        cJSON* model = cJSON_GetObjectItemCaseSensitive(aircraft, "model");
        if (model) {
            flightData.aircraftModel.code = get_cjson_string(model, "code");
            flightData.aircraftModel.text = get_cjson_string(model, "text");
        }
    }

    cJSON* airline = cJSON_GetObjectItemCaseSensitive(root, "airline");
    if (airline && !cJSON_IsNull(airline)) {
        flightData.airline.airlineName = get_cjson_string(airline, "name");
        flightData.airline.airlineShort = get_cjson_string(airline, "short");
    }

    cJSON* time = cJSON_GetObjectItemCaseSensitive(root, "time");
    if (time) {
        std::time_t ts;
        cJSON* scheduled = cJSON_GetObjectItemCaseSensitive(time, "scheduled");
        if (scheduled) {
            ts = get_cjson_time_t(scheduled, "departure");
            flightData.times.scheduledDeparture = convert_timestamp_to_datetime(ts);
            ts = get_cjson_time_t(scheduled, "arrival");
            flightData.times.scheduledArrival = convert_timestamp_to_datetime(ts);
        }
        cJSON* real = cJSON_GetObjectItemCaseSensitive(time, "real");
        if (real) {
            ts = get_cjson_time_t(real, "departure"); 
            flightData.times.realDeparture = convert_timestamp_to_datetime(ts);
            ts = get_cjson_time_t(real, "arrival");
            flightData.times.realArrival = convert_timestamp_to_datetime(ts);
        }
        cJSON* estimated = cJSON_GetObjectItemCaseSensitive(time, "estimated");
        if (estimated) {
            ts = get_cjson_time_t(estimated, "arrival"); 
            flightData.times.estimatedArrival = convert_timestamp_to_datetime(ts); 
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
        cJSON* point_json = cJSON_GetArrayItem(trail_array, 0);
        if (point_json != nullptr && cJSON_IsObject(point_json)) {
            flightData.trail.lat = get_cjson_double(point_json, "lat");
            flightData.trail.lng = get_cjson_double(point_json, "lng");
            flightData.trail.alt = (int32_t)get_cjson_int(point_json, "alt");
            flightData.trail.spd = (int32_t)get_cjson_int(point_json, "spd");
            flightData.trail.ts  = get_cjson_int64(point_json, "ts");
            flightData.trail.hd  = (int32_t)get_cjson_int(point_json, "hd");
        }
    }

    cJSON_Delete(root);
    return flightData;
}

#endif // JSONCONVERTER_H