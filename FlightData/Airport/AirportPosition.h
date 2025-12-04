#ifndef AIRPORTPOSITION_H
#define AIRPORTPOSITION_H

#include "yahal_String.h"

struct AirportPosition {
    double latitude;
    double longitude;
    int altitude;
    String city;
    String countryName;
    String countryCode;
};

#endif // AIRPORTPOSITION_H