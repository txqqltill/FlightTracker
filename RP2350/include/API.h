#ifndef API_H
#define API_H

#include "../TestData.h"
#include "JSONConverter.h"

#include "yahal_String.h"
#include "posix_io.h"
#include "uart_rp2350.h"
#include "gpio_rp2350.h"
#include "task.h"
#include <cstdio>
#include "wifiTick.h"
#include <cstring>

#define RX_BUF_SIZE 16384 

class API
{
private:
    uart_rp2350 _uart;
    uart_rp2350 _uart_esp;
    
    static char _raw_rx_buffer[RX_BUF_SIZE]; 
    static volatile int _rx_idx;
    volatile bool _data_ready = false;

public:
    API() : _uart(), _uart_esp(TICK_U0RXD, TICK_U0TXD, 115200) { 
        posix_io::inst.register_stdout(_uart);

        _rx_idx = 0;

        _uart_esp.uartAttachIrq([&](char c) {
            if (_rx_idx < RX_BUF_SIZE - 1) {
                if (c == '\x04') {
                    _raw_rx_buffer[_rx_idx] = 0;
                    _data_ready = true;
                } else {
                    _raw_rx_buffer[_rx_idx++] = c;
                }
            } else {
                _raw_rx_buffer[RX_BUF_SIZE - 1] = 0;
            }
        });

        gpio_rp2350 esp_reset(TICK_nRESET);
        esp_reset.gpioMode(GPIO::OUTPUT | GPIO::INIT_LOW);
        task::sleep_ms(200);
        esp_reset.gpioWrite(HIGH);
        
        printf("Warte auf ESP Boot & WiFi...\n");
        task::sleep_ms(8000); 
    }

    List<Flight> getTopFlights() {
        _data_ready = false;
        _rx_idx = 0; 
        
        _uart_esp.puts("LIST\n");

        int timeout = 0;
        while (_data_ready == false && timeout < 1500) { 
            task::sleep_ms(10);
            timeout++;
        }

        if (_data_ready) {
            _data_ready = false;
            
            if (strncmp(_raw_rx_buffer, "{\"error\"", 8) == 0) {
                 printf("API Error: %s\n", _raw_rx_buffer);
                 return List<Flight>();
            }

            String jsonStr(_raw_rx_buffer);
            return parseJsonToFlightList(jsonStr.c_str());
        } 
        else {
            printf("Timeout receiving LIST (Waited 15s)\n");
            return List<Flight>();
        }
    }

    SpecificFlightData getSpecificFlightData(const String &flightId){
        _data_ready = false;
        _rx_idx = 0;
        
        memset(_raw_rx_buffer, 0, RX_BUF_SIZE);

        String cmd = "DETAIL:" + flightId + "\n";
        _uart_esp.puts(cmd.c_str());

        int timeout = 0;
        while (_data_ready == false && timeout < 1500) { 
            task::sleep_ms(10);
            timeout++;
        }

        if (_data_ready) {
             _data_ready = false;
             return parseJsonToSpecificFlightData(_raw_rx_buffer);
        } 
        else if (_rx_idx > 50) {
            int endSearch = _rx_idx - 1;
            while (endSearch >= 0) {
                char c = _raw_rx_buffer[endSearch];
                if (c == '}') {
                    printf("Timeout Recovery: JSON Ende '}' gefunden an Pos %d. Parse Daten...\n", endSearch);
                    _raw_rx_buffer[endSearch + 1] = 0;
                    String jsonString = String(_raw_rx_buffer);
                    return parseJsonToSpecificFlightData(jsonString.c_str());
                }
                endSearch--;
            }
        }

        printf("Timeout & kein valides JSON gefunden. Bytes: %d\n", _rx_idx);
        return SpecificFlightData(); 
    }
};

char API::_raw_rx_buffer[RX_BUF_SIZE];
volatile int API::_rx_idx = 0;

#endif