#include "include/Joystick.h"
#include "include/Log.h"
#include "include/List.h"
#include "include/Drawer.h"
#include "include/Button.h"
#include "include/API.h"

#include "spi_rp2350.h"
#include "boostxl_eduMKII.h"

#define DISPLAY_LIMIT 9

int main(){
    initLogger();

    gpio_rp2350 lcd_bl(EDU_LCD_BL);
    lcd_bl.gpioMode(GPIO::OUTPUT | GPIO::INIT_HIGH);

    gpio_rp2350 lcd_cs(EDU_LCD_CS);
    spi_rp2350 spi(EDU_LCD_MISO, EDU_LCD_MOSI, EDU_LCD_SCLK, lcd_cs);
    spi.setSpeed(24000000);

    gpio_rp2350 lcd_rst(EDU_LCD_RST);
    gpio_rp2350 lcd_dc(EDU_LCD_DC);
    st7735s_drv lcd(spi, lcd_rst, lcd_dc, st7735s_drv::Crystalfontz_128x128);

    Drawer drawer(lcd);

    uint8_t start_index = 1;
    
    Joystick joy;

    Button s1(EDU_BUTTON1);
    Button s2(EDU_BUTTON2);
    bool inSubMenu = false;
    API api;
    List<Flight> flights = api.getTopFlights();
    drawer.drawTable(flights, start_index);

    while (1)
    {
        bool down = joy.yMovedDown();
        bool up = joy.yMovedUp();
        bool draw_needed = false;
        
        if (s1.pressed()){
            inSubMenu = true;
            Flight flight = flights.get(start_index - 1);
            auto id = flight.flightId;
            SpecificFlightData data = api.getSpecificFlightData(flight.flightId);
            drawer.drawSpecifigFlightInformation(data);
        }

        if (s2.pressed()){
            inSubMenu = false;
            draw_needed = true;
        }

        if (down && inSubMenu == false) {
            if (start_index < DISPLAY_LIMIT) {
                start_index++;
                draw_needed = true;
                logNumber(start_index);
            }
        }
        
        if (up && inSubMenu == false) {
            if (start_index > 1) {
                start_index--;
                draw_needed = true;
                logNumber(start_index);
            }
        }

        if (draw_needed) {
            drawer.drawTable(flights, start_index);
        }
    }
}