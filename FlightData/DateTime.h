#ifndef DATETIME_H
#define DATETIME_H

struct DateTime {
    int year = 0;
    int month = 0; // 1-12
    int day = 0;   // 1-31
    int hour = 0;  // 0-23
    int minute = 0; // 0-59
};

#endif // DATETIME_H