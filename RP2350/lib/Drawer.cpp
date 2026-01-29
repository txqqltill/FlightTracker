#include "../include/Drawer.h"
#include "../include/Log.h"
#include "../include/MeasurementsConverter.h"
#include "../include/JSONConverter.h"
#include "../../secrets/Secrets.h"

#include "uGUI.h"
#include "font_4x6.h"
#include "font_5x12.h"
#include "font_5x8.h"
#include "st7735s_drv.h"
#include "yahal_String.h"
#include <cstring> 
#include <utility>

#define MAXCHARSINLINE 21

Drawer::Drawer(st7735s_drv& lcd)
    : _gui(lcd), _lcd(lcd), defaultFont(FONT_5X12) {

    _gui.SetForecolor(C_WHITE);
    _gui.FontSelect(&defaultFont);

    _lcd.clearScreen(0x0);
    logInfo("Drawer: Initialized");
}

void Drawer::colorArea(const uint8_t x1, const uint8_t y1, const uint8_t x2, const uint8_t y2){
    _gui.FillFrame(x1, y1, x2, y2, C_CYAN);
}

void Drawer::drawTable(const List<Flight> &flightList, const uint8_t selected, const bool top9){
    logFmt("Drawer: Drawing Table (Top9=%d, Selected=%d)", top9, selected);
    _lcd.clearScreen(0x0);
    uint8_t x = 5;
    uint8_t y = 0;
    char buff[32]; 
    uint8_t counter = 1; 

    if (top9){
        _gui.PutString(x, y, "TOP 9 Flights");
    }
    else{
        auto first = flightList.get(1);
        if (first.fromIata != DEFAULTSTRING) {
            snprintf(buff, sizeof(buff), "Flights: %s --> %s", first.fromIata.c_str(), first.toIata.c_str()); 
        } else {
            snprintf(buff, sizeof(buff), "Search Results");
        }
        _gui.PutString(x, y, buff);
    }
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
        if (flight.fromIata != DEFAULTSTRING) {
             _gui.PutString(x, y, flight.fromIata.c_str());
             x += 30;
             _gui.PutString(x, y, flight.toIata.c_str());
             x += 30;
        } else {
             x += 5;
             _gui.PutString(x, y, flight.flightNumber.c_str());
             x += 55;
        }
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
        logWarning("Drawer: ClearArea dX too small -> overwriting");

    if (diffY < 6) 
        logWarning("Drawer: ClearArea dY too small -> overwriting");

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
    char buff[128];

    const char* aircraft = _flightData.aircraftModel.text.c_str();
    if (strlen(aircraft) > MAXCHARSINLINE){
        snprintf(buff, sizeof(buff), "Drawer: Truncating aircraft name: %s", aircraft);
        logInfo(buff);
    }
    snprintf(buff, sizeof(buff), "%.21s", aircraft);
    _gui.PutString(0, 15, buff);
    _gui.DrawLine(0, 28, 127, 28, C_WHITE);

    const char* airline = _flightData.airline.airlineName.c_str();
    if (strlen(airline) > MAXCHARSINLINE * 2){
        snprintf(buff, sizeof(buff), "Drawer: Truncating airline name: %s", airline);
        logInfo(buff);
    }
    snprintf(buff, sizeof(buff), "%.42s", airline);
    _gui.PutString(0, 30, buff);
    _gui.DrawLine(0, 57, 127, 57, C_WHITE);

    const char* origienAirport = _flightData.originAirport.name.c_str();
    if (strlen(origienAirport) > MAXCHARSINLINE * 2){
        snprintf(buff, sizeof(buff), "Drawer: Truncating origin airport: %s", origienAirport);
        logInfo(buff);
    }
    snprintf(buff, sizeof(buff), "%.42s", origienAirport);
    _gui.PutString(0, 60, buff);
    _gui.DrawLine(0, 87, 127, 87, C_WHITE);

    const char* destinationAirport = _flightData.destinationAirport.name.c_str();
    if (strlen(destinationAirport) > MAXCHARSINLINE * 2){
        snprintf(buff, sizeof(buff), "Drawer: Truncating dest airport: %s", destinationAirport);
        logInfo(buff);
    }
    snprintf(buff, sizeof(buff), "%.42s", destinationAirport);
    _gui.PutString(0, 90, buff);

    snprintf(buff, sizeof(buff), "%s -> %s", _flightData.originAirport.gate.c_str(), 
                                             _flightData.destinationAirport.gate.c_str());
    _gui.PutString(0, 117, buff);     
}

void Drawer::drawSubPage2(){
    char buff[64];
    auto firstTrail = _flightData.trail;
    int32_t alt = firstTrail.alt;
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
    _gui.PutString(0, y, "Flight History:");
    for (const auto &item : _flightData.flightHistory){
        y += 12;
        snprintf(buff, sizeof(buff), "%s -> %s", item.originAirport.code.iata.c_str(), item.destinationAirport.code.iata.c_str());
        _gui.PutString(0, y, buff);
    }
}

void Drawer::drawSubPage4(){
    uint8_t y = 14;
    _gui.PutString(0, y, "Departure Times:");
    y += 14;

    char buff[64];
    snprintf(buff, sizeof(buff), "SD: %02i.%02i.%i %02i:%02i",
                                    _flightData.times.scheduledDeparture.day, 
                                    _flightData.times.scheduledDeparture.month, 
                                    _flightData.times.scheduledDeparture.year, 
                                    _flightData.times.scheduledDeparture.hour, 
                                    _flightData.times.scheduledDeparture.minute);
    _gui.PutString(0, y, buff);

    y += 14;
    snprintf(buff, sizeof(buff), "AD: %02i.%02i.%i %02i:%02i",
                                    _flightData.times.realDeparture.day, 
                                    _flightData.times.realDeparture.month, 
                                    _flightData.times.realDeparture.year, 
                                    _flightData.times.realDeparture.hour, 
                                    _flightData.times.realDeparture.minute);
    _gui.PutString(0, y, buff);

    y += 14;
    _gui.PutString(0, y, "Arrival Times:");

    y += 14;
    snprintf(buff, sizeof(buff), "EA: %02i.%02i.%i %02i:%02i",
                                    _flightData.times.estimatedArrival.day, 
                                    _flightData.times.estimatedArrival.month, 
                                    _flightData.times.estimatedArrival.year, 
                                    _flightData.times.estimatedArrival.hour, 
                                    _flightData.times.estimatedArrival.minute);
    _gui.PutString(0, y, buff);

    y += 14;
    snprintf(buff, sizeof(buff), "SA: %02i.%02i.%i %02i:%02i",
                                    _flightData.times.scheduledArrival.day, 
                                    _flightData.times.scheduledArrival.month, 
                                    _flightData.times.scheduledArrival.year, 
                                    _flightData.times.scheduledArrival.hour, 
                                    _flightData.times.scheduledArrival.minute);
    _gui.PutString(0, y, buff);

    y += 14;
    snprintf(buff, sizeof(buff), "RA: %02i.%02i.%i %02i:%02i",
                                    _flightData.times.realArrival.day, 
                                    _flightData.times.realArrival.month, 
                                    _flightData.times.realArrival.year, 
                                    _flightData.times.realArrival.hour, 
                                    _flightData.times.realArrival.minute);
    _gui.PutString(0, y, buff);
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
    default:
        logError("Drawer: Page not in range");
        break;
    }
}

void Drawer::addSubPageData(const SpecificFlightData &flightData){
    _flightData = std::move(flightData);    
    drawSubPage(1);
}

void Drawer::initSubPage(const String &flightId, const String &callsign){
    logFmt("Drawer: Init SubPage for Flight %s (Callsign %s)", flightId.c_str(), callsign.c_str());
    _lcd.clearScreen(0x0);
    char buff[128];
    snprintf(buff, sizeof(buff), "Feaching data for flight with \nID: '%s' and \ncallsign '%s'\n", flightId.c_str(), callsign.c_str());
    _gui.PutString(0, 0, buff);
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

void Drawer::connectWifi(){
    char buff[64];
    snprintf(buff, sizeof(buff), "ESP8266 is connecting to the wifi '%s'", WIFI);
    logInfo(buff);
    drawLoading(buff);
}

void Drawer::programSelecter(const u_int8_t &index){
    logFmt("Drawer: Drawing Main Menu (Index %d)", index);
    _lcd.clearScreen(0x0);
    _gui.PutString(20, 0, "Flight Tracker");
    _gui.PutString(0, 15, "Chose your Mode");
    _gui.DrawLine(0, 30, 127, 30, C_WHITE);
    _gui.PutString(8, 32, "Top 9 Flight");
    _gui.PutString(8, 47, "From --> To");
    _gui.PutString(8, 62, "Specific Flight");
    _gui.FontSelect(&FONT_5X8);
    _gui.PutString(0, 95, "Use Joystick to move up/down press S1 to select & S2 to go back");
    _gui.FontSelect(&defaultFont);
    switch (index)
    {
    case 1:
        colorArea(0, 30, 5, 45);
        break;
    case 2: 
        colorArea(0, 45, 5, 60);
        break;
    case 3: 
        colorArea(0, 60, 5, 75);
        break;
    default:
        break;
    }
}

void Drawer::drawFromToMenu(const String& from, const String& to, uint8_t cursor) {
    _lcd.clearScreen(0x0);
    
    _gui.PutString(10, 10, "FROM -> TO");
    
    int yPos = 50;
    int xStart = 10;
    int spacing = 10;

    for(int i=0; i<3; i++) {
        UG_COLOR currentBg = (cursor == i) ? C_BLUE : C_BLACK;
        
        _gui.PutChar(from[i], xStart + (i * spacing), yPos, C_WHITE, currentBg, true); 
    }

    _gui.SetForecolor(C_WHITE);
    _gui.SetBackcolor(C_BLACK);
    _gui.PutString(xStart + (3 * spacing) + 5, yPos, "->");

    int xStartTo = xStart + (3 * spacing) + 35;
    for(int i=0; i<3; i++) {
        UG_COLOR currentBg = (cursor == (i+3)) ? C_BLUE : C_BLACK;
        
        _gui.PutChar(to[i], xStartTo + (i * spacing), yPos, C_WHITE, currentBg, true);
    }
}

void Drawer::drawSearchMenu(const String& query, uint8_t cursor) {
    _lcd.clearScreen(0x0);
    _gui.PutString(10, 10, "Specific Flight");
    
    int yPos = 50;
    int xStart = 10;
    int spacing = 10;

    for(int i=0; i<7; i++) {
        UG_COLOR currentBg = (cursor == i) ? C_BLUE : C_BLACK;
        char c = (i < query.size()) ? query[i] : ' ';
        _gui.PutChar(c, xStart + (i * spacing), yPos, C_WHITE, currentBg, true); 
    }
}

void Drawer::drawLoading(const char buff[32]){
    logFmt("Drawer: Loading Screen -> %s", buff);
    _lcd.clearScreen(0x0);
    _gui.PutString(0, 0, buff);
}