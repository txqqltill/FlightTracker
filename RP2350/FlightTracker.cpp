#include "include/Joystick.h"
#include "include/Log.h"
#include "include/List.h"
#include "include/Drawer.h"
#include "include/Button.h"
#include "include/API.h"
#include "include/Timer.h"
#include "include/SubmenuManager.h"
#include "include/SpecificFlightManager.h"
#include "include/FromToManager.h"
#include "include/SpecificSearchManager.h"

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
    List<Flight> searchResults;

    SubmenuManager subManager(MAIN);
    SpecificFlightManager flightManager(api, drawer);
    FromToManager fromToManager; 
    SpecificSearchManager searchManager;
    
    SubMenu lastSubMenu = subManager.getCurrentMenu();
    uint8_t lastIndex = subManager.getCurrentIndex();
    
    uint8_t lastCursor = 99; 
    String lastFrom = "";
    String lastTo = "";
    
    uint8_t lastSearchCursor = 99;
    String lastRawQuery = "";

    drawer.programSelecter(lastIndex);

    while (1) {
        bool right = joy.MovedRight();
        bool left = joy.MovedLeft();
        bool down = joy.MovedDown();
        bool up = joy.MovedUp();
        bool select = s1.pressed();
        bool back = s2.pressed();
        
        SubMenu currentMenu = subManager.getCurrentMenu();

        if (currentMenu == FROM_TO) {
            fromToManager.handleInput(up, down, left, right);
        } else if (currentMenu == SPECIFIC_INPUT) {
            searchManager.handleInput(up, down, left, right);
        } else {
            if (up || down) subManager.handleNavigation(up, down);
            if (left || right) subManager.handleHorizontal(left, right);
        }

        if (select) {
            subManager.handleSelect();
            if (subManager.getCurrentMenu() == FROM_TO_SPECIFIC) {
                List<Flight> flight = api.getFlightsRoute(fromToManager.getFrom(), fromToManager.getTo());
                logNumber(flight.size());
                drawer.drawTable(flight, 0, false);
            }
            if (subManager.getCurrentMenu() == SPECIFIC_RESULT) {
                searchResults = api.searchFlights(searchManager.getQuery());
                logNumber(searchResults.size());
                drawer.drawTable(searchResults, 1, false);
            }
        }

        if (back) {
            subManager.handleBack();
        }

        SubMenu currentSubMenu = subManager.getCurrentMenu();
        uint8_t currentIndex = subManager.getCurrentIndex();
        
        bool menuChanged = (currentSubMenu != lastSubMenu);
        bool indexChanged = (currentIndex != lastIndex);
        
        bool inputChanged = false;
        if (currentSubMenu == FROM_TO) {
            if (fromToManager.getCursor() != lastCursor || 
                fromToManager.getFrom() != lastFrom || 
                fromToManager.getTo() != lastTo) {
                inputChanged = true;
                lastCursor = fromToManager.getCursor();
                lastFrom = fromToManager.getFrom();
                lastTo = fromToManager.getTo();
            }
        }
        if (currentSubMenu == SPECIFIC_INPUT) {
            if (searchManager.getCursor() != lastSearchCursor ||
                searchManager.getRawQuery() != lastRawQuery) {
                inputChanged = true;
                lastSearchCursor = searchManager.getCursor();
                lastRawQuery = searchManager.getRawQuery();
            }
        }

        if (menuChanged || indexChanged || inputChanged) {
            lastSubMenu = currentSubMenu;
            lastIndex = currentIndex;

            switch (currentSubMenu)
            {
            case MAIN:
                drawer.programSelecter(currentIndex);
                break;
            
            case TOP9:
                drawer.drawTable(flights, currentIndex, true);
                break;

            case TOP9_SPECIFIC:
                flightManager.handleDisplay(subManager, flights);
                break;

            case FROM_TO:
                drawer.drawFromToMenu(fromToManager.getFrom(), fromToManager.getTo(), fromToManager.getCursor());
                break;
            
            case FROM_TO_SPECIFIC:
                break;
            
            case SPECIFIC_INPUT:
                drawer.drawSearchMenu(searchManager.getRawQuery(), searchManager.getCursor());
                break;
            
            case SPECIFIC_RESULT:
                 drawer.drawTable(searchResults, currentIndex, false);
                 break;
            
            case SPECIFIC_SHOW:
                flightManager.handleDisplay(subManager, searchResults);
                break;

            default:
                break;
            }
        }
    }
}