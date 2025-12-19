#ifndef API_H
#define API_H

#include "../TestData.h"
#include "JSONConverter.h"

#include "yahal_String.h"

class API
{
public:
    List<Flight> getTopFlights() const{
        // TODO: Get JSON from API
        logInfo("Featching top 10 flights");
        return parseJsonToFlightList(JSON_FLIGHT_DATA);
    }

    SpecificFlightData getSpecificFlightData(const String &flighId){
        char buff[64];
        snprintf(buff, sizeof(buff), "Featching specific Inforation for flightid '%s'", flighId.c_str());
        logInfo(buff);
        SpecificFlightData result;
        if (flighId == "3d67e573") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d67e573);
        else if (flighId == "3d67ead9") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d67ead9);
        else if (flighId == "3d67db18") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d67db18);
        else if (flighId == "3d67d3e5") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d67d3e5);
        else if (flighId == "3d67ebbf") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d67ebbf);
        else if (flighId == "3d674d9b") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d674d9b);
        else if (flighId == "3d673166") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d673166);
        else if (flighId == "3d67ea32") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d67ea32);
        else if (flighId == "3d674059") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d674059);
        else if (flighId == "3d6739ac") result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA_3d6739ac);
        
        return result;
    }
};

#endif // API_H