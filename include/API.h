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
        return parseJsonToFlightList(JSON_FLIGHT_DATA);
    }

    SpecificFlightData getSpecificFlightData(const String &flighId){
        // TODO: Get JSON from API
        auto result = parseJsonToSpecificFlightData(JSON_SPECIFIC_FLIGHT_DATA);
        return result;
    }
};

#endif // API_H