#ifndef SPECIFICFLIGHTMANAGER_H
#define SPECIFICFLIGHTMANAGER_H

#include "API.h"
#include "Drawer.h"
#include "SubmenuManager.h"
#include "List.h"
#include "../FlightData/Flight.h"

class SpecificFlightManager {
private:
    API& _api;
    Drawer& _drawer;
    String _currentFlightId;

public:
    SpecificFlightManager(API& api, Drawer& drawer) : _api(api), _drawer(drawer), _currentFlightId("") {}

    void handleDisplay(const SubmenuManager& subManager, List<Flight>& flights) {
        if (subManager.getCurrentMenu() != TOP9_SPECIFIC && subManager.getCurrentMenu() != SPECIFIC_SHOW) return;

        uint8_t listIndex = subManager.getSelectedListIndex();

        if (listIndex < 1 || listIndex > flights.size()) return;

        Flight flight = flights.get(listIndex - 1);

        if (_currentFlightId != flight.flightId) {
            _currentFlightId = flight.flightId;

            _drawer.initSubPage(flight.flightId, flight.callsign);

            SpecificFlightData data = _api.getSpecificFlightData(flight.flightId);

            _drawer.addSubPageData(data);
        }

        _drawer.drawSubPage(subManager.getCurrentIndex());
    }
    
    void reset() {
        _currentFlightId = "";
    }
};

#endif // SPECIFICFLIGHTMANAGER_H