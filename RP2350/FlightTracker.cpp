#include "include/Joystick.h"
#include "include/Log.h"
#include "include/List.h"
#include "include/Drawer.h"
#include "include/Button.h"
#include "include/API.h"
#include "include/Timer.h"
#include "include/SubmenuManager.h"
#include "include/SpecificFlightManager.h"

#include "spi_rp2350.h"
#include "boostxl_eduMKII.h"
#include "board.h"

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
    drawer.connectWifi();

    Joystick joy;
    Button s1(EDU_BUTTON1);
    Button s2(EDU_BUTTON2);

    API api;
    List<Flight> flights = api.getTopFlights();

    SubmenuManager subManager(MAIN);
    SpecificFlightManager flightManager(api, drawer);
    
    SubMenu lastSubMenu = subManager.getCurrentMenu();
    uint8_t lastIndex = subManager.getCurrentIndex();

    drawer.programSelecter(lastIndex);

    while (1) {
        bool right = joy.MovedRight();
        bool left = joy.MovedLeft();
        bool down = joy.MovedDown();
        bool up = joy.MovedUp();
        bool select = s1.pressed();
        bool back = s2.pressed();
        
        if (up || down) {
            subManager.handleNavigation(up, down);
        }
        
        if (left || right) {
            subManager.handleHorizontal(left, right);
        }

        if (select) {
            subManager.handleSelect();
            logNumber(subManager.getCurrentMenu());
        }

        if (back) {
            subManager.handleBack();
            logNumber(subManager.getCurrentMenu());
        }

        SubMenu currentSubMenu = subManager.getCurrentMenu();
        uint8_t currentIndex = subManager.getCurrentIndex();
        
        bool stateChanged = (currentSubMenu != lastSubMenu) || (currentIndex != lastIndex);

        if (stateChanged) {
            lastSubMenu = currentSubMenu;
            lastIndex = currentIndex;

            switch (currentSubMenu)
            {
            case MAIN:
                drawer.programSelecter(currentIndex);
                break;
            
            case TOP9:
                drawer.drawTable(flights, currentIndex);
                break;

            case TOP9_SPECIFIC:
                flightManager.handleDisplay(subManager, flights);
                break;
                
            default:
                break;
            }
        }
    }
}