#include "include/Joystick.h"
#include "include/Log.h"
#include "include/List.h"
#include "include/Flight.h"
#include "include/Drawer.h"
#include "include/JSONConverter.h"
#include "TestData.h"

#include "spi_rp2350.h"

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
    List<Flight> flights = parseJsonToFlightList(JSON_FLIGHT_DATA);

    uint8_t start_index = 1;
    
    Joystick joy;

    drawer.drawTable(flights, start_index);

    while (1)
    {
        bool down = joy.yMovedDown();
        bool up = joy.yMovedUp();
        bool draw_needed = false;
        
        if (down) {
            if (start_index < DISPLAY_LIMIT) {
                start_index++;
                draw_needed = true;
                logNumber(start_index);
            }
        }
        
        if (up) {
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