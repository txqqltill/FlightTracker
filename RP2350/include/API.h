#ifndef API_H
#define API_H

#include "../TestData.h"
#include "../FlightData/CacheEntry.h"
#include "JSONConverter.h"
#include "Log.h"

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

    List<FlightCacheEntry> _cachedFlights;

public:
    API() : _uart(), _uart_esp(TICK_U0RXD, TICK_U0TXD, 460800) { 
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
        
        logInfo("API: Waiting for ESP boot & WiFi connection...");
        
        task::sleep_ms(2500); 
        
        _rx_idx = 0;
        _data_ready = false;
        memset(_raw_rx_buffer, 0, RX_BUF_SIZE);
        
        int timeout = 0;
        while (_data_ready == false && timeout < 1500) { 
            task::sleep_ms(10);
            timeout++;
        }

        if (_data_ready) {
            if (strstr(_raw_rx_buffer, "READY") != nullptr) {
                logInfo("API: ESP Connected and Ready!");
            } else {
                logFmt("API: ESP Error/Unknown State: %s", _raw_rx_buffer);
            }
            _data_ready = false;
        } else {
            logError("API: ESP Timeout during boot!");
        }
    }

    List<Flight> getTopFlights() {
        logInfo("API: Requesting Top Flights (LIST)...");
        _cachedFlights.clear();

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
            
            logFmt("API: Data received (%d bytes)", _rx_idx);

            if (strncmp(_raw_rx_buffer, "{\"error\"", 8) == 0) {
                logFmt("API Error: %s", _raw_rx_buffer);
                return List<Flight>();
            }

            String jsonStr(_raw_rx_buffer);
            return parseJsonToFlightList(jsonStr.c_str());
        } 
        else {
            logWarning("API: Timeout receiving LIST (Waited 15s)");
            return List<Flight>();
        }
    }

    List<Flight> getFlightsRoute(const String &from, const String &to) {
        logFmt("API: Requesting Route %s -> %s", from.c_str(), to.c_str());
        _cachedFlights.clear(); 

        _data_ready = false;
        _rx_idx = 0; 
        
        String cmd = "ROUTE:" + from + ":" + to + "\n";
        _uart_esp.puts(cmd.c_str());

        int timeout = 0;
        while (_data_ready == false && timeout < 1500) { 
            task::sleep_ms(10);
            timeout++;
        }

        if (_data_ready) {
            _data_ready = false;
            logFmt("API: Route Data received (%d bytes)", _rx_idx);
            
            if (strncmp(_raw_rx_buffer, "{\"error\"", 8) == 0) {
                logFmt("API Error (Route): %s", _raw_rx_buffer);
                return List<Flight>();
            }

            String jsonStr(_raw_rx_buffer);
            return parseJsonToFlightList(jsonStr.c_str());
        } 
        else {
            logWarning("API: Timeout receiving ROUTE (Waited 15s)");
            return List<Flight>();
        }
    }
    
    List<Flight> searchFlights(const String &query) {
        logFmt("API: Searching for Flight '%s'", query.c_str());
        _cachedFlights.clear();
        _data_ready = false;
        _rx_idx = 0;

        String cmd = "SEARCH:" + query + "\n";
        _uart_esp.puts(cmd.c_str());

        int timeout = 0;
        while (_data_ready == false && timeout < 1500) { 
            task::sleep_ms(10);
            timeout++;
        }

        if (_data_ready) {
            _data_ready = false;
            logFmt("API: Search Data received (%d bytes)", _rx_idx);

            if (strncmp(_raw_rx_buffer, "{\"error\"", 8) == 0) {
                logError(_raw_rx_buffer);
                return List<Flight>();
            }
            String jsonStr(_raw_rx_buffer);
            return parseSearchJsonToFlightList(jsonStr.c_str());
        } else {
            logWarning("API: Timeout receiving SEARCH");
            return List<Flight>();
        }
    }

    SpecificFlightData getSpecificFlightData(const String &flightId){
        logFmt("API: Requesting details for FlightID %s", flightId.c_str());
        
        for(const auto& entry : _cachedFlights){
            if(entry.flightId == flightId){
                logInfo("API: Found flight details in cache");
                return parseJsonToSpecificFlightData(entry.jsonData.c_str());
            }
        }

        logInfo("API: Not in cache, fetching from ESP...");
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
            logFmt("API: Detail Data received (%d bytes)", _rx_idx);
            
            FlightCacheEntry entry;
            entry.flightId = flightId;
            entry.jsonData = String(_raw_rx_buffer);
            _cachedFlights.add(entry);

            return parseJsonToSpecificFlightData(_raw_rx_buffer);
        } 
        else if (_rx_idx > 50) {
            int endSearch = _rx_idx - 1;
            while (endSearch >= 0) {
                char c = _raw_rx_buffer[endSearch];
                if (c == '}') {
                    logInfo("API: Timeout Recovery: Found JSON end brace");
                    _raw_rx_buffer[endSearch + 1] = 0;
                    String jsonString = String(_raw_rx_buffer);
                    
                    FlightCacheEntry entry;
                    entry.flightId = flightId;
                    entry.jsonData = jsonString;
                    _cachedFlights.add(entry);

                    return parseJsonToSpecificFlightData(jsonString.c_str());
                }
                endSearch--;
            }
        }

        logError("API: Timeout & No valid JSON found for Details");
        logNumber(_rx_idx);
        return SpecificFlightData(); 
    }
};

char API::_raw_rx_buffer[RX_BUF_SIZE];
volatile int API::_rx_idx = 0;

#endif // API_H