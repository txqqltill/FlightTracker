#ifndef TIMER_H
#define TIMER_H

#include "timer_rp2350.h"
#include "List.h"
#include "API.h"
#include "Log.h"

#define TIMER_TICK_US       10000000
#define REQUIRED_REPEATS    30 

class Timer
{
private:
    API _api; 
    List<Flight> &_flights;
    timer_rp2350 timer1{0}; 
    uint8_t counter = 0;

public:
    Timer(List<Flight> &flights) : _flights(flights) {
        timer1.setPeriod(TIMER_TICK_US, TIMER::PERIODIC); 
        
        timer1.setCallback([this]{            
            this->counter++;
            char buff[64];
            snprintf(buff, sizeof(buff), "Timer tick (10s) tick %d form %d ticks", this->counter, REQUIRED_REPEATS);
            logInfo(buff);
            
            if (this->counter >= REQUIRED_REPEATS){
                logInfo("5 minutes have elapsed. Geting new flights from the API.");
                this->_flights = this->_api.getTopFlights();
                this->counter = 0;
            }
        });
    }

    void start() {
        timer1.start();
    }
    
    void reset() {
        timer1.reset();
        counter = 0;
        logInfo("Timer and 5 min counter manually reset.");
    }
};

#endif // TIMER_H