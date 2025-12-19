#ifndef FLIGHTTIME_H
#define FLIGHTTIME_H

#include "DateTime.h"

struct FlightTime {
    DateTime scheduledDeparture;
    DateTime scheduledArrival;
    DateTime realDeparture;
    DateTime estimatedArrival;
    DateTime realArrival;
};

#endif // FLIGHTTIME_H