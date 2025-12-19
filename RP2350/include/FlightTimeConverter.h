#ifndef FLIGHTTIMECONVERTER_H
#define FLIGHTTIMECONVERTER_H

#include <ctime>
#include "../FlightData/DateTime.h"

static DateTime convert_timestamp_to_datetime(std::time_t timestamp) {
    DateTime dt;
    if (timestamp == 0) {
        return dt;
    }
    
    std::tm* time_info = std::gmtime(&timestamp);

    if (time_info != nullptr) {
        dt.year = time_info->tm_year + 1900;
        dt.month = time_info->tm_mon + 1;
        dt.day = time_info->tm_mday;
        dt.hour = time_info->tm_hour;
        dt.minute = time_info->tm_min;
    }
    return dt;
}

#endif // FLIGHTTIMECONVERTER_H