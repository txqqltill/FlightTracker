#ifndef DRAWER_H
#define DRAWER_H

#include "List.h"
#include "SubmenuManager.h"
#include "../FlightData/Flight.h"
#include "../FlightData/SpecificFlight.h"

#include "uGUI.h"
#include "st7735s_drv.h"
#include "yahal_String.h"

#define MAXSUBPAGE 4

class Drawer {
private:
    uGUI _gui;
    st7735s_drv& _lcd;
    SpecificFlightData _flightData;
    uGUI::FONT defaultFont; 
    void clearArea(const uint8_t x1, const uint8_t y1, const uint8_t x2, const uint8_t y2);
    void colorArea(const uint8_t x1, const uint8_t y1, const uint8_t x2, const uint8_t y2);
    void drawSubPageTopBar();
    void drawSubPageBottomBar(const uint8_t &pageCounter);
    void drawSubPage1();
    void drawSubPage2();
    void drawSubPage3();
    void drawSubPage4();
public:
    Drawer(st7735s_drv& lcd);
    void connectWifi();
    void drawTable(const List<Flight> &flightList, const uint8_t selected, const SubMenu subMenu);
    void initSubPage(const String &flightId, const String &callsign);
    void drawSubPage(const uint8_t &pageCounter);
    void addSubPageData(const SpecificFlightData &flightData);
    void drawFromToMenu(const String& from, const String& to, uint8_t cursor);
    void drawSearchMenu(const String& query, uint8_t cursor);
    void programSelecter(const u_int8_t &index);
    void drawLoading(const char buff[32]);

};

#endif // DRAWER_H