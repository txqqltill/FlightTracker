#ifndef FLIGHT_H
#define FLIGHT_H

#include "yahal_String.h"

struct Flight {
    String fromIata;
    String toIata;
    String flightNumber; 
    String callsign;
    int clicks;
    String flightId;
    String fromCity;
    String toCity;
    String model;
    String squawk;
    String type;
};

#endif // FLIGHT_H