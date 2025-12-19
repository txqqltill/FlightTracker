#include "include/Joystick.h"
#include "include/Log.h"
#include "include/List.h"
#include "include/Drawer.h"
#include "include/Button.h"
#include "include/API.h"
#include "include/Timer.h"

#include "spi_rp2350.h"
#include "boostxl_eduMKII.h"
#include "board.h"

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

    uint8_t index = 1;
    
    Joystick joy;

    Button s1(EDU_BUTTON1);
    Button s2(EDU_BUTTON2);
    Button s3(S2_GPIO);

    bool inSubMenu = false;
    uint8_t subPageCounter = 0;
    API api;
    List<Flight> flights = api.getTopFlights();

    Timer apiTimer(flights);
    apiTimer.start();

    drawer.drawTable(flights, index);

    while (1) {
        bool right = joy.MovedRight();
        bool left = joy.MovedLeft();
        bool down = joy.MovedDown();
        bool up = joy.MovedUp();
        bool draw_needed = false;

        if (s1.pressed() && subPageCounter == 0){
            inSubMenu = true;
            subPageCounter = 1;
            Flight flight = flights.get(index - 1);
            auto id = flight.flightId;
            SpecificFlightData data = api.getSpecificFlightData(flight.flightId);
            drawer.initSubPage(std::move(data));
        }

        if (s2.pressed() && subPageCounter != 0){
            inSubMenu = false;
            draw_needed = true;
            subPageCounter = 0;
        }

        if (s3.pressed()){
            apiTimer.reset();
            flights = api.getTopFlights();
        }

        if (down && inSubMenu == false) {
            if (index < DISPLAY_LIMIT) {
                index++;
                draw_needed = true;
            }
        }

        if (right && subPageCounter >= 1){
            subPageCounter++;
            if (subPageCounter > MAXSUBPAGE) 
                subPageCounter = MAXSUBPAGE;

            drawer.drawSubPage(subPageCounter);
        }

        if (left && subPageCounter >= 1){
            subPageCounter--;
            if (subPageCounter <= 0)
                subPageCounter = 1;
            
            drawer.drawSubPage(subPageCounter);
        }
        
        if (up && inSubMenu == false) {
            if (index > 1) {
                index--;
                draw_needed = true;
            }
        }

        if (draw_needed) {
            drawer.drawTable(flights, index);
        }
    }
}