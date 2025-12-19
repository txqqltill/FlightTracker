#ifndef DRAWER_H
#define DRAWER_H

#include "List.h"
#include "../FlightData/Flight.h"
#include "../FlightData/SpecificFlight.h"

#include "uGUI.h"
#include "st7735s_drv.h"
#include "yahal_String.h"

#define MAXSUBPAGE 5

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
    void drawSubPage5();
public:
    Drawer(st7735s_drv& lcd);
    void drawTable(const List<Flight> &flightList, const uint8_t selected);
    void initSubPage(SpecificFlightData flightData);
    void drawSubPage(const uint8_t &pageCounter);
};

#endif // DRAWER_H
