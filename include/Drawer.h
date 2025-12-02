#ifndef DRAWER_H
#define DRAWER_H

#include "List.h"
#include "Flight.h"

#include "uGUI.h"
#include "st7735s_drv.h"
#include "yahal_String.h"

class Drawer {
private:
    uGUI _gui;
    st7735s_drv& _lcd;
    bool _invert = false;
    uGUI::FONT defaultFont; 
    void clearArea(const uint8_t x1, const uint8_t y1, const uint8_t x2, const uint8_t y2);
    void colorArea(const uint8_t x1, const uint8_t y1, const uint8_t x2, const uint8_t y2);
public:
    Drawer(st7735s_drv& lcd);
    void invertColor(const bool& invert);
    void drawTable(const List<Flight> &flightList, const uint8_t selected);
};

#endif // DRAWER_H
