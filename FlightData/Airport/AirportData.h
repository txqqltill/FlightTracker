#ifndef AIRPORTDATA_H
#define AIRPORTDATA_H

#include "AirportCode.h"
#include "AirportPosition.h"

#include "yahal_String.h"

struct AirportData {
    String name;
    AirportCode code;
    AirportPosition position;
    String timezoneName;
    String gate;
};

#endif // AIRPORTDATA_H