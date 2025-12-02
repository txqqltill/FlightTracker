#ifndef FLIGHT_H
#define FLIGHT_H

#include "Log.h"

#include "yahal_String.h"

class Flight {
private:
    String _fromIata;
    String _toIata;
    String _flightNumber; 
    String _callsign;
    int _clicks;
    String _flightId;
    String _fromCity;
    String _toCity;
    String _model;
    String _squawk;
    String _type;

public:
    Flight(const String &callsign, int clicks, const String &flightNumber, 
           const String &flightId, const String &fromCity, const String &fromIata, 
           const String &model, const String &squawk, const String &toCity, 
           const String &toIata, const String &type) 
        : _callsign(callsign), 
          _clicks(clicks),
          _flightNumber(flightNumber), 
          _flightId(flightId),
          _fromCity(fromCity),
          _fromIata(fromIata),
          _model(model),
          _squawk(squawk),
          _toCity(toCity),
          _toIata(toIata),
          _type(type)
    {}

    const char * getCallsign() const { return _callsign.c_str(); }
    const char * getFlightNumber() const { return _flightNumber.c_str(); }
    const char * getFlightId() const { return _flightId.c_str(); }
    const char * getFromCity() const { return _fromCity.c_str(); }
    const char * getFromIata() const { return _fromIata.c_str(); }
    const char * getToCity() const { return _toCity.c_str(); }
    const char * getToIata() const { return _toIata.c_str(); }
    const char * getModel() const { return _model.c_str(); }
    const char * getSquawk() const { return _squawk.c_str(); }
    const char * getType() const { return _type.c_str(); }

    int getClicks() const { return _clicks; }
};

#endif // FLIGHT_H