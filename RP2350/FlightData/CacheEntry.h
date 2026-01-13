#ifndef CacheEntry_H
#define CacheEntry_H

#include "yahal_String.h"

struct FlightCacheEntry {
    String flightId;
    String jsonData;
};

#endif // CacheEntry_H