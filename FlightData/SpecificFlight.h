#ifndef SPECIFICFLIGHTDATA_H
#define SPECIFICFLIGHTDATA_H

#include "../include/List.h"
#include "FlightTrackPoint.h"
#include "AircraftModel.h"
#include "FlightTime.h"
#include "Airline.h"

#include "yahal_String.h"

struct SpecificFlightData {
    String callsign;
    AircraftModel aircraftModel;
    Airline airline;
    FlightTime times; 
    List<FlightTrackPoint> trail;
};

#endif // SPECIFICFLIGHTDATA_H