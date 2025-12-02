#pragma once
#include <cstdio>
#include "uart_rp2350.h"
#include "posix_io.h"
#include "yahal_String.h"

#define VT100_COLOR "\e[%sm"
#define ATTR_OFF "0"

inline void initLogger() {
    static uart_rp2350 uart;
    posix_io::inst.register_stdin(uart);
    posix_io::inst.register_stdout(uart);
    posix_io::inst.register_stderr(uart);
    printf(VT100_COLOR "\n", ATTR_OFF);
}

inline void logInfo(const char* msg) {
    printf("INF | %s\n", msg);
}

inline void logWarning(const char* msg){
    printf("WAR | %s\n", msg);
}

inline void logError(const char* msg){
    printf("ERR | %s\n", msg);
}

inline void logNumber(int8_t value) {
    printf("INF | %d\n", (int)value);
}

inline void logNumber(uint8_t value) {
    printf("INF | %u\n", (unsigned int)value);
}

inline void logNumber(int16_t value) {
    printf("INF | %d\n", (int)value);
}

inline void logNumber(uint16_t value) {
    printf("INF | %u\n", (unsigned int)value);
}

inline void logNumber(int32_t value) {
    printf("INF | %ld\n", (long)value);
}

inline void logNumber(uint32_t value) {
    printf("INF | %lu\n", (unsigned long)value);
}

inline void logNumber(int value) {
    printf("INF | %d\n", value);
}

inline void logNumber(unsigned int value) {
    printf("INF | %u\n", value);
}

inline void logNumber(float value) {
    printf("INF | %.2f\n", value);
}

inline void logNumber(double value) {
    printf("INF | %.2f\n", value);
}

template<typename T>
inline void logPointer(const T value) {
    printf("%p\n", (void*)value);
}