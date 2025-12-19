#ifndef FLIGHTHISTORYENTRY_H
#define FLIGHTHISTORYENTRY_H

#include "../include/List.h"
#include "Airport/AirportData.h"

#include "yahal_String.h"

struct FlightHistoryEntry {
    String flightId;
    String flightNumber;
    int64_t realDepartureTime;
    AirportData originAirport;
    AirportData destinationAirport;
};

#endif // FLIGHTHISTORYENTRY_H