#include "../include/Drawer.h"
#include "../include/Log.h"
#include "../secrets/Secrets.h"
#include "../include/MeasurementsConverter.h"

#include "uGUI.h"
#include "font_4x6.h"
#include "font_5x12.h"
#include "st7735s_drv.h"
#include "yahal_String.h"
#include <cstring> 
#include <utility>

Drawer::Drawer(st7735s_drv& lcd)
    : _gui(lcd), _lcd(lcd), defaultFont(FONT_5X12) {

    _gui.SetForecolor(C_WHITE);
    _gui.FontSelect(&defaultFont);

    _lcd.clearScreen(0x0);
}

void Drawer::colorArea(const uint8_t x1, const uint8_t y1, const uint8_t x2, const uint8_t y2){
    _gui.FillFrame(x1, y1, x2, y2, C_CYAN);
}

void Drawer::drawTable(const List<Flight> &flightList, const uint8_t selected){
    _lcd.clearScreen(0x0);
    uint8_t x = 5;
    uint8_t y = 0;
    char buff[4]; 
    uint8_t counter = 1; 

    _gui.PutString(x, y, "TOP 9 Flights");
    y += 12;
    for (const auto& flight : flightList){
        _gui.DrawLine(0, y, 127, y, C_WHITE);
        if (counter == selected){
            colorArea(0, y, x, y + 12);
        }
        ++y;
        snprintf(buff, sizeof(buff), "%u", counter); 
        _gui.PutString(x, y, buff);
        x += 12;
        _gui.PutString(x, y, flight.fromIata.c_str());
        x += 30;
        _gui.PutString(x, y, flight.toIata.c_str());
        x += 30;
        _gui.PutString(x, y, flight.callsign.c_str());
        
        x = 5;
        y += 12; 
        ++counter;

        if (counter > 9) break;
    }
    _gui.DrawLine(x, y, 127, y, C_WHITE);
}

void Drawer::clearArea(const uint8_t x1, const uint8_t y1, const uint8_t x2, const uint8_t y2){
    uint8_t diffX = x1 - x2;
    uint8_t diffY = y1 - y2;
    if (diffX < 4) 
        logWarning("Difference between x is smaller than the smallest font -> overwirting");

    if (diffY < 6) 
        logWarning("Difference between y is smaller than the smallest font -> overwirting");

    _gui.FontSelect(&FONT_4X6);
    uint8_t widh = diffX / 4;
    uint8_t hight = diffY / 6;

    const uint16_t size = (hight * widh) + hight + 1;
    char* buff = new char[size];
    uint16_t p = 0;
    for (uint8_t i = 0; i < hight; ++i){
        for (uint8_t j = 0; j < widh; ++j){
            buff[p++] = ' ';
        }
        buff[p++] = '\0';
    }
    buff[p] = '\0';
    _gui.PutString(x1, y1, buff);
    _gui.FontSelect(&defaultFont);
}

void Drawer::drawSubPage1(){
    char buff[64];
    _gui.PutString(0, 15, _flightData.aircraftModel.text.c_str());
    _gui.DrawLine(0, 28, 127, 28, C_WHITE);
    _gui.PutString(0, 30, _flightData.airline.airlineName.c_str());
    _gui.DrawLine(0, 42, 127, 42, C_WHITE);
    _gui.PutString(0, 45, _flightData.originAirport.name.c_str());
    _gui.DrawLine(0, 72, 127, 72, C_WHITE);
    _gui.PutString(0, 75, _flightData.destinationAirport.name.c_str());
    snprintf(buff, sizeof(buff), "%s -> %s", _flightData.originAirport.gate.c_str(), 
                                             _flightData.destinationAirport.gate.c_str());
    _gui.PutString(0, 117, buff);     
}

void Drawer::drawSubPage2(){
    char buff[64];
    auto firstTrail = _flightData.trail.get(0);
    int32_t alt = firstTrail.alt;
    logNumber(alt);
    int32_t temp[2];
    footToM(alt, temp);
    snprintf(buff, sizeof(buff), "%li ft", alt);
    _gui.PutString(0, 15, buff);
    snprintf(buff, sizeof(buff), "%ld.%02ld m", temp[0], temp[1]);
    _gui.PutString(55, 15, buff);

    int32_t spd = firstTrail.spd;
    knotsToKmH(spd, temp);
    snprintf(buff, sizeof(buff), "%ld knt", spd);
    _gui.PutString(0, 30, buff);
    snprintf(buff, sizeof(buff), "%ld.%02ld km/h", temp[0], temp[1]);
    _gui.PutString(55, 30, buff);
    _gui.DrawLine(0, 41, 127, 41, C_WHITE);
}

void Drawer::drawSubPage3(){
    char buff[64];
    uint8_t y = 14;
    _gui.PutString(0, 14, "Flight History:");
    for (const auto &item : _flightData.flightHistory){
        y += 12;
        snprintf(buff, sizeof(buff), "%s -> %s", item.originAirport.code.iata.c_str(), item.destinationAirport.code.iata.c_str());
        _gui.PutString(0, y, buff);
    }
}

void Drawer::drawSubPage4(){
    
}

void Drawer::drawSubPage5(){
    
}

void Drawer::drawSubPage(const uint8_t &pageCounter){
    _lcd.clearScreen(0x0);

    drawSubPageTopBar();
    drawSubPageBottomBar(pageCounter);

    switch (pageCounter) {
    case 1:
        drawSubPage1();
        break;
    case 2:
        drawSubPage2();
        break;
    case 3:
        drawSubPage3();
        break;
    case 4:
        drawSubPage4();
        break;
    case 5:
        drawSubPage5();
        break;
    default:
        logError("Page not in range");
        break;
}
}

void Drawer::initSubPage(SpecificFlightData flightData){
    _flightData = std::move(flightData);    
    drawSubPage(1);
}

void Drawer::drawSubPageTopBar(){
    _gui.DrawLine(0, 12, 127, 12, C_WHITE);
    char buff[64];
    snprintf(buff, sizeof(buff), "%s -> %s", _flightData.originAirport.code.iata.c_str(), 
                                             _flightData.destinationAirport.code.iata.c_str());
    _gui.PutString(0, 0, buff);
    _gui.PutString(80, 0, _flightData.callsign.c_str());    
}

void Drawer::drawSubPageBottomBar(const uint8_t &pageCounter){
    char buff[64];
    snprintf(buff, sizeof(buff), "%i/%i", pageCounter, MAXSUBPAGE);
    _gui.PutString(110, 117, buff);
    _gui.DrawLine(105, 117, 105, 127, C_WHITE);
    _gui.DrawLine(0, 116, 127, 116, C_WHITE);
}
    // char buff[64]; 
    // _gui.PutString(0, 0, flightData.callsign.c_str());

    // snprintf(buff, sizeof(buff), "Airplane: %s", flightData.aircraftModel.code.c_str()); 
    // _gui.PutString(0, 15, buff);
    // auto firstTrail = flightData.trail.get(0);
    // int32_t alt = firstTrail.alt;
    // int32_t temp[2];
    // footToM(alt, temp);
    // snprintf(buff, sizeof(buff), "Height: %li ft | %ld.%02ld m", alt, temp[0], temp[1]);
    // _gui.PutString(0, 30, buff);
    // int32_t spd = firstTrail.spd;
    // knotsToKmH(spd, temp);
    // snprintf(buff, sizeof(buff), "->: %ld knt | %ld.%02ld km/h", spd, temp[0], temp[1]);
    // _gui.PutString(0, 45, buff);


    // auto t = flightData.trail.get(0);
    // logNumber(t.alt);
    // logNumber(t.spd);
    // logInfo(flightData.aircraftModel.text.c_str());
    // logInfo(flightData.airline.airlineName.c_str());
    // logInfo(flightData.callsign.c_str());
    // logNumber(flightData.times.estimatedArrival);
    // delete buff;
