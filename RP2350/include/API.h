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

// Buffer Größe
#define RX_BUF_SIZE 16384 

class API
{
private:
    uart_rp2350 _uart;
    uart_rp2350 _uart_esp;
    
    // Statische Buffer um Stack zu schonen
    static char _raw_rx_buffer[RX_BUF_SIZE]; 
    static volatile int _rx_idx;
    volatile bool _data_ready = false;

public:
    API() : _uart(), _uart_esp(TICK_U0RXD, TICK_U0TXD, 115200) { 
        posix_io::inst.register_stdout(_uart);

        _rx_idx = 0;

        _uart_esp.uartAttachIrq([&](char c) {
            if (_rx_idx < RX_BUF_SIZE - 1) {
                // Auf EOT Marker (End of Transmission) prüfen
                if (c == '\x04') {
                    _raw_rx_buffer[_rx_idx] = 0; // Null-Terminator
                    _data_ready = true;
                } else {
                    _raw_rx_buffer[_rx_idx++] = c;
                }
            } else {
                // Buffer voll -> Safety terminate
                _raw_rx_buffer[RX_BUF_SIZE - 1] = 0;
            }
        });

        // ESP Reset Sequence
        gpio_rp2350 esp_reset(TICK_nRESET);
        esp_reset.gpioMode(GPIO::OUTPUT | GPIO::INIT_LOW);
        task::sleep_ms(200);
        esp_reset.gpioWrite(HIGH);
        
        // WICHTIG: Bootzeit erhöht!
        // Der ESP braucht Zeit für WiFi Connect im setup()
        printf("Warte auf ESP Boot & WiFi...\n");
        task::sleep_ms(8000); 
    }

    List<Flight> getTopFlights() {
        _data_ready = false;
        _rx_idx = 0; 
        
        // Input Buffer vom ESP sicherheitshalber leeren (falls Boot-Logs kamen)
        // ist durch _rx_idx = 0 implizit erledigt für unseren Parser

        _uart_esp.puts("LIST\n");

        int timeout = 0;
        // Timeout erhöht auf 15 Sekunden (SSL ist langsam!)
        while (!_data_ready && timeout < 1500) { 
            task::sleep_ms(10);
            timeout++;
        }

        if (_data_ready) {
            _data_ready = false;
            
            // Kurzer Check ob Error vom ESP kam
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
        
        // Puffer löschen
        memset(_raw_rx_buffer, 0, RX_BUF_SIZE);

        String cmd = "DETAIL:" + flightId + "\n";
        _uart_esp.puts(cmd.c_str());

        int timeout = 0;
        // 15 Sekunden warten
        while (!_data_ready && timeout < 1500) { 
            task::sleep_ms(10);
            timeout++;
        }

        // --- SUCCESS FALL ---
        if (_data_ready) {
             _data_ready = false;
             return parseJsonToSpecificFlightData(_raw_rx_buffer);
        } 
        // --- TIMEOUT RECOVERY FALL ---
        else if (_rx_idx > 50) { // Mindestens 50 Bytes sollten es sein
            // Wir suchen das allerletzte '}' im Puffer
            int endSearch = _rx_idx - 1;
            while (endSearch >= 0) {
                char c = _raw_rx_buffer[endSearch];
                if (c == '}') {
                    // Gefunden!
                    printf("Timeout Recovery: JSON Ende '}' gefunden an Pos %d. Parse Daten...\n", endSearch);
                    _raw_rx_buffer[endSearch + 1] = 0; // String sauber terminieren
                    String jsonString = String(_raw_rx_buffer);
                    logInfo(jsonString.c_str());
                    SpecificFlightData data = parseJsonToSpecificFlightData(jsonString.c_str());
                    logInfo(data.airline.airlineName.c_str());
                    return data;
                }
                endSearch--;
            }
        }

        // --- FEHLER FALL ---
        printf("Timeout & kein valides JSON gefunden. Bytes: %d\n", _rx_idx);
        return SpecificFlightData(); 
    }
};

// Statics initialisieren
char API::_raw_rx_buffer[RX_BUF_SIZE];
volatile int API::_rx_idx = 0;

#endif