#ifndef FLIGHTTIME_H
#define FLIGHTTIME_H

struct FlightTime {
    uint32_t scheduledDeparture = 0;
    uint32_t scheduledArrival = 0;
    uint32_t realDeparture = 0;
    uint32_t estimatedArrival = 0;
    uint32_t realArrival = 0;
};

#endif // FLIGHTTIME_H