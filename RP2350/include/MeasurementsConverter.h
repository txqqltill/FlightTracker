#ifndef MEASUREMENTSCONVERTER_H
#define MEASUREMENTSCONVERTER_H

inline void knotsToKmH(const int32_t &knots, int32_t result[2]){
    double kmh = knots * 1.852;
    result[0] = (int32_t)kmh;
    result[1] = (int32_t)((kmh - result[0]) * 100);
}

inline void footToM(const int32_t &foot, int32_t result[2]){
    double m = foot * 0.3048;
    result[0] = (int32_t)m;
    result[1] = (int32_t)((m - result[0]) * 100);
}

#endif // MEASUREMENTSCONVERTER_H