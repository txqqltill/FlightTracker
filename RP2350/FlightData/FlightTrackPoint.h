#ifndef FLIGHTTRACKERPOINT_H
#define FLIGHTTRACKERPOINT_H

struct FlightTrackPoint {
    double lat = 0.0;
    double lng = 0.0;
    int32_t alt = 0;
    int32_t spd = 0;
    int64_t ts = 0;
    int32_t hd = 0;
};

#endif // FLIGHTTRACKERPOINT_H