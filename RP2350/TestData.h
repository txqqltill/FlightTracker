#ifndef MEMORY_H
#define MEMORY_H

const char* const JSON_FLIGHT_DATA = R"(
{
  "data": [
    {
      "callsign": "DLH568",
      "clicks": 225,
      "flight": "LH568",
      "flight_id": "3d67e573",
      "from_city": "Frankfurt",
      "from_iata": "FRA",
      "model": "A343",
      "squawk": "634",
      "to_city": "Lagos",
      "to_iata": "LOS",
      "type": "Airbus A340-313"
    },
    {
      "callsign": "OPS11",
      "clicks": 211,
      "flight": null,
      "flight_id": "3d67ead9",
      "from_city": "Doha",
      "from_iata": "DOH",
      "model": "EUFI",
      "squawk": null,
      "to_city": null,
      "to_iata": null,
      "type": "Eurofighter Typhoon FGR4"
    },
    {
      "callsign": "PKOFI",
      "clicks": 209,
      "flight": null,
      "flight_id": "3d67db18",
      "from_city": "Surakarta",
      "from_iata": "SOC",
      "model": "B38M",
      "squawk": "2306",
      "to_city": "Jakarta",
      "to_iata": "CGK",
      "type": "Boeing 737 MAX 8"
    },
    {
      "callsign": "ANA76",
      "clicks": 208,
      "flight": "NH76",
      "flight_id": "3d67d3e5",
      "from_city": "Sapporo",
      "from_iata": "CTS",
      "model": "B772",
      "squawk": "455",
      "to_city": "Tokyo",
      "to_iata": "HND",
      "type": "Boeing 777-281"
    },
    {
      "callsign": "VTRGY",
      "clicks": 207,
      "flight": null,
      "flight_id": "3d67ebbf",
      "from_city": "Ahmedabad",
      "from_iata": "AMD",
      "model": "H160",
      "squawk": "1140",
      "to_city": "Ahmedabad",
      "to_iata": "AMD",
      "type": "Airbus Helicopters H160B"
    },
    {
      "callsign": "MAS148",
      "clicks": 201,
      "flight": "MH148",
      "flight_id": "3d674d9b",
      "from_city": "Melbourne",
      "from_iata": "MEL",
      "model": "A339",
      "squawk": "1276",
      "to_city": "Kuala Lumpur",
      "to_iata": "KUL",
      "type": "Airbus A330-941"
    },
    {
      "callsign": "QFA041",
      "clicks": 200,
      "flight": "QF41",
      "flight_id": "3d673166",
      "from_city": "Sydney",
      "from_iata": "SYD",
      "model": "A332",
      "squawk": "1363",
      "to_city": "Jakarta",
      "to_iata": "CGK",
      "type": "Airbus A330-202"
    },
    {
      "callsign": "DLH3LR",
      "clicks": 200,
      "flight": "LH1364",
      "flight_id": "3d67ea32",
      "from_city": "Frankfurt",
      "from_iata": "FRA",
      "model": "A321",
      "squawk": "1000",
      "to_city": "Krakow",
      "to_iata": "KRK",
      "type": "Airbus A321-231"
    },
    {
      "callsign": "UAE39",
      "clicks": 195,
      "flight": "EK39",
      "flight_id": "3d674059",
      "from_city": "Dubai",
      "from_iata": "DXB",
      "model": "A388",
      "squawk": "532",
      "to_city": "Birmingham",
      "to_iata": "BHX",
      "type": "Airbus A380-842"
    },
    {
      "callsign": "UAE35",
      "clicks": 193,
      "flight": "EK35",
      "flight_id": "3d6739ac",
      "from_city": "Dubai",
      "from_iata": "DXB",
      "model": "B77W",
      "squawk": "622",
      "to_city": "Newcastle",
      "to_iata": "NCL",
      "type": "Boeing 777-31H(ER) "
    }
  ],
  "update_time": 1765104800,
  "version": "0.4.0"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d67e573 = R"(
{
  "identification": {
    "id": "3d67e573",
    "row": 5744585876,
    "number": {
      "default": "LH568",
      "alternative": null
    },
    "callsign": "DLH568"
  },
  "status": {
    "live": true,
    "text": "Scheduled",
    "icon": null,
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "scheduled",
        "color": "gray",
        "type": "arrival"
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "A343",
      "text": "Airbus A340-313"
    },
    "countryId": 83,
    "registration": "D-AIGS",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/6/806166_1763893687_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11914160",
          "copyright": "Ivan Oleinik",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/326685_1762091212_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11886945",
          "copyright": "Jakob K",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/771120_1762472518_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11892048",
          "copyright": "Alex Clark-west",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/371725_1763831099_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11913683",
          "copyright": "planespotter_olivier",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/576245_1761352623_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11877773",
          "copyright": "Alonso Cisneros",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/6/806166_1763893687.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11914160",
          "copyright": "Ivan Oleinik",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/326685_1762091212.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11886945",
          "copyright": "Jakob K",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/771120_1762472518.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11892048",
          "copyright": "Alex Clark-west",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/371725_1763831099.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11913683",
          "copyright": "planespotter_olivier",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/576245_1761352623.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11877773",
          "copyright": "Alonso Cisneros",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/6/806166_1763893687.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11914160",
          "copyright": "Ivan Oleinik",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/326685_1762091212.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11886945",
          "copyright": "Jakob K",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/771120_1762472518.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11892048",
          "copyright": "Alex Clark-west",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/371725_1763831099.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11913683",
          "copyright": "planespotter_olivier",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/576245_1761352623.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11877773",
          "copyright": "Alonso Cisneros",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "3c64f3"
  },
  "airline": {
    "name": "Lufthansa",
    "short": "Lufthansa",
    "code": {
      "iata": "LH",
      "icao": "DLH"
    },
    "url": "lufthansa-dlh"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Frankfurt Airport",
      "code": {
        "iata": "FRA",
        "icao": "EDDF"
      },
      "position": {
        "latitude": 50.037796,
        "longitude": 8.555783,
        "altitude": 364,
        "country": {
          "id": 83,
          "name": "Germany",
          "code": "DE",
          "codeLong": "DEU"
        },
        "region": {
          "city": "Frankfurt"
        }
      },
      "timezone": {
        "name": "Europe/Berlin",
        "offset": 3600,
        "offsetHours": "1:00",
        "abbr": "CET",
        "abbrName": "Central European Time",
        "isDst": false
      },
      "visible": true,
      "website": "https://www.frankfurt-airport.com/en.html",
      "info": {
        "terminal": "1",
        "baggage": null,
        "gate": "B22"
      }
    },
    "destination": {
      "name": "Lagos Murtala Mohammed Airport",
      "code": {
        "iata": "LOS",
        "icao": "DNMM"
      },
      "position": {
        "latitude": 6.577369,
        "longitude": 3.321156,
        "altitude": 135,
        "country": {
          "id": 160,
          "name": "Nigeria",
          "code": "NG",
          "codeLong": "NGA"
        },
        "region": {
          "city": "Lagos"
        }
      },
      "timezone": {
        "name": "Africa/Lagos",
        "offset": 3600,
        "offsetHours": "1:00",
        "abbr": "WAT",
        "abbrName": "West Africa Time",
        "isDst": false
      },
      "visible": true,
      "website": null,
      "info": {
        "terminal": "1I",
        "baggage": null,
        "gate": null
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d66662d",
          "number": {
            "default": "LH443"
          }
        },
        "airport": {
          "origin": {
            "name": "Detroit Metropolitan Wayne County Airport",
            "code": {
              "iata": "DTW",
              "icao": "KDTW"
            },
            "position": {
              "latitude": 42.21244,
              "longitude": -83.353302,
              "altitude": 645,
              "country": {
                "id": 236,
                "name": "United States",
                "code": "US",
                "codeLong": "USA"
              },
              "region": {
                "city": "Detroit"
              }
            },
            "timezone": {
              "name": "America/Detroit",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "EST",
              "abbrName": "Eastern Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.metroairport.com/"
          },
          "destination": {
            "name": "Frankfurt Airport",
            "code": {
              "iata": "FRA",
              "icao": "EDDF"
            },
            "position": {
              "latitude": 50.037796,
              "longitude": 8.555783,
              "altitude": 364,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Frankfurt"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.frankfurt-airport.com/en.html"
          }
        },
        "time": {
          "real": {
            "departure": 1765056724
          }
        }
      },
      {
        "identification": {
          "id": "3d64e256",
          "number": {
            "default": "LH442"
          }
        },
        "airport": {
          "origin": {
            "name": "Frankfurt Airport",
            "code": {
              "iata": "FRA",
              "icao": "EDDF"
            },
            "position": {
              "latitude": 50.037796,
              "longitude": 8.555783,
              "altitude": 364,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Frankfurt"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.frankfurt-airport.com/en.html"
          },
          "destination": {
            "name": "Detroit Metropolitan Wayne County Airport",
            "code": {
              "iata": "DTW",
              "icao": "KDTW"
            },
            "position": {
              "latitude": 42.21244,
              "longitude": -83.353302,
              "altitude": 645,
              "country": {
                "id": 236,
                "name": "United States",
                "code": "US",
                "codeLong": "USA"
              },
              "region": {
                "city": "Detroit"
              }
            },
            "timezone": {
              "name": "America/Detroit",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "EST",
              "abbrName": "Eastern Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.metroairport.com/"
          }
        },
        "time": {
          "real": {
            "departure": 1765017173
          }
        }
      },
      {
        "identification": {
          "id": "3d639a28",
          "number": {
            "default": "LH595"
          }
        },
        "airport": {
          "origin": {
            "name": "Abuja Nnamdi Azikiwe International Airport",
            "code": {
              "iata": "ABV",
              "icao": "DNAA"
            },
            "position": {
              "latitude": 9.006792,
              "longitude": 7.263172,
              "altitude": 1123,
              "country": {
                "id": 160,
                "name": "Nigeria",
                "code": "NG",
                "codeLong": "NGA"
              },
              "region": {
                "city": "Abuja"
              }
            },
            "timezone": {
              "name": "Africa/Lagos",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "WAT",
              "abbrName": "West Africa Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": {
            "name": "Frankfurt Airport",
            "code": {
              "iata": "FRA",
              "icao": "EDDF"
            },
            "position": {
              "latitude": 50.037796,
              "longitude": 8.555783,
              "altitude": 364,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Frankfurt"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.frankfurt-airport.com/en.html"
          }
        },
        "time": {
          "real": {
            "departure": 1764974568
          }
        }
      },
      {
        "identification": {
          "id": "3d634262",
          "number": {
            "default": "LH595"
          }
        },
        "airport": {
          "origin": {
            "name": "Port Harcourt International Airport",
            "code": {
              "iata": "PHC",
              "icao": "DNPO"
            },
            "position": {
              "latitude": 5.015494,
              "longitude": 6.949594,
              "altitude": 87,
              "country": {
                "id": 160,
                "name": "Nigeria",
                "code": "NG",
                "codeLong": "NGA"
              },
              "region": {
                "city": "Port Harcourt"
              }
            },
            "timezone": {
              "name": "Africa/Lagos",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "WAT",
              "abbrName": "West Africa Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": {
            "name": "Abuja Nnamdi Azikiwe International Airport",
            "code": {
              "iata": "ABV",
              "icao": "DNAA"
            },
            "position": {
              "latitude": 9.006792,
              "longitude": 7.263172,
              "altitude": 1123,
              "country": {
                "id": 160,
                "name": "Nigeria",
                "code": "NG",
                "codeLong": "NGA"
              },
              "region": {
                "city": "Abuja"
              }
            },
            "timezone": {
              "name": "Africa/Lagos",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "WAT",
              "abbrName": "West Africa Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1764966359
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 1765102500,
      "arrival": 1765125900
    },
    "real": {
      "departure": null,
      "arrival": null
    },
    "estimated": {
      "departure": 1765103520,
      "arrival": null
    },
    "other": {
      "eta": 0,
      "updated": 1765103659
    },
    "historical": {
      "flighttime": "21861",
      "delay": "1788"
    }
  },
  "trail": [
    {
      "lat": 50.035706,
      "lng": 8.532869,
      "alt": 0,
      "spd": 3,
      "ts": 1765104814,
      "hd": 250
    },
    {
      "lat": 50.035767,
      "lng": 8.533071,
      "alt": 0,
      "spd": 3,
      "ts": 1765104805,
      "hd": 250
    },
    {
      "lat": 50.035789,
      "lng": 8.533287,
      "alt": 0,
      "spd": 7,
      "ts": 1765104797,
      "hd": 250
    },
    {
      "lat": 50.035915,
      "lng": 8.533648,
      "alt": 0,
      "spd": 6,
      "ts": 1765104789,
      "hd": 247
    },
    {
      "lat": 50.035973,
      "lng": 8.533883,
      "alt": 0,
      "spd": 4,
      "ts": 1765104782,
      "hd": 250
    },
    {
      "lat": 50.036079,
      "lng": 8.534429,
      "alt": 0,
      "spd": 6,
      "ts": 1765104770,
      "hd": 250
    },
    {
      "lat": 50.036179,
      "lng": 8.534751,
      "alt": 0,
      "spd": 8,
      "ts": 1765104763,
      "hd": 250
    },
    {
      "lat": 50.036255,
      "lng": 8.535059,
      "alt": 0,
      "spd": 8,
      "ts": 1765104758,
      "hd": 247
    },
    {
      "lat": 50.036335,
      "lng": 8.535449,
      "alt": 0,
      "spd": 11,
      "ts": 1765104751,
      "hd": 247
    },
    {
      "lat": 50.03651,
      "lng": 8.536124,
      "alt": 0,
      "spd": 10,
      "ts": 1765104744,
      "hd": 247
    },
    {
      "lat": 50.036613,
      "lng": 8.536469,
      "alt": 0,
      "spd": 9,
      "ts": 1765104735,
      "hd": 247
    },
    {
      "lat": 50.036686,
      "lng": 8.536915,
      "alt": 0,
      "spd": 8,
      "ts": 1765104728,
      "hd": 250
    },
    {
      "lat": 50.036846,
      "lng": 8.537323,
      "alt": 0,
      "spd": 8,
      "ts": 1765104719,
      "hd": 250
    },
    {
      "lat": 50.037056,
      "lng": 8.538382,
      "alt": 0,
      "spd": 10,
      "ts": 1765104704,
      "hd": 250
    },
    {
      "lat": 50.037163,
      "lng": 8.538808,
      "alt": 0,
      "spd": 12,
      "ts": 1765104698,
      "hd": 250
    },
    {
      "lat": 50.037334,
      "lng": 8.539557,
      "alt": 0,
      "spd": 13,
      "ts": 1765104689,
      "hd": 250
    },
    {
      "lat": 50.037483,
      "lng": 8.540208,
      "alt": 0,
      "spd": 15,
      "ts": 1765104683,
      "hd": 250
    },
    {
      "lat": 50.037533,
      "lng": 8.540422,
      "alt": 0,
      "spd": 15,
      "ts": 1765104680,
      "hd": 250
    },
    {
      "lat": 50.037598,
      "lng": 8.540677,
      "alt": 0,
      "spd": 14,
      "ts": 1765104677,
      "hd": 250
    },
    {
      "lat": 50.037651,
      "lng": 8.540887,
      "alt": 0,
      "spd": 14,
      "ts": 1765104675,
      "hd": 250
    },
    {
      "lat": 50.037712,
      "lng": 8.541129,
      "alt": 0,
      "spd": 13,
      "ts": 1765104673,
      "hd": 250
    },
    {
      "lat": 50.037777,
      "lng": 8.541443,
      "alt": 0,
      "spd": 13,
      "ts": 1765104669,
      "hd": 250
    },
    {
      "lat": 50.037861,
      "lng": 8.541796,
      "alt": 0,
      "spd": 12,
      "ts": 1765104666,
      "hd": 247
    },
    {
      "lat": 50.037918,
      "lng": 8.542019,
      "alt": 0,
      "spd": 12,
      "ts": 1765104662,
      "hd": 244
    },
    {
      "lat": 50.037975,
      "lng": 8.54226,
      "alt": 0,
      "spd": 11,
      "ts": 1765104659,
      "hd": 241
    },
    {
      "lat": 50.038048,
      "lng": 8.542501,
      "alt": 0,
      "spd": 11,
      "ts": 1765104656,
      "hd": 236
    },
    {
      "lat": 50.038147,
      "lng": 8.542773,
      "alt": 0,
      "spd": 11,
      "ts": 1765104653,
      "hd": 233
    },
    {
      "lat": 50.038242,
      "lng": 8.543002,
      "alt": 0,
      "spd": 10,
      "ts": 1765104648,
      "hd": 233
    },
    {
      "lat": 50.038353,
      "lng": 8.543262,
      "alt": 0,
      "spd": 10,
      "ts": 1765104644,
      "hd": 236
    },
    {
      "lat": 50.038456,
      "lng": 8.543478,
      "alt": 0,
      "spd": 9,
      "ts": 1765104640,
      "hd": 239
    },
    {
      "lat": 50.03857,
      "lng": 8.543707,
      "alt": 0,
      "spd": 8,
      "ts": 1765104636,
      "hd": 241
    },
    {
      "lat": 50.038765,
      "lng": 8.544219,
      "alt": 0,
      "spd": 8,
      "ts": 1765104626,
      "hd": 250
    },
    {
      "lat": 50.038918,
      "lng": 8.544895,
      "alt": 0,
      "spd": 14,
      "ts": 1765104617,
      "hd": 250
    },
    {
      "lat": 50.039085,
      "lng": 8.54561,
      "alt": 0,
      "spd": 12,
      "ts": 1765104609,
      "hd": 250
    },
    {
      "lat": 50.039223,
      "lng": 8.54617,
      "alt": 0,
      "spd": 16,
      "ts": 1765104603,
      "hd": 250
    },
    {
      "lat": 50.039478,
      "lng": 8.547234,
      "alt": 0,
      "spd": 18,
      "ts": 1765104595,
      "hd": 250
    },
    {
      "lat": 50.039703,
      "lng": 8.548159,
      "alt": 0,
      "spd": 16,
      "ts": 1765104586,
      "hd": 250
    },
    {
      "lat": 50.039875,
      "lng": 8.548917,
      "alt": 0,
      "spd": 15,
      "ts": 1765104579,
      "hd": 250
    },
    {
      "lat": 50.040035,
      "lng": 8.549553,
      "alt": 0,
      "spd": 13,
      "ts": 1765104573,
      "hd": 250
    },
    {
      "lat": 50.040188,
      "lng": 8.550184,
      "alt": 0,
      "spd": 11,
      "ts": 1765104565,
      "hd": 250
    },
    {
      "lat": 50.040401,
      "lng": 8.551067,
      "alt": 0,
      "spd": 0,
      "ts": 1765104552,
      "hd": 250
    },
    {
      "lat": 50.040546,
      "lng": 8.551724,
      "alt": 0,
      "spd": 7,
      "ts": 1765104540,
      "hd": 250
    },
    {
      "lat": 50.040642,
      "lng": 8.552097,
      "alt": 0,
      "spd": 0,
      "ts": 1765104532,
      "hd": 250
    },
    {
      "lat": 50.040813,
      "lng": 8.55282,
      "alt": 0,
      "spd": 7,
      "ts": 1765104515,
      "hd": 250
    },
    {
      "lat": 50.040916,
      "lng": 8.553236,
      "alt": 0,
      "spd": 7,
      "ts": 1765104507,
      "hd": 250
    },
    {
      "lat": 50.041016,
      "lng": 8.553636,
      "alt": 0,
      "spd": 10,
      "ts": 1765104500,
      "hd": 250
    },
    {
      "lat": 50.041176,
      "lng": 8.554341,
      "alt": 0,
      "spd": 12,
      "ts": 1765104493,
      "hd": 250
    },
    {
      "lat": 50.041294,
      "lng": 8.554824,
      "alt": 0,
      "spd": 11,
      "ts": 1765104484,
      "hd": 250
    },
    {
      "lat": 50.04142,
      "lng": 8.555417,
      "alt": 0,
      "spd": 10,
      "ts": 1765104476,
      "hd": 250
    },
    {
      "lat": 50.041515,
      "lng": 8.555789,
      "alt": 0,
      "spd": 9,
      "ts": 1765104469,
      "hd": 250
    },
    {
      "lat": 50.041626,
      "lng": 8.556253,
      "alt": 0,
      "spd": 11,
      "ts": 1765104462,
      "hd": 250
    },
    {
      "lat": 50.041809,
      "lng": 8.556994,
      "alt": 0,
      "spd": 13,
      "ts": 1765104453,
      "hd": 250
    },
    {
      "lat": 50.041958,
      "lng": 8.557645,
      "alt": 0,
      "spd": 12,
      "ts": 1765104445,
      "hd": 250
    },
    {
      "lat": 50.042141,
      "lng": 8.558405,
      "alt": 0,
      "spd": 10,
      "ts": 1765104439,
      "hd": 250
    },
    {
      "lat": 50.042305,
      "lng": 8.559054,
      "alt": 0,
      "spd": 9,
      "ts": 1765104429,
      "hd": 250
    },
    {
      "lat": 50.042381,
      "lng": 8.55938,
      "alt": 0,
      "spd": 8,
      "ts": 1765104420,
      "hd": 250
    },
    {
      "lat": 50.042469,
      "lng": 8.559778,
      "alt": 0,
      "spd": 7,
      "ts": 1765104412,
      "hd": 250
    },
    {
      "lat": 50.042561,
      "lng": 8.560168,
      "alt": 0,
      "spd": 12,
      "ts": 1765104405,
      "hd": 250
    },
    {
      "lat": 50.042747,
      "lng": 8.560947,
      "alt": 0,
      "spd": 13,
      "ts": 1765104396,
      "hd": 250
    },
    {
      "lat": 50.042912,
      "lng": 8.561653,
      "alt": 0,
      "spd": 12,
      "ts": 1765104388,
      "hd": 250
    },
    {
      "lat": 50.043068,
      "lng": 8.562306,
      "alt": 0,
      "spd": 14,
      "ts": 1765104380,
      "hd": 250
    },
    {
      "lat": 50.04327,
      "lng": 8.563286,
      "alt": 0,
      "spd": 13,
      "ts": 1765104372,
      "hd": 250
    },
    {
      "lat": 50.043365,
      "lng": 8.563694,
      "alt": 0,
      "spd": 12,
      "ts": 1765104364,
      "hd": 250
    },
    {
      "lat": 50.043552,
      "lng": 8.564306,
      "alt": 0,
      "spd": 11,
      "ts": 1765104357,
      "hd": 250
    },
    {
      "lat": 50.043743,
      "lng": 8.564963,
      "alt": 0,
      "spd": 14,
      "ts": 1765104349,
      "hd": 250
    },
    {
      "lat": 50.044006,
      "lng": 8.565812,
      "alt": 0,
      "spd": 12,
      "ts": 1765104341,
      "hd": 250
    },
    {
      "lat": 50.044189,
      "lng": 8.56621,
      "alt": 0,
      "spd": 12,
      "ts": 1765104336,
      "hd": 250
    },
    {
      "lat": 50.044235,
      "lng": 8.566589,
      "alt": 0,
      "spd": 11,
      "ts": 1765104330,
      "hd": 250
    },
    {
      "lat": 50.044167,
      "lng": 8.566878,
      "alt": 0,
      "spd": 10,
      "ts": 1765104326,
      "hd": 250
    },
    {
      "lat": 50.044258,
      "lng": 8.567149,
      "alt": 0,
      "spd": 6,
      "ts": 1765104316,
      "hd": 247
    },
    {
      "lat": 50.044315,
      "lng": 8.567511,
      "alt": 0,
      "spd": 8,
      "ts": 1765104315,
      "hd": 247
    },
    {
      "lat": 50.044285,
      "lng": 8.567202,
      "alt": 0,
      "spd": 6,
      "ts": 1765104314,
      "hd": 244
    },
    {
      "lat": 50.04435,
      "lng": 8.567656,
      "alt": 0,
      "spd": 8,
      "ts": 1765104313,
      "hd": 244
    },
    {
      "lat": 50.044399,
      "lng": 8.567925,
      "alt": 0,
      "spd": 7,
      "ts": 1765104308,
      "hd": 239
    },
    {
      "lat": 50.04446,
      "lng": 8.568149,
      "alt": 0,
      "spd": 7,
      "ts": 1765104303,
      "hd": 227
    },
    {
      "lat": 50.04454,
      "lng": 8.56839,
      "alt": 0,
      "spd": 7,
      "ts": 1765104298,
      "hd": 213
    },
    {
      "lat": 50.044704,
      "lng": 8.568613,
      "alt": 0,
      "spd": 6,
      "ts": 1765104291,
      "hd": 196
    },
    {
      "lat": 50.044914,
      "lng": 8.568705,
      "alt": 0,
      "spd": 6,
      "ts": 1765104283,
      "hd": 194
    },
    {
      "lat": 50.045135,
      "lng": 8.568798,
      "alt": 0,
      "spd": 3,
      "ts": 1765104273,
      "hd": 194
    },
    {
      "lat": 50.045368,
      "lng": 8.568872,
      "alt": 0,
      "spd": 2,
      "ts": 1765104037,
      "hd": 194
    },
    {
      "lat": 50.045586,
      "lng": 8.568956,
      "alt": 0,
      "spd": 3,
      "ts": 1765104020,
      "hd": 194
    },
    {
      "lat": 50.045792,
      "lng": 8.569029,
      "alt": 0,
      "spd": 3,
      "ts": 1765104005,
      "hd": 194
    },
    {
      "lat": 50.045998,
      "lng": 8.569101,
      "alt": 0,
      "spd": 3,
      "ts": 1765103990,
      "hd": 194
    },
    {
      "lat": 50.046215,
      "lng": 8.569169,
      "alt": 0,
      "spd": 3,
      "ts": 1765103973,
      "hd": 199
    },
    {
      "lat": 50.046421,
      "lng": 8.569263,
      "alt": 0,
      "spd": 3,
      "ts": 1765103956,
      "hd": 205
    },
    {
      "lat": 50.046635,
      "lng": 8.56941,
      "alt": 0,
      "spd": 3,
      "ts": 1765103940,
      "hd": 205
    },
    {
      "lat": 50.046844,
      "lng": 8.569559,
      "alt": 0,
      "spd": 3,
      "ts": 1765103923,
      "hd": 205
    },
    {
      "lat": 50.047077,
      "lng": 8.569726,
      "alt": 0,
      "spd": 3,
      "ts": 1765103904,
      "hd": 205
    },
    {
      "lat": 50.047291,
      "lng": 8.569878,
      "alt": 0,
      "spd": 3,
      "ts": 1765103886,
      "hd": 205
    },
    {
      "lat": 50.047497,
      "lng": 8.570041,
      "alt": 0,
      "spd": 2,
      "ts": 1765103868,
      "hd": 202
    },
    {
      "lat": 50.047741,
      "lng": 8.570227,
      "alt": 0,
      "spd": 3,
      "ts": 1765103846,
      "hd": 202
    },
    {
      "lat": 50.047955,
      "lng": 8.570312,
      "alt": 0,
      "spd": 0,
      "ts": 1765103811,
      "hd": 205
    },
    {
      "lat": 50.047752,
      "lng": 8.57045,
      "alt": 0,
      "spd": 2,
      "ts": 1765103789,
      "hd": 174
    },
    {
      "lat": 50.047623,
      "lng": 8.570654,
      "alt": 0,
      "spd": 2,
      "ts": 1765103772,
      "hd": 151
    },
    {
      "lat": 50.047577,
      "lng": 8.570872,
      "alt": 0,
      "spd": 2,
      "ts": 1765103759,
      "hd": 135
    },
    {
      "lat": 50.047497,
      "lng": 8.571099,
      "alt": 0,
      "spd": 2,
      "ts": 1765103743,
      "hd": 120
    },
    {
      "lat": 50.047474,
      "lng": 8.571507,
      "alt": 0,
      "spd": 0,
      "ts": 1765103569,
      "hd": 118
    },
    {
      "lat": 50.047268,
      "lng": 8.571612,
      "alt": 0,
      "spd": 0,
      "ts": 1765102931,
      "hd": 118
    }
  ],
  "firstTimestamp": 1765102931,
  "s": "-cx_u1k7QnnL765jZvKLCByL8YP1HoOujwWJu5Ww-2dGmlz0elZ3VTGvg7_HRQ79"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d67ead9 = R"(
{
  "identification": {
    "id": "3d67ead9",
    "row": 5747756559,
    "number": {
      "default": null,
      "alternative": null
    },
    "callsign": "OPS11"
  },
  "status": {
    "live": true,
    "text": "Scheduled",
    "icon": null,
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "scheduled",
        "color": "gray",
        "type": "arrival"
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "EUFI",
      "text": "Eurofighter Typhoon FGR4"
    },
    "countryId": 179,
    "registration": "QA420",
    "age": null,
    "msn": null,
    "images": null,
    "hex": "06a21d"
  },
  "airline": {
    "name": "Qatar - Emiri Air Force",
    "code": null,
    "url": null
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Doha Hamad International Airport",
      "code": {
        "iata": "DOH",
        "icao": "OTHH"
      },
      "position": {
        "latitude": 25.272524,
        "longitude": 51.608604,
        "altitude": 13,
        "country": {
          "id": 179,
          "name": "Qatar",
          "code": "QA",
          "codeLong": "QAT"
        },
        "region": {
          "city": "Doha"
        }
      },
      "timezone": {
        "name": "Asia/Qatar",
        "offset": 10800,
        "offsetHours": "3:00",
        "abbr": "+03",
        "abbrName": "",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.dohaairport.com/",
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": null
      }
    },
    "destination": null,
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d679700",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Doha Hamad International Airport",
            "code": {
              "iata": "DOH",
              "icao": "OTHH"
            },
            "position": {
              "latitude": 25.272524,
              "longitude": 51.608604,
              "altitude": 13,
              "country": {
                "id": 179,
                "name": "Qatar",
                "code": "QA",
                "codeLong": "QAT"
              },
              "region": {
                "city": "Doha"
              }
            },
            "timezone": {
              "name": "Asia/Qatar",
              "offset": 10800,
              "offsetHours": "3:00",
              "abbr": "+03",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.dohaairport.com/"
          },
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1765091648
          }
        }
      },
      {
        "identification": {
          "id": "3d6746a3",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Doha Hamad International Airport",
            "code": {
              "iata": "DOH",
              "icao": "OTHH"
            },
            "position": {
              "latitude": 25.272524,
              "longitude": 51.608604,
              "altitude": 13,
              "country": {
                "id": 179,
                "name": "Qatar",
                "code": "QA",
                "codeLong": "QAT"
              },
              "region": {
                "city": "Doha"
              }
            },
            "timezone": {
              "name": "Asia/Qatar",
              "offset": 10800,
              "offsetHours": "3:00",
              "abbr": "+03",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.dohaairport.com/"
          },
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1765080811
          }
        }
      },
      {
        "identification": {
          "id": "3d66d6c6",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Doha Hamad International Airport",
            "code": {
              "iata": "DOH",
              "icao": "OTHH"
            },
            "position": {
              "latitude": 25.272524,
              "longitude": 51.608604,
              "altitude": 13,
              "country": {
                "id": 179,
                "name": "Qatar",
                "code": "QA",
                "codeLong": "QAT"
              },
              "region": {
                "city": "Doha"
              }
            },
            "timezone": {
              "name": "Asia/Qatar",
              "offset": 10800,
              "offsetHours": "3:00",
              "abbr": "+03",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.dohaairport.com/"
          },
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1765067344
          }
        }
      },
      {
        "identification": {
          "id": "3d665b7f",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Doha Hamad International Airport",
            "code": {
              "iata": "DOH",
              "icao": "OTHH"
            },
            "position": {
              "latitude": 25.272524,
              "longitude": 51.608604,
              "altitude": 13,
              "country": {
                "id": 179,
                "name": "Qatar",
                "code": "QA",
                "codeLong": "QAT"
              },
              "region": {
                "city": "Doha"
              }
            },
            "timezone": {
              "name": "Asia/Qatar",
              "offset": 10800,
              "offsetHours": "3:00",
              "abbr": "+03",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.dohaairport.com/"
          },
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1765054715
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 0,
      "arrival": 0
    },
    "real": {
      "departure": null,
      "arrival": null
    },
    "estimated": {
      "departure": 1765103636,
      "arrival": null
    },
    "other": {
      "eta": 0,
      "updated": 1765103695
    },
    "historical": null
  },
  "trail": [
    {
      "lat": 25.261711,
      "lng": 51.608898,
      "alt": 0,
      "spd": 1,
      "ts": 1765104901,
      "hd": 194
    },
    {
      "lat": 25.26141,
      "lng": 51.609249,
      "alt": 0,
      "spd": 0,
      "ts": 1765104875,
      "hd": 329
    },
    {
      "lat": 25.264709,
      "lng": 51.61124,
      "alt": 0,
      "spd": 0,
      "ts": 1765104752,
      "hd": 247
    },
    {
      "lat": 25.265553,
      "lng": 51.611153,
      "alt": 0,
      "spd": 0,
      "ts": 1765104696,
      "hd": 323
    },
    {
      "lat": 25.2617,
      "lng": 51.61063,
      "alt": 0,
      "spd": 0,
      "ts": 1765103837,
      "hd": 5
    },
    {
      "lat": 25.262398,
      "lng": 51.60434,
      "alt": 0,
      "spd": 0,
      "ts": 1765103681,
      "hd": 157
    },
    {
      "lat": 25.26355,
      "lng": 51.603832,
      "alt": 0,
      "spd": 0,
      "ts": 1765103661,
      "hd": 157
    },
    {
      "lat": 25.264297,
      "lng": 51.603497,
      "alt": 0,
      "spd": 11,
      "ts": 1765103646,
      "hd": 160
    },
    {
      "lat": 25.264622,
      "lng": 51.603367,
      "alt": 0,
      "spd": 11,
      "ts": 1765103639,
      "hd": 157
    }
  ],
  "firstTimestamp": 1765103639,
  "s": "V5HzsWRl3jCY2X4XA6aDnzROR1U2nauQE2ZS4kC3Ezm-nX663q8SA6PwFEQCvOrb"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d67db18 = R"(
{
  "identification": {
    "id": "3d67db18",
    "row": 5747724767,
    "number": {
      "default": null,
      "alternative": null
    },
    "callsign": "PKOFI"
  },
  "status": {
    "live": true,
    "text": "Landed 17:52",
    "icon": "red",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "landed",
        "color": "gray",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765104764,
        "local": 1765129964
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "B38M",
      "text": "Boeing 737 MAX 8"
    },
    "countryId": 103,
    "registration": "PK-OFI",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/5/1600665_1757432672_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11836566",
          "copyright": "rachmatdp",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/531180_1763148915_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11902823",
          "copyright": "Daniel Klein",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/844879_1753338590_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11789251",
          "copyright": "bubi",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/1732940_1749701972_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11750573",
          "copyright": "Muhammad Aria Alauddin",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/1164724_1748622888_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11738793",
          "copyright": "Muhammad Endo",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/5/1600665_1757432672.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11836566",
          "copyright": "rachmatdp",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/531180_1763148915.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11902823",
          "copyright": "Daniel Klein",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/844879_1753338590.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11789251",
          "copyright": "bubi",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/1732940_1749701972.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11750573",
          "copyright": "Muhammad Aria Alauddin",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/1164724_1748622888.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11738793",
          "copyright": "Muhammad Endo",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/5/1600665_1757432672.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11836566",
          "copyright": "rachmatdp",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/531180_1763148915.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11902823",
          "copyright": "Daniel Klein",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/844879_1753338590.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11789251",
          "copyright": "bubi",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1732940_1749701972.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11750573",
          "copyright": "Muhammad Aria Alauddin",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/1164724_1748622888.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11738793",
          "copyright": "Muhammad Endo",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "8a09fa"
  },
  "airline": {
    "name": "Airfast Indonesia",
    "short": "Airfast Indonesia",
    "code": {
      "iata": "FS",
      "icao": "AFE"
    },
    "url": "airfast-indonesia-afe"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Surakarta Adisumarmo International Airport",
      "code": {
        "iata": "SOC",
        "icao": "WAHQ"
      },
      "position": {
        "latitude": -7.51608,
        "longitude": 110.756798,
        "altitude": 421,
        "country": {
          "id": 103,
          "name": "Indonesia",
          "code": "ID",
          "codeLong": "IDN"
        },
        "region": {
          "city": "Surakarta"
        }
      },
      "timezone": {
        "name": "Asia/Jakarta",
        "offset": 25200,
        "offsetHours": "7:00",
        "abbr": "WIB",
        "abbrName": "Western Indonesian Time",
        "isDst": false
      },
      "visible": true,
      "website": null,
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": null
      }
    },
    "destination": {
      "name": "Jakarta Soekarno Hatta International Airport",
      "code": {
        "iata": "CGK",
        "icao": "WIII"
      },
      "position": {
        "latitude": -6.12556,
        "longitude": 106.6558,
        "altitude": 34,
        "country": {
          "id": 103,
          "name": "Indonesia",
          "code": "ID",
          "codeLong": "IDN"
        },
        "region": {
          "city": "Jakarta"
        }
      },
      "timezone": {
        "name": "Asia/Jakarta",
        "offset": 25200,
        "offsetHours": "7:00",
        "abbr": "WIB",
        "abbrName": "Western Indonesian Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://soekarnohatta-airport.co.id/",
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": null
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d6768ca",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Timika Airport",
            "code": {
              "iata": "TIM",
              "icao": "WAYY"
            },
            "position": {
              "latitude": -4.52827,
              "longitude": 136.887299,
              "altitude": 103,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Timika"
              }
            },
            "timezone": {
              "name": "Asia/Jayapura",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "WIT",
              "abbrName": "Eastern Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": {
            "name": "Surakarta Adisumarmo International Airport",
            "code": {
              "iata": "SOC",
              "icao": "WAHQ"
            },
            "position": {
              "latitude": -7.51608,
              "longitude": 110.756798,
              "altitude": 421,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Surakarta"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1765085542
          }
        }
      },
      {
        "identification": {
          "id": "3d66b501",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Yogyakarta International Airport",
            "code": {
              "iata": "YIA",
              "icao": "WAHI"
            },
            "position": {
              "latitude": -7.903947,
              "longitude": 110.055779,
              "altitude": 24,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Yogyakarta"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": {
            "name": "Timika Airport",
            "code": {
              "iata": "TIM",
              "icao": "WAYY"
            },
            "position": {
              "latitude": -4.52827,
              "longitude": 136.887299,
              "altitude": 103,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Timika"
              }
            },
            "timezone": {
              "name": "Asia/Jayapura",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "WIT",
              "abbrName": "Eastern Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1765064239
          }
        }
      },
      {
        "identification": {
          "id": "3d6666ed",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Jakarta Soekarno Hatta International Airport",
            "code": {
              "iata": "CGK",
              "icao": "WIII"
            },
            "position": {
              "latitude": -6.12556,
              "longitude": 106.6558,
              "altitude": 34,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Jakarta"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://soekarnohatta-airport.co.id/"
          },
          "destination": {
            "name": "Yogyakarta International Airport",
            "code": {
              "iata": "YIA",
              "icao": "WAHI"
            },
            "position": {
              "latitude": -7.903947,
              "longitude": 110.055779,
              "altitude": 24,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Yogyakarta"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1765056787
          }
        }
      },
      {
        "identification": {
          "id": "3d64a067",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Surabaya Juanda International Airport",
            "code": {
              "iata": "SUB",
              "icao": "WARR"
            },
            "position": {
              "latitude": -7.37983,
              "longitude": 112.786797,
              "altitude": 9,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Surabaya"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.juanda-airport.com/index.php?pilih=hal&id=37"
          },
          "destination": {
            "name": "Jakarta Soekarno Hatta International Airport",
            "code": {
              "iata": "CGK",
              "icao": "WIII"
            },
            "position": {
              "latitude": -6.12556,
              "longitude": 106.6558,
              "altitude": 34,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Jakarta"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://soekarnohatta-airport.co.id/"
          }
        },
        "time": {
          "real": {
            "departure": 1765006942
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 0,
      "arrival": 0
    },
    "real": {
      "departure": 1765101790,
      "arrival": 1765104764
    },
    "estimated": {
      "departure": null,
      "arrival": null
    },
    "other": {
      "eta": 1765104764,
      "updated": 1765104765
    },
    "historical": null
  },
  "trail": [
    {
      "lat": -6.131859,
      "lng": 106.657761,
      "alt": 0,
      "spd": 3,
      "ts": 1765104980,
      "hd": 278
    },
    {
      "lat": -6.131905,
      "lng": 106.658066,
      "alt": 0,
      "spd": 4,
      "ts": 1765104960,
      "hd": 286
    },
    {
      "lat": -6.13221,
      "lng": 106.658302,
      "alt": 0,
      "spd": 6,
      "ts": 1765104939,
      "hd": 5
    },
    {
      "lat": -6.132465,
      "lng": 106.658279,
      "alt": 0,
      "spd": 0,
      "ts": 1765104932,
      "hd": 8
    },
    {
      "lat": -6.132885,
      "lng": 106.658211,
      "alt": 0,
      "spd": 7,
      "ts": 1765104919,
      "hd": 5
    },
    {
      "lat": -6.133163,
      "lng": 106.65818,
      "alt": 0,
      "spd": 7,
      "ts": 1765104911,
      "hd": 354
    },
    {
      "lat": -6.133392,
      "lng": 106.65818,
      "alt": 0,
      "spd": 7,
      "ts": 1765104904,
      "hd": 354
    },
    {
      "lat": -6.133595,
      "lng": 106.658211,
      "alt": 0,
      "spd": 8,
      "ts": 1765104898,
      "hd": 16
    },
    {
      "lat": -6.133862,
      "lng": 106.658089,
      "alt": 0,
      "spd": 8,
      "ts": 1765104890,
      "hd": 53
    },
    {
      "lat": -6.133987,
      "lng": 106.657845,
      "alt": 0,
      "spd": 10,
      "ts": 1765104882,
      "hd": 70
    },
    {
      "lat": -6.13406,
      "lng": 106.657639,
      "alt": 0,
      "spd": 11,
      "ts": 1765104877,
      "hd": 67
    },
    {
      "lat": -6.134216,
      "lng": 106.657265,
      "alt": 0,
      "spd": 11,
      "ts": 1765104869,
      "hd": 70
    },
    {
      "lat": -6.134293,
      "lng": 106.657059,
      "alt": 0,
      "spd": 10,
      "ts": 1765104867,
      "hd": 67
    },
    {
      "lat": -6.134388,
      "lng": 106.656845,
      "alt": 0,
      "spd": 8,
      "ts": 1765104859,
      "hd": 59
    },
    {
      "lat": -6.134583,
      "lng": 106.656586,
      "alt": 0,
      "spd": 9,
      "ts": 1765104851,
      "hd": 22
    },
    {
      "lat": -6.134794,
      "lng": 106.656517,
      "alt": 0,
      "spd": 8,
      "ts": 1765104846,
      "hd": 354
    },
    {
      "lat": -6.135015,
      "lng": 106.656563,
      "alt": 0,
      "spd": 11,
      "ts": 1765104839,
      "hd": 337
    },
    {
      "lat": -6.135236,
      "lng": 106.656647,
      "alt": 0,
      "spd": 10,
      "ts": 1765104835,
      "hd": 337
    },
    {
      "lat": -6.13548,
      "lng": 106.656754,
      "alt": 0,
      "spd": 9,
      "ts": 1765104829,
      "hd": 337
    },
    {
      "lat": -6.135748,
      "lng": 106.65686,
      "alt": 0,
      "spd": 9,
      "ts": 1765104823,
      "hd": 329
    },
    {
      "lat": -6.135979,
      "lng": 106.657021,
      "alt": 0,
      "spd": 9,
      "ts": 1765104816,
      "hd": 300
    },
    {
      "lat": -6.136086,
      "lng": 106.657227,
      "alt": 0,
      "spd": 9,
      "ts": 1765104810,
      "hd": 281
    },
    {
      "lat": -6.136127,
      "lng": 106.657463,
      "alt": 0,
      "spd": 14,
      "ts": 1765104805,
      "hd": 278
    },
    {
      "lat": -6.136167,
      "lng": 106.657677,
      "alt": 0,
      "spd": 15,
      "ts": 1765104802,
      "hd": 278
    },
    {
      "lat": -6.136208,
      "lng": 106.657959,
      "alt": 0,
      "spd": 16,
      "ts": 1765104798,
      "hd": 275
    },
    {
      "lat": -6.13623,
      "lng": 106.65818,
      "alt": 0,
      "spd": 16,
      "ts": 1765104795,
      "hd": 272
    },
    {
      "lat": -6.136248,
      "lng": 106.658386,
      "alt": 0,
      "spd": 15,
      "ts": 1765104792,
      "hd": 270
    },
    {
      "lat": -6.136248,
      "lng": 106.658646,
      "alt": 0,
      "spd": 15,
      "ts": 1765104789,
      "hd": 267
    },
    {
      "lat": -6.136237,
      "lng": 106.658859,
      "alt": 0,
      "spd": 16,
      "ts": 1765104785,
      "hd": 261
    },
    {
      "lat": -6.136208,
      "lng": 106.659088,
      "alt": 0,
      "spd": 17,
      "ts": 1765104782,
      "hd": 261
    },
    {
      "lat": -6.136167,
      "lng": 106.659355,
      "alt": 0,
      "spd": 17,
      "ts": 1765104779,
      "hd": 258
    },
    {
      "lat": -6.13612,
      "lng": 106.659645,
      "alt": 0,
      "spd": 18,
      "ts": 1765104776,
      "hd": 255
    },
    {
      "lat": -6.136059,
      "lng": 106.659897,
      "alt": 0,
      "spd": 21,
      "ts": 1765104772,
      "hd": 253
    },
    {
      "lat": -6.135784,
      "lng": 106.660652,
      "alt": 0,
      "spd": 38,
      "ts": 1765104766,
      "hd": 247
    },
    {
      "lat": -6.135338,
      "lng": 106.661758,
      "alt": 0,
      "spd": 48,
      "ts": 1765104760,
      "hd": 250
    },
    {
      "lat": -6.134631,
      "lng": 106.663513,
      "alt": 0,
      "spd": 74,
      "ts": 1765104752,
      "hd": 247
    },
    {
      "lat": -6.133667,
      "lng": 106.665932,
      "alt": 0,
      "spd": 99,
      "ts": 1765104746,
      "hd": 248
    },
    {
      "lat": -6.132156,
      "lng": 106.669655,
      "alt": 125,
      "spd": 134,
      "ts": 1765104737,
      "hd": 248
    },
    {
      "lat": -6.130651,
      "lng": 106.673508,
      "alt": 175,
      "spd": 132,
      "ts": 1765104731,
      "hd": 247
    },
    {
      "lat": -6.128788,
      "lng": 106.678055,
      "alt": 250,
      "spd": 131,
      "ts": 1765104723,
      "hd": 248
    },
    {
      "lat": -6.128369,
      "lng": 106.679138,
      "alt": 275,
      "spd": 131,
      "ts": 1765104721,
      "hd": 248
    },
    {
      "lat": -6.127904,
      "lng": 106.680321,
      "alt": 300,
      "spd": 131,
      "ts": 1765104719,
      "hd": 248
    },
    {
      "lat": -6.126507,
      "lng": 106.683731,
      "alt": 375,
      "spd": 131,
      "ts": 1765104713,
      "hd": 248
    },
    {
      "lat": -6.124691,
      "lng": 106.688423,
      "alt": 450,
      "spd": 135,
      "ts": 1765104704,
      "hd": 247
    },
    {
      "lat": -6.122818,
      "lng": 106.693169,
      "alt": 550,
      "spd": 135,
      "ts": 1765104696,
      "hd": 248
    },
    {
      "lat": -6.12085,
      "lng": 106.698151,
      "alt": 650,
      "spd": 135,
      "ts": 1765104688,
      "hd": 247
    },
    {
      "lat": -6.118927,
      "lng": 106.702805,
      "alt": 750,
      "spd": 134,
      "ts": 1765104680,
      "hd": 248
    },
    {
      "lat": -6.117096,
      "lng": 106.707504,
      "alt": 825,
      "spd": 136,
      "ts": 1765104672,
      "hd": 248
    },
    {
      "lat": -6.115265,
      "lng": 106.71225,
      "alt": 925,
      "spd": 135,
      "ts": 1765104664,
      "hd": 248
    },
    {
      "lat": -6.113297,
      "lng": 106.717094,
      "alt": 1025,
      "spd": 136,
      "ts": 1765104655,
      "hd": 247
    },
    {
      "lat": -6.111374,
      "lng": 106.721893,
      "alt": 1125,
      "spd": 136,
      "ts": 1765104647,
      "hd": 248
    },
    {
      "lat": -6.110866,
      "lng": 106.723129,
      "alt": 1150,
      "spd": 135,
      "ts": 1765104645,
      "hd": 248
    },
    {
      "lat": -6.110413,
      "lng": 106.724312,
      "alt": 1150,
      "spd": 135,
      "ts": 1765104643,
      "hd": 248
    },
    {
      "lat": -6.109909,
      "lng": 106.725662,
      "alt": 1200,
      "spd": 135,
      "ts": 1765104641,
      "hd": 248
    },
    {
      "lat": -6.109406,
      "lng": 106.726868,
      "alt": 1225,
      "spd": 135,
      "ts": 1765104639,
      "hd": 248
    },
    {
      "lat": -6.108911,
      "lng": 106.728104,
      "alt": 1250,
      "spd": 136,
      "ts": 1765104637,
      "hd": 248
    },
    {
      "lat": -6.108538,
      "lng": 106.729103,
      "alt": 1275,
      "spd": 136,
      "ts": 1765104635,
      "hd": 248
    },
    {
      "lat": -6.107979,
      "lng": 106.730522,
      "alt": 1300,
      "spd": 137,
      "ts": 1765104633,
      "hd": 247
    },
    {
      "lat": -6.107483,
      "lng": 106.731712,
      "alt": 1325,
      "spd": 136,
      "ts": 1765104631,
      "hd": 247
    },
    {
      "lat": -6.107025,
      "lng": 106.73278,
      "alt": 1350,
      "spd": 136,
      "ts": 1765104629,
      "hd": 246
    },
    {
      "lat": -6.106583,
      "lng": 106.733788,
      "alt": 1350,
      "spd": 136,
      "ts": 1765104627,
      "hd": 247
    },
    {
      "lat": -6.106071,
      "lng": 106.73497,
      "alt": 1375,
      "spd": 135,
      "ts": 1765104625,
      "hd": 247
    },
    {
      "lat": -6.10556,
      "lng": 106.736229,
      "alt": 1400,
      "spd": 135,
      "ts": 1765104623,
      "hd": 247
    },
    {
      "lat": -6.105,
      "lng": 106.737526,
      "alt": 1425,
      "spd": 136,
      "ts": 1765104621,
      "hd": 248
    },
    {
      "lat": -6.104553,
      "lng": 106.738693,
      "alt": 1450,
      "spd": 137,
      "ts": 1765104619,
      "hd": 249
    },
    {
      "lat": -6.104069,
      "lng": 106.739944,
      "alt": 1475,
      "spd": 137,
      "ts": 1765104617,
      "hd": 249
    },
    {
      "lat": -6.10365,
      "lng": 106.741035,
      "alt": 1500,
      "spd": 137,
      "ts": 1765104615,
      "hd": 249
    },
    {
      "lat": -6.103185,
      "lng": 106.74231,
      "alt": 1525,
      "spd": 137,
      "ts": 1765104613,
      "hd": 249
    },
    {
      "lat": -6.102766,
      "lng": 106.743492,
      "alt": 1550,
      "spd": 138,
      "ts": 1765104611,
      "hd": 249
    },
    {
      "lat": -6.1023,
      "lng": 106.744774,
      "alt": 1575,
      "spd": 138,
      "ts": 1765104609,
      "hd": 248
    },
    {
      "lat": -6.101881,
      "lng": 106.745819,
      "alt": 1575,
      "spd": 137,
      "ts": 1765104607,
      "hd": 247
    },
    {
      "lat": -6.101416,
      "lng": 106.746956,
      "alt": 1600,
      "spd": 136,
      "ts": 1765104605,
      "hd": 247
    },
    {
      "lat": -6.100845,
      "lng": 106.748329,
      "alt": 1625,
      "spd": 136,
      "ts": 1765104603,
      "hd": 246
    },
    {
      "lat": -6.098923,
      "lng": 106.752983,
      "alt": 1725,
      "spd": 132,
      "ts": 1765104594,
      "hd": 248
    },
    {
      "lat": -6.097086,
      "lng": 106.757652,
      "alt": 1825,
      "spd": 135,
      "ts": 1765104586,
      "hd": 247
    },
    {
      "lat": -6.095215,
      "lng": 106.762299,
      "alt": 1925,
      "spd": 135,
      "ts": 1765104578,
      "hd": 247
    },
    {
      "lat": -6.093246,
      "lng": 106.767235,
      "alt": 2025,
      "spd": 136,
      "ts": 1765104570,
      "hd": 248
    },
    {
      "lat": -6.091779,
      "lng": 106.770821,
      "alt": 2100,
      "spd": 138,
      "ts": 1765104564,
      "hd": 247
    },
    {
      "lat": -6.089859,
      "lng": 106.775658,
      "alt": 2175,
      "spd": 142,
      "ts": 1765104556,
      "hd": 248
    },
    {
      "lat": -6.089312,
      "lng": 106.777069,
      "alt": 2225,
      "spd": 144,
      "ts": 1765104554,
      "hd": 248
    },
    {
      "lat": -6.087845,
      "lng": 106.78064,
      "alt": 2300,
      "spd": 149,
      "ts": 1765104548,
      "hd": 247
    },
    {
      "lat": -6.087296,
      "lng": 106.781944,
      "alt": 2300,
      "spd": 150,
      "ts": 1765104546,
      "hd": 247
    },
    {
      "lat": -6.086746,
      "lng": 106.783295,
      "alt": 2325,
      "spd": 152,
      "ts": 1765104544,
      "hd": 247
    },
    {
      "lat": -6.085602,
      "lng": 106.786087,
      "alt": 2375,
      "spd": 153,
      "ts": 1765104539,
      "hd": 248
    },
    {
      "lat": -6.083539,
      "lng": 106.791512,
      "alt": 2500,
      "spd": 155,
      "ts": 1765104531,
      "hd": 248
    },
    {
      "lat": -6.081345,
      "lng": 106.797028,
      "alt": 2600,
      "spd": 161,
      "ts": 1765104523,
      "hd": 247
    },
    {
      "lat": -6.079071,
      "lng": 106.802643,
      "alt": 2700,
      "spd": 163,
      "ts": 1765104515,
      "hd": 248
    },
    {
      "lat": -6.077255,
      "lng": 106.807144,
      "alt": 2800,
      "spd": 165,
      "ts": 1765104509,
      "hd": 248
    },
    {
      "lat": -6.075027,
      "lng": 106.812805,
      "alt": 2925,
      "spd": 166,
      "ts": 1765104501,
      "hd": 248
    },
    {
      "lat": -6.072693,
      "lng": 106.818764,
      "alt": 3050,
      "spd": 165,
      "ts": 1765104493,
      "hd": 248
    },
    {
      "lat": -6.070412,
      "lng": 106.824379,
      "alt": 3175,
      "spd": 164,
      "ts": 1765104485,
      "hd": 248
    },
    {
      "lat": -6.067991,
      "lng": 106.83049,
      "alt": 3300,
      "spd": 162,
      "ts": 1765104476,
      "hd": 248
    },
    {
      "lat": -6.065872,
      "lng": 106.835709,
      "alt": 3400,
      "spd": 162,
      "ts": 1765104468,
      "hd": 247
    },
    {
      "lat": -6.063429,
      "lng": 106.841713,
      "alt": 3500,
      "spd": 162,
      "ts": 1765104460,
      "hd": 248
    },
    {
      "lat": -6.061752,
      "lng": 106.846001,
      "alt": 3550,
      "spd": 163,
      "ts": 1765104454,
      "hd": 248
    },
    {
      "lat": -6.059472,
      "lng": 106.851746,
      "alt": 3650,
      "spd": 165,
      "ts": 1765104446,
      "hd": 248
    },
    {
      "lat": -6.057129,
      "lng": 106.85759,
      "alt": 3800,
      "spd": 166,
      "ts": 1765104438,
      "hd": 248
    },
    {
      "lat": -6.054703,
      "lng": 106.863731,
      "alt": 3950,
      "spd": 166,
      "ts": 1765104429,
      "hd": 248
    },
    {
      "lat": -6.05246,
      "lng": 106.869507,
      "alt": 4075,
      "spd": 166,
      "ts": 1765104421,
      "hd": 247
    },
    {
      "lat": -6.050674,
      "lng": 106.873787,
      "alt": 4125,
      "spd": 166,
      "ts": 1765104415,
      "hd": 247
    },
    {
      "lat": -6.048299,
      "lng": 106.879547,
      "alt": 4150,
      "spd": 166,
      "ts": 1765104407,
      "hd": 247
    },
    {
      "lat": -6.045868,
      "lng": 106.885612,
      "alt": 4175,
      "spd": 169,
      "ts": 1765104398,
      "hd": 248
    },
    {
      "lat": -6.043318,
      "lng": 106.891953,
      "alt": 4175,
      "spd": 174,
      "ts": 1765104390,
      "hd": 248
    },
    {
      "lat": -6.04097,
      "lng": 106.897766,
      "alt": 4175,
      "spd": 178,
      "ts": 1765104382,
      "hd": 247
    },
    {
      "lat": -6.038896,
      "lng": 106.902748,
      "alt": 4200,
      "spd": 182,
      "ts": 1765104375,
      "hd": 247
    },
    {
      "lat": -6.038244,
      "lng": 106.904404,
      "alt": 4175,
      "spd": 183,
      "ts": 1765104373,
      "hd": 247
    },
    {
      "lat": -6.037546,
      "lng": 106.906021,
      "alt": 4175,
      "spd": 184,
      "ts": 1765104371,
      "hd": 247
    },
    {
      "lat": -6.036894,
      "lng": 106.907631,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104369,
      "hd": 248
    },
    {
      "lat": -6.036026,
      "lng": 106.909866,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104367,
      "hd": 248
    },
    {
      "lat": -6.035405,
      "lng": 106.911461,
      "alt": 4175,
      "spd": 184,
      "ts": 1765104365,
      "hd": 249
    },
    {
      "lat": -6.034753,
      "lng": 106.91317,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104362,
      "hd": 250
    },
    {
      "lat": -6.034008,
      "lng": 106.915154,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104360,
      "hd": 250
    },
    {
      "lat": -6.033325,
      "lng": 106.917038,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104358,
      "hd": 250
    },
    {
      "lat": -6.032639,
      "lng": 106.9189,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104356,
      "hd": 250
    },
    {
      "lat": -6.032053,
      "lng": 106.920509,
      "alt": 4175,
      "spd": 184,
      "ts": 1765104354,
      "hd": 250
    },
    {
      "lat": -6.03154,
      "lng": 106.922066,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104351,
      "hd": 250
    },
    {
      "lat": -6.030842,
      "lng": 106.924011,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104349,
      "hd": 251
    },
    {
      "lat": -6.030377,
      "lng": 106.925385,
      "alt": 4150,
      "spd": 184,
      "ts": 1765104347,
      "hd": 251
    },
    {
      "lat": -6.029818,
      "lng": 106.926994,
      "alt": 4150,
      "spd": 185,
      "ts": 1765104345,
      "hd": 252
    },
    {
      "lat": -6.029114,
      "lng": 106.929138,
      "alt": 4150,
      "spd": 184,
      "ts": 1765104343,
      "hd": 253
    },
    {
      "lat": -6.02861,
      "lng": 106.930679,
      "alt": 4150,
      "spd": 185,
      "ts": 1765104341,
      "hd": 254
    },
    {
      "lat": -6.028003,
      "lng": 106.932869,
      "alt": 4150,
      "spd": 185,
      "ts": 1765104338,
      "hd": 256
    },
    {
      "lat": -6.027584,
      "lng": 106.934525,
      "alt": 4150,
      "spd": 185,
      "ts": 1765104336,
      "hd": 257
    },
    {
      "lat": -6.027211,
      "lng": 106.936134,
      "alt": 4150,
      "spd": 185,
      "ts": 1765104334,
      "hd": 260
    },
    {
      "lat": -6.026793,
      "lng": 106.938263,
      "alt": 4175,
      "spd": 185,
      "ts": 1765104332,
      "hd": 264
    },
    {
      "lat": -6.026596,
      "lng": 106.939896,
      "alt": 4150,
      "spd": 187,
      "ts": 1765104330,
      "hd": 266
    },
    {
      "lat": -6.02642,
      "lng": 106.942146,
      "alt": 4150,
      "spd": 188,
      "ts": 1765104328,
      "hd": 269
    },
    {
      "lat": -6.026459,
      "lng": 106.947807,
      "alt": 4150,
      "spd": 191,
      "ts": 1765104321,
      "hd": 271
    },
    {
      "lat": -6.026653,
      "lng": 106.955315,
      "alt": 4150,
      "spd": 195,
      "ts": 1765104312,
      "hd": 271
    },
    {
      "lat": -6.026793,
      "lng": 106.961708,
      "alt": 4150,
      "spd": 201,
      "ts": 1765104305,
      "hd": 271
    },
    {
      "lat": -6.026962,
      "lng": 106.968338,
      "alt": 4175,
      "spd": 208,
      "ts": 1765104299,
      "hd": 271
    },
    {
      "lat": -6.027145,
      "lng": 106.976295,
      "alt": 4175,
      "spd": 217,
      "ts": 1765104290,
      "hd": 271
    },
    {
      "lat": -6.027305,
      "lng": 106.982872,
      "alt": 4150,
      "spd": 224,
      "ts": 1765104284,
      "hd": 271
    },
    {
      "lat": -6.027584,
      "lng": 106.992393,
      "alt": 4150,
      "spd": 232,
      "ts": 1765104275,
      "hd": 271
    },
    {
      "lat": -6.027832,
      "lng": 107.001671,
      "alt": 4150,
      "spd": 242,
      "ts": 1765104266,
      "hd": 271
    },
    {
      "lat": -6.028003,
      "lng": 107.009537,
      "alt": 4225,
      "spd": 245,
      "ts": 1765104259,
      "hd": 271
    },
    {
      "lat": -6.028189,
      "lng": 107.018677,
      "alt": 4350,
      "spd": 247,
      "ts": 1765104251,
      "hd": 271
    },
    {
      "lat": -6.028328,
      "lng": 107.026726,
      "alt": 4500,
      "spd": 248,
      "ts": 1765104244,
      "hd": 271
    },
    {
      "lat": -6.028561,
      "lng": 107.036057,
      "alt": 4625,
      "spd": 251,
      "ts": 1765104236,
      "hd": 271
    },
    {
      "lat": -6.028748,
      "lng": 107.044243,
      "alt": 4750,
      "spd": 252,
      "ts": 1765104229,
      "hd": 271
    },
    {
      "lat": -6.029068,
      "lng": 107.059998,
      "alt": 5025,
      "spd": 255,
      "ts": 1765104216,
      "hd": 271
    },
    {
      "lat": -6.029388,
      "lng": 107.074799,
      "alt": 5250,
      "spd": 258,
      "ts": 1765104203,
      "hd": 271
    },
    {
      "lat": -6.0298,
      "lng": 107.090958,
      "alt": 5575,
      "spd": 258,
      "ts": 1765104190,
      "hd": 271
    },
    {
      "lat": -6.030284,
      "lng": 107.108604,
      "alt": 5975,
      "spd": 258,
      "ts": 1765104175,
      "hd": 271
    },
    {
      "lat": -6.030749,
      "lng": 107.124374,
      "alt": 6275,
      "spd": 259,
      "ts": 1765104162,
      "hd": 271
    },
    {
      "lat": -6.031122,
      "lng": 107.139809,
      "alt": 6525,
      "spd": 261,
      "ts": 1765104149,
      "hd": 271
    },
    {
      "lat": -6.031586,
      "lng": 107.158546,
      "alt": 6875,
      "spd": 263,
      "ts": 1765104134,
      "hd": 271
    },
    {
      "lat": -6.03196,
      "lng": 107.173859,
      "alt": 7175,
      "spd": 264,
      "ts": 1765104121,
      "hd": 271
    },
    {
      "lat": -6.032318,
      "lng": 107.189926,
      "alt": 7500,
      "spd": 265,
      "ts": 1765104108,
      "hd": 271
    },
    {
      "lat": -6.032776,
      "lng": 107.208595,
      "alt": 7875,
      "spd": 265,
      "ts": 1765104093,
      "hd": 271
    },
    {
      "lat": -6.03317,
      "lng": 107.225281,
      "alt": 8175,
      "spd": 267,
      "ts": 1765104080,
      "hd": 271
    },
    {
      "lat": -6.033554,
      "lng": 107.242065,
      "alt": 8500,
      "spd": 268,
      "ts": 1765104066,
      "hd": 271
    },
    {
      "lat": -6.033915,
      "lng": 107.257866,
      "alt": 8800,
      "spd": 268,
      "ts": 1765104053,
      "hd": 271
    },
    {
      "lat": -6.034241,
      "lng": 107.274246,
      "alt": 9150,
      "spd": 268,
      "ts": 1765104040,
      "hd": 271
    },
    {
      "lat": -6.03466,
      "lng": 107.293045,
      "alt": 9525,
      "spd": 269,
      "ts": 1765104025,
      "hd": 271
    },
    {
      "lat": -6.035032,
      "lng": 107.308395,
      "alt": 9775,
      "spd": 272,
      "ts": 1765104013,
      "hd": 271
    },
    {
      "lat": -6.035477,
      "lng": 107.325256,
      "alt": 10025,
      "spd": 276,
      "ts": 1765104000,
      "hd": 271
    },
    {
      "lat": -6.035917,
      "lng": 107.344475,
      "alt": 10300,
      "spd": 281,
      "ts": 1765103985,
      "hd": 271
    },
    {
      "lat": -6.036335,
      "lng": 107.36129,
      "alt": 10450,
      "spd": 289,
      "ts": 1765103972,
      "hd": 271
    },
    {
      "lat": -6.036713,
      "lng": 107.378326,
      "alt": 10550,
      "spd": 301,
      "ts": 1765103959,
      "hd": 271
    },
    {
      "lat": -6.037216,
      "lng": 107.396988,
      "alt": 10650,
      "spd": 311,
      "ts": 1765103946,
      "hd": 271
    },
    {
      "lat": -6.037639,
      "lng": 107.415321,
      "alt": 10775,
      "spd": 323,
      "ts": 1765103933,
      "hd": 271
    },
    {
      "lat": -6.038105,
      "lng": 107.43502,
      "alt": 10975,
      "spd": 331,
      "ts": 1765103921,
      "hd": 271
    },
    {
      "lat": -6.038617,
      "lng": 107.454765,
      "alt": 11400,
      "spd": 333,
      "ts": 1765103908,
      "hd": 271
    },
    {
      "lat": -6.039185,
      "lng": 107.477386,
      "alt": 11850,
      "spd": 336,
      "ts": 1765103893,
      "hd": 271
    },
    {
      "lat": -6.040386,
      "lng": 107.528595,
      "alt": 12975,
      "spd": 340,
      "ts": 1765103860,
      "hd": 271
    },
    {
      "lat": -6.041519,
      "lng": 107.577797,
      "alt": 13925,
      "spd": 349,
      "ts": 1765103830,
      "hd": 271
    },
    {
      "lat": -6.042618,
      "lng": 107.631477,
      "alt": 15100,
      "spd": 353,
      "ts": 1765103797,
      "hd": 271
    },
    {
      "lat": -6.043991,
      "lng": 107.686127,
      "alt": 16125,
      "spd": 362,
      "ts": 1765103764,
      "hd": 271
    },
    {
      "lat": -6.04532,
      "lng": 107.740982,
      "alt": 17125,
      "spd": 370,
      "ts": 1765103731,
      "hd": 271
    },
    {
      "lat": -6.046484,
      "lng": 107.794441,
      "alt": 18200,
      "spd": 376,
      "ts": 1765103701,
      "hd": 271
    },
    {
      "lat": -6.047699,
      "lng": 107.851433,
      "alt": 19300,
      "spd": 383,
      "ts": 1765103668,
      "hd": 271
    },
    {
      "lat": -6.048858,
      "lng": 107.909134,
      "alt": 20450,
      "spd": 388,
      "ts": 1765103636,
      "hd": 271
    },
    {
      "lat": -6.051605,
      "lng": 107.967949,
      "alt": 21525,
      "spd": 396,
      "ts": 1765103603,
      "hd": 277
    },
    {
      "lat": -6.059891,
      "lng": 108.027946,
      "alt": 22550,
      "spd": 407,
      "ts": 1765103571,
      "hd": 277
    },
    {
      "lat": -6.068457,
      "lng": 108.090218,
      "alt": 23575,
      "spd": 419,
      "ts": 1765103538,
      "hd": 277
    },
    {
      "lat": -6.076789,
      "lng": 108.149605,
      "alt": 24725,
      "spd": 423,
      "ts": 1765103507,
      "hd": 277
    },
    {
      "lat": -6.085122,
      "lng": 108.210075,
      "alt": 25975,
      "spd": 427,
      "ts": 1765103476,
      "hd": 277
    },
    {
      "lat": -6.093887,
      "lng": 108.274078,
      "alt": 26750,
      "spd": 432,
      "ts": 1765103444,
      "hd": 277
    },
    {
      "lat": -6.102859,
      "lng": 108.33931,
      "alt": 27350,
      "spd": 444,
      "ts": 1765103411,
      "hd": 277
    },
    {
      "lat": -6.111471,
      "lng": 108.403473,
      "alt": 27900,
      "spd": 464,
      "ts": 1765103381,
      "hd": 277
    },
    {
      "lat": -6.120735,
      "lng": 108.472519,
      "alt": 28000,
      "spd": 469,
      "ts": 1765103349,
      "hd": 277
    },
    {
      "lat": -6.130234,
      "lng": 108.542175,
      "alt": 28000,
      "spd": 469,
      "ts": 1765103316,
      "hd": 280
    },
    {
      "lat": -6.147782,
      "lng": 108.610275,
      "alt": 28000,
      "spd": 469,
      "ts": 1765103284,
      "hd": 286
    },
    {
      "lat": -6.168137,
      "lng": 108.679039,
      "alt": 28000,
      "spd": 469,
      "ts": 1765103251,
      "hd": 286
    },
    {
      "lat": -6.187134,
      "lng": 108.743141,
      "alt": 28000,
      "spd": 469,
      "ts": 1765103220,
      "hd": 286
    },
    {
      "lat": -6.20636,
      "lng": 108.80822,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103189,
      "hd": 286
    },
    {
      "lat": -6.225152,
      "lng": 108.871956,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103159,
      "hd": 286
    },
    {
      "lat": -6.244949,
      "lng": 108.938705,
      "alt": 28000,
      "spd": 467,
      "ts": 1765103126,
      "hd": 286
    },
    {
      "lat": -6.265137,
      "lng": 109.005882,
      "alt": 28000,
      "spd": 467,
      "ts": 1765103094,
      "hd": 286
    },
    {
      "lat": -6.284459,
      "lng": 109.069901,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103064,
      "hd": 286
    },
    {
      "lat": -6.285762,
      "lng": 109.074257,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103061,
      "hd": 286
    },
    {
      "lat": -6.287159,
      "lng": 109.07885,
      "alt": 28000,
      "spd": 467,
      "ts": 1765103059,
      "hd": 285
    },
    {
      "lat": -6.288416,
      "lng": 109.083206,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103057,
      "hd": 285
    },
    {
      "lat": -6.28949,
      "lng": 109.087212,
      "alt": 28000,
      "spd": 467,
      "ts": 1765103055,
      "hd": 284
    },
    {
      "lat": -6.290697,
      "lng": 109.09182,
      "alt": 28000,
      "spd": 467,
      "ts": 1765103053,
      "hd": 283
    },
    {
      "lat": -6.291814,
      "lng": 109.09623,
      "alt": 28000,
      "spd": 467,
      "ts": 1765103051,
      "hd": 282
    },
    {
      "lat": -6.292885,
      "lng": 109.100677,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103049,
      "hd": 282
    },
    {
      "lat": -6.29393,
      "lng": 109.105553,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103047,
      "hd": 281
    },
    {
      "lat": -6.294937,
      "lng": 109.110435,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103044,
      "hd": 280
    },
    {
      "lat": -6.29599,
      "lng": 109.115791,
      "alt": 28000,
      "spd": 467,
      "ts": 1765103042,
      "hd": 279
    },
    {
      "lat": -6.301497,
      "lng": 109.162994,
      "alt": 28000,
      "spd": 468,
      "ts": 1765103020,
      "hd": 271
    },
    {
      "lat": -6.301357,
      "lng": 109.234642,
      "alt": 28000,
      "spd": 467,
      "ts": 1765102987,
      "hd": 269
    },
    {
      "lat": -6.301311,
      "lng": 109.239616,
      "alt": 28000,
      "spd": 467,
      "ts": 1765102985,
      "hd": 269
    },
    {
      "lat": -6.301264,
      "lng": 109.243973,
      "alt": 28000,
      "spd": 468,
      "ts": 1765102982,
      "hd": 269
    },
    {
      "lat": -6.301208,
      "lng": 109.248329,
      "alt": 28000,
      "spd": 467,
      "ts": 1765102980,
      "hd": 269
    },
    {
      "lat": -6.301208,
      "lng": 109.253075,
      "alt": 28000,
      "spd": 467,
      "ts": 1765102978,
      "hd": 269
    },
    {
      "lat": -6.301117,
      "lng": 109.258705,
      "alt": 28000,
      "spd": 467,
      "ts": 1765102976,
      "hd": 269
    },
    {
      "lat": -6.301078,
      "lng": 109.263298,
      "alt": 28000,
      "spd": 467,
      "ts": 1765102974,
      "hd": 269
    },
    {
      "lat": -6.30098,
      "lng": 109.267601,
      "alt": 28000,
      "spd": 467,
      "ts": 1765102971,
      "hd": 269
    },
    {
      "lat": -6.300985,
      "lng": 109.273048,
      "alt": 28000,
      "spd": 466,
      "ts": 1765102969,
      "hd": 270
    },
    {
      "lat": -6.300985,
      "lng": 109.277168,
      "alt": 28000,
      "spd": 466,
      "ts": 1765102967,
      "hd": 272
    },
    {
      "lat": -6.301163,
      "lng": 109.281937,
      "alt": 28000,
      "spd": 466,
      "ts": 1765102965,
      "hd": 273
    },
    {
      "lat": -6.301404,
      "lng": 109.286026,
      "alt": 28000,
      "spd": 466,
      "ts": 1765102963,
      "hd": 275
    },
    {
      "lat": -6.301776,
      "lng": 109.291,
      "alt": 28000,
      "spd": 466,
      "ts": 1765102961,
      "hd": 277
    },
    {
      "lat": -6.302353,
      "lng": 109.295715,
      "alt": 28000,
      "spd": 466,
      "ts": 1765102959,
      "hd": 279
    },
    {
      "lat": -6.302948,
      "lng": 109.299812,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102957,
      "hd": 280
    },
    {
      "lat": -6.303825,
      "lng": 109.30468,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102954,
      "hd": 282
    },
    {
      "lat": -6.304916,
      "lng": 109.309776,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102952,
      "hd": 283
    },
    {
      "lat": -6.305966,
      "lng": 109.314438,
      "alt": 28000,
      "spd": 464,
      "ts": 1765102950,
      "hd": 285
    },
    {
      "lat": -6.306976,
      "lng": 109.31797,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102948,
      "hd": 287
    },
    {
      "lat": -6.308487,
      "lng": 109.323135,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102945,
      "hd": 289
    },
    {
      "lat": -6.310249,
      "lng": 109.328262,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102943,
      "hd": 290
    },
    {
      "lat": -6.311737,
      "lng": 109.332306,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102941,
      "hd": 293
    },
    {
      "lat": -6.313934,
      "lng": 109.337708,
      "alt": 28000,
      "spd": 464,
      "ts": 1765102939,
      "hd": 294
    },
    {
      "lat": -6.315789,
      "lng": 109.341858,
      "alt": 28000,
      "spd": 465,
      "ts": 1765102937,
      "hd": 296
    },
    {
      "lat": -6.343534,
      "lng": 109.384903,
      "alt": 28000,
      "spd": 464,
      "ts": 1765102913,
      "hd": 306
    },
    {
      "lat": -6.384546,
      "lng": 109.440453,
      "alt": 28000,
      "spd": 462,
      "ts": 1765102880,
      "hd": 306
    },
    {
      "lat": -6.424026,
      "lng": 109.493889,
      "alt": 28000,
      "spd": 461,
      "ts": 1765102849,
      "hd": 306
    },
    {
      "lat": -6.464401,
      "lng": 109.548683,
      "alt": 28000,
      "spd": 452,
      "ts": 1765102817,
      "hd": 306
    },
    {
      "lat": -6.505417,
      "lng": 109.604454,
      "alt": 28000,
      "spd": 450,
      "ts": 1765102784,
      "hd": 306
    },
    {
      "lat": -6.54599,
      "lng": 109.659416,
      "alt": 28000,
      "spd": 449,
      "ts": 1765102752,
      "hd": 306
    },
    {
      "lat": -6.585114,
      "lng": 109.712456,
      "alt": 28000,
      "spd": 447,
      "ts": 1765102720,
      "hd": 306
    },
    {
      "lat": -6.624476,
      "lng": 109.765923,
      "alt": 28025,
      "spd": 433,
      "ts": 1765102687,
      "hd": 306
    },
    {
      "lat": -6.663161,
      "lng": 109.81839,
      "alt": 27475,
      "spd": 432,
      "ts": 1765102655,
      "hd": 306
    },
    {
      "lat": -6.69896,
      "lng": 109.867073,
      "alt": 26975,
      "spd": 432,
      "ts": 1765102625,
      "hd": 306
    },
    {
      "lat": -6.737971,
      "lng": 109.920059,
      "alt": 26300,
      "spd": 424,
      "ts": 1765102592,
      "hd": 306
    },
    {
      "lat": -6.774003,
      "lng": 109.96907,
      "alt": 25550,
      "spd": 416,
      "ts": 1765102561,
      "hd": 306
    },
    {
      "lat": -6.810918,
      "lng": 110.019272,
      "alt": 24600,
      "spd": 411,
      "ts": 1765102529,
      "hd": 306
    },
    {
      "lat": -6.850296,
      "lng": 110.072861,
      "alt": 23450,
      "spd": 409,
      "ts": 1765102494,
      "hd": 306
    },
    {
      "lat": -6.886871,
      "lng": 110.122574,
      "alt": 22425,
      "spd": 404,
      "ts": 1765102461,
      "hd": 306
    },
    {
      "lat": -6.920455,
      "lng": 110.168343,
      "alt": 21525,
      "spd": 399,
      "ts": 1765102431,
      "hd": 306
    },
    {
      "lat": -6.956314,
      "lng": 110.217079,
      "alt": 20725,
      "spd": 389,
      "ts": 1765102398,
      "hd": 306
    },
    {
      "lat": -6.989399,
      "lng": 110.262291,
      "alt": 19825,
      "spd": 382,
      "ts": 1765102367,
      "hd": 306
    },
    {
      "lat": -7.022781,
      "lng": 110.307762,
      "alt": 18750,
      "spd": 380,
      "ts": 1765102335,
      "hd": 306
    },
    {
      "lat": -7.084785,
      "lng": 110.392044,
      "alt": 16625,
      "spd": 369,
      "ts": 1765102275,
      "hd": 306
    },
    {
      "lat": -7.116394,
      "lng": 110.435234,
      "alt": 15550,
      "spd": 358,
      "ts": 1765102243,
      "hd": 306
    },
    {
      "lat": -7.146561,
      "lng": 110.4767,
      "alt": 14350,
      "spd": 352,
      "ts": 1765102212,
      "hd": 306
    },
    {
      "lat": -7.148888,
      "lng": 110.479889,
      "alt": 14250,
      "spd": 352,
      "ts": 1765102210,
      "hd": 305
    },
    {
      "lat": -7.150796,
      "lng": 110.482544,
      "alt": 14175,
      "spd": 351,
      "ts": 1765102208,
      "hd": 305
    },
    {
      "lat": -7.152924,
      "lng": 110.485451,
      "alt": 14100,
      "spd": 351,
      "ts": 1765102206,
      "hd": 305
    },
    {
      "lat": -7.155304,
      "lng": 110.488754,
      "alt": 14000,
      "spd": 351,
      "ts": 1765102203,
      "hd": 305
    },
    {
      "lat": -7.157313,
      "lng": 110.491539,
      "alt": 13900,
      "spd": 351,
      "ts": 1765102201,
      "hd": 305
    },
    {
      "lat": -7.159688,
      "lng": 110.49485,
      "alt": 13800,
      "spd": 349,
      "ts": 1765102199,
      "hd": 306
    },
    {
      "lat": -7.161621,
      "lng": 110.497505,
      "alt": 13725,
      "spd": 350,
      "ts": 1765102197,
      "hd": 307
    },
    {
      "lat": -7.163458,
      "lng": 110.499969,
      "alt": 13650,
      "spd": 350,
      "ts": 1765102194,
      "hd": 308
    },
    {
      "lat": -7.16574,
      "lng": 110.502953,
      "alt": 13550,
      "spd": 350,
      "ts": 1765102192,
      "hd": 309
    },
    {
      "lat": -7.168076,
      "lng": 110.505844,
      "alt": 13450,
      "spd": 349,
      "ts": 1765102190,
      "hd": 310
    },
    {
      "lat": -7.170348,
      "lng": 110.508583,
      "alt": 13375,
      "spd": 349,
      "ts": 1765102188,
      "hd": 311
    },
    {
      "lat": -7.172287,
      "lng": 110.510773,
      "alt": 13325,
      "spd": 348,
      "ts": 1765102186,
      "hd": 312
    },
    {
      "lat": -7.175217,
      "lng": 110.514038,
      "alt": 13225,
      "spd": 347,
      "ts": 1765102183,
      "hd": 314
    },
    {
      "lat": -7.177331,
      "lng": 110.516258,
      "alt": 13150,
      "spd": 347,
      "ts": 1765102181,
      "hd": 315
    },
    {
      "lat": -7.211221,
      "lng": 110.543388,
      "alt": 12325,
      "spd": 332,
      "ts": 1765102154,
      "hd": 325
    },
    {
      "lat": -7.228631,
      "lng": 110.555466,
      "alt": 11950,
      "spd": 324,
      "ts": 1765102140,
      "hd": 325
    },
    {
      "lat": -7.245297,
      "lng": 110.566925,
      "alt": 11725,
      "spd": 307,
      "ts": 1765102127,
      "hd": 325
    },
    {
      "lat": -7.262242,
      "lng": 110.578438,
      "alt": 11475,
      "spd": 290,
      "ts": 1765102112,
      "hd": 326
    },
    {
      "lat": -7.276906,
      "lng": 110.588188,
      "alt": 11250,
      "spd": 274,
      "ts": 1765102099,
      "hd": 326
    },
    {
      "lat": -7.27914,
      "lng": 110.589661,
      "alt": 11175,
      "spd": 272,
      "ts": 1765102097,
      "hd": 326
    },
    {
      "lat": -7.281375,
      "lng": 110.591125,
      "alt": 11100,
      "spd": 272,
      "ts": 1765102094,
      "hd": 326
    },
    {
      "lat": -7.283936,
      "lng": 110.592827,
      "alt": 10975,
      "spd": 272,
      "ts": 1765102092,
      "hd": 326
    },
    {
      "lat": -7.286682,
      "lng": 110.594666,
      "alt": 10875,
      "spd": 272,
      "ts": 1765102090,
      "hd": 326
    },
    {
      "lat": -7.288777,
      "lng": 110.596054,
      "alt": 10775,
      "spd": 272,
      "ts": 1765102087,
      "hd": 325
    },
    {
      "lat": -7.291168,
      "lng": 110.597687,
      "alt": 10675,
      "spd": 272,
      "ts": 1765102085,
      "hd": 326
    },
    {
      "lat": -7.293365,
      "lng": 110.599182,
      "alt": 10575,
      "spd": 271,
      "ts": 1765102083,
      "hd": 326
    },
    {
      "lat": -7.295471,
      "lng": 110.600578,
      "alt": 10475,
      "spd": 272,
      "ts": 1765102081,
      "hd": 327
    },
    {
      "lat": -7.300275,
      "lng": 110.60363,
      "alt": 10275,
      "spd": 271,
      "ts": 1765102076,
      "hd": 328
    },
    {
      "lat": -7.305222,
      "lng": 110.606628,
      "alt": 10075,
      "spd": 271,
      "ts": 1765102072,
      "hd": 331
    },
    {
      "lat": -7.320386,
      "lng": 110.613617,
      "alt": 9550,
      "spd": 267,
      "ts": 1765102059,
      "hd": 337
    },
    {
      "lat": -7.335236,
      "lng": 110.61982,
      "alt": 9025,
      "spd": 263,
      "ts": 1765102045,
      "hd": 336
    },
    {
      "lat": -7.350133,
      "lng": 110.626122,
      "alt": 8350,
      "spd": 266,
      "ts": 1765102032,
      "hd": 337
    },
    {
      "lat": -7.365189,
      "lng": 110.632462,
      "alt": 7625,
      "spd": 272,
      "ts": 1765102019,
      "hd": 337
    },
    {
      "lat": -7.380159,
      "lng": 110.638809,
      "alt": 6875,
      "spd": 280,
      "ts": 1765102007,
      "hd": 337
    },
    {
      "lat": -7.3965,
      "lng": 110.6455,
      "alt": 6200,
      "spd": 283,
      "ts": 1765101993,
      "hd": 337
    },
    {
      "lat": -7.412652,
      "lng": 110.652214,
      "alt": 5650,
      "spd": 280,
      "ts": 1765101980,
      "hd": 337
    },
    {
      "lat": -7.428085,
      "lng": 110.658722,
      "alt": 5200,
      "spd": 275,
      "ts": 1765101967,
      "hd": 336
    },
    {
      "lat": -7.438629,
      "lng": 110.663246,
      "alt": 4900,
      "spd": 272,
      "ts": 1765101958,
      "hd": 336
    },
    {
      "lat": -7.448963,
      "lng": 110.667603,
      "alt": 4625,
      "spd": 265,
      "ts": 1765101949,
      "hd": 337
    },
    {
      "lat": -7.45697,
      "lng": 110.670959,
      "alt": 4425,
      "spd": 260,
      "ts": 1765101942,
      "hd": 337
    },
    {
      "lat": -7.464279,
      "lng": 110.673996,
      "alt": 4175,
      "spd": 258,
      "ts": 1765101936,
      "hd": 337
    },
    {
      "lat": -7.473907,
      "lng": 110.677948,
      "alt": 3825,
      "spd": 256,
      "ts": 1765101927,
      "hd": 337
    },
    {
      "lat": -7.476336,
      "lng": 110.678925,
      "alt": 3725,
      "spd": 255,
      "ts": 1765101924,
      "hd": 337
    },
    {
      "lat": -7.478943,
      "lng": 110.680038,
      "alt": 3650,
      "spd": 254,
      "ts": 1765101922,
      "hd": 338
    },
    {
      "lat": -7.48114,
      "lng": 110.680923,
      "alt": 3550,
      "spd": 253,
      "ts": 1765101920,
      "hd": 338
    },
    {
      "lat": -7.484017,
      "lng": 110.682045,
      "alt": 3450,
      "spd": 253,
      "ts": 1765101918,
      "hd": 338
    },
    {
      "lat": -7.486763,
      "lng": 110.683136,
      "alt": 3375,
      "spd": 252,
      "ts": 1765101915,
      "hd": 338
    },
    {
      "lat": -7.488626,
      "lng": 110.683846,
      "alt": 3300,
      "spd": 250,
      "ts": 1765101913,
      "hd": 339
    },
    {
      "lat": -7.490936,
      "lng": 110.684692,
      "alt": 3250,
      "spd": 248,
      "ts": 1765101911,
      "hd": 339
    },
    {
      "lat": -7.493637,
      "lng": 110.685722,
      "alt": 3200,
      "spd": 245,
      "ts": 1765101909,
      "hd": 339
    },
    {
      "lat": -7.49626,
      "lng": 110.686691,
      "alt": 3150,
      "spd": 244,
      "ts": 1765101907,
      "hd": 339
    },
    {
      "lat": -7.498588,
      "lng": 110.687538,
      "alt": 3075,
      "spd": 241,
      "ts": 1765101904,
      "hd": 339
    },
    {
      "lat": -7.500823,
      "lng": 110.688347,
      "alt": 3025,
      "spd": 239,
      "ts": 1765101902,
      "hd": 339
    },
    {
      "lat": -7.503429,
      "lng": 110.689293,
      "alt": 2975,
      "spd": 236,
      "ts": 1765101900,
      "hd": 338
    },
    {
      "lat": -7.505402,
      "lng": 110.690094,
      "alt": 2925,
      "spd": 231,
      "ts": 1765101898,
      "hd": 334
    },
    {
      "lat": -7.507433,
      "lng": 110.690948,
      "alt": 2875,
      "spd": 228,
      "ts": 1765101896,
      "hd": 331
    },
    {
      "lat": -7.509435,
      "lng": 110.69194,
      "alt": 2850,
      "spd": 225,
      "ts": 1765101893,
      "hd": 327
    },
    {
      "lat": -7.511673,
      "lng": 110.693306,
      "alt": 2775,
      "spd": 222,
      "ts": 1765101891,
      "hd": 322
    },
    {
      "lat": -7.513138,
      "lng": 110.694328,
      "alt": 2750,
      "spd": 218,
      "ts": 1765101889,
      "hd": 318
    },
    {
      "lat": -7.514928,
      "lng": 110.695824,
      "alt": 2675,
      "spd": 213,
      "ts": 1765101887,
      "hd": 311
    },
    {
      "lat": -7.51665,
      "lng": 110.697433,
      "alt": 2625,
      "spd": 210,
      "ts": 1765101885,
      "hd": 307
    },
    {
      "lat": -7.518326,
      "lng": 110.699524,
      "alt": 2575,
      "spd": 206,
      "ts": 1765101883,
      "hd": 303
    },
    {
      "lat": -7.51935,
      "lng": 110.700943,
      "alt": 2550,
      "spd": 200,
      "ts": 1765101880,
      "hd": 296
    },
    {
      "lat": -7.520554,
      "lng": 110.702896,
      "alt": 2500,
      "spd": 198,
      "ts": 1765101878,
      "hd": 295
    },
    {
      "lat": -7.521469,
      "lng": 110.704803,
      "alt": 2450,
      "spd": 195,
      "ts": 1765101876,
      "hd": 290
    },
    {
      "lat": -7.52211,
      "lng": 110.706482,
      "alt": 2425,
      "spd": 189,
      "ts": 1765101874,
      "hd": 283
    },
    {
      "lat": -7.522568,
      "lng": 110.708115,
      "alt": 2375,
      "spd": 186,
      "ts": 1765101872,
      "hd": 278
    },
    {
      "lat": -7.522934,
      "lng": 110.710114,
      "alt": 2325,
      "spd": 183,
      "ts": 1765101869,
      "hd": 270
    },
    {
      "lat": -7.523071,
      "lng": 110.712158,
      "alt": 2250,
      "spd": 181,
      "ts": 1765101867,
      "hd": 268
    },
    {
      "lat": -7.522522,
      "lng": 110.719421,
      "alt": 2100,
      "spd": 165,
      "ts": 1765101858,
      "hd": 262
    },
    {
      "lat": -7.521771,
      "lng": 110.724762,
      "alt": 2000,
      "spd": 156,
      "ts": 1765101851,
      "hd": 262
    },
    {
      "lat": -7.521585,
      "lng": 110.726181,
      "alt": 1975,
      "spd": 153,
      "ts": 1765101849,
      "hd": 262
    },
    {
      "lat": -7.521332,
      "lng": 110.728035,
      "alt": 1900,
      "spd": 152,
      "ts": 1765101847,
      "hd": 262
    },
    {
      "lat": -7.521119,
      "lng": 110.729782,
      "alt": 1825,
      "spd": 151,
      "ts": 1765101844,
      "hd": 262
    },
    {
      "lat": -7.52092,
      "lng": 110.731293,
      "alt": 1725,
      "spd": 151,
      "ts": 1765101842,
      "hd": 262
    },
    {
      "lat": -7.520691,
      "lng": 110.733063,
      "alt": 1650,
      "spd": 151,
      "ts": 1765101840,
      "hd": 262
    },
    {
      "lat": -7.520508,
      "lng": 110.734459,
      "alt": 1575,
      "spd": 151,
      "ts": 1765101838,
      "hd": 262
    },
    {
      "lat": -7.519816,
      "lng": 110.739113,
      "alt": 1300,
      "spd": 151,
      "ts": 1765101831,
      "hd": 260
    },
    {
      "lat": -7.518997,
      "lng": 110.743629,
      "alt": 1025,
      "spd": 153,
      "ts": 1765101824,
      "hd": 258
    },
    {
      "lat": -7.518,
      "lng": 110.748344,
      "alt": 750,
      "spd": 153,
      "ts": 1765101817,
      "hd": 257
    },
    {
      "lat": -7.516983,
      "lng": 110.753128,
      "alt": 550,
      "spd": 148,
      "ts": 1765101810,
      "hd": 257
    },
    {
      "lat": -7.515656,
      "lng": 110.759178,
      "alt": 525,
      "spd": 120,
      "ts": 1765101801,
      "hd": 257
    },
    {
      "lat": -7.5153,
      "lng": 110.760605,
      "alt": 525,
      "spd": 109,
      "ts": 1765101799,
      "hd": 257
    },
    {
      "lat": -7.515114,
      "lng": 110.761505,
      "alt": 525,
      "spd": 102,
      "ts": 1765101797,
      "hd": 257
    },
    {
      "lat": -7.514877,
      "lng": 110.762627,
      "alt": 525,
      "spd": 94,
      "ts": 1765101794,
      "hd": 257
    },
    {
      "lat": -7.514648,
      "lng": 110.763641,
      "alt": 0,
      "spd": 84,
      "ts": 1765101792,
      "hd": 255
    },
    {
      "lat": -7.514156,
      "lng": 110.765839,
      "alt": 0,
      "spd": 59,
      "ts": 1765101786,
      "hd": 255
    },
    {
      "lat": -7.514053,
      "lng": 110.766281,
      "alt": 0,
      "spd": 49,
      "ts": 1765101784,
      "hd": 255
    },
    {
      "lat": -7.513927,
      "lng": 110.766861,
      "alt": 0,
      "spd": 40,
      "ts": 1765101782,
      "hd": 255
    },
    {
      "lat": -7.51388,
      "lng": 110.767075,
      "alt": 0,
      "spd": 35,
      "ts": 1765101781,
      "hd": 255
    },
    {
      "lat": -7.513767,
      "lng": 110.767487,
      "alt": 0,
      "spd": 20,
      "ts": 1765101778,
      "hd": 255
    },
    {
      "lat": -7.513717,
      "lng": 110.767746,
      "alt": 0,
      "spd": 12,
      "ts": 1765101776,
      "hd": 258
    },
    {
      "lat": -7.513671,
      "lng": 110.768005,
      "alt": 0,
      "spd": 3,
      "ts": 1765101769,
      "hd": 258
    },
    {
      "lat": -7.513641,
      "lng": 110.768219,
      "alt": 0,
      "spd": 5,
      "ts": 1765101754,
      "hd": 244
    },
    {
      "lat": -7.513504,
      "lng": 110.76844,
      "alt": 0,
      "spd": 6,
      "ts": 1765101743,
      "hd": 171
    },
    {
      "lat": -7.513287,
      "lng": 110.768318,
      "alt": 0,
      "spd": 7,
      "ts": 1765101733,
      "hd": 67
    },
    {
      "lat": -7.51345,
      "lng": 110.768105,
      "alt": 0,
      "spd": 8,
      "ts": 1765101725,
      "hd": 39
    },
    {
      "lat": -7.513659,
      "lng": 110.767899,
      "alt": 0,
      "spd": 10,
      "ts": 1765101718,
      "hd": 61
    },
    {
      "lat": -7.513764,
      "lng": 110.767662,
      "alt": 0,
      "spd": 11,
      "ts": 1765101712,
      "hd": 75
    },
    {
      "lat": -7.513847,
      "lng": 110.767265,
      "alt": 0,
      "spd": 14,
      "ts": 1765101705,
      "hd": 75
    },
    {
      "lat": -7.513962,
      "lng": 110.766792,
      "alt": 0,
      "spd": 17,
      "ts": 1765101699,
      "hd": 75
    },
    {
      "lat": -7.51409,
      "lng": 110.766205,
      "alt": 0,
      "spd": 20,
      "ts": 1765101691,
      "hd": 75
    },
    {
      "lat": -7.514148,
      "lng": 110.765945,
      "alt": 0,
      "spd": 20,
      "ts": 1765101688,
      "hd": 75
    },
    {
      "lat": -7.514218,
      "lng": 110.765625,
      "alt": 0,
      "spd": 22,
      "ts": 1765101685,
      "hd": 78
    },
    {
      "lat": -7.514265,
      "lng": 110.765381,
      "alt": 0,
      "spd": 23,
      "ts": 1765101682,
      "hd": 78
    },
    {
      "lat": -7.514323,
      "lng": 110.765129,
      "alt": 0,
      "spd": 24,
      "ts": 1765101680,
      "hd": 78
    },
    {
      "lat": -7.514374,
      "lng": 110.764885,
      "alt": 0,
      "spd": 23,
      "ts": 1765101678,
      "hd": 78
    },
    {
      "lat": -7.514427,
      "lng": 110.764648,
      "alt": 0,
      "spd": 24,
      "ts": 1765101675,
      "hd": 78
    },
    {
      "lat": -7.514509,
      "lng": 110.764328,
      "alt": 0,
      "spd": 25,
      "ts": 1765101673,
      "hd": 75
    },
    {
      "lat": -7.514555,
      "lng": 110.764099,
      "alt": 0,
      "spd": 25,
      "ts": 1765101670,
      "hd": 78
    },
    {
      "lat": -7.514637,
      "lng": 110.763756,
      "alt": 0,
      "spd": 25,
      "ts": 1765101668,
      "hd": 75
    },
    {
      "lat": -7.514694,
      "lng": 110.763496,
      "alt": 0,
      "spd": 24,
      "ts": 1765101665,
      "hd": 75
    },
    {
      "lat": -7.514753,
      "lng": 110.763214,
      "alt": 0,
      "spd": 24,
      "ts": 1765101663,
      "hd": 78
    },
    {
      "lat": -7.5149,
      "lng": 110.762543,
      "alt": 0,
      "spd": 23,
      "ts": 1765101657,
      "hd": 78
    },
    {
      "lat": -7.514963,
      "lng": 110.762268,
      "alt": 0,
      "spd": 23,
      "ts": 1765101654,
      "hd": 78
    },
    {
      "lat": -7.515038,
      "lng": 110.76194,
      "alt": 0,
      "spd": 25,
      "ts": 1765101651,
      "hd": 75
    },
    {
      "lat": -7.51509,
      "lng": 110.761688,
      "alt": 0,
      "spd": 27,
      "ts": 1765101649,
      "hd": 75
    },
    {
      "lat": -7.515161,
      "lng": 110.761391,
      "alt": 0,
      "spd": 29,
      "ts": 1765101646,
      "hd": 75
    },
    {
      "lat": -7.515232,
      "lng": 110.761078,
      "alt": 0,
      "spd": 29,
      "ts": 1765101644,
      "hd": 75
    },
    {
      "lat": -7.515312,
      "lng": 110.760727,
      "alt": 0,
      "spd": 28,
      "ts": 1765101641,
      "hd": 75
    },
    {
      "lat": -7.515404,
      "lng": 110.76033,
      "alt": 0,
      "spd": 27,
      "ts": 1765101638,
      "hd": 78
    },
    {
      "lat": -7.515463,
      "lng": 110.760056,
      "alt": 0,
      "spd": 27,
      "ts": 1765101636,
      "hd": 78
    },
    {
      "lat": -7.515522,
      "lng": 110.759743,
      "alt": 0,
      "spd": 27,
      "ts": 1765101634,
      "hd": 78
    },
    {
      "lat": -7.51558,
      "lng": 110.759506,
      "alt": 0,
      "spd": 26,
      "ts": 1765101632,
      "hd": 75
    },
    {
      "lat": -7.515649,
      "lng": 110.759201,
      "alt": 0,
      "spd": 26,
      "ts": 1765101630,
      "hd": 75
    },
    {
      "lat": -7.515719,
      "lng": 110.758919,
      "alt": 0,
      "spd": 25,
      "ts": 1765101627,
      "hd": 75
    },
    {
      "lat": -7.515777,
      "lng": 110.758621,
      "alt": 0,
      "spd": 25,
      "ts": 1765101625,
      "hd": 75
    },
    {
      "lat": -7.515873,
      "lng": 110.758217,
      "alt": 0,
      "spd": 24,
      "ts": 1765101621,
      "hd": 78
    },
    {
      "lat": -7.515929,
      "lng": 110.757942,
      "alt": 0,
      "spd": 25,
      "ts": 1765101619,
      "hd": 75
    },
    {
      "lat": -7.51601,
      "lng": 110.757576,
      "alt": 0,
      "spd": 28,
      "ts": 1765101616,
      "hd": 78
    },
    {
      "lat": -7.51609,
      "lng": 110.757225,
      "alt": 0,
      "spd": 28,
      "ts": 1765101613,
      "hd": 75
    },
    {
      "lat": -7.51615,
      "lng": 110.756966,
      "alt": 0,
      "spd": 28,
      "ts": 1765101611,
      "hd": 75
    },
    {
      "lat": -7.51622,
      "lng": 110.756645,
      "alt": 0,
      "spd": 27,
      "ts": 1765101608,
      "hd": 75
    },
    {
      "lat": -7.516278,
      "lng": 110.756386,
      "alt": 0,
      "spd": 27,
      "ts": 1765101606,
      "hd": 75
    },
    {
      "lat": -7.516411,
      "lng": 110.755768,
      "alt": 0,
      "spd": 27,
      "ts": 1765101601,
      "hd": 78
    },
    {
      "lat": -7.516468,
      "lng": 110.755501,
      "alt": 0,
      "spd": 26,
      "ts": 1765101599,
      "hd": 75
    },
    {
      "lat": -7.516545,
      "lng": 110.755196,
      "alt": 0,
      "spd": 26,
      "ts": 1765101597,
      "hd": 75
    },
    {
      "lat": -7.516605,
      "lng": 110.754929,
      "alt": 0,
      "spd": 25,
      "ts": 1765101595,
      "hd": 75
    },
    {
      "lat": -7.516674,
      "lng": 110.754631,
      "alt": 0,
      "spd": 25,
      "ts": 1765101592,
      "hd": 75
    },
    {
      "lat": -7.516743,
      "lng": 110.754326,
      "alt": 0,
      "spd": 24,
      "ts": 1765101589,
      "hd": 75
    },
    {
      "lat": -7.5168,
      "lng": 110.754066,
      "alt": 0,
      "spd": 23,
      "ts": 1765101587,
      "hd": 75
    },
    {
      "lat": -7.516869,
      "lng": 110.753769,
      "alt": 0,
      "spd": 23,
      "ts": 1765101584,
      "hd": 78
    },
    {
      "lat": -7.516918,
      "lng": 110.753517,
      "alt": 0,
      "spd": 22,
      "ts": 1765101582,
      "hd": 75
    },
    {
      "lat": -7.516983,
      "lng": 110.753258,
      "alt": 0,
      "spd": 21,
      "ts": 1765101579,
      "hd": 75
    },
    {
      "lat": -7.517023,
      "lng": 110.753052,
      "alt": 0,
      "spd": 21,
      "ts": 1765101578,
      "hd": 75
    },
    {
      "lat": -7.517086,
      "lng": 110.752769,
      "alt": 0,
      "spd": 20,
      "ts": 1765101574,
      "hd": 75
    },
    {
      "lat": -7.517132,
      "lng": 110.752548,
      "alt": 0,
      "spd": 19,
      "ts": 1765101572,
      "hd": 78
    },
    {
      "lat": -7.517189,
      "lng": 110.752289,
      "alt": 0,
      "spd": 19,
      "ts": 1765101569,
      "hd": 75
    },
    {
      "lat": -7.517255,
      "lng": 110.752022,
      "alt": 0,
      "spd": 18,
      "ts": 1765101566,
      "hd": 75
    },
    {
      "lat": -7.517313,
      "lng": 110.751762,
      "alt": 0,
      "spd": 17,
      "ts": 1765101563,
      "hd": 75
    },
    {
      "lat": -7.517372,
      "lng": 110.751472,
      "alt": 0,
      "spd": 16,
      "ts": 1765101559,
      "hd": 78
    },
    {
      "lat": -7.517418,
      "lng": 110.751251,
      "alt": 0,
      "spd": 15,
      "ts": 1765101556,
      "hd": 78
    },
    {
      "lat": -7.5175,
      "lng": 110.750877,
      "alt": 0,
      "spd": 14,
      "ts": 1765101551,
      "hd": 75
    },
    {
      "lat": -7.517558,
      "lng": 110.750641,
      "alt": 0,
      "spd": 13,
      "ts": 1765101547,
      "hd": 75
    },
    {
      "lat": -7.517604,
      "lng": 110.750427,
      "alt": 0,
      "spd": 11,
      "ts": 1765101544,
      "hd": 78
    },
    {
      "lat": -7.517651,
      "lng": 110.750153,
      "alt": 0,
      "spd": 10,
      "ts": 1765101538,
      "hd": 87
    },
    {
      "lat": -7.517624,
      "lng": 110.749802,
      "alt": 0,
      "spd": 9,
      "ts": 1765101530,
      "hd": 118
    },
    {
      "lat": -7.517442,
      "lng": 110.74955,
      "alt": 0,
      "spd": 8,
      "ts": 1765101522,
      "hd": 157
    },
    {
      "lat": -7.517235,
      "lng": 110.749474,
      "alt": 0,
      "spd": 8,
      "ts": 1765101516,
      "hd": 165
    }
  ],
  "firstTimestamp": 1765101516,
  "s": "zlOGJQZNRRzCkqB9q5LgmqIirAUu1rfYZfl6TF2l6RaacQZEBGzh9qTngs2SbyJc"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d67d3e5 =R"(
{
  "identification": {
    "id": "3d67d3e5",
    "row": 5744843741,
    "number": {
      "default": "NH76",
      "alternative": null
    },
    "callsign": "ANA76"
  },
  "status": {
    "live": true,
    "text": "Estimated- 20:01",
    "icon": "green",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "estimated",
        "color": "green",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765105296,
        "local": 1765137696
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "B772",
      "text": "Boeing 777-281"
    },
    "countryId": 111,
    "registration": "JA713A",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/6/1174824_1764313307_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11920879",
          "copyright": "IKari",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/704594_1763475474_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11907314",
          "copyright": "ARAKAWA",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/674483_1763041249_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11900705",
          "copyright": "ccyy",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/2238724_1762765572_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11896154",
          "copyright": "Xiaoyue_Wang",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/889847_1762476696_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11892093",
          "copyright": "Kodai.H",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/6/1174824_1764313307.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11920879",
          "copyright": "IKari",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/704594_1763475474.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11907314",
          "copyright": "ARAKAWA",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/674483_1763041249.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11900705",
          "copyright": "ccyy",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/2238724_1762765572.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11896154",
          "copyright": "Xiaoyue_Wang",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/889847_1762476696.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11892093",
          "copyright": "Kodai.H",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1174824_1764313307.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11920879",
          "copyright": "IKari",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/704594_1763475474.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11907314",
          "copyright": "ARAKAWA",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/674483_1763041249.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11900705",
          "copyright": "ccyy",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/2238724_1762765572.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11896154",
          "copyright": "Xiaoyue_Wang",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/889847_1762476696.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11892093",
          "copyright": "Kodai.H",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "86787c"
  },
  "airline": {
    "name": "All Nippon Airways",
    "short": "All Nippon Airways",
    "code": {
      "iata": "NH",
      "icao": "ANA"
    },
    "url": "all-nippon-airways-ana"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Sapporo New Chitose Airport",
      "code": {
        "iata": "CTS",
        "icao": "RJCC"
      },
      "position": {
        "latitude": 42.7752,
        "longitude": 141.6922,
        "altitude": 82,
        "country": {
          "id": 111,
          "name": "Japan",
          "code": "JP",
          "codeLong": "JPN"
        },
        "region": {
          "city": "Sapporo"
        }
      },
      "timezone": {
        "name": "Asia/Tokyo",
        "offset": 32400,
        "offsetHours": "9:00",
        "abbr": "JST",
        "abbrName": "Japan Standard Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.new-chitose-airport.jp/en/",
      "info": {
        "terminal": "D",
        "baggage": null,
        "gate": "10"
      }
    },
    "destination": {
      "name": "Tokyo Haneda International Airport",
      "code": {
        "iata": "HND",
        "icao": "RJTT"
      },
      "position": {
        "latitude": 35.55225,
        "longitude": 139.779602,
        "altitude": 21,
        "country": {
          "id": 111,
          "name": "Japan",
          "code": "JP",
          "codeLong": "JPN"
        },
        "region": {
          "city": "Tokyo"
        }
      },
      "timezone": {
        "name": "Asia/Tokyo",
        "offset": 32400,
        "offsetHours": "9:00",
        "abbr": "JST",
        "abbrName": "Japan Standard Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.tokyo-airport-bldg.co.jp/en/",
      "info": {
        "terminal": "2",
        "baggage": null,
        "gate": null
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d6793d7",
          "number": {
            "default": "NH71"
          }
        },
        "airport": {
          "origin": {
            "name": "Tokyo Haneda International Airport",
            "code": {
              "iata": "HND",
              "icao": "RJTT"
            },
            "position": {
              "latitude": 35.55225,
              "longitude": 139.779602,
              "altitude": 21,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Tokyo"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.tokyo-airport-bldg.co.jp/en/"
          },
          "destination": {
            "name": "Sapporo New Chitose Airport",
            "code": {
              "iata": "CTS",
              "icao": "RJCC"
            },
            "position": {
              "latitude": 42.7752,
              "longitude": 141.6922,
              "altitude": 82,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Sapporo"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.new-chitose-airport.jp/en/"
          }
        },
        "time": {
          "real": {
            "departure": 1765092063
          }
        }
      },
      {
        "identification": {
          "id": "3d673ae0",
          "number": {
            "default": "NH90"
          }
        },
        "airport": {
          "origin": {
            "name": "Ishigaki New Airport",
            "code": {
              "iata": "ISG",
              "icao": "ROIG"
            },
            "position": {
              "latitude": 24.396389,
              "longitude": 124.245003,
              "altitude": 102,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Ishigaki"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": {
            "name": "Tokyo Haneda International Airport",
            "code": {
              "iata": "HND",
              "icao": "RJTT"
            },
            "position": {
              "latitude": 35.55225,
              "longitude": 139.779602,
              "altitude": 21,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Tokyo"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.tokyo-airport-bldg.co.jp/en/"
          }
        },
        "time": {
          "real": {
            "departure": 1765079109
          }
        }
      },
      {
        "identification": {
          "id": "3d66ae25",
          "number": {
            "default": "NH89"
          }
        },
        "airport": {
          "origin": {
            "name": "Tokyo Haneda International Airport",
            "code": {
              "iata": "HND",
              "icao": "RJTT"
            },
            "position": {
              "latitude": 35.55225,
              "longitude": 139.779602,
              "altitude": 21,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Tokyo"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.tokyo-airport-bldg.co.jp/en/"
          },
          "destination": {
            "name": "Ishigaki New Airport",
            "code": {
              "iata": "ISG",
              "icao": "ROIG"
            },
            "position": {
              "latitude": 24.396389,
              "longitude": 124.245003,
              "altitude": 102,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Ishigaki"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1765064246
          }
        }
      },
      {
        "identification": {
          "id": "3d61978d",
          "number": {
            "default": "NH268"
          }
        },
        "airport": {
          "origin": {
            "name": "Fukuoka Airport",
            "code": {
              "iata": "FUK",
              "icao": "RJFF"
            },
            "position": {
              "latitude": 33.585941,
              "longitude": 130.450607,
              "altitude": 32,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Fukuoka"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.fuk-ab.co.jp/english/frame_index.html"
          },
          "destination": {
            "name": "Tokyo Haneda International Airport",
            "code": {
              "iata": "HND",
              "icao": "RJTT"
            },
            "position": {
              "latitude": 35.55225,
              "longitude": 139.779602,
              "altitude": 21,
              "country": {
                "id": 111,
                "name": "Japan",
                "code": "JP",
                "codeLong": "JPN"
              },
              "region": {
                "city": "Tokyo"
              }
            },
            "timezone": {
              "name": "Asia/Tokyo",
              "offset": 32400,
              "offsetHours": "9:00",
              "abbr": "JST",
              "abbrName": "Japan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.tokyo-airport-bldg.co.jp/en/"
          }
        },
        "time": {
          "real": {
            "departure": 1764931610
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 1765099800,
      "arrival": 1765105800
    },
    "real": {
      "departure": 1765100491,
      "arrival": null
    },
    "estimated": {
      "departure": null,
      "arrival": 1765105296
    },
    "other": {
      "eta": 1765105296,
      "updated": 1765101882
    },
    "historical": {
      "flighttime": "4785",
      "delay": "491"
    }
  },
  "trail": [
    {
      "lat": 35.155365,
      "lng": 139.868317,
      "alt": 5850,
      "spd": 203,
      "ts": 1765105046,
      "hd": 313
    },
    {
      "lat": 35.154015,
      "lng": 139.870087,
      "alt": 5850,
      "spd": 203,
      "ts": 1765105044,
      "hd": 313
    },
    {
      "lat": 35.152588,
      "lng": 139.871933,
      "alt": 5850,
      "spd": 203,
      "ts": 1765105042,
      "hd": 313
    },
    {
      "lat": 35.15094,
      "lng": 139.874069,
      "alt": 5850,
      "spd": 203,
      "ts": 1765105040,
      "hd": 312
    },
    {
      "lat": 35.149384,
      "lng": 139.876083,
      "alt": 5875,
      "spd": 203,
      "ts": 1765105038,
      "hd": 312
    },
    {
      "lat": 35.148151,
      "lng": 139.877808,
      "alt": 5875,
      "spd": 203,
      "ts": 1765105036,
      "hd": 312
    },
    {
      "lat": 35.146938,
      "lng": 139.879425,
      "alt": 5875,
      "spd": 204,
      "ts": 1765105033,
      "hd": 311
    },
    {
      "lat": 35.145401,
      "lng": 139.881577,
      "alt": 5875,
      "spd": 204,
      "ts": 1765105031,
      "hd": 310
    },
    {
      "lat": 35.144165,
      "lng": 139.883362,
      "alt": 5875,
      "spd": 203,
      "ts": 1765105029,
      "hd": 309
    },
    {
      "lat": 35.143066,
      "lng": 139.885056,
      "alt": 5850,
      "spd": 204,
      "ts": 1765105027,
      "hd": 307
    },
    {
      "lat": 35.141647,
      "lng": 139.887344,
      "alt": 5850,
      "spd": 203,
      "ts": 1765105025,
      "hd": 305
    },
    {
      "lat": 35.140514,
      "lng": 139.889313,
      "alt": 5850,
      "spd": 204,
      "ts": 1765105023,
      "hd": 301
    },
    {
      "lat": 35.139351,
      "lng": 139.891724,
      "alt": 5850,
      "spd": 204,
      "ts": 1765105020,
      "hd": 297
    },
    {
      "lat": 35.138607,
      "lng": 139.893555,
      "alt": 5850,
      "spd": 203,
      "ts": 1765105018,
      "hd": 291
    },
    {
      "lat": 35.137756,
      "lng": 139.896149,
      "alt": 5850,
      "spd": 203,
      "ts": 1765105016,
      "hd": 286
    },
    {
      "lat": 35.137211,
      "lng": 139.8983,
      "alt": 5850,
      "spd": 202,
      "ts": 1765105014,
      "hd": 282
    },
    {
      "lat": 35.135925,
      "lng": 139.913071,
      "alt": 5850,
      "spd": 202,
      "ts": 1765105001,
      "hd": 272
    },
    {
      "lat": 35.135834,
      "lng": 139.915375,
      "alt": 5850,
      "spd": 202,
      "ts": 1765104999,
      "hd": 272
    },
    {
      "lat": 35.135769,
      "lng": 139.917526,
      "alt": 5850,
      "spd": 202,
      "ts": 1765104997,
      "hd": 272
    },
    {
      "lat": 35.135674,
      "lng": 139.919708,
      "alt": 5850,
      "spd": 202,
      "ts": 1765104995,
      "hd": 272
    },
    {
      "lat": 35.135559,
      "lng": 139.922653,
      "alt": 5850,
      "spd": 202,
      "ts": 1765104993,
      "hd": 271
    },
    {
      "lat": 35.135532,
      "lng": 139.924683,
      "alt": 5850,
      "spd": 202,
      "ts": 1765104991,
      "hd": 271
    },
    {
      "lat": 35.135487,
      "lng": 139.926849,
      "alt": 5875,
      "spd": 202,
      "ts": 1765104989,
      "hd": 271
    },
    {
      "lat": 35.135395,
      "lng": 139.929825,
      "alt": 5875,
      "spd": 201,
      "ts": 1765104986,
      "hd": 271
    },
    {
      "lat": 35.135376,
      "lng": 139.93219,
      "alt": 5875,
      "spd": 201,
      "ts": 1765104984,
      "hd": 270
    },
    {
      "lat": 35.135376,
      "lng": 139.934433,
      "alt": 5875,
      "spd": 201,
      "ts": 1765104982,
      "hd": 269
    },
    {
      "lat": 35.135422,
      "lng": 139.937286,
      "alt": 5850,
      "spd": 203,
      "ts": 1765104980,
      "hd": 268
    },
    {
      "lat": 35.135441,
      "lng": 139.939209,
      "alt": 5850,
      "spd": 204,
      "ts": 1765104978,
      "hd": 267
    },
    {
      "lat": 35.135605,
      "lng": 139.942108,
      "alt": 5875,
      "spd": 204,
      "ts": 1765104975,
      "hd": 265
    },
    {
      "lat": 35.135834,
      "lng": 139.944855,
      "alt": 5850,
      "spd": 204,
      "ts": 1765104973,
      "hd": 263
    },
    {
      "lat": 35.136063,
      "lng": 139.94693,
      "alt": 5850,
      "spd": 204,
      "ts": 1765104971,
      "hd": 260
    },
    {
      "lat": 35.136429,
      "lng": 139.949402,
      "alt": 5850,
      "spd": 206,
      "ts": 1765104969,
      "hd": 254
    },
    {
      "lat": 35.13707,
      "lng": 139.952209,
      "alt": 5850,
      "spd": 207,
      "ts": 1765104967,
      "hd": 250
    },
    {
      "lat": 35.140274,
      "lng": 139.96106,
      "alt": 5850,
      "spd": 214,
      "ts": 1765104958,
      "hd": 241
    },
    {
      "lat": 35.1465,
      "lng": 139.975235,
      "alt": 5850,
      "spd": 225,
      "ts": 1765104945,
      "hd": 241
    },
    {
      "lat": 35.152863,
      "lng": 139.989975,
      "alt": 5850,
      "spd": 225,
      "ts": 1765104932,
      "hd": 242
    },
    {
      "lat": 35.153824,
      "lng": 139.992218,
      "alt": 5850,
      "spd": 224,
      "ts": 1765104930,
      "hd": 242
    },
    {
      "lat": 35.154785,
      "lng": 139.994461,
      "alt": 5850,
      "spd": 224,
      "ts": 1765104928,
      "hd": 242
    },
    {
      "lat": 35.155785,
      "lng": 139.996826,
      "alt": 5850,
      "spd": 224,
      "ts": 1765104926,
      "hd": 242
    },
    {
      "lat": 35.156761,
      "lng": 139.999069,
      "alt": 5850,
      "spd": 223,
      "ts": 1765104924,
      "hd": 242
    },
    {
      "lat": 35.157761,
      "lng": 140.001419,
      "alt": 5850,
      "spd": 223,
      "ts": 1765104922,
      "hd": 242
    },
    {
      "lat": 35.158718,
      "lng": 140.003647,
      "alt": 5850,
      "spd": 222,
      "ts": 1765104920,
      "hd": 241
    },
    {
      "lat": 35.159958,
      "lng": 140.006409,
      "alt": 5850,
      "spd": 222,
      "ts": 1765104918,
      "hd": 241
    },
    {
      "lat": 35.160904,
      "lng": 140.008514,
      "alt": 5850,
      "spd": 222,
      "ts": 1765104916,
      "hd": 241
    },
    {
      "lat": 35.162209,
      "lng": 140.011368,
      "alt": 5850,
      "spd": 222,
      "ts": 1765104913,
      "hd": 240
    },
    {
      "lat": 35.163094,
      "lng": 140.013306,
      "alt": 5850,
      "spd": 223,
      "ts": 1765104911,
      "hd": 239
    },
    {
      "lat": 35.164165,
      "lng": 140.015488,
      "alt": 5850,
      "spd": 223,
      "ts": 1765104909,
      "hd": 238
    },
    {
      "lat": 35.165543,
      "lng": 140.018173,
      "alt": 5850,
      "spd": 223,
      "ts": 1765104907,
      "hd": 236
    },
    {
      "lat": 35.166595,
      "lng": 140.020081,
      "alt": 5850,
      "spd": 224,
      "ts": 1765104905,
      "hd": 233
    },
    {
      "lat": 35.167793,
      "lng": 140.022125,
      "alt": 5850,
      "spd": 223,
      "ts": 1765104903,
      "hd": 230
    },
    {
      "lat": 35.169479,
      "lng": 140.024506,
      "alt": 5825,
      "spd": 224,
      "ts": 1765104901,
      "hd": 226
    },
    {
      "lat": 35.170898,
      "lng": 140.026352,
      "alt": 5825,
      "spd": 225,
      "ts": 1765104898,
      "hd": 222
    },
    {
      "lat": 35.172356,
      "lng": 140.027954,
      "alt": 5825,
      "spd": 225,
      "ts": 1765104896,
      "hd": 219
    },
    {
      "lat": 35.178268,
      "lng": 140.033081,
      "alt": 5850,
      "spd": 226,
      "ts": 1765104890,
      "hd": 211
    },
    {
      "lat": 35.191399,
      "lng": 140.042557,
      "alt": 5950,
      "spd": 230,
      "ts": 1765104875,
      "hd": 209
    },
    {
      "lat": 35.205597,
      "lng": 140.052475,
      "alt": 6100,
      "spd": 234,
      "ts": 1765104860,
      "hd": 209
    },
    {
      "lat": 35.217793,
      "lng": 140.060867,
      "alt": 6200,
      "spd": 240,
      "ts": 1765104847,
      "hd": 209
    },
    {
      "lat": 35.219696,
      "lng": 140.062225,
      "alt": 6225,
      "spd": 240,
      "ts": 1765104845,
      "hd": 209
    },
    {
      "lat": 35.222305,
      "lng": 140.064026,
      "alt": 6250,
      "spd": 241,
      "ts": 1765104843,
      "hd": 209
    },
    {
      "lat": 35.224358,
      "lng": 140.065445,
      "alt": 6250,
      "spd": 242,
      "ts": 1765104841,
      "hd": 209
    },
    {
      "lat": 35.226032,
      "lng": 140.066589,
      "alt": 6275,
      "spd": 243,
      "ts": 1765104839,
      "hd": 209
    },
    {
      "lat": 35.228577,
      "lng": 140.068344,
      "alt": 6300,
      "spd": 245,
      "ts": 1765104836,
      "hd": 209
    },
    {
      "lat": 35.230591,
      "lng": 140.069672,
      "alt": 6300,
      "spd": 245,
      "ts": 1765104834,
      "hd": 208
    },
    {
      "lat": 35.232365,
      "lng": 140.070892,
      "alt": 6325,
      "spd": 247,
      "ts": 1765104832,
      "hd": 208
    },
    {
      "lat": 35.234894,
      "lng": 140.07254,
      "alt": 6350,
      "spd": 249,
      "ts": 1765104830,
      "hd": 208
    },
    {
      "lat": 35.237366,
      "lng": 140.074142,
      "alt": 6375,
      "spd": 250,
      "ts": 1765104828,
      "hd": 207
    },
    {
      "lat": 35.2393,
      "lng": 140.075333,
      "alt": 6375,
      "spd": 251,
      "ts": 1765104825,
      "hd": 206
    },
    {
      "lat": 35.241943,
      "lng": 140.076889,
      "alt": 6400,
      "spd": 253,
      "ts": 1765104823,
      "hd": 205
    },
    {
      "lat": 35.244095,
      "lng": 140.078094,
      "alt": 6425,
      "spd": 254,
      "ts": 1765104821,
      "hd": 203
    },
    {
      "lat": 35.245911,
      "lng": 140.07901,
      "alt": 6450,
      "spd": 255,
      "ts": 1765104819,
      "hd": 201
    },
    {
      "lat": 35.260994,
      "lng": 140.083694,
      "alt": 6575,
      "spd": 260,
      "ts": 1765104806,
      "hd": 189
    },
    {
      "lat": 35.276184,
      "lng": 140.086838,
      "alt": 6675,
      "spd": 264,
      "ts": 1765104794,
      "hd": 189
    },
    {
      "lat": 35.292206,
      "lng": 140.090103,
      "alt": 6775,
      "spd": 272,
      "ts": 1765104781,
      "hd": 189
    },
    {
      "lat": 35.311066,
      "lng": 140.093994,
      "alt": 6925,
      "spd": 280,
      "ts": 1765104766,
      "hd": 189
    },
    {
      "lat": 35.327682,
      "lng": 140.097488,
      "alt": 7050,
      "spd": 283,
      "ts": 1765104753,
      "hd": 189
    },
    {
      "lat": 35.343658,
      "lng": 140.1008,
      "alt": 7175,
      "spd": 282,
      "ts": 1765104740,
      "hd": 189
    },
    {
      "lat": 35.360458,
      "lng": 140.104126,
      "alt": 7325,
      "spd": 286,
      "ts": 1765104727,
      "hd": 188
    },
    {
      "lat": 35.380051,
      "lng": 140.107666,
      "alt": 7525,
      "spd": 284,
      "ts": 1765104713,
      "hd": 187
    },
    {
      "lat": 35.39653,
      "lng": 140.110413,
      "alt": 7650,
      "spd": 282,
      "ts": 1765104700,
      "hd": 187
    },
    {
      "lat": 35.413101,
      "lng": 140.113281,
      "alt": 7775,
      "spd": 284,
      "ts": 1765104687,
      "hd": 188
    },
    {
      "lat": 35.429535,
      "lng": 140.116257,
      "alt": 7850,
      "spd": 282,
      "ts": 1765104674,
      "hd": 188
    },
    {
      "lat": 35.446884,
      "lng": 140.119339,
      "alt": 7925,
      "spd": 284,
      "ts": 1765104661,
      "hd": 188
    },
    {
      "lat": 35.463593,
      "lng": 140.122375,
      "alt": 8050,
      "spd": 285,
      "ts": 1765104649,
      "hd": 188
    },
    {
      "lat": 35.480301,
      "lng": 140.12558,
      "alt": 8150,
      "spd": 286,
      "ts": 1765104636,
      "hd": 189
    },
    {
      "lat": 35.499062,
      "lng": 140.129272,
      "alt": 8275,
      "spd": 285,
      "ts": 1765104621,
      "hd": 189
    },
    {
      "lat": 35.515732,
      "lng": 140.132568,
      "alt": 8375,
      "spd": 284,
      "ts": 1765104609,
      "hd": 189
    },
    {
      "lat": 35.534729,
      "lng": 140.136276,
      "alt": 8500,
      "spd": 287,
      "ts": 1765104594,
      "hd": 189
    },
    {
      "lat": 35.551346,
      "lng": 140.139374,
      "alt": 8600,
      "spd": 288,
      "ts": 1765104582,
      "hd": 188
    },
    {
      "lat": 35.570892,
      "lng": 140.142883,
      "alt": 8725,
      "spd": 289,
      "ts": 1765104567,
      "hd": 188
    },
    {
      "lat": 35.590164,
      "lng": 140.14624,
      "alt": 8825,
      "spd": 290,
      "ts": 1765104552,
      "hd": 187
    },
    {
      "lat": 35.607201,
      "lng": 140.148911,
      "alt": 8950,
      "spd": 292,
      "ts": 1765104539,
      "hd": 186
    },
    {
      "lat": 35.624222,
      "lng": 140.151443,
      "alt": 9050,
      "spd": 295,
      "ts": 1765104527,
      "hd": 187
    },
    {
      "lat": 35.642719,
      "lng": 140.154221,
      "alt": 9150,
      "spd": 296,
      "ts": 1765104514,
      "hd": 186
    },
    {
      "lat": 35.662086,
      "lng": 140.157089,
      "alt": 9275,
      "spd": 296,
      "ts": 1765104499,
      "hd": 186
    },
    {
      "lat": 35.678566,
      "lng": 140.159485,
      "alt": 9375,
      "spd": 296,
      "ts": 1765104487,
      "hd": 186
    },
    {
      "lat": 35.698864,
      "lng": 140.16246,
      "alt": 9500,
      "spd": 296,
      "ts": 1765104472,
      "hd": 186
    },
    {
      "lat": 35.716087,
      "lng": 140.164978,
      "alt": 9600,
      "spd": 298,
      "ts": 1765104460,
      "hd": 186
    },
    {
      "lat": 35.736282,
      "lng": 140.167862,
      "alt": 9725,
      "spd": 296,
      "ts": 1765104445,
      "hd": 186
    },
    {
      "lat": 35.753311,
      "lng": 140.170319,
      "alt": 9825,
      "spd": 297,
      "ts": 1765104432,
      "hd": 186
    },
    {
      "lat": 35.770706,
      "lng": 140.172958,
      "alt": 9925,
      "spd": 298,
      "ts": 1765104420,
      "hd": 187
    },
    {
      "lat": 35.788197,
      "lng": 140.175613,
      "alt": 10025,
      "spd": 297,
      "ts": 1765104407,
      "hd": 186
    },
    {
      "lat": 35.806229,
      "lng": 140.178284,
      "alt": 10125,
      "spd": 297,
      "ts": 1765104394,
      "hd": 186
    },
    {
      "lat": 35.824181,
      "lng": 140.180923,
      "alt": 10250,
      "spd": 295,
      "ts": 1765104380,
      "hd": 186
    },
    {
      "lat": 35.84166,
      "lng": 140.183548,
      "alt": 10350,
      "spd": 297,
      "ts": 1765104367,
      "hd": 186
    },
    {
      "lat": 35.859055,
      "lng": 140.186172,
      "alt": 10450,
      "spd": 297,
      "ts": 1765104355,
      "hd": 187
    },
    {
      "lat": 35.879532,
      "lng": 140.189346,
      "alt": 10575,
      "spd": 298,
      "ts": 1765104340,
      "hd": 187
    },
    {
      "lat": 35.896683,
      "lng": 140.191956,
      "alt": 10675,
      "spd": 299,
      "ts": 1765104327,
      "hd": 186
    },
    {
      "lat": 35.913982,
      "lng": 140.194611,
      "alt": 10725,
      "spd": 298,
      "ts": 1765104315,
      "hd": 187
    },
    {
      "lat": 35.93465,
      "lng": 140.197754,
      "alt": 10775,
      "spd": 306,
      "ts": 1765104300,
      "hd": 187
    },
    {
      "lat": 35.955925,
      "lng": 140.200974,
      "alt": 10825,
      "spd": 319,
      "ts": 1765104285,
      "hd": 186
    },
    {
      "lat": 35.975098,
      "lng": 140.203735,
      "alt": 10850,
      "spd": 332,
      "ts": 1765104273,
      "hd": 186
    },
    {
      "lat": 35.997482,
      "lng": 140.206894,
      "alt": 10825,
      "spd": 350,
      "ts": 1765104258,
      "hd": 186
    },
    {
      "lat": 36.019051,
      "lng": 140.209976,
      "alt": 10850,
      "spd": 356,
      "ts": 1765104245,
      "hd": 186
    },
    {
      "lat": 36.043488,
      "lng": 140.213242,
      "alt": 10850,
      "spd": 356,
      "ts": 1765104230,
      "hd": 186
    },
    {
      "lat": 36.0634,
      "lng": 140.215927,
      "alt": 10825,
      "spd": 358,
      "ts": 1765104218,
      "hd": 186
    },
    {
      "lat": 36.087067,
      "lng": 140.219193,
      "alt": 10850,
      "spd": 354,
      "ts": 1765104203,
      "hd": 186
    },
    {
      "lat": 36.108307,
      "lng": 140.222687,
      "alt": 10975,
      "spd": 352,
      "ts": 1765104191,
      "hd": 188
    },
    {
      "lat": 36.131744,
      "lng": 140.227325,
      "alt": 11250,
      "spd": 354,
      "ts": 1765104176,
      "hd": 189
    },
    {
      "lat": 36.152374,
      "lng": 140.231415,
      "alt": 11525,
      "spd": 356,
      "ts": 1765104163,
      "hd": 189
    },
    {
      "lat": 36.206451,
      "lng": 140.242249,
      "alt": 12175,
      "spd": 358,
      "ts": 1765104130,
      "hd": 189
    },
    {
      "lat": 36.259735,
      "lng": 140.252838,
      "alt": 12800,
      "spd": 365,
      "ts": 1765104098,
      "hd": 189
    },
    {
      "lat": 36.312561,
      "lng": 140.263306,
      "alt": 13350,
      "spd": 368,
      "ts": 1765104067,
      "hd": 189
    },
    {
      "lat": 36.36647,
      "lng": 140.273956,
      "alt": 13875,
      "spd": 369,
      "ts": 1765104034,
      "hd": 189
    },
    {
      "lat": 36.421143,
      "lng": 140.285004,
      "alt": 14400,
      "spd": 368,
      "ts": 1765104002,
      "hd": 189
    },
    {
      "lat": 36.473026,
      "lng": 140.295471,
      "alt": 14900,
      "spd": 370,
      "ts": 1765103971,
      "hd": 189
    },
    {
      "lat": 36.526096,
      "lng": 140.306168,
      "alt": 15425,
      "spd": 373,
      "ts": 1765103940,
      "hd": 189
    },
    {
      "lat": 36.579491,
      "lng": 140.316742,
      "alt": 15925,
      "spd": 376,
      "ts": 1765103909,
      "hd": 188
    },
    {
      "lat": 36.633041,
      "lng": 140.32785,
      "alt": 16450,
      "spd": 373,
      "ts": 1765103878,
      "hd": 191
    },
    {
      "lat": 36.688202,
      "lng": 140.342438,
      "alt": 17000,
      "spd": 372,
      "ts": 1765103845,
      "hd": 192
    },
    {
      "lat": 36.740891,
      "lng": 140.356812,
      "alt": 17525,
      "spd": 375,
      "ts": 1765103814,
      "hd": 192
    },
    {
      "lat": 36.797821,
      "lng": 140.372375,
      "alt": 18175,
      "spd": 385,
      "ts": 1765103781,
      "hd": 192
    },
    {
      "lat": 36.851074,
      "lng": 140.386978,
      "alt": 19100,
      "spd": 386,
      "ts": 1765103750,
      "hd": 192
    },
    {
      "lat": 36.907562,
      "lng": 140.402466,
      "alt": 20250,
      "spd": 391,
      "ts": 1765103718,
      "hd": 192
    },
    {
      "lat": 36.962337,
      "lng": 140.41745,
      "alt": 21425,
      "spd": 395,
      "ts": 1765103687,
      "hd": 192
    },
    {
      "lat": 37.017654,
      "lng": 140.432571,
      "alt": 22600,
      "spd": 399,
      "ts": 1765103657,
      "hd": 192
    },
    {
      "lat": 37.074326,
      "lng": 140.447937,
      "alt": 23650,
      "spd": 407,
      "ts": 1765103625,
      "hd": 192
    },
    {
      "lat": 37.132187,
      "lng": 140.463943,
      "alt": 24575,
      "spd": 418,
      "ts": 1765103595,
      "hd": 192
    },
    {
      "lat": 37.191189,
      "lng": 140.480499,
      "alt": 25525,
      "spd": 424,
      "ts": 1765103564,
      "hd": 192
    },
    {
      "lat": 37.253494,
      "lng": 140.497833,
      "alt": 26475,
      "spd": 432,
      "ts": 1765103531,
      "hd": 192
    },
    {
      "lat": 37.314148,
      "lng": 140.514435,
      "alt": 26900,
      "spd": 444,
      "ts": 1765103501,
      "hd": 192
    },
    {
      "lat": 37.379013,
      "lng": 140.532135,
      "alt": 27425,
      "spd": 468,
      "ts": 1765103469,
      "hd": 192
    },
    {
      "lat": 37.445736,
      "lng": 140.550537,
      "alt": 29875,
      "spd": 438,
      "ts": 1765103436,
      "hd": 192
    },
    {
      "lat": 37.50618,
      "lng": 140.56749,
      "alt": 31650,
      "spd": 431,
      "ts": 1765103405,
      "hd": 192
    },
    {
      "lat": 37.568073,
      "lng": 140.584641,
      "alt": 33750,
      "spd": 416,
      "ts": 1765103373,
      "hd": 192
    },
    {
      "lat": 37.630646,
      "lng": 140.601852,
      "alt": 34750,
      "spd": 426,
      "ts": 1765103340,
      "hd": 192
    },
    {
      "lat": 37.692673,
      "lng": 140.619919,
      "alt": 35825,
      "spd": 423,
      "ts": 1765103308,
      "hd": 193
    },
    {
      "lat": 37.755821,
      "lng": 140.637711,
      "alt": 35975,
      "spd": 427,
      "ts": 1765103275,
      "hd": 192
    },
    {
      "lat": 37.816177,
      "lng": 140.654282,
      "alt": 36000,
      "spd": 427,
      "ts": 1765103244,
      "hd": 192
    },
    {
      "lat": 37.875458,
      "lng": 140.670624,
      "alt": 36000,
      "spd": 425,
      "ts": 1765103213,
      "hd": 192
    },
    {
      "lat": 37.933914,
      "lng": 140.686829,
      "alt": 35975,
      "spd": 424,
      "ts": 1765103183,
      "hd": 192
    },
    {
      "lat": 37.995438,
      "lng": 140.703827,
      "alt": 35975,
      "spd": 424,
      "ts": 1765103150,
      "hd": 192
    },
    {
      "lat": 38.055943,
      "lng": 140.720535,
      "alt": 36000,
      "spd": 427,
      "ts": 1765103119,
      "hd": 192
    },
    {
      "lat": 38.11483,
      "lng": 140.736832,
      "alt": 36000,
      "spd": 429,
      "ts": 1765103088,
      "hd": 192
    },
    {
      "lat": 38.174419,
      "lng": 140.753311,
      "alt": 35975,
      "spd": 428,
      "ts": 1765103058,
      "hd": 192
    },
    {
      "lat": 38.236843,
      "lng": 140.770752,
      "alt": 36000,
      "spd": 426,
      "ts": 1765103025,
      "hd": 192
    },
    {
      "lat": 38.2962,
      "lng": 140.787231,
      "alt": 35975,
      "spd": 424,
      "ts": 1765102995,
      "hd": 192
    },
    {
      "lat": 38.356293,
      "lng": 140.804169,
      "alt": 36000,
      "spd": 426,
      "ts": 1765102963,
      "hd": 192
    },
    {
      "lat": 38.415985,
      "lng": 140.820908,
      "alt": 35975,
      "spd": 427,
      "ts": 1765102932,
      "hd": 192
    },
    {
      "lat": 38.480988,
      "lng": 140.83905,
      "alt": 35975,
      "spd": 431,
      "ts": 1765102899,
      "hd": 192
    },
    {
      "lat": 38.540176,
      "lng": 140.855591,
      "alt": 36000,
      "spd": 432,
      "ts": 1765102869,
      "hd": 192
    },
    {
      "lat": 38.604187,
      "lng": 140.873413,
      "alt": 36000,
      "spd": 434,
      "ts": 1765102836,
      "hd": 192
    },
    {
      "lat": 38.663589,
      "lng": 140.890137,
      "alt": 35975,
      "spd": 434,
      "ts": 1765102806,
      "hd": 192
    },
    {
      "lat": 38.72493,
      "lng": 140.907593,
      "alt": 35975,
      "spd": 434,
      "ts": 1765102774,
      "hd": 192
    },
    {
      "lat": 38.786812,
      "lng": 140.924988,
      "alt": 36000,
      "spd": 435,
      "ts": 1765102743,
      "hd": 192
    },
    {
      "lat": 38.846867,
      "lng": 140.942078,
      "alt": 36000,
      "spd": 433,
      "ts": 1765102712,
      "hd": 192
    },
    {
      "lat": 38.90744,
      "lng": 140.959305,
      "alt": 35975,
      "spd": 432,
      "ts": 1765102681,
      "hd": 192
    },
    {
      "lat": 38.967949,
      "lng": 140.976379,
      "alt": 36000,
      "spd": 433,
      "ts": 1765102650,
      "hd": 192
    },
    {
      "lat": 39.033073,
      "lng": 140.994812,
      "alt": 36000,
      "spd": 432,
      "ts": 1765102617,
      "hd": 192
    },
    {
      "lat": 39.092613,
      "lng": 141.01178,
      "alt": 35975,
      "spd": 431,
      "ts": 1765102586,
      "hd": 192
    },
    {
      "lat": 39.153645,
      "lng": 141.029297,
      "alt": 35975,
      "spd": 433,
      "ts": 1765102555,
      "hd": 192
    },
    {
      "lat": 39.215141,
      "lng": 141.046997,
      "alt": 35975,
      "spd": 434,
      "ts": 1765102524,
      "hd": 192
    },
    {
      "lat": 39.278275,
      "lng": 141.064926,
      "alt": 36000,
      "spd": 431,
      "ts": 1765102491,
      "hd": 192
    },
    {
      "lat": 39.340439,
      "lng": 141.082779,
      "alt": 36000,
      "spd": 432,
      "ts": 1765102459,
      "hd": 192
    },
    {
      "lat": 39.401394,
      "lng": 141.100342,
      "alt": 36000,
      "spd": 434,
      "ts": 1765102428,
      "hd": 192
    },
    {
      "lat": 39.46257,
      "lng": 141.118011,
      "alt": 36000,
      "spd": 437,
      "ts": 1765102397,
      "hd": 192
    },
    {
      "lat": 39.522766,
      "lng": 141.13533,
      "alt": 35975,
      "spd": 437,
      "ts": 1765102367,
      "hd": 192
    },
    {
      "lat": 39.586346,
      "lng": 141.153687,
      "alt": 35975,
      "spd": 438,
      "ts": 1765102335,
      "hd": 192
    },
    {
      "lat": 39.704453,
      "lng": 141.187988,
      "alt": 36000,
      "spd": 438,
      "ts": 1765102275,
      "hd": 192
    },
    {
      "lat": 39.749886,
      "lng": 141.201233,
      "alt": 35975,
      "spd": 439,
      "ts": 1765102252,
      "hd": 192
    },
    {
      "lat": 39.811386,
      "lng": 141.219101,
      "alt": 35975,
      "spd": 442,
      "ts": 1765102221,
      "hd": 192
    },
    {
      "lat": 39.874924,
      "lng": 141.237671,
      "alt": 36000,
      "spd": 443,
      "ts": 1765102189,
      "hd": 192
    },
    {
      "lat": 39.937725,
      "lng": 141.256027,
      "alt": 36000,
      "spd": 446,
      "ts": 1765102158,
      "hd": 192
    },
    {
      "lat": 39.999756,
      "lng": 141.27417,
      "alt": 35975,
      "spd": 450,
      "ts": 1765102127,
      "hd": 192
    },
    {
      "lat": 40.063156,
      "lng": 141.292847,
      "alt": 35975,
      "spd": 451,
      "ts": 1765102096,
      "hd": 192
    },
    {
      "lat": 40.127518,
      "lng": 141.311768,
      "alt": 35975,
      "spd": 454,
      "ts": 1765102064,
      "hd": 192
    },
    {
      "lat": 40.194038,
      "lng": 141.331177,
      "alt": 36000,
      "spd": 458,
      "ts": 1765102032,
      "hd": 192
    },
    {
      "lat": 40.260498,
      "lng": 141.350708,
      "alt": 36000,
      "spd": 455,
      "ts": 1765102000,
      "hd": 192
    },
    {
      "lat": 40.323593,
      "lng": 141.369446,
      "alt": 36000,
      "spd": 453,
      "ts": 1765101969,
      "hd": 192
    },
    {
      "lat": 40.388069,
      "lng": 141.38855,
      "alt": 35975,
      "spd": 452,
      "ts": 1765101938,
      "hd": 192
    },
    {
      "lat": 40.44952,
      "lng": 141.406784,
      "alt": 36000,
      "spd": 450,
      "ts": 1765101908,
      "hd": 192
    },
    {
      "lat": 40.516113,
      "lng": 141.426575,
      "alt": 36000,
      "spd": 450,
      "ts": 1765101875,
      "hd": 192
    },
    {
      "lat": 40.580612,
      "lng": 141.44574,
      "alt": 35975,
      "spd": 449,
      "ts": 1765101843,
      "hd": 192
    },
    {
      "lat": 40.647133,
      "lng": 141.465637,
      "alt": 35975,
      "spd": 450,
      "ts": 1765101810,
      "hd": 192
    },
    {
      "lat": 40.71373,
      "lng": 141.485596,
      "alt": 36000,
      "spd": 452,
      "ts": 1765101777,
      "hd": 192
    },
    {
      "lat": 40.779434,
      "lng": 141.50528,
      "alt": 35775,
      "spd": 455,
      "ts": 1765101745,
      "hd": 192
    },
    {
      "lat": 40.843094,
      "lng": 141.524475,
      "alt": 35200,
      "spd": 455,
      "ts": 1765101715,
      "hd": 193
    },
    {
      "lat": 40.909454,
      "lng": 141.544662,
      "alt": 34675,
      "spd": 452,
      "ts": 1765101682,
      "hd": 192
    },
    {
      "lat": 40.970764,
      "lng": 141.56311,
      "alt": 34075,
      "spd": 452,
      "ts": 1765101652,
      "hd": 192
    },
    {
      "lat": 41.037289,
      "lng": 141.583176,
      "alt": 33175,
      "spd": 456,
      "ts": 1765101619,
      "hd": 192
    },
    {
      "lat": 41.103157,
      "lng": 141.602844,
      "alt": 32300,
      "spd": 458,
      "ts": 1765101587,
      "hd": 192
    },
    {
      "lat": 41.171124,
      "lng": 141.623383,
      "alt": 31650,
      "spd": 451,
      "ts": 1765101554,
      "hd": 192
    },
    {
      "lat": 41.236633,
      "lng": 141.643066,
      "alt": 30950,
      "spd": 444,
      "ts": 1765101522,
      "hd": 192
    },
    {
      "lat": 41.300629,
      "lng": 141.662048,
      "alt": 30175,
      "spd": 440,
      "ts": 1765101490,
      "hd": 192
    },
    {
      "lat": 41.362747,
      "lng": 141.680481,
      "alt": 29450,
      "spd": 433,
      "ts": 1765101458,
      "hd": 192
    },
    {
      "lat": 41.42609,
      "lng": 141.699417,
      "alt": 28525,
      "spd": 428,
      "ts": 1765101426,
      "hd": 192
    },
    {
      "lat": 41.483723,
      "lng": 141.716995,
      "alt": 27725,
      "spd": 422,
      "ts": 1765101396,
      "hd": 192
    },
    {
      "lat": 41.54657,
      "lng": 141.733337,
      "alt": 26825,
      "spd": 419,
      "ts": 1765101363,
      "hd": 189
    },
    {
      "lat": 41.604851,
      "lng": 141.747391,
      "alt": 25975,
      "spd": 407,
      "ts": 1765101332,
      "hd": 191
    },
    {
      "lat": 41.659332,
      "lng": 141.763763,
      "alt": 25150,
      "spd": 394,
      "ts": 1765101302,
      "hd": 194
    },
    {
      "lat": 41.663223,
      "lng": 141.765076,
      "alt": 25100,
      "spd": 393,
      "ts": 1765101300,
      "hd": 194
    },
    {
      "lat": 41.66658,
      "lng": 141.766174,
      "alt": 25025,
      "spd": 393,
      "ts": 1765101298,
      "hd": 194
    },
    {
      "lat": 41.671005,
      "lng": 141.767639,
      "alt": 24950,
      "spd": 393,
      "ts": 1765101295,
      "hd": 194
    },
    {
      "lat": 41.674355,
      "lng": 141.768799,
      "alt": 24900,
      "spd": 393,
      "ts": 1765101293,
      "hd": 193
    },
    {
      "lat": 41.678406,
      "lng": 141.770126,
      "alt": 24825,
      "spd": 393,
      "ts": 1765101291,
      "hd": 193
    },
    {
      "lat": 41.681942,
      "lng": 141.771286,
      "alt": 24775,
      "spd": 392,
      "ts": 1765101289,
      "hd": 193
    },
    {
      "lat": 41.68655,
      "lng": 141.772751,
      "alt": 24700,
      "spd": 393,
      "ts": 1765101287,
      "hd": 193
    },
    {
      "lat": 41.69009,
      "lng": 141.773773,
      "alt": 24625,
      "spd": 393,
      "ts": 1765101285,
      "hd": 192
    },
    {
      "lat": 41.692928,
      "lng": 141.774597,
      "alt": 24575,
      "spd": 393,
      "ts": 1765101283,
      "hd": 191
    },
    {
      "lat": 41.697212,
      "lng": 141.775757,
      "alt": 24525,
      "spd": 394,
      "ts": 1765101280,
      "hd": 190
    },
    {
      "lat": 41.701492,
      "lng": 141.77681,
      "alt": 24475,
      "spd": 394,
      "ts": 1765101278,
      "hd": 188
    },
    {
      "lat": 41.704926,
      "lng": 141.777496,
      "alt": 24425,
      "spd": 396,
      "ts": 1765101276,
      "hd": 186
    },
    {
      "lat": 41.753448,
      "lng": 141.77562,
      "alt": 23750,
      "spd": 398,
      "ts": 1765101250,
      "hd": 175
    },
    {
      "lat": 41.812336,
      "lng": 141.769882,
      "alt": 22650,
      "spd": 394,
      "ts": 1765101218,
      "hd": 175
    },
    {
      "lat": 41.869858,
      "lng": 141.763962,
      "alt": 21500,
      "spd": 388,
      "ts": 1765101186,
      "hd": 175
    },
    {
      "lat": 41.923222,
      "lng": 141.75972,
      "alt": 20450,
      "spd": 379,
      "ts": 1765101156,
      "hd": 177
    },
    {
      "lat": 41.98027,
      "lng": 141.75647,
      "alt": 19275,
      "spd": 371,
      "ts": 1765101123,
      "hd": 177
    },
    {
      "lat": 42.035751,
      "lng": 141.753403,
      "alt": 17950,
      "spd": 364,
      "ts": 1765101091,
      "hd": 177
    },
    {
      "lat": 42.086807,
      "lng": 141.750397,
      "alt": 16625,
      "spd": 357,
      "ts": 1765101060,
      "hd": 177
    },
    {
      "lat": 42.13765,
      "lng": 141.747665,
      "alt": 15450,
      "spd": 344,
      "ts": 1765101029,
      "hd": 177
    },
    {
      "lat": 42.186245,
      "lng": 141.745163,
      "alt": 14050,
      "spd": 334,
      "ts": 1765100998,
      "hd": 177
    },
    {
      "lat": 42.234924,
      "lng": 141.742233,
      "alt": 12350,
      "spd": 330,
      "ts": 1765100967,
      "hd": 177
    },
    {
      "lat": 42.254723,
      "lng": 141.741135,
      "alt": 11625,
      "spd": 329,
      "ts": 1765100953,
      "hd": 177
    },
    {
      "lat": 42.275578,
      "lng": 141.740051,
      "alt": 11100,
      "spd": 329,
      "ts": 1765100939,
      "hd": 177
    },
    {
      "lat": 42.295441,
      "lng": 141.738861,
      "alt": 11050,
      "spd": 327,
      "ts": 1765100926,
      "hd": 177
    },
    {
      "lat": 42.317825,
      "lng": 141.737549,
      "alt": 10950,
      "spd": 327,
      "ts": 1765100911,
      "hd": 177
    },
    {
      "lat": 42.338188,
      "lng": 141.736282,
      "alt": 10850,
      "spd": 324,
      "ts": 1765100898,
      "hd": 177
    },
    {
      "lat": 42.357647,
      "lng": 141.735062,
      "alt": 10725,
      "spd": 316,
      "ts": 1765100885,
      "hd": 177
    },
    {
      "lat": 42.375618,
      "lng": 141.734039,
      "alt": 10600,
      "spd": 311,
      "ts": 1765100872,
      "hd": 177
    },
    {
      "lat": 42.394936,
      "lng": 141.733017,
      "alt": 10475,
      "spd": 299,
      "ts": 1765100859,
      "hd": 177
    },
    {
      "lat": 42.412346,
      "lng": 141.732193,
      "alt": 10350,
      "spd": 284,
      "ts": 1765100846,
      "hd": 177
    },
    {
      "lat": 42.429886,
      "lng": 141.731186,
      "alt": 10175,
      "spd": 269,
      "ts": 1765100833,
      "hd": 177
    },
    {
      "lat": 42.445496,
      "lng": 141.730377,
      "alt": 9975,
      "spd": 267,
      "ts": 1765100820,
      "hd": 177
    },
    {
      "lat": 42.46104,
      "lng": 141.729568,
      "alt": 9775,
      "spd": 265,
      "ts": 1765100807,
      "hd": 177
    },
    {
      "lat": 42.479244,
      "lng": 141.728683,
      "alt": 9500,
      "spd": 265,
      "ts": 1765100792,
      "hd": 177
    },
    {
      "lat": 42.496468,
      "lng": 141.727844,
      "alt": 9225,
      "spd": 266,
      "ts": 1765100779,
      "hd": 178
    },
    {
      "lat": 42.512009,
      "lng": 141.727066,
      "alt": 8900,
      "spd": 266,
      "ts": 1765100766,
      "hd": 177
    },
    {
      "lat": 42.528442,
      "lng": 141.725876,
      "alt": 8525,
      "spd": 269,
      "ts": 1765100753,
      "hd": 177
    },
    {
      "lat": 42.544006,
      "lng": 141.725006,
      "alt": 8000,
      "spd": 266,
      "ts": 1765100739,
      "hd": 177
    },
    {
      "lat": 42.559616,
      "lng": 141.724197,
      "alt": 7450,
      "spd": 264,
      "ts": 1765100726,
      "hd": 177
    },
    {
      "lat": 42.575977,
      "lng": 141.723312,
      "alt": 6850,
      "spd": 263,
      "ts": 1765100713,
      "hd": 177
    },
    {
      "lat": 42.59227,
      "lng": 141.72229,
      "alt": 6200,
      "spd": 262,
      "ts": 1765100700,
      "hd": 177
    },
    {
      "lat": 42.608505,
      "lng": 141.721329,
      "alt": 5625,
      "spd": 260,
      "ts": 1765100687,
      "hd": 177
    },
    {
      "lat": 42.624065,
      "lng": 141.720062,
      "alt": 5050,
      "spd": 258,
      "ts": 1765100673,
      "hd": 174
    },
    {
      "lat": 42.633453,
      "lng": 141.718643,
      "alt": 4750,
      "spd": 256,
      "ts": 1765100666,
      "hd": 172
    },
    {
      "lat": 42.641384,
      "lng": 141.717117,
      "alt": 4525,
      "spd": 251,
      "ts": 1765100659,
      "hd": 171
    },
    {
      "lat": 42.650803,
      "lng": 141.715271,
      "alt": 4350,
      "spd": 241,
      "ts": 1765100650,
      "hd": 171
    },
    {
      "lat": 42.658356,
      "lng": 141.713837,
      "alt": 4200,
      "spd": 234,
      "ts": 1765100644,
      "hd": 171
    },
    {
      "lat": 42.666149,
      "lng": 141.712265,
      "alt": 4075,
      "spd": 223,
      "ts": 1765100636,
      "hd": 171
    },
    {
      "lat": 42.673233,
      "lng": 141.710892,
      "alt": 3875,
      "spd": 218,
      "ts": 1765100629,
      "hd": 171
    },
    {
      "lat": 42.680534,
      "lng": 141.70932,
      "alt": 3575,
      "spd": 217,
      "ts": 1765100622,
      "hd": 171
    },
    {
      "lat": 42.687565,
      "lng": 141.707855,
      "alt": 3300,
      "spd": 215,
      "ts": 1765100615,
      "hd": 171
    },
    {
      "lat": 42.695663,
      "lng": 141.706223,
      "alt": 3050,
      "spd": 208,
      "ts": 1765100606,
      "hd": 171
    },
    {
      "lat": 42.702805,
      "lng": 141.704712,
      "alt": 2925,
      "spd": 199,
      "ts": 1765100599,
      "hd": 171
    },
    {
      "lat": 42.710861,
      "lng": 141.703094,
      "alt": 2825,
      "spd": 184,
      "ts": 1765100590,
      "hd": 171
    },
    {
      "lat": 42.716568,
      "lng": 141.702042,
      "alt": 2750,
      "spd": 173,
      "ts": 1765100583,
      "hd": 171
    },
    {
      "lat": 42.722942,
      "lng": 141.70076,
      "alt": 2650,
      "spd": 163,
      "ts": 1765100576,
      "hd": 171
    },
    {
      "lat": 42.727879,
      "lng": 141.699875,
      "alt": 2450,
      "spd": 160,
      "ts": 1765100568,
      "hd": 172
    },
    {
      "lat": 42.735744,
      "lng": 141.698334,
      "alt": 2100,
      "spd": 159,
      "ts": 1765100558,
      "hd": 171
    },
    {
      "lat": 42.740799,
      "lng": 141.697296,
      "alt": 1875,
      "spd": 158,
      "ts": 1765100550,
      "hd": 171
    },
    {
      "lat": 42.749039,
      "lng": 141.695724,
      "alt": 1450,
      "spd": 154,
      "ts": 1765100539,
      "hd": 172
    },
    {
      "lat": 42.756729,
      "lng": 141.694168,
      "alt": 1025,
      "spd": 151,
      "ts": 1765100528,
      "hd": 170
    }
  ],
  "firstTimestamp": 1765100528,
  "s": "JAp2l08LLehDCZPqqYj47Uv-_LlrbbzrvzB9uhS6JEDwy7CzPyS1Liy8D32nqpgC"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d67ebbf = R"(
{
  "identification": {
    "id": "3d67ebbf",
    "row": 5747760177,
    "number": {
      "default": null,
      "alternative": null
    },
    "callsign": "VTRGY"
  },
  "status": {
    "live": true,
    "text": "Landed 16:22",
    "icon": "red",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "landed",
        "color": "gray",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765104757,
        "local": 1765124557
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "H160",
      "text": "Airbus Helicopters H160B"
    },
    "countryId": 102,
    "registration": "VT-RGY",
    "age": null,
    "msn": null,
    "images": null,
    "hex": "801838"
  },
  "airline": {
    "name": "Private owner",
    "code": null,
    "url": null
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Ahmedabad International Airport",
      "code": {
        "iata": "AMD",
        "icao": "VAAH"
      },
      "position": {
        "latitude": 23.07724,
        "longitude": 72.634651,
        "altitude": 189,
        "country": {
          "id": 102,
          "name": "India",
          "code": "IN",
          "codeLong": "IND"
        },
        "region": {
          "city": "Ahmedabad"
        }
      },
      "timezone": {
        "name": "Asia/Kolkata",
        "offset": 19800,
        "offsetHours": "5:30",
        "abbr": "IST",
        "abbrName": "India Standard Time",
        "isDst": false
      },
      "visible": true,
      "website": null,
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": null
      }
    },
    "destination": {
      "name": "Ahmedabad International Airport",
      "code": {
        "iata": "AMD",
        "icao": "VAAH"
      },
      "position": {
        "latitude": 23.07724,
        "longitude": 72.634651,
        "altitude": 189,
        "country": {
          "id": 102,
          "name": "India",
          "code": "IN",
          "codeLong": "IND"
        },
        "region": {
          "city": "Ahmedabad"
        }
      },
      "timezone": {
        "name": "Asia/Kolkata",
        "offset": 19800,
        "offsetHours": "5:30",
        "abbr": "IST",
        "abbrName": "India Standard Time",
        "isDst": false
      },
      "visible": true,
      "website": null,
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": null
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d67df66",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Ahmedabad International Airport",
            "code": {
              "iata": "AMD",
              "icao": "VAAH"
            },
            "position": {
              "latitude": 23.07724,
              "longitude": 72.634651,
              "altitude": 189,
              "country": {
                "id": 102,
                "name": "India",
                "code": "IN",
                "codeLong": "IND"
              },
              "region": {
                "city": "Ahmedabad"
              }
            },
            "timezone": {
              "name": "Asia/Kolkata",
              "offset": 19800,
              "offsetHours": "5:30",
              "abbr": "IST",
              "abbrName": "India Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1765103111
          }
        }
      },
      {
        "identification": {
          "id": "3d67abbf",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": null,
          "destination": {
            "name": "Ahmedabad International Airport",
            "code": {
              "iata": "AMD",
              "icao": "VAAH"
            },
            "position": {
              "latitude": 23.07724,
              "longitude": 72.634651,
              "altitude": 189,
              "country": {
                "id": 102,
                "name": "India",
                "code": "IN",
                "codeLong": "IND"
              },
              "region": {
                "city": "Ahmedabad"
              }
            },
            "timezone": {
              "name": "Asia/Kolkata",
              "offset": 19800,
              "offsetHours": "5:30",
              "abbr": "IST",
              "abbrName": "India Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1765094707
          }
        }
      },
      {
        "identification": {
          "id": "3d67222d",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": null,
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1765075828
          }
        }
      },
      {
        "identification": {
          "id": "3d64f2fa",
          "number": {
            "default": null
          }
        },
        "airport": {
          "origin": {
            "name": "Vadodara Airport",
            "code": {
              "iata": "BDQ",
              "icao": "VABO"
            },
            "position": {
              "latitude": 22.336161,
              "longitude": 73.22628,
              "altitude": 129,
              "country": {
                "id": 102,
                "name": "India",
                "code": "IN",
                "codeLong": "IND"
              },
              "region": {
                "city": "Vadodara"
              }
            },
            "timezone": {
              "name": "Asia/Kolkata",
              "offset": 19800,
              "offsetHours": "5:30",
              "abbr": "IST",
              "abbrName": "India Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1765021948
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [],
  "time": {
    "scheduled": {
      "departure": 0,
      "arrival": 0
    },
    "real": {
      "departure": 1765103744,
      "arrival": 1765104757
    },
    "estimated": {
      "departure": null,
      "arrival": null
    },
    "other": {
      "eta": 1765104757,
      "updated": 1765104758
    },
    "historical": null
  },
  "trail": [
    {
      "lat": 23.069595,
      "lng": 72.619133,
      "alt": 0,
      "spd": 3,
      "ts": 1765105073,
      "hd": 225
    },
    {
      "lat": 23.069641,
      "lng": 72.619339,
      "alt": 0,
      "spd": 4,
      "ts": 1765105060,
      "hd": 281
    },
    {
      "lat": 23.069412,
      "lng": 72.619568,
      "alt": 0,
      "spd": 3,
      "ts": 1765105042,
      "hd": 315
    },
    {
      "lat": 23.069206,
      "lng": 72.619781,
      "alt": 0,
      "spd": 4,
      "ts": 1765105024,
      "hd": 315
    },
    {
      "lat": 23.068962,
      "lng": 72.620033,
      "alt": 0,
      "spd": 4,
      "ts": 1765105005,
      "hd": 315
    },
    {
      "lat": 23.068737,
      "lng": 72.620277,
      "alt": 0,
      "spd": 5,
      "ts": 1765104990,
      "hd": 315
    },
    {
      "lat": 23.068624,
      "lng": 72.620598,
      "alt": 0,
      "spd": 4,
      "ts": 1765104975,
      "hd": 272
    },
    {
      "lat": 23.068775,
      "lng": 72.620834,
      "alt": 0,
      "spd": 5,
      "ts": 1765104960,
      "hd": 225
    },
    {
      "lat": 23.068966,
      "lng": 72.62104,
      "alt": 0,
      "spd": 5,
      "ts": 1765104949,
      "hd": 225
    },
    {
      "lat": 23.069101,
      "lng": 72.621246,
      "alt": 0,
      "spd": 5,
      "ts": 1765104939,
      "hd": 247
    },
    {
      "lat": 23.069113,
      "lng": 72.621483,
      "alt": 0,
      "spd": 4,
      "ts": 1765104929,
      "hd": 278
    },
    {
      "lat": 23.068977,
      "lng": 72.621689,
      "alt": 0,
      "spd": 4,
      "ts": 1765104918,
      "hd": 315
    },
    {
      "lat": 23.068775,
      "lng": 72.621902,
      "alt": 0,
      "spd": 4,
      "ts": 1765104904,
      "hd": 315
    },
    {
      "lat": 23.068577,
      "lng": 72.622124,
      "alt": 0,
      "spd": 4,
      "ts": 1765104889,
      "hd": 315
    },
    {
      "lat": 23.068359,
      "lng": 72.62236,
      "alt": 0,
      "spd": 4,
      "ts": 1765104871,
      "hd": 315
    },
    {
      "lat": 23.068153,
      "lng": 72.622589,
      "alt": 0,
      "spd": 4,
      "ts": 1765104858,
      "hd": 315
    },
    {
      "lat": 23.067972,
      "lng": 72.622795,
      "alt": 0,
      "spd": 4,
      "ts": 1765104844,
      "hd": 315
    },
    {
      "lat": 23.067764,
      "lng": 72.623009,
      "alt": 0,
      "spd": 3,
      "ts": 1765104830,
      "hd": 315
    },
    {
      "lat": 23.067547,
      "lng": 72.62326,
      "alt": 0,
      "spd": 4,
      "ts": 1765104815,
      "hd": 315
    },
    {
      "lat": 23.067331,
      "lng": 72.623482,
      "alt": 0,
      "spd": 5,
      "ts": 1765104796,
      "hd": 317
    },
    {
      "lat": 23.067123,
      "lng": 72.623581,
      "alt": 0,
      "spd": 4,
      "ts": 1765104786,
      "hd": 348
    },
    {
      "lat": 23.066914,
      "lng": 72.623444,
      "alt": 0,
      "spd": 2,
      "ts": 1765104760,
      "hd": 45
    },
    {
      "lat": 23.066757,
      "lng": 72.623222,
      "alt": 150,
      "spd": 11,
      "ts": 1765104750,
      "hd": 45
    },
    {
      "lat": 23.066587,
      "lng": 72.622986,
      "alt": 150,
      "spd": 15,
      "ts": 1765104746,
      "hd": 36
    },
    {
      "lat": 23.066261,
      "lng": 72.622734,
      "alt": 175,
      "spd": 25,
      "ts": 1765104740,
      "hd": 45
    },
    {
      "lat": 23.065983,
      "lng": 72.622475,
      "alt": 175,
      "spd": 33,
      "ts": 1765104738,
      "hd": 45
    },
    {
      "lat": 23.065702,
      "lng": 72.622169,
      "alt": 200,
      "spd": 42,
      "ts": 1765104736,
      "hd": 45
    },
    {
      "lat": 23.06547,
      "lng": 72.621864,
      "alt": 200,
      "spd": 45,
      "ts": 1765104734,
      "hd": 44
    },
    {
      "lat": 23.064911,
      "lng": 72.621307,
      "alt": 225,
      "spd": 50,
      "ts": 1765104730,
      "hd": 45
    },
    {
      "lat": 23.064678,
      "lng": 72.621056,
      "alt": 225,
      "spd": 55,
      "ts": 1765104728,
      "hd": 44
    },
    {
      "lat": 23.064028,
      "lng": 72.620392,
      "alt": 250,
      "spd": 56,
      "ts": 1765104726,
      "hd": 43
    },
    {
      "lat": 23.063702,
      "lng": 72.620033,
      "alt": 250,
      "spd": 61,
      "ts": 1765104723,
      "hd": 45
    },
    {
      "lat": 23.063328,
      "lng": 72.619576,
      "alt": 275,
      "spd": 64,
      "ts": 1765104721,
      "hd": 44
    },
    {
      "lat": 23.062771,
      "lng": 72.619019,
      "alt": 275,
      "spd": 66,
      "ts": 1765104719,
      "hd": 45
    },
    {
      "lat": 23.062271,
      "lng": 72.618431,
      "alt": 300,
      "spd": 70,
      "ts": 1765104716,
      "hd": 45
    },
    {
      "lat": 23.061584,
      "lng": 72.617729,
      "alt": 325,
      "spd": 72,
      "ts": 1765104714,
      "hd": 45
    },
    {
      "lat": 23.060989,
      "lng": 72.617081,
      "alt": 350,
      "spd": 74,
      "ts": 1765104712,
      "hd": 43
    },
    {
      "lat": 23.059511,
      "lng": 72.615562,
      "alt": 375,
      "spd": 81,
      "ts": 1765104705,
      "hd": 44
    },
    {
      "lat": 23.057144,
      "lng": 72.612984,
      "alt": 425,
      "spd": 87,
      "ts": 1765104696,
      "hd": 44
    },
    {
      "lat": 23.054626,
      "lng": 72.610344,
      "alt": 500,
      "spd": 95,
      "ts": 1765104688,
      "hd": 44
    },
    {
      "lat": 23.052483,
      "lng": 72.608032,
      "alt": 550,
      "spd": 98,
      "ts": 1765104681,
      "hd": 44
    },
    {
      "lat": 23.051834,
      "lng": 72.607346,
      "alt": 575,
      "spd": 99,
      "ts": 1765104679,
      "hd": 44
    },
    {
      "lat": 23.051056,
      "lng": 72.606544,
      "alt": 600,
      "spd": 102,
      "ts": 1765104677,
      "hd": 44
    },
    {
      "lat": 23.050341,
      "lng": 72.605743,
      "alt": 600,
      "spd": 103,
      "ts": 1765104675,
      "hd": 44
    },
    {
      "lat": 23.049643,
      "lng": 72.60498,
      "alt": 625,
      "spd": 105,
      "ts": 1765104673,
      "hd": 44
    },
    {
      "lat": 23.048721,
      "lng": 72.60405,
      "alt": 650,
      "spd": 108,
      "ts": 1765104670,
      "hd": 44
    },
    {
      "lat": 23.047873,
      "lng": 72.603096,
      "alt": 675,
      "spd": 109,
      "ts": 1765104668,
      "hd": 45
    },
    {
      "lat": 23.047174,
      "lng": 72.602333,
      "alt": 700,
      "spd": 111,
      "ts": 1765104666,
      "hd": 45
    },
    {
      "lat": 23.0455,
      "lng": 72.600555,
      "alt": 750,
      "spd": 113,
      "ts": 1765104661,
      "hd": 44
    },
    {
      "lat": 23.042845,
      "lng": 72.597755,
      "alt": 825,
      "spd": 115,
      "ts": 1765104654,
      "hd": 44
    },
    {
      "lat": 23.040331,
      "lng": 72.595062,
      "alt": 875,
      "spd": 122,
      "ts": 1765104648,
      "hd": 44
    },
    {
      "lat": 23.036795,
      "lng": 72.591301,
      "alt": 975,
      "spd": 123,
      "ts": 1765104639,
      "hd": 44
    },
    {
      "lat": 23.03389,
      "lng": 72.588165,
      "alt": 1050,
      "spd": 123,
      "ts": 1765104632,
      "hd": 44
    },
    {
      "lat": 23.031254,
      "lng": 72.58535,
      "alt": 1125,
      "spd": 123,
      "ts": 1765104625,
      "hd": 44
    },
    {
      "lat": 23.02771,
      "lng": 72.581627,
      "alt": 1200,
      "spd": 125,
      "ts": 1765104617,
      "hd": 44
    },
    {
      "lat": 23.024506,
      "lng": 72.578178,
      "alt": 1300,
      "spd": 125,
      "ts": 1765104610,
      "hd": 44
    },
    {
      "lat": 23.022083,
      "lng": 72.57563,
      "alt": 1375,
      "spd": 124,
      "ts": 1765104603,
      "hd": 44
    },
    {
      "lat": 23.018417,
      "lng": 72.571686,
      "alt": 1450,
      "spd": 125,
      "ts": 1765104595,
      "hd": 44
    },
    {
      "lat": 23.015753,
      "lng": 72.568871,
      "alt": 1525,
      "spd": 125,
      "ts": 1765104588,
      "hd": 44
    },
    {
      "lat": 23.012878,
      "lng": 72.565796,
      "alt": 1625,
      "spd": 125,
      "ts": 1765104581,
      "hd": 44
    },
    {
      "lat": 23.01004,
      "lng": 72.562752,
      "alt": 1700,
      "spd": 123,
      "ts": 1765104574,
      "hd": 44
    },
    {
      "lat": 23.007372,
      "lng": 72.559914,
      "alt": 1775,
      "spd": 123,
      "ts": 1765104568,
      "hd": 45
    },
    {
      "lat": 23.003723,
      "lng": 72.556061,
      "alt": 1850,
      "spd": 125,
      "ts": 1765104559,
      "hd": 44
    },
    {
      "lat": 23.000902,
      "lng": 72.553047,
      "alt": 1925,
      "spd": 127,
      "ts": 1765104552,
      "hd": 44
    },
    {
      "lat": 22.998322,
      "lng": 72.550262,
      "alt": 1950,
      "spd": 127,
      "ts": 1765104546,
      "hd": 44
    },
    {
      "lat": 22.994711,
      "lng": 72.54644,
      "alt": 1950,
      "spd": 127,
      "ts": 1765104537,
      "hd": 44
    },
    {
      "lat": 22.991959,
      "lng": 72.543472,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104531,
      "hd": 44
    },
    {
      "lat": 22.991089,
      "lng": 72.542625,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104529,
      "hd": 44
    },
    {
      "lat": 22.990082,
      "lng": 72.541527,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104526,
      "hd": 44
    },
    {
      "lat": 22.989264,
      "lng": 72.540688,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104524,
      "hd": 44
    },
    {
      "lat": 22.988434,
      "lng": 72.539825,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104522,
      "hd": 44
    },
    {
      "lat": 22.98761,
      "lng": 72.538933,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104520,
      "hd": 44
    },
    {
      "lat": 22.986557,
      "lng": 72.537834,
      "alt": 1950,
      "spd": 127,
      "ts": 1765104518,
      "hd": 44
    },
    {
      "lat": 22.985641,
      "lng": 72.53688,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104516,
      "hd": 44
    },
    {
      "lat": 22.984795,
      "lng": 72.535957,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104514,
      "hd": 44
    },
    {
      "lat": 22.983719,
      "lng": 72.534836,
      "alt": 1950,
      "spd": 125,
      "ts": 1765104512,
      "hd": 44
    },
    {
      "lat": 22.982712,
      "lng": 72.533783,
      "alt": 1975,
      "spd": 126,
      "ts": 1765104509,
      "hd": 44
    },
    {
      "lat": 22.981796,
      "lng": 72.532837,
      "alt": 1975,
      "spd": 126,
      "ts": 1765104507,
      "hd": 45
    },
    {
      "lat": 22.980972,
      "lng": 72.531937,
      "alt": 1950,
      "spd": 125,
      "ts": 1765104505,
      "hd": 46
    },
    {
      "lat": 22.980148,
      "lng": 72.530991,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104503,
      "hd": 49
    },
    {
      "lat": 22.979162,
      "lng": 72.529755,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104500,
      "hd": 52
    },
    {
      "lat": 22.9785,
      "lng": 72.528793,
      "alt": 1975,
      "spd": 125,
      "ts": 1765104498,
      "hd": 56
    },
    {
      "lat": 22.977766,
      "lng": 72.527565,
      "alt": 1950,
      "spd": 123,
      "ts": 1765104496,
      "hd": 62
    },
    {
      "lat": 22.977173,
      "lng": 72.526344,
      "alt": 1950,
      "spd": 123,
      "ts": 1765104494,
      "hd": 67
    },
    {
      "lat": 22.976624,
      "lng": 72.524849,
      "alt": 1950,
      "spd": 123,
      "ts": 1765104491,
      "hd": 72
    },
    {
      "lat": 22.976349,
      "lng": 72.523697,
      "alt": 1950,
      "spd": 123,
      "ts": 1765104489,
      "hd": 77
    },
    {
      "lat": 22.976074,
      "lng": 72.522202,
      "alt": 1950,
      "spd": 124,
      "ts": 1765104487,
      "hd": 85
    },
    {
      "lat": 22.975996,
      "lng": 72.520958,
      "alt": 1950,
      "spd": 124,
      "ts": 1765104485,
      "hd": 90
    },
    {
      "lat": 22.976028,
      "lng": 72.519157,
      "alt": 1950,
      "spd": 123,
      "ts": 1765104482,
      "hd": 97
    },
    {
      "lat": 22.976166,
      "lng": 72.517952,
      "alt": 1950,
      "spd": 122,
      "ts": 1765104480,
      "hd": 99
    },
    {
      "lat": 22.976349,
      "lng": 72.516609,
      "alt": 1975,
      "spd": 122,
      "ts": 1765104478,
      "hd": 101
    },
    {
      "lat": 22.976624,
      "lng": 72.515312,
      "alt": 1950,
      "spd": 123,
      "ts": 1765104475,
      "hd": 106
    },
    {
      "lat": 22.977036,
      "lng": 72.513962,
      "alt": 1950,
      "spd": 124,
      "ts": 1765104473,
      "hd": 113
    },
    {
      "lat": 22.977718,
      "lng": 72.512512,
      "alt": 1950,
      "spd": 126,
      "ts": 1765104471,
      "hd": 121
    },
    {
      "lat": 22.97818,
      "lng": 72.511765,
      "alt": 1950,
      "spd": 128,
      "ts": 1765104469,
      "hd": 132
    },
    {
      "lat": 22.979187,
      "lng": 72.510513,
      "alt": 1950,
      "spd": 127,
      "ts": 1765104467,
      "hd": 135
    },
    {
      "lat": 22.982346,
      "lng": 72.507622,
      "alt": 1950,
      "spd": 127,
      "ts": 1765104460,
      "hd": 140
    },
    {
      "lat": 22.985092,
      "lng": 72.505173,
      "alt": 1950,
      "spd": 127,
      "ts": 1765104454,
      "hd": 140
    },
    {
      "lat": 22.989124,
      "lng": 72.501579,
      "alt": 1950,
      "spd": 127,
      "ts": 1765104445,
      "hd": 140
    },
    {
      "lat": 22.991825,
      "lng": 72.499138,
      "alt": 1950,
      "spd": 128,
      "ts": 1765104439,
      "hd": 140
    },
    {
      "lat": 22.995968,
      "lng": 72.495522,
      "alt": 1975,
      "spd": 128,
      "ts": 1765104430,
      "hd": 141
    },
    {
      "lat": 22.999146,
      "lng": 72.492836,
      "alt": 2025,
      "spd": 128,
      "ts": 1765104423,
      "hd": 141
    },
    {
      "lat": 23.002258,
      "lng": 72.490189,
      "alt": 2125,
      "spd": 128,
      "ts": 1765104416,
      "hd": 141
    },
    {
      "lat": 23.006378,
      "lng": 72.486542,
      "alt": 2275,
      "spd": 129,
      "ts": 1765104408,
      "hd": 140
    },
    {
      "lat": 23.010315,
      "lng": 72.483047,
      "alt": 2400,
      "spd": 128,
      "ts": 1765104399,
      "hd": 140
    },
    {
      "lat": 23.014664,
      "lng": 72.479156,
      "alt": 2550,
      "spd": 127,
      "ts": 1765104390,
      "hd": 140
    },
    {
      "lat": 23.017614,
      "lng": 72.476555,
      "alt": 2675,
      "spd": 119,
      "ts": 1765104383,
      "hd": 141
    },
    {
      "lat": 23.020203,
      "lng": 72.474312,
      "alt": 2775,
      "spd": 113,
      "ts": 1765104377,
      "hd": 141
    },
    {
      "lat": 23.023819,
      "lng": 72.471161,
      "alt": 2900,
      "spd": 112,
      "ts": 1765104368,
      "hd": 141
    },
    {
      "lat": 23.026552,
      "lng": 72.468872,
      "alt": 3025,
      "spd": 111,
      "ts": 1765104362,
      "hd": 141
    },
    {
      "lat": 23.029907,
      "lng": 72.465973,
      "alt": 3150,
      "spd": 108,
      "ts": 1765104353,
      "hd": 141
    },
    {
      "lat": 23.030685,
      "lng": 72.465324,
      "alt": 3175,
      "spd": 108,
      "ts": 1765104351,
      "hd": 141
    },
    {
      "lat": 23.031767,
      "lng": 72.464348,
      "alt": 3200,
      "spd": 108,
      "ts": 1765104349,
      "hd": 141
    },
    {
      "lat": 23.034119,
      "lng": 72.462326,
      "alt": 3250,
      "spd": 109,
      "ts": 1765104342,
      "hd": 140
    },
    {
      "lat": 23.036728,
      "lng": 72.46003,
      "alt": 3325,
      "spd": 103,
      "ts": 1765104336,
      "hd": 141
    },
    {
      "lat": 23.039448,
      "lng": 72.45768,
      "alt": 3375,
      "spd": 101,
      "ts": 1765104329,
      "hd": 141
    },
    {
      "lat": 23.042566,
      "lng": 72.455086,
      "alt": 3425,
      "spd": 102,
      "ts": 1765104320,
      "hd": 142
    },
    {
      "lat": 23.044987,
      "lng": 72.453056,
      "alt": 3500,
      "spd": 101,
      "ts": 1765104313,
      "hd": 142
    },
    {
      "lat": 23.048153,
      "lng": 72.450462,
      "alt": 3575,
      "spd": 100,
      "ts": 1765104305,
      "hd": 142
    },
    {
      "lat": 23.050619,
      "lng": 72.448372,
      "alt": 3625,
      "spd": 99,
      "ts": 1765104298,
      "hd": 142
    },
    {
      "lat": 23.053757,
      "lng": 72.445747,
      "alt": 3700,
      "spd": 99,
      "ts": 1765104290,
      "hd": 142
    },
    {
      "lat": 23.056112,
      "lng": 72.443748,
      "alt": 3750,
      "spd": 100,
      "ts": 1765104283,
      "hd": 141
    },
    {
      "lat": 23.058563,
      "lng": 72.441704,
      "alt": 3800,
      "spd": 102,
      "ts": 1765104277,
      "hd": 142
    },
    {
      "lat": 23.061886,
      "lng": 72.438911,
      "alt": 3875,
      "spd": 102,
      "ts": 1765104268,
      "hd": 142
    },
    {
      "lat": 23.064352,
      "lng": 72.436882,
      "alt": 3925,
      "spd": 102,
      "ts": 1765104262,
      "hd": 142
    },
    {
      "lat": 23.065004,
      "lng": 72.436317,
      "alt": 3925,
      "spd": 102,
      "ts": 1765104260,
      "hd": 142
    },
    {
      "lat": 23.065935,
      "lng": 72.435555,
      "alt": 3950,
      "spd": 102,
      "ts": 1765104257,
      "hd": 142
    },
    {
      "lat": 23.066666,
      "lng": 72.434906,
      "alt": 3950,
      "spd": 101,
      "ts": 1765104255,
      "hd": 141
    },
    {
      "lat": 23.067379,
      "lng": 72.434288,
      "alt": 3950,
      "spd": 101,
      "ts": 1765104253,
      "hd": 141
    },
    {
      "lat": 23.068216,
      "lng": 72.433624,
      "alt": 3950,
      "spd": 101,
      "ts": 1765104251,
      "hd": 141
    },
    {
      "lat": 23.069138,
      "lng": 72.432808,
      "alt": 3950,
      "spd": 101,
      "ts": 1765104249,
      "hd": 141
    },
    {
      "lat": 23.069893,
      "lng": 72.432152,
      "alt": 3950,
      "spd": 101,
      "ts": 1765104246,
      "hd": 141
    },
    {
      "lat": 23.070637,
      "lng": 72.431541,
      "alt": 3950,
      "spd": 101,
      "ts": 1765104244,
      "hd": 141
    },
    {
      "lat": 23.071568,
      "lng": 72.430779,
      "alt": 3950,
      "spd": 101,
      "ts": 1765104242,
      "hd": 141
    },
    {
      "lat": 23.072479,
      "lng": 72.430016,
      "alt": 3950,
      "spd": 102,
      "ts": 1765104240,
      "hd": 142
    },
    {
      "lat": 23.073431,
      "lng": 72.429199,
      "alt": 3950,
      "spd": 102,
      "ts": 1765104237,
      "hd": 143
    },
    {
      "lat": 23.074219,
      "lng": 72.428566,
      "alt": 3950,
      "spd": 102,
      "ts": 1765104235,
      "hd": 144
    },
    {
      "lat": 23.075153,
      "lng": 72.427879,
      "alt": 3950,
      "spd": 102,
      "ts": 1765104233,
      "hd": 148
    },
    {
      "lat": 23.076036,
      "lng": 72.427315,
      "alt": 3950,
      "spd": 102,
      "ts": 1765104231,
      "hd": 155
    },
    {
      "lat": 23.077011,
      "lng": 72.426872,
      "alt": 3950,
      "spd": 104,
      "ts": 1765104228,
      "hd": 163
    },
    {
      "lat": 23.077993,
      "lng": 72.426605,
      "alt": 3950,
      "spd": 106,
      "ts": 1765104226,
      "hd": 174
    },
    {
      "lat": 23.079483,
      "lng": 72.426453,
      "alt": 3950,
      "spd": 108,
      "ts": 1765104224,
      "hd": 181
    },
    {
      "lat": 23.080307,
      "lng": 72.426521,
      "alt": 3950,
      "spd": 110,
      "ts": 1765104221,
      "hd": 191
    },
    {
      "lat": 23.08136,
      "lng": 72.426666,
      "alt": 3950,
      "spd": 110,
      "ts": 1765104219,
      "hd": 194
    },
    {
      "lat": 23.082275,
      "lng": 72.426971,
      "alt": 3950,
      "spd": 113,
      "ts": 1765104217,
      "hd": 200
    },
    {
      "lat": 23.083532,
      "lng": 72.427467,
      "alt": 3950,
      "spd": 116,
      "ts": 1765104215,
      "hd": 210
    },
    {
      "lat": 23.084463,
      "lng": 72.428078,
      "alt": 3950,
      "spd": 119,
      "ts": 1765104213,
      "hd": 217
    },
    {
      "lat": 23.085388,
      "lng": 72.428818,
      "alt": 3950,
      "spd": 121,
      "ts": 1765104211,
      "hd": 223
    },
    {
      "lat": 23.086212,
      "lng": 72.429665,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104209,
      "hd": 228
    },
    {
      "lat": 23.089737,
      "lng": 72.434113,
      "alt": 3950,
      "spd": 125,
      "ts": 1765104200,
      "hd": 229
    },
    {
      "lat": 23.092424,
      "lng": 72.437592,
      "alt": 3950,
      "spd": 124,
      "ts": 1765104193,
      "hd": 230
    },
    {
      "lat": 23.094727,
      "lng": 72.440552,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104186,
      "hd": 230
    },
    {
      "lat": 23.097078,
      "lng": 72.443642,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104180,
      "hd": 230
    },
    {
      "lat": 23.097748,
      "lng": 72.444496,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104178,
      "hd": 230
    },
    {
      "lat": 23.098663,
      "lng": 72.445694,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104175,
      "hd": 230
    },
    {
      "lat": 23.09936,
      "lng": 72.446594,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104173,
      "hd": 230
    },
    {
      "lat": 23.10029,
      "lng": 72.447762,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104171,
      "hd": 230
    },
    {
      "lat": 23.100998,
      "lng": 72.448692,
      "alt": 3950,
      "spd": 123,
      "ts": 1765104169,
      "hd": 230
    },
    {
      "lat": 23.101873,
      "lng": 72.449799,
      "alt": 3925,
      "spd": 123,
      "ts": 1765104166,
      "hd": 230
    },
    {
      "lat": 23.1026,
      "lng": 72.45079,
      "alt": 3925,
      "spd": 123,
      "ts": 1765104164,
      "hd": 230
    },
    {
      "lat": 23.103411,
      "lng": 72.451782,
      "alt": 3925,
      "spd": 123,
      "ts": 1765104162,
      "hd": 230
    },
    {
      "lat": 23.104202,
      "lng": 72.452835,
      "alt": 3900,
      "spd": 122,
      "ts": 1765104160,
      "hd": 230
    },
    {
      "lat": 23.1049,
      "lng": 72.453766,
      "alt": 3875,
      "spd": 122,
      "ts": 1765104158,
      "hd": 230
    },
    {
      "lat": 23.105804,
      "lng": 72.454933,
      "alt": 3875,
      "spd": 122,
      "ts": 1765104156,
      "hd": 230
    },
    {
      "lat": 23.106529,
      "lng": 72.455902,
      "alt": 3850,
      "spd": 123,
      "ts": 1765104154,
      "hd": 231
    },
    {
      "lat": 23.107414,
      "lng": 72.457069,
      "alt": 3825,
      "spd": 123,
      "ts": 1765104152,
      "hd": 233
    },
    {
      "lat": 23.108093,
      "lng": 72.458076,
      "alt": 3800,
      "spd": 124,
      "ts": 1765104150,
      "hd": 237
    },
    {
      "lat": 23.108688,
      "lng": 72.459175,
      "alt": 3800,
      "spd": 124,
      "ts": 1765104147,
      "hd": 240
    },
    {
      "lat": 23.109276,
      "lng": 72.460228,
      "alt": 3775,
      "spd": 122,
      "ts": 1765104145,
      "hd": 237
    },
    {
      "lat": 23.110016,
      "lng": 72.461525,
      "alt": 3775,
      "spd": 122,
      "ts": 1765104143,
      "hd": 236
    },
    {
      "lat": 23.110626,
      "lng": 72.462517,
      "alt": 3750,
      "spd": 122,
      "ts": 1765104141,
      "hd": 238
    },
    {
      "lat": 23.111137,
      "lng": 72.463531,
      "alt": 3725,
      "spd": 124,
      "ts": 1765104139,
      "hd": 247
    },
    {
      "lat": 23.111618,
      "lng": 72.464722,
      "alt": 3725,
      "spd": 124,
      "ts": 1765104137,
      "hd": 254
    },
    {
      "lat": 23.111984,
      "lng": 72.466217,
      "alt": 3700,
      "spd": 126,
      "ts": 1765104135,
      "hd": 261
    },
    {
      "lat": 23.112122,
      "lng": 72.467567,
      "alt": 3675,
      "spd": 128,
      "ts": 1765104132,
      "hd": 271
    },
    {
      "lat": 23.112122,
      "lng": 72.469116,
      "alt": 3675,
      "spd": 128,
      "ts": 1765104130,
      "hd": 278
    },
    {
      "lat": 23.111893,
      "lng": 72.470711,
      "alt": 3650,
      "spd": 129,
      "ts": 1765104127,
      "hd": 285
    },
    {
      "lat": 23.111526,
      "lng": 72.471962,
      "alt": 3625,
      "spd": 130,
      "ts": 1765104125,
      "hd": 291
    },
    {
      "lat": 23.111044,
      "lng": 72.473244,
      "alt": 3625,
      "spd": 130,
      "ts": 1765104123,
      "hd": 300
    },
    {
      "lat": 23.110252,
      "lng": 72.474724,
      "alt": 3600,
      "spd": 130,
      "ts": 1765104121,
      "hd": 306
    },
    {
      "lat": 23.108252,
      "lng": 72.477264,
      "alt": 3575,
      "spd": 130,
      "ts": 1765104116,
      "hd": 314
    },
    {
      "lat": 23.104477,
      "lng": 72.481453,
      "alt": 3525,
      "spd": 130,
      "ts": 1765104107,
      "hd": 314
    },
    {
      "lat": 23.101641,
      "lng": 72.484535,
      "alt": 3475,
      "spd": 130,
      "ts": 1765104100,
      "hd": 314
    },
    {
      "lat": 23.097748,
      "lng": 72.488838,
      "alt": 3400,
      "spd": 128,
      "ts": 1765104091,
      "hd": 314
    },
    {
      "lat": 23.09436,
      "lng": 72.492584,
      "alt": 3350,
      "spd": 128,
      "ts": 1765104082,
      "hd": 314
    },
    {
      "lat": 23.091307,
      "lng": 72.495979,
      "alt": 3300,
      "spd": 128,
      "ts": 1765104075,
      "hd": 314
    },
    {
      "lat": 23.088547,
      "lng": 72.498978,
      "alt": 3250,
      "spd": 128,
      "ts": 1765104069,
      "hd": 314
    },
    {
      "lat": 23.085663,
      "lng": 72.502174,
      "alt": 3225,
      "spd": 128,
      "ts": 1765104062,
      "hd": 314
    },
    {
      "lat": 23.081909,
      "lng": 72.506317,
      "alt": 3150,
      "spd": 129,
      "ts": 1765104053,
      "hd": 314
    },
    {
      "lat": 23.079391,
      "lng": 72.509064,
      "alt": 3125,
      "spd": 130,
      "ts": 1765104047,
      "hd": 314
    },
    {
      "lat": 23.078293,
      "lng": 72.510315,
      "alt": 3100,
      "spd": 129,
      "ts": 1765104044,
      "hd": 314
    },
    {
      "lat": 23.077423,
      "lng": 72.511261,
      "alt": 3075,
      "spd": 128,
      "ts": 1765104042,
      "hd": 314
    },
    {
      "lat": 23.07637,
      "lng": 72.512413,
      "alt": 3075,
      "spd": 128,
      "ts": 1765104040,
      "hd": 314
    },
    {
      "lat": 23.075153,
      "lng": 72.513786,
      "alt": 3050,
      "spd": 130,
      "ts": 1765104038,
      "hd": 314
    },
    {
      "lat": 23.074448,
      "lng": 72.514557,
      "alt": 3025,
      "spd": 130,
      "ts": 1765104035,
      "hd": 314
    },
    {
      "lat": 23.073578,
      "lng": 72.515511,
      "alt": 3025,
      "spd": 130,
      "ts": 1765104033,
      "hd": 314
    },
    {
      "lat": 23.072733,
      "lng": 72.516426,
      "alt": 3000,
      "spd": 130,
      "ts": 1765104031,
      "hd": 314
    },
    {
      "lat": 23.071894,
      "lng": 72.517342,
      "alt": 3000,
      "spd": 130,
      "ts": 1765104029,
      "hd": 314
    },
    {
      "lat": 23.071056,
      "lng": 72.518311,
      "alt": 2975,
      "spd": 130,
      "ts": 1765104027,
      "hd": 314
    },
    {
      "lat": 23.070053,
      "lng": 72.519402,
      "alt": 2975,
      "spd": 130,
      "ts": 1765104025,
      "hd": 315
    },
    {
      "lat": 23.068954,
      "lng": 72.520599,
      "alt": 2950,
      "spd": 130,
      "ts": 1765104022,
      "hd": 314
    },
    {
      "lat": 23.068268,
      "lng": 72.521355,
      "alt": 2950,
      "spd": 131,
      "ts": 1765104020,
      "hd": 313
    },
    {
      "lat": 23.06724,
      "lng": 72.522484,
      "alt": 2950,
      "spd": 134,
      "ts": 1765104018,
      "hd": 311
    },
    {
      "lat": 23.066261,
      "lng": 72.523705,
      "alt": 2950,
      "spd": 133,
      "ts": 1765104016,
      "hd": 309
    },
    {
      "lat": 23.06547,
      "lng": 72.524719,
      "alt": 2950,
      "spd": 134,
      "ts": 1765104014,
      "hd": 307
    },
    {
      "lat": 23.064514,
      "lng": 72.526047,
      "alt": 2950,
      "spd": 134,
      "ts": 1765104011,
      "hd": 305
    },
    {
      "lat": 23.063782,
      "lng": 72.527145,
      "alt": 2950,
      "spd": 134,
      "ts": 1765104009,
      "hd": 301
    },
    {
      "lat": 23.063095,
      "lng": 72.528282,
      "alt": 2950,
      "spd": 134,
      "ts": 1765104007,
      "hd": 298
    },
    {
      "lat": 23.062317,
      "lng": 72.529793,
      "alt": 2950,
      "spd": 134,
      "ts": 1765104005,
      "hd": 295
    },
    {
      "lat": 23.061859,
      "lng": 72.530739,
      "alt": 2950,
      "spd": 133,
      "ts": 1765104003,
      "hd": 293
    },
    {
      "lat": 23.061127,
      "lng": 72.532585,
      "alt": 2950,
      "spd": 134,
      "ts": 1765104000,
      "hd": 290
    },
    {
      "lat": 23.060722,
      "lng": 72.533821,
      "alt": 2950,
      "spd": 133,
      "ts": 1765103998,
      "hd": 286
    },
    {
      "lat": 23.060257,
      "lng": 72.53553,
      "alt": 2950,
      "spd": 132,
      "ts": 1765103996,
      "hd": 282
    },
    {
      "lat": 23.059982,
      "lng": 72.53688,
      "alt": 2950,
      "spd": 132,
      "ts": 1765103994,
      "hd": 279
    },
    {
      "lat": 23.059792,
      "lng": 72.5382,
      "alt": 2950,
      "spd": 132,
      "ts": 1765103991,
      "hd": 274
    },
    {
      "lat": 23.059662,
      "lng": 72.539879,
      "alt": 2950,
      "spd": 132,
      "ts": 1765103989,
      "hd": 271
    },
    {
      "lat": 23.05957,
      "lng": 72.541176,
      "alt": 2950,
      "spd": 132,
      "ts": 1765103987,
      "hd": 268
    },
    {
      "lat": 23.059605,
      "lng": 72.542725,
      "alt": 2950,
      "spd": 131,
      "ts": 1765103984,
      "hd": 265
    },
    {
      "lat": 23.059708,
      "lng": 72.544121,
      "alt": 2950,
      "spd": 131,
      "ts": 1765103982,
      "hd": 261
    },
    {
      "lat": 23.059931,
      "lng": 72.54583,
      "alt": 2950,
      "spd": 129,
      "ts": 1765103980,
      "hd": 257
    },
    {
      "lat": 23.060163,
      "lng": 72.54705,
      "alt": 2950,
      "spd": 129,
      "ts": 1765103978,
      "hd": 254
    },
    {
      "lat": 23.060629,
      "lng": 72.548622,
      "alt": 2950,
      "spd": 128,
      "ts": 1765103976,
      "hd": 250
    },
    {
      "lat": 23.061001,
      "lng": 72.549744,
      "alt": 2950,
      "spd": 128,
      "ts": 1765103973,
      "hd": 246
    },
    {
      "lat": 23.06156,
      "lng": 72.55117,
      "alt": 2950,
      "spd": 127,
      "ts": 1765103971,
      "hd": 245
    },
    {
      "lat": 23.06218,
      "lng": 72.552612,
      "alt": 2950,
      "spd": 126,
      "ts": 1765103969,
      "hd": 245
    },
    {
      "lat": 23.062683,
      "lng": 72.553864,
      "alt": 2950,
      "spd": 126,
      "ts": 1765103967,
      "hd": 245
    },
    {
      "lat": 23.064213,
      "lng": 72.55732,
      "alt": 2950,
      "spd": 125,
      "ts": 1765103960,
      "hd": 245
    },
    {
      "lat": 23.065424,
      "lng": 72.560272,
      "alt": 2950,
      "spd": 125,
      "ts": 1765103956,
      "hd": 246
    },
    {
      "lat": 23.065796,
      "lng": 72.56115,
      "alt": 2950,
      "spd": 124,
      "ts": 1765103954,
      "hd": 246
    },
    {
      "lat": 23.066355,
      "lng": 72.562561,
      "alt": 2950,
      "spd": 123,
      "ts": 1765103951,
      "hd": 246
    },
    {
      "lat": 23.066895,
      "lng": 72.563896,
      "alt": 2950,
      "spd": 123,
      "ts": 1765103949,
      "hd": 245
    },
    {
      "lat": 23.06749,
      "lng": 72.5653,
      "alt": 2950,
      "spd": 122,
      "ts": 1765103947,
      "hd": 244
    },
    {
      "lat": 23.067984,
      "lng": 72.566376,
      "alt": 2950,
      "spd": 122,
      "ts": 1765103944,
      "hd": 244
    },
    {
      "lat": 23.068588,
      "lng": 72.567749,
      "alt": 2950,
      "spd": 122,
      "ts": 1765103942,
      "hd": 244
    },
    {
      "lat": 23.069092,
      "lng": 72.568893,
      "alt": 2925,
      "spd": 121,
      "ts": 1765103940,
      "hd": 244
    },
    {
      "lat": 23.069521,
      "lng": 72.569885,
      "alt": 2925,
      "spd": 120,
      "ts": 1765103938,
      "hd": 244
    },
    {
      "lat": 23.070126,
      "lng": 72.571259,
      "alt": 2900,
      "spd": 119,
      "ts": 1765103936,
      "hd": 244
    },
    {
      "lat": 23.070637,
      "lng": 72.572426,
      "alt": 2900,
      "spd": 120,
      "ts": 1765103934,
      "hd": 243
    },
    {
      "lat": 23.071102,
      "lng": 72.573494,
      "alt": 2875,
      "spd": 120,
      "ts": 1765103932,
      "hd": 242
    },
    {
      "lat": 23.071615,
      "lng": 72.574516,
      "alt": 2875,
      "spd": 119,
      "ts": 1765103929,
      "hd": 242
    },
    {
      "lat": 23.07225,
      "lng": 72.575882,
      "alt": 2825,
      "spd": 119,
      "ts": 1765103927,
      "hd": 242
    },
    {
      "lat": 23.0728,
      "lng": 72.576935,
      "alt": 2825,
      "spd": 119,
      "ts": 1765103925,
      "hd": 241
    },
    {
      "lat": 23.07329,
      "lng": 72.577972,
      "alt": 2800,
      "spd": 118,
      "ts": 1765103923,
      "hd": 241
    },
    {
      "lat": 23.073807,
      "lng": 72.578979,
      "alt": 2775,
      "spd": 117,
      "ts": 1765103921,
      "hd": 240
    },
    {
      "lat": 23.074455,
      "lng": 72.580261,
      "alt": 2750,
      "spd": 116,
      "ts": 1765103919,
      "hd": 240
    },
    {
      "lat": 23.074951,
      "lng": 72.581177,
      "alt": 2725,
      "spd": 115,
      "ts": 1765103917,
      "hd": 239
    },
    {
      "lat": 23.075775,
      "lng": 72.582672,
      "alt": 2675,
      "spd": 114,
      "ts": 1765103914,
      "hd": 239
    },
    {
      "lat": 23.076178,
      "lng": 72.583412,
      "alt": 2675,
      "spd": 114,
      "ts": 1765103912,
      "hd": 240
    },
    {
      "lat": 23.076782,
      "lng": 72.584572,
      "alt": 2625,
      "spd": 112,
      "ts": 1765103910,
      "hd": 240
    },
    {
      "lat": 23.077341,
      "lng": 72.585602,
      "alt": 2600,
      "spd": 111,
      "ts": 1765103908,
      "hd": 239
    },
    {
      "lat": 23.078018,
      "lng": 72.586868,
      "alt": 2525,
      "spd": 110,
      "ts": 1765103905,
      "hd": 239
    },
    {
      "lat": 23.07855,
      "lng": 72.587837,
      "alt": 2500,
      "spd": 109,
      "ts": 1765103903,
      "hd": 238
    },
    {
      "lat": 23.079208,
      "lng": 72.588966,
      "alt": 2450,
      "spd": 109,
      "ts": 1765103901,
      "hd": 238
    },
    {
      "lat": 23.079716,
      "lng": 72.589928,
      "alt": 2400,
      "spd": 109,
      "ts": 1765103899,
      "hd": 237
    },
    {
      "lat": 23.080582,
      "lng": 72.591362,
      "alt": 2350,
      "spd": 109,
      "ts": 1765103897,
      "hd": 236
    },
    {
      "lat": 23.080973,
      "lng": 72.59201,
      "alt": 2325,
      "spd": 109,
      "ts": 1765103894,
      "hd": 236
    },
    {
      "lat": 23.081717,
      "lng": 72.593178,
      "alt": 2275,
      "spd": 110,
      "ts": 1765103892,
      "hd": 235
    },
    {
      "lat": 23.082695,
      "lng": 72.594757,
      "alt": 2200,
      "spd": 108,
      "ts": 1765103889,
      "hd": 235
    },
    {
      "lat": 23.083206,
      "lng": 72.595619,
      "alt": 2175,
      "spd": 109,
      "ts": 1765103886,
      "hd": 235
    },
    {
      "lat": 23.085068,
      "lng": 72.598503,
      "alt": 2050,
      "spd": 108,
      "ts": 1765103880,
      "hd": 235
    },
    {
      "lat": 23.0858,
      "lng": 72.599701,
      "alt": 2025,
      "spd": 108,
      "ts": 1765103878,
      "hd": 235
    },
    {
      "lat": 23.086395,
      "lng": 72.600655,
      "alt": 1975,
      "spd": 108,
      "ts": 1765103875,
      "hd": 235
    },
    {
      "lat": 23.087082,
      "lng": 72.601753,
      "alt": 1950,
      "spd": 108,
      "ts": 1765103873,
      "hd": 235
    },
    {
      "lat": 23.087631,
      "lng": 72.6026,
      "alt": 1925,
      "spd": 107,
      "ts": 1765103871,
      "hd": 236
    },
    {
      "lat": 23.088188,
      "lng": 72.603554,
      "alt": 1875,
      "spd": 107,
      "ts": 1765103869,
      "hd": 235
    },
    {
      "lat": 23.08898,
      "lng": 72.604774,
      "alt": 1850,
      "spd": 107,
      "ts": 1765103866,
      "hd": 235
    },
    {
      "lat": 23.089371,
      "lng": 72.605446,
      "alt": 1825,
      "spd": 107,
      "ts": 1765103864,
      "hd": 235
    },
    {
      "lat": 23.090096,
      "lng": 72.60656,
      "alt": 1800,
      "spd": 107,
      "ts": 1765103862,
      "hd": 234
    },
    {
      "lat": 23.090698,
      "lng": 72.607491,
      "alt": 1775,
      "spd": 107,
      "ts": 1765103860,
      "hd": 234
    },
    {
      "lat": 23.091248,
      "lng": 72.608292,
      "alt": 1775,
      "spd": 107,
      "ts": 1765103858,
      "hd": 234
    },
    {
      "lat": 23.092098,
      "lng": 72.609612,
      "alt": 1725,
      "spd": 106,
      "ts": 1765103855,
      "hd": 234
    },
    {
      "lat": 23.092703,
      "lng": 72.610474,
      "alt": 1725,
      "spd": 104,
      "ts": 1765103853,
      "hd": 235
    },
    {
      "lat": 23.093262,
      "lng": 72.611389,
      "alt": 1700,
      "spd": 102,
      "ts": 1765103851,
      "hd": 236
    },
    {
      "lat": 23.093994,
      "lng": 72.61264,
      "alt": 1650,
      "spd": 102,
      "ts": 1765103848,
      "hd": 238
    },
    {
      "lat": 23.094635,
      "lng": 72.613686,
      "alt": 1625,
      "spd": 102,
      "ts": 1765103846,
      "hd": 238
    },
    {
      "lat": 23.09523,
      "lng": 72.614738,
      "alt": 1575,
      "spd": 101,
      "ts": 1765103844,
      "hd": 238
    },
    {
      "lat": 23.09573,
      "lng": 72.615608,
      "alt": 1550,
      "spd": 101,
      "ts": 1765103841,
      "hd": 240
    },
    {
      "lat": 23.096195,
      "lng": 72.616524,
      "alt": 1525,
      "spd": 101,
      "ts": 1765103839,
      "hd": 244
    },
    {
      "lat": 23.096924,
      "lng": 72.618233,
      "alt": 1450,
      "spd": 102,
      "ts": 1765103835,
      "hd": 253
    },
    {
      "lat": 23.09729,
      "lng": 72.619377,
      "alt": 1425,
      "spd": 101,
      "ts": 1765103833,
      "hd": 258
    },
    {
      "lat": 23.09761,
      "lng": 72.620674,
      "alt": 1400,
      "spd": 101,
      "ts": 1765103831,
      "hd": 260
    },
    {
      "lat": 23.097748,
      "lng": 72.621429,
      "alt": 1375,
      "spd": 101,
      "ts": 1765103829,
      "hd": 266
    },
    {
      "lat": 23.097885,
      "lng": 72.622726,
      "alt": 1350,
      "spd": 101,
      "ts": 1765103827,
      "hd": 268
    },
    {
      "lat": 23.097885,
      "lng": 72.624275,
      "alt": 1300,
      "spd": 101,
      "ts": 1765103824,
      "hd": 271
    },
    {
      "lat": 23.097776,
      "lng": 72.625679,
      "alt": 1275,
      "spd": 100,
      "ts": 1765103822,
      "hd": 278
    },
    {
      "lat": 23.097656,
      "lng": 72.626373,
      "alt": 1250,
      "spd": 99,
      "ts": 1765103819,
      "hd": 285
    },
    {
      "lat": 23.097452,
      "lng": 72.627411,
      "alt": 1225,
      "spd": 98,
      "ts": 1765103817,
      "hd": 288
    },
    {
      "lat": 23.097153,
      "lng": 72.628365,
      "alt": 1200,
      "spd": 98,
      "ts": 1765103815,
      "hd": 292
    },
    {
      "lat": 23.096786,
      "lng": 72.629318,
      "alt": 1175,
      "spd": 98,
      "ts": 1765103813,
      "hd": 297
    },
    {
      "lat": 23.096334,
      "lng": 72.630257,
      "alt": 1150,
      "spd": 97,
      "ts": 1765103811,
      "hd": 302
    },
    {
      "lat": 23.095459,
      "lng": 72.631767,
      "alt": 1100,
      "spd": 97,
      "ts": 1765103808,
      "hd": 310
    },
    {
      "lat": 23.095001,
      "lng": 72.632362,
      "alt": 1075,
      "spd": 97,
      "ts": 1765103805,
      "hd": 310
    },
    {
      "lat": 23.094286,
      "lng": 72.633362,
      "alt": 1050,
      "spd": 97,
      "ts": 1765103803,
      "hd": 315
    },
    {
      "lat": 23.093681,
      "lng": 72.633972,
      "alt": 1050,
      "spd": 97,
      "ts": 1765103801,
      "hd": 316
    },
    {
      "lat": 23.092621,
      "lng": 72.63501,
      "alt": 1000,
      "spd": 96,
      "ts": 1765103798,
      "hd": 323
    },
    {
      "lat": 23.091446,
      "lng": 72.636009,
      "alt": 975,
      "spd": 95,
      "ts": 1765103796,
      "hd": 326
    },
    {
      "lat": 23.090881,
      "lng": 72.63636,
      "alt": 950,
      "spd": 95,
      "ts": 1765103793,
      "hd": 330
    },
    {
      "lat": 23.090096,
      "lng": 72.636818,
      "alt": 925,
      "spd": 94,
      "ts": 1765103791,
      "hd": 338
    },
    {
      "lat": 23.087311,
      "lng": 72.637955,
      "alt": 825,
      "spd": 94,
      "ts": 1765103785,
      "hd": 347
    },
    {
      "lat": 23.086349,
      "lng": 72.638153,
      "alt": 800,
      "spd": 94,
      "ts": 1765103783,
      "hd": 352
    },
    {
      "lat": 23.085581,
      "lng": 72.638245,
      "alt": 775,
      "spd": 96,
      "ts": 1765103781,
      "hd": 358
    },
    {
      "lat": 23.08465,
      "lng": 72.638245,
      "alt": 750,
      "spd": 95,
      "ts": 1765103778,
      "hd": 4
    },
    {
      "lat": 23.083557,
      "lng": 72.638206,
      "alt": 725,
      "spd": 95,
      "ts": 1765103776,
      "hd": 8
    },
    {
      "lat": 23.082275,
      "lng": 72.637939,
      "alt": 700,
      "spd": 93,
      "ts": 1765103774,
      "hd": 14
    },
    {
      "lat": 23.081635,
      "lng": 72.637756,
      "alt": 675,
      "spd": 92,
      "ts": 1765103771,
      "hd": 22
    },
    {
      "lat": 23.080647,
      "lng": 72.637383,
      "alt": 625,
      "spd": 92,
      "ts": 1765103769,
      "hd": 24
    },
    {
      "lat": 23.079483,
      "lng": 72.636658,
      "alt": 575,
      "spd": 91,
      "ts": 1765103767,
      "hd": 36
    },
    {
      "lat": 23.078934,
      "lng": 72.636208,
      "alt": 550,
      "spd": 91,
      "ts": 1765103764,
      "hd": 44
    },
    {
      "lat": 23.076595,
      "lng": 72.633766,
      "alt": 425,
      "spd": 90,
      "ts": 1765103756,
      "hd": 45
    },
    {
      "lat": 23.074175,
      "lng": 72.631172,
      "alt": 300,
      "spd": 84,
      "ts": 1765103748,
      "hd": 44
    }
  ],
  "firstTimestamp": 1765103748,
  "s": "QKGU6hr_MoihXOaDFUKyl0XBzn1mNDWi2KEnDqq0we49wo6ncpHUZkGRtbAEu8cL"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d674d9b = R"(
{
  "identification": {
    "id": "3d674d9b",
    "row": 5744838985,
    "number": {
      "default": "MH148",
      "alternative": null
    },
    "callsign": "MAS148"
  },
  "status": {
    "live": true,
    "text": "Delayed 20:45",
    "icon": "yellow",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "delayed",
        "color": "yellow",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765111552,
        "local": 1765140352
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "A339",
      "text": "Airbus A330-941"
    },
    "countryId": 133,
    "registration": "9M-MNG",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/6/828474_1764254555_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11919922",
          "copyright": "shaoxiaxiaolin",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/413963_1759627462_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11858738",
          "copyright": "Riv Blundstone",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/678054_1759491345_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11857220",
          "copyright": "Zx7_Aviation",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/913253_1758464762_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11847974",
          "copyright": "ARK17",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/320702_1758153418_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11845157",
          "copyright": "AlphaThreeeighty",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/6/828474_1764254555.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11919922",
          "copyright": "shaoxiaxiaolin",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/413963_1759627462.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11858738",
          "copyright": "Riv Blundstone",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/678054_1759491345.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11857220",
          "copyright": "Zx7_Aviation",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/913253_1758464762.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11847974",
          "copyright": "ARK17",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/320702_1758153418.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11845157",
          "copyright": "AlphaThreeeighty",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/6/828474_1764254555.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11919922",
          "copyright": "shaoxiaxiaolin",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/413963_1759627462.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11858738",
          "copyright": "Riv Blundstone",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/678054_1759491345.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11857220",
          "copyright": "Zx7_Aviation",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/913253_1758464762.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11847974",
          "copyright": "ARK17",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/320702_1758153418.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11845157",
          "copyright": "AlphaThreeeighty",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "750563"
  },
  "airline": {
    "name": "Malaysia Airlines",
    "short": "Malaysia Airlines",
    "code": {
      "iata": "MH",
      "icao": "MAS"
    },
    "url": "malaysia-airlines-mas"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Melbourne Airport",
      "code": {
        "iata": "MEL",
        "icao": "YMML"
      },
      "position": {
        "latitude": -37.665794,
        "longitude": 144.837296,
        "altitude": 392,
        "country": {
          "id": 14,
          "name": "Australia",
          "code": "AU",
          "codeLong": "AUS"
        },
        "region": {
          "city": "Melbourne"
        }
      },
      "timezone": {
        "name": "Australia/Melbourne",
        "offset": 39600,
        "offsetHours": "11:00",
        "abbr": "AEDT",
        "abbrName": "Australian Eastern Daylight Time",
        "isDst": true
      },
      "visible": true,
      "website": "http://melbourneairport.com.au/",
      "info": {
        "terminal": "2",
        "baggage": null,
        "gate": null
      }
    },
    "destination": {
      "name": "Kuala Lumpur International Airport",
      "code": {
        "iata": "KUL",
        "icao": "WMKK"
      },
      "position": {
        "latitude": 2.745578,
        "longitude": 101.7099,
        "altitude": 69,
        "country": {
          "id": 133,
          "name": "Malaysia",
          "code": "MY",
          "codeLong": "MYS"
        },
        "region": {
          "city": "Kuala Lumpur"
        }
      },
      "timezone": {
        "name": "Asia/Kuala_Lumpur",
        "offset": 28800,
        "offsetHours": "8:00",
        "abbr": "+08",
        "abbrName": "",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.klia.com.my",
      "info": {
        "terminal": "1",
        "baggage": null,
        "gate": "C24"
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d657704",
          "number": {
            "default": "MH149"
          }
        },
        "airport": {
          "origin": {
            "name": "Kuala Lumpur International Airport",
            "code": {
              "iata": "KUL",
              "icao": "WMKK"
            },
            "position": {
              "latitude": 2.745578,
              "longitude": 101.7099,
              "altitude": 69,
              "country": {
                "id": 133,
                "name": "Malaysia",
                "code": "MY",
                "codeLong": "MYS"
              },
              "region": {
                "city": "Kuala Lumpur"
              }
            },
            "timezone": {
              "name": "Asia/Kuala_Lumpur",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "+08",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.klia.com.my"
          },
          "destination": {
            "name": "Melbourne Airport",
            "code": {
              "iata": "MEL",
              "icao": "YMML"
            },
            "position": {
              "latitude": -37.665794,
              "longitude": 144.837296,
              "altitude": 392,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Melbourne"
              }
            },
            "timezone": {
              "name": "Australia/Melbourne",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://melbourneairport.com.au/"
          }
        },
        "time": {
          "real": {
            "departure": 1765033429
          }
        }
      },
      {
        "identification": {
          "id": "3d64211d",
          "number": {
            "default": "MH122"
          }
        },
        "airport": {
          "origin": {
            "name": "Sydney Kingsford Smith Airport",
            "code": {
              "iata": "SYD",
              "icao": "YSSY"
            },
            "position": {
              "latitude": -33.946098,
              "longitude": 151.1772,
              "altitude": 21,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Sydney"
              }
            },
            "timezone": {
              "name": "Australia/Sydney",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://www.sydneyairport.com.au/"
          },
          "destination": {
            "name": "Kuala Lumpur International Airport",
            "code": {
              "iata": "KUL",
              "icao": "WMKK"
            },
            "position": {
              "latitude": 2.745578,
              "longitude": 101.7099,
              "altitude": 69,
              "country": {
                "id": 133,
                "name": "Malaysia",
                "code": "MY",
                "codeLong": "MYS"
              },
              "region": {
                "city": "Kuala Lumpur"
              }
            },
            "timezone": {
              "name": "Asia/Kuala_Lumpur",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "+08",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.klia.com.my"
          }
        },
        "time": {
          "real": {
            "departure": 1764989140
          }
        }
      },
      {
        "identification": {
          "id": "3d62548b",
          "number": {
            "default": "MH123"
          }
        },
        "airport": {
          "origin": {
            "name": "Kuala Lumpur International Airport",
            "code": {
              "iata": "KUL",
              "icao": "WMKK"
            },
            "position": {
              "latitude": 2.745578,
              "longitude": 101.7099,
              "altitude": 69,
              "country": {
                "id": 133,
                "name": "Malaysia",
                "code": "MY",
                "codeLong": "MYS"
              },
              "region": {
                "city": "Kuala Lumpur"
              }
            },
            "timezone": {
              "name": "Asia/Kuala_Lumpur",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "+08",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.klia.com.my"
          },
          "destination": {
            "name": "Sydney Kingsford Smith Airport",
            "code": {
              "iata": "SYD",
              "icao": "YSSY"
            },
            "position": {
              "latitude": -33.946098,
              "longitude": 151.1772,
              "altitude": 21,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Sydney"
              }
            },
            "timezone": {
              "name": "Australia/Sydney",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://www.sydneyairport.com.au/"
          }
        },
        "time": {
          "real": {
            "departure": 1764949893
          }
        }
      },
      {
        "identification": {
          "id": "3d60ed75",
          "number": {
            "default": "MH148"
          }
        },
        "airport": {
          "origin": {
            "name": "Melbourne Airport",
            "code": {
              "iata": "MEL",
              "icao": "YMML"
            },
            "position": {
              "latitude": -37.665794,
              "longitude": 144.837296,
              "altitude": 392,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Melbourne"
              }
            },
            "timezone": {
              "name": "Australia/Melbourne",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://melbourneairport.com.au/"
          },
          "destination": {
            "name": "Kuala Lumpur International Airport",
            "code": {
              "iata": "KUL",
              "icao": "WMKK"
            },
            "position": {
              "latitude": 2.745578,
              "longitude": 101.7099,
              "altitude": 69,
              "country": {
                "id": 133,
                "name": "Malaysia",
                "code": "MY",
                "codeLong": "MYS"
              },
              "region": {
                "city": "Kuala Lumpur"
              }
            },
            "timezone": {
              "name": "Asia/Kuala_Lumpur",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "+08",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.klia.com.my"
          }
        },
        "time": {
          "real": {
            "departure": 1764909831
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 1765080600,
      "arrival": 1765110300
    },
    "real": {
      "departure": 1765083266,
      "arrival": null
    },
    "estimated": {
      "departure": null,
      "arrival": 1765111552
    },
    "other": {
      "eta": 1765111552,
      "updated": 1765094738
    },
    "historical": {
      "flighttime": "29491",
      "delay": "1261"
    }
  },
  "trail": [
    {
      "lat": -6.533524,
      "lng": 106.356689,
      "alt": 38000,
      "spd": 467,
      "ts": 1765105097,
      "hd": 336
    },
    {
      "lat": -6.59697,
      "lng": 106.38485,
      "alt": 38000,
      "spd": 468,
      "ts": 1765105065,
      "hd": 335
    },
    {
      "lat": -6.660828,
      "lng": 106.413528,
      "alt": 38000,
      "spd": 468,
      "ts": 1765105033,
      "hd": 335
    },
    {
      "lat": -6.724228,
      "lng": 106.441277,
      "alt": 37975,
      "spd": 468,
      "ts": 1765105002,
      "hd": 336
    },
    {
      "lat": -6.788014,
      "lng": 106.468597,
      "alt": 38000,
      "spd": 474,
      "ts": 1765104970,
      "hd": 336
    },
    {
      "lat": -6.851745,
      "lng": 106.499855,
      "alt": 38000,
      "spd": 473,
      "ts": 1765104937,
      "hd": 333
    },
    {
      "lat": -6.914108,
      "lng": 106.530701,
      "alt": 38000,
      "spd": 470,
      "ts": 1765104906,
      "hd": 333
    },
    {
      "lat": -6.973801,
      "lng": 106.563057,
      "alt": 38000,
      "spd": 469,
      "ts": 1765104875,
      "hd": 328
    },
    {
      "lat": -7.034958,
      "lng": 106.600296,
      "alt": 37975,
      "spd": 467,
      "ts": 1765104842,
      "hd": 328
    },
    {
      "lat": -7.091675,
      "lng": 106.635292,
      "alt": 38000,
      "spd": 463,
      "ts": 1765104811,
      "hd": 328
    },
    {
      "lat": -7.151215,
      "lng": 106.672508,
      "alt": 38000,
      "spd": 466,
      "ts": 1765104778,
      "hd": 327
    },
    {
      "lat": -7.208313,
      "lng": 106.708763,
      "alt": 38000,
      "spd": 470,
      "ts": 1765104747,
      "hd": 326
    },
    {
      "lat": -7.212012,
      "lng": 106.71125,
      "alt": 38000,
      "spd": 471,
      "ts": 1765104745,
      "hd": 326
    },
    {
      "lat": -7.216575,
      "lng": 106.714325,
      "alt": 38000,
      "spd": 471,
      "ts": 1765104743,
      "hd": 325
    },
    {
      "lat": -7.220345,
      "lng": 106.716927,
      "alt": 38000,
      "spd": 472,
      "ts": 1765104741,
      "hd": 324
    },
    {
      "lat": -7.227905,
      "lng": 106.722404,
      "alt": 38000,
      "spd": 473,
      "ts": 1765104736,
      "hd": 323
    },
    {
      "lat": -7.232666,
      "lng": 106.725983,
      "alt": 38000,
      "spd": 473,
      "ts": 1765104734,
      "hd": 322
    },
    {
      "lat": -7.236219,
      "lng": 106.728767,
      "alt": 38000,
      "spd": 473,
      "ts": 1765104732,
      "hd": 321
    },
    {
      "lat": -7.240402,
      "lng": 106.732132,
      "alt": 38000,
      "spd": 474,
      "ts": 1765104729,
      "hd": 320
    },
    {
      "lat": -7.243332,
      "lng": 106.734505,
      "alt": 38000,
      "spd": 474,
      "ts": 1765104727,
      "hd": 320
    },
    {
      "lat": -7.281794,
      "lng": 106.77153,
      "alt": 38000,
      "spd": 479,
      "ts": 1765104703,
      "hd": 311
    },
    {
      "lat": -7.327698,
      "lng": 106.828308,
      "alt": 38000,
      "spd": 480,
      "ts": 1765104671,
      "hd": 308
    },
    {
      "lat": -7.370988,
      "lng": 106.884232,
      "alt": 38000,
      "spd": 481,
      "ts": 1765104639,
      "hd": 307
    },
    {
      "lat": -7.374161,
      "lng": 106.888405,
      "alt": 38000,
      "spd": 481,
      "ts": 1765104637,
      "hd": 306
    },
    {
      "lat": -7.376621,
      "lng": 106.891716,
      "alt": 38000,
      "spd": 482,
      "ts": 1765104635,
      "hd": 306
    },
    {
      "lat": -7.379926,
      "lng": 106.896263,
      "alt": 38000,
      "spd": 482,
      "ts": 1765104632,
      "hd": 305
    },
    {
      "lat": -7.382629,
      "lng": 106.900002,
      "alt": 38000,
      "spd": 483,
      "ts": 1765104630,
      "hd": 305
    },
    {
      "lat": -7.38533,
      "lng": 106.903862,
      "alt": 38000,
      "spd": 483,
      "ts": 1765104628,
      "hd": 304
    },
    {
      "lat": -7.419617,
      "lng": 106.965454,
      "alt": 38000,
      "spd": 491,
      "ts": 1765104597,
      "hd": 295
    },
    {
      "lat": -7.45008,
      "lng": 107.032883,
      "alt": 38000,
      "spd": 495,
      "ts": 1765104565,
      "hd": 290
    },
    {
      "lat": -7.469971,
      "lng": 107.101242,
      "alt": 38000,
      "spd": 501,
      "ts": 1765104534,
      "hd": 282
    },
    {
      "lat": -7.486531,
      "lng": 107.175797,
      "alt": 38000,
      "spd": 500,
      "ts": 1765104502,
      "hd": 282
    },
    {
      "lat": -7.502335,
      "lng": 107.248489,
      "alt": 38000,
      "spd": 498,
      "ts": 1765104469,
      "hd": 282
    },
    {
      "lat": -7.518173,
      "lng": 107.320831,
      "alt": 38000,
      "spd": 499,
      "ts": 1765104437,
      "hd": 282
    },
    {
      "lat": -7.534515,
      "lng": 107.394287,
      "alt": 38000,
      "spd": 506,
      "ts": 1765104405,
      "hd": 282
    },
    {
      "lat": -7.551052,
      "lng": 107.469635,
      "alt": 38025,
      "spd": 505,
      "ts": 1765104372,
      "hd": 282
    },
    {
      "lat": -7.567113,
      "lng": 107.544693,
      "alt": 38000,
      "spd": 504,
      "ts": 1765104340,
      "hd": 282
    },
    {
      "lat": -7.582661,
      "lng": 107.616295,
      "alt": 38000,
      "spd": 502,
      "ts": 1765104308,
      "hd": 282
    },
    {
      "lat": -7.602027,
      "lng": 107.68737,
      "alt": 38000,
      "spd": 500,
      "ts": 1765104277,
      "hd": 286
    },
    {
      "lat": -7.624603,
      "lng": 107.754791,
      "alt": 38000,
      "spd": 500,
      "ts": 1765104246,
      "hd": 292
    },
    {
      "lat": -7.655562,
      "lng": 107.819824,
      "alt": 38000,
      "spd": 498,
      "ts": 1765104215,
      "hd": 296
    },
    {
      "lat": -7.690613,
      "lng": 107.885231,
      "alt": 38000,
      "spd": 494,
      "ts": 1765104183,
      "hd": 301
    },
    {
      "lat": -7.729347,
      "lng": 107.949104,
      "alt": 38000,
      "spd": 492,
      "ts": 1765104150,
      "hd": 301
    },
    {
      "lat": -7.766373,
      "lng": 108.009941,
      "alt": 38000,
      "spd": 490,
      "ts": 1765104119,
      "hd": 301
    },
    {
      "lat": -7.768753,
      "lng": 108.013855,
      "alt": 38000,
      "spd": 490,
      "ts": 1765104117,
      "hd": 301
    },
    {
      "lat": -7.771866,
      "lng": 108.018883,
      "alt": 38000,
      "spd": 490,
      "ts": 1765104115,
      "hd": 301
    },
    {
      "lat": -7.774317,
      "lng": 108.022881,
      "alt": 38000,
      "spd": 490,
      "ts": 1765104113,
      "hd": 301
    },
    {
      "lat": -7.776644,
      "lng": 108.026573,
      "alt": 38000,
      "spd": 489,
      "ts": 1765104111,
      "hd": 302
    },
    {
      "lat": -7.779373,
      "lng": 108.030891,
      "alt": 38000,
      "spd": 490,
      "ts": 1765104109,
      "hd": 302
    },
    {
      "lat": -7.781765,
      "lng": 108.034622,
      "alt": 38000,
      "spd": 489,
      "ts": 1765104107,
      "hd": 303
    },
    {
      "lat": -7.784372,
      "lng": 108.038651,
      "alt": 38000,
      "spd": 488,
      "ts": 1765104104,
      "hd": 303
    },
    {
      "lat": -7.786789,
      "lng": 108.042343,
      "alt": 38000,
      "spd": 488,
      "ts": 1765104102,
      "hd": 304
    },
    {
      "lat": -7.78949,
      "lng": 108.046257,
      "alt": 38000,
      "spd": 487,
      "ts": 1765104100,
      "hd": 305
    },
    {
      "lat": -7.792984,
      "lng": 108.051155,
      "alt": 38000,
      "spd": 486,
      "ts": 1765104098,
      "hd": 306
    },
    {
      "lat": -7.795731,
      "lng": 108.054749,
      "alt": 38000,
      "spd": 485,
      "ts": 1765104096,
      "hd": 307
    },
    {
      "lat": -7.798105,
      "lng": 108.057785,
      "alt": 38000,
      "spd": 485,
      "ts": 1765104094,
      "hd": 309
    },
    {
      "lat": -7.801895,
      "lng": 108.062363,
      "alt": 38000,
      "spd": 483,
      "ts": 1765104092,
      "hd": 310
    },
    {
      "lat": -7.804902,
      "lng": 108.06588,
      "alt": 38000,
      "spd": 482,
      "ts": 1765104089,
      "hd": 311
    },
    {
      "lat": -7.829498,
      "lng": 108.089317,
      "alt": 38000,
      "spd": 476,
      "ts": 1765104074,
      "hd": 321
    },
    {
      "lat": -7.886673,
      "lng": 108.133728,
      "alt": 38000,
      "spd": 471,
      "ts": 1765104041,
      "hd": 322
    },
    {
      "lat": -7.93927,
      "lng": 108.174461,
      "alt": 38000,
      "spd": 469,
      "ts": 1765104011,
      "hd": 322
    },
    {
      "lat": -7.995621,
      "lng": 108.218033,
      "alt": 38000,
      "spd": 471,
      "ts": 1765103978,
      "hd": 322
    },
    {
      "lat": -8.049114,
      "lng": 108.259468,
      "alt": 38000,
      "spd": 473,
      "ts": 1765103947,
      "hd": 321
    },
    {
      "lat": -8.105118,
      "lng": 108.303688,
      "alt": 38000,
      "spd": 478,
      "ts": 1765103915,
      "hd": 321
    },
    {
      "lat": -8.16219,
      "lng": 108.348732,
      "alt": 38000,
      "spd": 480,
      "ts": 1765103883,
      "hd": 321
    },
    {
      "lat": -8.215256,
      "lng": 108.390739,
      "alt": 38000,
      "spd": 482,
      "ts": 1765103852,
      "hd": 321
    },
    {
      "lat": -8.268539,
      "lng": 108.432823,
      "alt": 38000,
      "spd": 481,
      "ts": 1765103822,
      "hd": 321
    },
    {
      "lat": -8.323633,
      "lng": 108.476349,
      "alt": 38000,
      "spd": 478,
      "ts": 1765103790,
      "hd": 321
    },
    {
      "lat": -8.379776,
      "lng": 108.52076,
      "alt": 38000,
      "spd": 476,
      "ts": 1765103758,
      "hd": 321
    },
    {
      "lat": -8.432739,
      "lng": 108.562706,
      "alt": 38000,
      "spd": 473,
      "ts": 1765103728,
      "hd": 321
    },
    {
      "lat": -8.487078,
      "lng": 108.605728,
      "alt": 38000,
      "spd": 467,
      "ts": 1765103696,
      "hd": 321
    },
    {
      "lat": -8.53917,
      "lng": 108.647018,
      "alt": 38000,
      "spd": 464,
      "ts": 1765103665,
      "hd": 321
    },
    {
      "lat": -8.592316,
      "lng": 108.689095,
      "alt": 38000,
      "spd": 466,
      "ts": 1765103634,
      "hd": 321
    },
    {
      "lat": -8.64679,
      "lng": 108.732292,
      "alt": 38000,
      "spd": 463,
      "ts": 1765103601,
      "hd": 321
    },
    {
      "lat": -8.700986,
      "lng": 108.775253,
      "alt": 38000,
      "spd": 461,
      "ts": 1765103569,
      "hd": 321
    },
    {
      "lat": -8.752533,
      "lng": 108.816132,
      "alt": 38000,
      "spd": 459,
      "ts": 1765103539,
      "hd": 321
    },
    {
      "lat": -8.807218,
      "lng": 108.85955,
      "alt": 38000,
      "spd": 458,
      "ts": 1765103506,
      "hd": 321
    },
    {
      "lat": -8.8591,
      "lng": 108.900719,
      "alt": 38000,
      "spd": 459,
      "ts": 1765103475,
      "hd": 321
    },
    {
      "lat": -8.911076,
      "lng": 108.942039,
      "alt": 38000,
      "spd": 460,
      "ts": 1765103444,
      "hd": 321
    },
    {
      "lat": -8.96247,
      "lng": 108.982857,
      "alt": 38000,
      "spd": 462,
      "ts": 1765103414,
      "hd": 321
    },
    {
      "lat": -9.017166,
      "lng": 109.026276,
      "alt": 38000,
      "spd": 462,
      "ts": 1765103381,
      "hd": 321
    },
    {
      "lat": -9.071457,
      "lng": 109.069473,
      "alt": 38000,
      "spd": 463,
      "ts": 1765103349,
      "hd": 321
    },
    {
      "lat": -9.12638,
      "lng": 109.113182,
      "alt": 38000,
      "spd": 464,
      "ts": 1765103316,
      "hd": 321
    },
    {
      "lat": -9.178986,
      "lng": 109.155083,
      "alt": 38000,
      "spd": 463,
      "ts": 1765103285,
      "hd": 321
    },
    {
      "lat": -9.232799,
      "lng": 109.197899,
      "alt": 38000,
      "spd": 461,
      "ts": 1765103253,
      "hd": 321
    },
    {
      "lat": -9.2845,
      "lng": 109.239105,
      "alt": 38000,
      "spd": 461,
      "ts": 1765103222,
      "hd": 321
    },
    {
      "lat": -9.338013,
      "lng": 109.281754,
      "alt": 38000,
      "spd": 460,
      "ts": 1765103190,
      "hd": 321
    },
    {
      "lat": -9.38968,
      "lng": 109.322868,
      "alt": 38000,
      "spd": 459,
      "ts": 1765103160,
      "hd": 321
    },
    {
      "lat": -9.444145,
      "lng": 109.366341,
      "alt": 38000,
      "spd": 459,
      "ts": 1765103127,
      "hd": 321
    },
    {
      "lat": -9.495167,
      "lng": 109.407066,
      "alt": 38000,
      "spd": 457,
      "ts": 1765103096,
      "hd": 321
    },
    {
      "lat": -9.548813,
      "lng": 109.449898,
      "alt": 38000,
      "spd": 456,
      "ts": 1765103064,
      "hd": 321
    },
    {
      "lat": -9.600049,
      "lng": 109.490791,
      "alt": 38000,
      "spd": 456,
      "ts": 1765103033,
      "hd": 321
    },
    {
      "lat": -9.653584,
      "lng": 109.533546,
      "alt": 38000,
      "spd": 456,
      "ts": 1765103001,
      "hd": 321
    },
    {
      "lat": -9.704605,
      "lng": 109.574326,
      "alt": 38000,
      "spd": 456,
      "ts": 1765102970,
      "hd": 321
    },
    {
      "lat": -9.75499,
      "lng": 109.614601,
      "alt": 38000,
      "spd": 456,
      "ts": 1765102940,
      "hd": 321
    },
    {
      "lat": -9.809255,
      "lng": 109.657997,
      "alt": 38000,
      "spd": 458,
      "ts": 1765102907,
      "hd": 321
    },
    {
      "lat": -9.862743,
      "lng": 109.700806,
      "alt": 38000,
      "spd": 458,
      "ts": 1765102875,
      "hd": 321
    },
    {
      "lat": -9.914703,
      "lng": 109.742432,
      "alt": 38000,
      "spd": 459,
      "ts": 1765102844,
      "hd": 321
    },
    {
      "lat": -9.966136,
      "lng": 109.78363,
      "alt": 38000,
      "spd": 458,
      "ts": 1765102813,
      "hd": 321
    },
    {
      "lat": -10.017017,
      "lng": 109.824356,
      "alt": 38000,
      "spd": 456,
      "ts": 1765102782,
      "hd": 321
    },
    {
      "lat": -10.071251,
      "lng": 109.867874,
      "alt": 38000,
      "spd": 456,
      "ts": 1765102750,
      "hd": 321
    },
    {
      "lat": -10.123672,
      "lng": 109.909836,
      "alt": 38000,
      "spd": 457,
      "ts": 1765102718,
      "hd": 321
    },
    {
      "lat": -10.174301,
      "lng": 109.95047,
      "alt": 38000,
      "spd": 458,
      "ts": 1765102688,
      "hd": 321
    },
    {
      "lat": -10.22897,
      "lng": 109.994263,
      "alt": 38000,
      "spd": 459,
      "ts": 1765102655,
      "hd": 321
    },
    {
      "lat": -10.280182,
      "lng": 110.035339,
      "alt": 38000,
      "spd": 459,
      "ts": 1765102625,
      "hd": 321
    },
    {
      "lat": -10.334702,
      "lng": 110.079147,
      "alt": 38000,
      "spd": 460,
      "ts": 1765102592,
      "hd": 321
    },
    {
      "lat": -10.385147,
      "lng": 110.119644,
      "alt": 38000,
      "spd": 459,
      "ts": 1765102562,
      "hd": 321
    },
    {
      "lat": -10.439991,
      "lng": 110.16375,
      "alt": 37950,
      "spd": 460,
      "ts": 1765102529,
      "hd": 321
    },
    {
      "lat": -10.501905,
      "lng": 110.213493,
      "alt": 37650,
      "spd": 467,
      "ts": 1765102492,
      "hd": 321
    },
    {
      "lat": -10.55278,
      "lng": 110.254433,
      "alt": 37400,
      "spd": 468,
      "ts": 1765102462,
      "hd": 321
    },
    {
      "lat": -10.606322,
      "lng": 110.297531,
      "alt": 37150,
      "spd": 468,
      "ts": 1765102431,
      "hd": 321
    },
    {
      "lat": -10.6604,
      "lng": 110.341141,
      "alt": 36875,
      "spd": 471,
      "ts": 1765102399,
      "hd": 321
    },
    {
      "lat": -10.713998,
      "lng": 110.384262,
      "alt": 36625,
      "spd": 472,
      "ts": 1765102368,
      "hd": 321
    },
    {
      "lat": -10.76986,
      "lng": 110.429367,
      "alt": 36350,
      "spd": 473,
      "ts": 1765102335,
      "hd": 321
    },
    {
      "lat": -10.861894,
      "lng": 110.503571,
      "alt": 36000,
      "spd": 473,
      "ts": 1765102282,
      "hd": 321
    },
    {
      "lat": -10.878937,
      "lng": 110.517349,
      "alt": 36000,
      "spd": 472,
      "ts": 1765102271,
      "hd": 321
    },
    {
      "lat": -10.934841,
      "lng": 110.5625,
      "alt": 36000,
      "spd": 471,
      "ts": 1765102239,
      "hd": 321
    },
    {
      "lat": -11.083466,
      "lng": 110.682617,
      "alt": 36000,
      "spd": 467,
      "ts": 1765102152,
      "hd": 321
    },
    {
      "lat": -11.137809,
      "lng": 110.726479,
      "alt": 36000,
      "spd": 466,
      "ts": 1765102119,
      "hd": 321
    },
    {
      "lat": -11.191949,
      "lng": 110.770378,
      "alt": 36000,
      "spd": 464,
      "ts": 1765102088,
      "hd": 321
    },
    {
      "lat": -11.352787,
      "lng": 110.900574,
      "alt": 36000,
      "spd": 468,
      "ts": 1765101994,
      "hd": 321
    },
    {
      "lat": -11.438025,
      "lng": 110.969765,
      "alt": 36000,
      "spd": 464,
      "ts": 1765101942,
      "hd": 321
    },
    {
      "lat": -16.88608,
      "lng": 115.520409,
      "alt": 35500,
      "spd": 473,
      "ts": 1765098737,
      "hd": 320
    },
    {
      "lat": -17.030731,
      "lng": 115.645706,
      "alt": 35500,
      "spd": 472,
      "ts": 1765098653,
      "hd": 320
    },
    {
      "lat": -17.053619,
      "lng": 115.665504,
      "alt": 35500,
      "spd": 472,
      "ts": 1765098638,
      "hd": 320
    },
    {
      "lat": -17.109192,
      "lng": 115.713791,
      "alt": 35500,
      "spd": 471,
      "ts": 1765098605,
      "hd": 320
    },
    {
      "lat": -17.173632,
      "lng": 115.76976,
      "alt": 35500,
      "spd": 472,
      "ts": 1765098566,
      "hd": 320
    },
    {
      "lat": -17.240341,
      "lng": 115.827751,
      "alt": 35500,
      "spd": 472,
      "ts": 1765098527,
      "hd": 320
    },
    {
      "lat": -17.297228,
      "lng": 115.877167,
      "alt": 35500,
      "spd": 473,
      "ts": 1765098493,
      "hd": 320
    },
    {
      "lat": -17.353138,
      "lng": 115.925919,
      "alt": 35500,
      "spd": 473,
      "ts": 1765098460,
      "hd": 320
    },
    {
      "lat": -17.409485,
      "lng": 115.974953,
      "alt": 35500,
      "spd": 472,
      "ts": 1765098426,
      "hd": 320
    },
    {
      "lat": -17.465515,
      "lng": 116.023819,
      "alt": 35500,
      "spd": 472,
      "ts": 1765098393,
      "hd": 320
    },
    {
      "lat": -17.523102,
      "lng": 116.074074,
      "alt": 35500,
      "spd": 471,
      "ts": 1765098359,
      "hd": 320
    },
    {
      "lat": -17.588366,
      "lng": 116.131126,
      "alt": 35500,
      "spd": 471,
      "ts": 1765098320,
      "hd": 320
    },
    {
      "lat": -17.669685,
      "lng": 116.202202,
      "alt": 35500,
      "spd": 471,
      "ts": 1765098272,
      "hd": 320
    },
    {
      "lat": -17.763914,
      "lng": 116.284744,
      "alt": 35500,
      "spd": 469,
      "ts": 1765098215,
      "hd": 319
    },
    {
      "lat": -17.790344,
      "lng": 116.307922,
      "alt": 35500,
      "spd": 469,
      "ts": 1765098199,
      "hd": 319
    },
    {
      "lat": -17.841019,
      "lng": 116.352348,
      "alt": 35500,
      "spd": 469,
      "ts": 1765098169,
      "hd": 319
    },
    {
      "lat": -17.893423,
      "lng": 116.398331,
      "alt": 35500,
      "spd": 469,
      "ts": 1765098137,
      "hd": 319
    },
    {
      "lat": -17.946533,
      "lng": 116.444962,
      "alt": 35500,
      "spd": 470,
      "ts": 1765098105,
      "hd": 319
    },
    {
      "lat": -17.999144,
      "lng": 116.491272,
      "alt": 35500,
      "spd": 470,
      "ts": 1765098074,
      "hd": 319
    },
    {
      "lat": -18.064083,
      "lng": 116.548363,
      "alt": 35500,
      "spd": 469,
      "ts": 1765098035,
      "hd": 319
    },
    {
      "lat": -18.117645,
      "lng": 116.59549,
      "alt": 35500,
      "spd": 469,
      "ts": 1765098003,
      "hd": 319
    },
    {
      "lat": -18.171806,
      "lng": 116.643219,
      "alt": 35500,
      "spd": 468,
      "ts": 1765097970,
      "hd": 319
    },
    {
      "lat": -18.2232,
      "lng": 116.688538,
      "alt": 35500,
      "spd": 469,
      "ts": 1765097939,
      "hd": 319
    },
    {
      "lat": -18.2745,
      "lng": 116.73378,
      "alt": 35500,
      "spd": 469,
      "ts": 1765097908,
      "hd": 319
    },
    {
      "lat": -18.325653,
      "lng": 116.778976,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097878,
      "hd": 319
    },
    {
      "lat": -18.380919,
      "lng": 116.827812,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097845,
      "hd": 319
    },
    {
      "lat": -18.432499,
      "lng": 116.873405,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097814,
      "hd": 319
    },
    {
      "lat": -18.484451,
      "lng": 116.91935,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097783,
      "hd": 319
    },
    {
      "lat": -18.536915,
      "lng": 116.965843,
      "alt": 35500,
      "spd": 473,
      "ts": 1765097752,
      "hd": 319
    },
    {
      "lat": -18.587843,
      "lng": 117.01104,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097721,
      "hd": 319
    },
    {
      "lat": -18.639889,
      "lng": 117.057182,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097690,
      "hd": 319
    },
    {
      "lat": -18.691635,
      "lng": 117.103172,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097660,
      "hd": 319
    },
    {
      "lat": -18.743454,
      "lng": 117.149231,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097628,
      "hd": 319
    },
    {
      "lat": -18.796509,
      "lng": 117.196411,
      "alt": 35500,
      "spd": 473,
      "ts": 1765097597,
      "hd": 319
    },
    {
      "lat": -18.849289,
      "lng": 117.243393,
      "alt": 35500,
      "spd": 473,
      "ts": 1765097565,
      "hd": 319
    },
    {
      "lat": -18.900814,
      "lng": 117.289291,
      "alt": 35500,
      "spd": 473,
      "ts": 1765097534,
      "hd": 319
    },
    {
      "lat": -18.953064,
      "lng": 117.335945,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097503,
      "hd": 319
    },
    {
      "lat": -19.004471,
      "lng": 117.381752,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097472,
      "hd": 319
    },
    {
      "lat": -19.056473,
      "lng": 117.4282,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097441,
      "hd": 319
    },
    {
      "lat": -19.108065,
      "lng": 117.474358,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097410,
      "hd": 319
    },
    {
      "lat": -19.158875,
      "lng": 117.519821,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097380,
      "hd": 319
    },
    {
      "lat": -19.21344,
      "lng": 117.568718,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097347,
      "hd": 319
    },
    {
      "lat": -19.268646,
      "lng": 117.61821,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097314,
      "hd": 319
    },
    {
      "lat": -19.320295,
      "lng": 117.66452,
      "alt": 35500,
      "spd": 470,
      "ts": 1765097283,
      "hd": 319
    },
    {
      "lat": -19.373644,
      "lng": 117.712463,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097251,
      "hd": 319
    },
    {
      "lat": -19.427994,
      "lng": 117.761322,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097218,
      "hd": 319
    },
    {
      "lat": -19.482204,
      "lng": 117.810043,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097185,
      "hd": 319
    },
    {
      "lat": -19.533039,
      "lng": 117.855835,
      "alt": 35500,
      "spd": 473,
      "ts": 1765097155,
      "hd": 319
    },
    {
      "lat": -19.585831,
      "lng": 117.903412,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097123,
      "hd": 319
    },
    {
      "lat": -19.637363,
      "lng": 117.949867,
      "alt": 35500,
      "spd": 472,
      "ts": 1765097092,
      "hd": 319
    },
    {
      "lat": -19.688385,
      "lng": 117.995911,
      "alt": 35500,
      "spd": 471,
      "ts": 1765097062,
      "hd": 319
    },
    {
      "lat": -19.740601,
      "lng": 118.043144,
      "alt": 35500,
      "spd": 470,
      "ts": 1765097030,
      "hd": 319
    },
    {
      "lat": -19.791637,
      "lng": 118.089241,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096999,
      "hd": 319
    },
    {
      "lat": -19.844284,
      "lng": 118.136917,
      "alt": 35500,
      "spd": 471,
      "ts": 1765096968,
      "hd": 319
    },
    {
      "lat": -19.898346,
      "lng": 118.185913,
      "alt": 35500,
      "spd": 471,
      "ts": 1765096935,
      "hd": 319
    },
    {
      "lat": -19.948425,
      "lng": 118.231316,
      "alt": 35500,
      "spd": 471,
      "ts": 1765096905,
      "hd": 319
    },
    {
      "lat": -20.00061,
      "lng": 118.278709,
      "alt": 35500,
      "spd": 471,
      "ts": 1765096874,
      "hd": 319
    },
    {
      "lat": -20.051493,
      "lng": 118.324951,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096843,
      "hd": 319
    },
    {
      "lat": -20.105621,
      "lng": 118.374107,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096810,
      "hd": 319
    },
    {
      "lat": -20.157631,
      "lng": 118.421478,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096779,
      "hd": 319
    },
    {
      "lat": -20.210701,
      "lng": 118.469818,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096747,
      "hd": 319
    },
    {
      "lat": -20.26149,
      "lng": 118.516167,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096716,
      "hd": 319
    },
    {
      "lat": -20.31628,
      "lng": 118.566254,
      "alt": 35500,
      "spd": 471,
      "ts": 1765096683,
      "hd": 319
    },
    {
      "lat": -20.368326,
      "lng": 118.613838,
      "alt": 35500,
      "spd": 471,
      "ts": 1765096651,
      "hd": 317
    },
    {
      "lat": -20.417858,
      "lng": 118.666229,
      "alt": 35500,
      "spd": 469,
      "ts": 1765096619,
      "hd": 313
    },
    {
      "lat": -20.466412,
      "lng": 118.719757,
      "alt": 35500,
      "spd": 468,
      "ts": 1765096587,
      "hd": 313
    },
    {
      "lat": -20.513214,
      "lng": 118.771332,
      "alt": 35500,
      "spd": 468,
      "ts": 1765096556,
      "hd": 313
    },
    {
      "lat": -20.55986,
      "lng": 118.822777,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096525,
      "hd": 313
    },
    {
      "lat": -20.609344,
      "lng": 118.877365,
      "alt": 35500,
      "spd": 471,
      "ts": 1765096493,
      "hd": 313
    },
    {
      "lat": -20.658022,
      "lng": 118.931145,
      "alt": 35500,
      "spd": 470,
      "ts": 1765096461,
      "hd": 313
    },
    {
      "lat": -20.70488,
      "lng": 118.983009,
      "alt": 35500,
      "spd": 469,
      "ts": 1765096429,
      "hd": 313
    },
    {
      "lat": -20.752195,
      "lng": 119.035469,
      "alt": 35500,
      "spd": 468,
      "ts": 1765096398,
      "hd": 313
    },
    {
      "lat": -20.798309,
      "lng": 119.086502,
      "alt": 35500,
      "spd": 467,
      "ts": 1765096368,
      "hd": 313
    },
    {
      "lat": -20.846603,
      "lng": 119.14006,
      "alt": 35500,
      "spd": 466,
      "ts": 1765096335,
      "hd": 313
    },
    {
      "lat": -20.891693,
      "lng": 119.190086,
      "alt": 35500,
      "spd": 466,
      "ts": 1765096305,
      "hd": 313
    },
    {
      "lat": -20.940308,
      "lng": 119.244133,
      "alt": 35500,
      "spd": 459,
      "ts": 1765096272,
      "hd": 313
    },
    {
      "lat": -20.987703,
      "lng": 119.296844,
      "alt": 35500,
      "spd": 452,
      "ts": 1765096240,
      "hd": 313
    },
    {
      "lat": -21.035843,
      "lng": 119.350471,
      "alt": 35500,
      "spd": 452,
      "ts": 1765096207,
      "hd": 313
    },
    {
      "lat": -21.080902,
      "lng": 119.400734,
      "alt": 35425,
      "spd": 451,
      "ts": 1765096176,
      "hd": 313
    },
    {
      "lat": -21.125452,
      "lng": 119.450432,
      "alt": 35225,
      "spd": 451,
      "ts": 1765096145,
      "hd": 313
    },
    {
      "lat": -21.170105,
      "lng": 119.50029,
      "alt": 35025,
      "spd": 451,
      "ts": 1765096114,
      "hd": 313
    },
    {
      "lat": -21.217941,
      "lng": 119.553772,
      "alt": 35000,
      "spd": 451,
      "ts": 1765096081,
      "hd": 313
    },
    {
      "lat": -21.26157,
      "lng": 119.602562,
      "alt": 35000,
      "spd": 450,
      "ts": 1765096050,
      "hd": 313
    },
    {
      "lat": -21.306976,
      "lng": 119.653496,
      "alt": 35000,
      "spd": 451,
      "ts": 1765096019,
      "hd": 313
    },
    {
      "lat": -21.351517,
      "lng": 119.703384,
      "alt": 35000,
      "spd": 450,
      "ts": 1765095988,
      "hd": 313
    },
    {
      "lat": -21.395599,
      "lng": 119.752876,
      "alt": 35000,
      "spd": 451,
      "ts": 1765095957,
      "hd": 313
    },
    {
      "lat": -21.44133,
      "lng": 119.804207,
      "alt": 35000,
      "spd": 451,
      "ts": 1765095926,
      "hd": 313
    },
    {
      "lat": -21.485733,
      "lng": 119.854149,
      "alt": 35000,
      "spd": 451,
      "ts": 1765095895,
      "hd": 313
    },
    {
      "lat": -21.532225,
      "lng": 119.906464,
      "alt": 35000,
      "spd": 452,
      "ts": 1765095863,
      "hd": 313
    },
    {
      "lat": -21.579197,
      "lng": 119.959358,
      "alt": 35000,
      "spd": 451,
      "ts": 1765095830,
      "hd": 313
    },
    {
      "lat": -21.626308,
      "lng": 120.012459,
      "alt": 35000,
      "spd": 452,
      "ts": 1765095798,
      "hd": 313
    },
    {
      "lat": -21.672674,
      "lng": 120.064796,
      "alt": 35000,
      "spd": 451,
      "ts": 1765095765,
      "hd": 313
    },
    {
      "lat": -21.717131,
      "lng": 120.115105,
      "alt": 35000,
      "spd": 452,
      "ts": 1765095735,
      "hd": 313
    },
    {
      "lat": -21.761822,
      "lng": 120.165558,
      "alt": 35000,
      "spd": 452,
      "ts": 1765095704,
      "hd": 313
    },
    {
      "lat": -21.808187,
      "lng": 120.218048,
      "alt": 35000,
      "spd": 452,
      "ts": 1765095671,
      "hd": 313
    },
    {
      "lat": -21.852831,
      "lng": 120.268654,
      "alt": 35000,
      "spd": 452,
      "ts": 1765095640,
      "hd": 313
    },
    {
      "lat": -21.899244,
      "lng": 120.321251,
      "alt": 35000,
      "spd": 452,
      "ts": 1765095608,
      "hd": 313
    },
    {
      "lat": -21.942722,
      "lng": 120.370689,
      "alt": 35000,
      "spd": 450,
      "ts": 1765095578,
      "hd": 313
    },
    {
      "lat": -21.98822,
      "lng": 120.422394,
      "alt": 35000,
      "spd": 449,
      "ts": 1765095546,
      "hd": 313
    },
    {
      "lat": -22.032196,
      "lng": 120.472412,
      "alt": 35000,
      "spd": 449,
      "ts": 1765095515,
      "hd": 313
    },
    {
      "lat": -22.075745,
      "lng": 120.522018,
      "alt": 35000,
      "spd": 449,
      "ts": 1765095485,
      "hd": 313
    },
    {
      "lat": -22.120789,
      "lng": 120.573357,
      "alt": 35000,
      "spd": 450,
      "ts": 1765095453,
      "hd": 313
    },
    {
      "lat": -22.168167,
      "lng": 120.627388,
      "alt": 35000,
      "spd": 449,
      "ts": 1765095420,
      "hd": 313
    },
    {
      "lat": -22.213425,
      "lng": 120.679115,
      "alt": 35000,
      "spd": 449,
      "ts": 1765095389,
      "hd": 313
    },
    {
      "lat": -22.259977,
      "lng": 120.732323,
      "alt": 35000,
      "spd": 448,
      "ts": 1765095356,
      "hd": 313
    },
    {
      "lat": -22.30687,
      "lng": 120.785942,
      "alt": 35000,
      "spd": 447,
      "ts": 1765095323,
      "hd": 313
    },
    {
      "lat": -22.349823,
      "lng": 120.835167,
      "alt": 35000,
      "spd": 447,
      "ts": 1765095293,
      "hd": 313
    },
    {
      "lat": -22.393661,
      "lng": 120.885468,
      "alt": 35000,
      "spd": 446,
      "ts": 1765095262,
      "hd": 313
    },
    {
      "lat": -22.439072,
      "lng": 120.937553,
      "alt": 35000,
      "spd": 445,
      "ts": 1765095229,
      "hd": 313
    },
    {
      "lat": -22.48233,
      "lng": 120.987236,
      "alt": 35000,
      "spd": 446,
      "ts": 1765095199,
      "hd": 313
    },
    {
      "lat": -22.529001,
      "lng": 121.040901,
      "alt": 35000,
      "spd": 445,
      "ts": 1765095166,
      "hd": 313
    },
    {
      "lat": -22.572418,
      "lng": 121.090912,
      "alt": 35000,
      "spd": 445,
      "ts": 1765095135,
      "hd": 313
    },
    {
      "lat": -22.618755,
      "lng": 121.14431,
      "alt": 34950,
      "spd": 445,
      "ts": 1765095102,
      "hd": 313
    },
    {
      "lat": -22.662281,
      "lng": 121.194511,
      "alt": 34700,
      "spd": 447,
      "ts": 1765095072,
      "hd": 312
    },
    {
      "lat": -22.707596,
      "lng": 121.246864,
      "alt": 34450,
      "spd": 447,
      "ts": 1765095040,
      "hd": 312
    },
    {
      "lat": -22.751616,
      "lng": 121.297813,
      "alt": 34175,
      "spd": 447,
      "ts": 1765095009,
      "hd": 312
    },
    {
      "lat": -22.797377,
      "lng": 121.350807,
      "alt": 34000,
      "spd": 446,
      "ts": 1765094976,
      "hd": 312
    },
    {
      "lat": -22.839972,
      "lng": 121.4002,
      "alt": 34000,
      "spd": 446,
      "ts": 1765094946,
      "hd": 312
    },
    {
      "lat": -22.886856,
      "lng": 121.454506,
      "alt": 34000,
      "spd": 448,
      "ts": 1765094913,
      "hd": 313
    },
    {
      "lat": -22.929817,
      "lng": 121.504311,
      "alt": 34000,
      "spd": 450,
      "ts": 1765094882,
      "hd": 312
    },
    {
      "lat": -22.974089,
      "lng": 121.55584,
      "alt": 34000,
      "spd": 452,
      "ts": 1765094852,
      "hd": 312
    },
    {
      "lat": -23.018219,
      "lng": 121.607208,
      "alt": 34000,
      "spd": 452,
      "ts": 1765094820,
      "hd": 312
    },
    {
      "lat": -23.061838,
      "lng": 121.658119,
      "alt": 34000,
      "spd": 452,
      "ts": 1765094790,
      "hd": 312
    },
    {
      "lat": -23.106079,
      "lng": 121.70974,
      "alt": 34000,
      "spd": 452,
      "ts": 1765094759,
      "hd": 312
    },
    {
      "lat": -23.150208,
      "lng": 121.761322,
      "alt": 34000,
      "spd": 452,
      "ts": 1765094728,
      "hd": 312
    },
    {
      "lat": -23.196854,
      "lng": 121.815857,
      "alt": 34000,
      "spd": 453,
      "ts": 1765094695,
      "hd": 312
    },
    {
      "lat": -23.239929,
      "lng": 121.866295,
      "alt": 34000,
      "spd": 455,
      "ts": 1765094665,
      "hd": 312
    },
    {
      "lat": -23.286592,
      "lng": 121.920982,
      "alt": 34000,
      "spd": 456,
      "ts": 1765094632,
      "hd": 312
    },
    {
      "lat": -23.331888,
      "lng": 121.974083,
      "alt": 34000,
      "spd": 457,
      "ts": 1765094601,
      "hd": 312
    },
    {
      "lat": -23.376022,
      "lng": 122.025894,
      "alt": 34000,
      "spd": 458,
      "ts": 1765094570,
      "hd": 312
    },
    {
      "lat": -23.42313,
      "lng": 122.081299,
      "alt": 34000,
      "spd": 459,
      "ts": 1765094538,
      "hd": 312
    },
    {
      "lat": -23.4681,
      "lng": 122.134193,
      "alt": 34000,
      "spd": 460,
      "ts": 1765094507,
      "hd": 312
    },
    {
      "lat": -23.515594,
      "lng": 122.19014,
      "alt": 34000,
      "spd": 460,
      "ts": 1765094474,
      "hd": 312
    },
    {
      "lat": -23.559435,
      "lng": 122.24192,
      "alt": 34000,
      "spd": 460,
      "ts": 1765094443,
      "hd": 312
    },
    {
      "lat": -23.607244,
      "lng": 122.298355,
      "alt": 34000,
      "spd": 462,
      "ts": 1765094410,
      "hd": 312
    },
    {
      "lat": -23.652121,
      "lng": 122.351318,
      "alt": 34000,
      "spd": 467,
      "ts": 1765094379,
      "hd": 312
    },
    {
      "lat": -23.697876,
      "lng": 122.405495,
      "alt": 34000,
      "spd": 466,
      "ts": 1765094348,
      "hd": 312
    },
    {
      "lat": -23.743132,
      "lng": 122.459106,
      "alt": 34000,
      "spd": 466,
      "ts": 1765094318,
      "hd": 312
    },
    {
      "lat": -23.790148,
      "lng": 122.514969,
      "alt": 34000,
      "spd": 463,
      "ts": 1765094285,
      "hd": 312
    },
    {
      "lat": -23.837725,
      "lng": 122.571404,
      "alt": 34000,
      "spd": 459,
      "ts": 1765094252,
      "hd": 312
    },
    {
      "lat": -23.882555,
      "lng": 122.624733,
      "alt": 34000,
      "spd": 462,
      "ts": 1765094221,
      "hd": 312
    },
    {
      "lat": -23.927216,
      "lng": 122.677917,
      "alt": 34000,
      "spd": 464,
      "ts": 1765094190,
      "hd": 312
    },
    {
      "lat": -23.972626,
      "lng": 122.732033,
      "alt": 34000,
      "spd": 466,
      "ts": 1765094159,
      "hd": 312
    },
    {
      "lat": -24.020279,
      "lng": 122.788902,
      "alt": 34000,
      "spd": 466,
      "ts": 1765094127,
      "hd": 312
    },
    {
      "lat": -24.0634,
      "lng": 122.84037,
      "alt": 34000,
      "spd": 466,
      "ts": 1765094097,
      "hd": 312
    },
    {
      "lat": -24.111145,
      "lng": 122.897545,
      "alt": 34000,
      "spd": 466,
      "ts": 1765094064,
      "hd": 312
    },
    {
      "lat": -24.159588,
      "lng": 122.95546,
      "alt": 34000,
      "spd": 466,
      "ts": 1765094030,
      "hd": 312
    },
    {
      "lat": -24.211441,
      "lng": 123.017632,
      "alt": 34000,
      "spd": 466,
      "ts": 1765093995,
      "hd": 312
    },
    {
      "lat": -24.294977,
      "lng": 123.118004,
      "alt": 34000,
      "spd": 469,
      "ts": 1765093937,
      "hd": 312
    },
    {
      "lat": -24.316843,
      "lng": 123.144249,
      "alt": 34000,
      "spd": 470,
      "ts": 1765093922,
      "hd": 312
    },
    {
      "lat": -24.40514,
      "lng": 123.250511,
      "alt": 34000,
      "spd": 476,
      "ts": 1765093863,
      "hd": 312
    },
    {
      "lat": -24.427372,
      "lng": 123.277374,
      "alt": 34000,
      "spd": 477,
      "ts": 1765093848,
      "hd": 312
    },
    {
      "lat": -24.487747,
      "lng": 123.35022,
      "alt": 34000,
      "spd": 478,
      "ts": 1765093809,
      "hd": 312
    },
    {
      "lat": -24.538971,
      "lng": 123.412117,
      "alt": 34150,
      "spd": 474,
      "ts": 1765093772,
      "hd": 312
    },
    {
      "lat": -24.586006,
      "lng": 123.469017,
      "alt": 34675,
      "spd": 469,
      "ts": 1765093740,
      "hd": 311
    },
    {
      "lat": -24.63327,
      "lng": 123.52636,
      "alt": 35100,
      "spd": 466,
      "ts": 1765093708,
      "hd": 312
    },
    {
      "lat": -24.678505,
      "lng": 123.581215,
      "alt": 35625,
      "spd": 463,
      "ts": 1765093677,
      "hd": 312
    },
    {
      "lat": -24.723707,
      "lng": 123.6362,
      "alt": 36000,
      "spd": 460,
      "ts": 1765093645,
      "hd": 312
    },
    {
      "lat": -24.767094,
      "lng": 123.688744,
      "alt": 36000,
      "spd": 462,
      "ts": 1765093615,
      "hd": 311
    },
    {
      "lat": -24.812483,
      "lng": 123.743935,
      "alt": 36000,
      "spd": 460,
      "ts": 1765093583,
      "hd": 312
    },
    {
      "lat": -24.865952,
      "lng": 123.809303,
      "alt": 36000,
      "spd": 456,
      "ts": 1765093545,
      "hd": 312
    },
    {
      "lat": -24.908985,
      "lng": 123.861885,
      "alt": 36025,
      "spd": 454,
      "ts": 1765093515,
      "hd": 311
    },
    {
      "lat": -24.956726,
      "lng": 123.920135,
      "alt": 36000,
      "spd": 477,
      "ts": 1765093482,
      "hd": 311
    },
    {
      "lat": -25.004471,
      "lng": 123.978523,
      "alt": 36025,
      "spd": 480,
      "ts": 1765093450,
      "hd": 311
    },
    {
      "lat": -25.05336,
      "lng": 124.038391,
      "alt": 36000,
      "spd": 479,
      "ts": 1765093417,
      "hd": 311
    },
    {
      "lat": -25.098825,
      "lng": 124.0942,
      "alt": 36000,
      "spd": 477,
      "ts": 1765093386,
      "hd": 311
    },
    {
      "lat": -25.146774,
      "lng": 124.153175,
      "alt": 36000,
      "spd": 475,
      "ts": 1765093353,
      "hd": 311
    },
    {
      "lat": -25.193977,
      "lng": 124.211113,
      "alt": 36000,
      "spd": 474,
      "ts": 1765093322,
      "hd": 311
    },
    {
      "lat": -25.236992,
      "lng": 124.26413,
      "alt": 36000,
      "spd": 474,
      "ts": 1765093292,
      "hd": 311
    },
    {
      "lat": -25.283936,
      "lng": 124.321953,
      "alt": 36000,
      "spd": 473,
      "ts": 1765093260,
      "hd": 311
    },
    {
      "lat": -25.330399,
      "lng": 124.379326,
      "alt": 36000,
      "spd": 473,
      "ts": 1765093228,
      "hd": 311
    },
    {
      "lat": -25.375854,
      "lng": 124.435478,
      "alt": 36000,
      "spd": 473,
      "ts": 1765093197,
      "hd": 311
    },
    {
      "lat": -25.421082,
      "lng": 124.491425,
      "alt": 36000,
      "spd": 475,
      "ts": 1765093166,
      "hd": 311
    },
    {
      "lat": -25.466446,
      "lng": 124.54763,
      "alt": 36000,
      "spd": 476,
      "ts": 1765093136,
      "hd": 311
    },
    {
      "lat": -25.513504,
      "lng": 124.605919,
      "alt": 36000,
      "spd": 475,
      "ts": 1765093103,
      "hd": 311
    },
    {
      "lat": -25.558109,
      "lng": 124.661346,
      "alt": 36000,
      "spd": 474,
      "ts": 1765093072,
      "hd": 311
    },
    {
      "lat": -25.605732,
      "lng": 124.720581,
      "alt": 36000,
      "spd": 473,
      "ts": 1765093040,
      "hd": 311
    },
    {
      "lat": -25.650742,
      "lng": 124.776611,
      "alt": 36000,
      "spd": 472,
      "ts": 1765093009,
      "hd": 311
    },
    {
      "lat": -25.695951,
      "lng": 124.832878,
      "alt": 36000,
      "spd": 471,
      "ts": 1765092978,
      "hd": 311
    },
    {
      "lat": -25.743853,
      "lng": 124.892731,
      "alt": 36000,
      "spd": 471,
      "ts": 1765092945,
      "hd": 311
    },
    {
      "lat": -25.787519,
      "lng": 124.947304,
      "alt": 36000,
      "spd": 471,
      "ts": 1765092915,
      "hd": 311
    },
    {
      "lat": -25.832674,
      "lng": 125.003868,
      "alt": 36000,
      "spd": 472,
      "ts": 1765092883,
      "hd": 311
    },
    {
      "lat": -25.877426,
      "lng": 125.059914,
      "alt": 36000,
      "spd": 474,
      "ts": 1765092852,
      "hd": 311
    },
    {
      "lat": -25.923405,
      "lng": 125.117638,
      "alt": 36000,
      "spd": 475,
      "ts": 1765092821,
      "hd": 311
    },
    {
      "lat": -25.971039,
      "lng": 125.177498,
      "alt": 36000,
      "spd": 477,
      "ts": 1765092788,
      "hd": 311
    },
    {
      "lat": -26.020523,
      "lng": 125.239738,
      "alt": 36000,
      "spd": 479,
      "ts": 1765092755,
      "hd": 311
    },
    {
      "lat": -26.067307,
      "lng": 125.29866,
      "alt": 36000,
      "spd": 481,
      "ts": 1765092722,
      "hd": 311
    },
    {
      "lat": -26.113907,
      "lng": 125.357422,
      "alt": 36000,
      "spd": 482,
      "ts": 1765092691,
      "hd": 311
    },
    {
      "lat": -26.158215,
      "lng": 125.413322,
      "alt": 36000,
      "spd": 481,
      "ts": 1765092661,
      "hd": 311
    },
    {
      "lat": -26.20458,
      "lng": 125.472,
      "alt": 36000,
      "spd": 481,
      "ts": 1765092629,
      "hd": 311
    },
    {
      "lat": -26.250275,
      "lng": 125.529839,
      "alt": 36000,
      "spd": 483,
      "ts": 1765092599,
      "hd": 311
    },
    {
      "lat": -26.296288,
      "lng": 125.588203,
      "alt": 36000,
      "spd": 486,
      "ts": 1765092567,
      "hd": 311
    },
    {
      "lat": -26.341599,
      "lng": 125.645714,
      "alt": 36000,
      "spd": 489,
      "ts": 1765092537,
      "hd": 311
    },
    {
      "lat": -26.387764,
      "lng": 125.704353,
      "alt": 36000,
      "spd": 491,
      "ts": 1765092506,
      "hd": 311
    },
    {
      "lat": -26.437296,
      "lng": 125.767311,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092473,
      "hd": 311
    },
    {
      "lat": -26.483231,
      "lng": 125.825844,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092442,
      "hd": 311
    },
    {
      "lat": -26.529514,
      "lng": 125.884888,
      "alt": 36000,
      "spd": 493,
      "ts": 1765092412,
      "hd": 311
    },
    {
      "lat": -26.575695,
      "lng": 125.943886,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092381,
      "hd": 311
    },
    {
      "lat": -26.624771,
      "lng": 126.006706,
      "alt": 36000,
      "spd": 493,
      "ts": 1765092348,
      "hd": 310
    },
    {
      "lat": -26.671593,
      "lng": 126.066635,
      "alt": 36000,
      "spd": 494,
      "ts": 1765092317,
      "hd": 310
    },
    {
      "lat": -26.719028,
      "lng": 126.127533,
      "alt": 36000,
      "spd": 496,
      "ts": 1765092285,
      "hd": 310
    },
    {
      "lat": -26.765808,
      "lng": 126.187668,
      "alt": 36000,
      "spd": 499,
      "ts": 1765092254,
      "hd": 310
    },
    {
      "lat": -26.814554,
      "lng": 126.250443,
      "alt": 36000,
      "spd": 501,
      "ts": 1765092222,
      "hd": 310
    },
    {
      "lat": -26.862625,
      "lng": 126.312355,
      "alt": 36000,
      "spd": 500,
      "ts": 1765092191,
      "hd": 310
    },
    {
      "lat": -26.911057,
      "lng": 126.374748,
      "alt": 36000,
      "spd": 500,
      "ts": 1765092159,
      "hd": 310
    },
    {
      "lat": -26.960587,
      "lng": 126.438797,
      "alt": 36000,
      "spd": 500,
      "ts": 1765092126,
      "hd": 310
    },
    {
      "lat": -27.010071,
      "lng": 126.502853,
      "alt": 36000,
      "spd": 501,
      "ts": 1765092093,
      "hd": 310
    },
    {
      "lat": -27.057449,
      "lng": 126.564262,
      "alt": 36000,
      "spd": 502,
      "ts": 1765092062,
      "hd": 310
    },
    {
      "lat": -27.103683,
      "lng": 126.624222,
      "alt": 36000,
      "spd": 505,
      "ts": 1765092031,
      "hd": 310
    },
    {
      "lat": -27.152893,
      "lng": 126.688171,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091999,
      "hd": 310
    },
    {
      "lat": -27.203079,
      "lng": 126.753494,
      "alt": 36000,
      "spd": 507,
      "ts": 1765091967,
      "hd": 310
    },
    {
      "lat": -27.251913,
      "lng": 126.817192,
      "alt": 36000,
      "spd": 507,
      "ts": 1765091935,
      "hd": 310
    },
    {
      "lat": -27.299303,
      "lng": 126.879044,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091904,
      "hd": 310
    },
    {
      "lat": -27.346786,
      "lng": 126.941109,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091873,
      "hd": 310
    },
    {
      "lat": -27.39669,
      "lng": 127.006546,
      "alt": 36000,
      "spd": 507,
      "ts": 1765091840,
      "hd": 310
    },
    {
      "lat": -27.445633,
      "lng": 127.070724,
      "alt": 36000,
      "spd": 507,
      "ts": 1765091808,
      "hd": 310
    },
    {
      "lat": -27.492874,
      "lng": 127.132805,
      "alt": 36000,
      "spd": 505,
      "ts": 1765091777,
      "hd": 310
    },
    {
      "lat": -27.539419,
      "lng": 127.19416,
      "alt": 36000,
      "spd": 505,
      "ts": 1765091746,
      "hd": 310
    },
    {
      "lat": -27.587368,
      "lng": 127.257332,
      "alt": 36000,
      "spd": 505,
      "ts": 1765091715,
      "hd": 310
    },
    {
      "lat": -27.635456,
      "lng": 127.320824,
      "alt": 36000,
      "spd": 505,
      "ts": 1765091683,
      "hd": 310
    },
    {
      "lat": -27.682148,
      "lng": 127.382568,
      "alt": 36000,
      "spd": 505,
      "ts": 1765091652,
      "hd": 310
    },
    {
      "lat": -27.7321,
      "lng": 127.448692,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091620,
      "hd": 310
    },
    {
      "lat": -27.778559,
      "lng": 127.510338,
      "alt": 36000,
      "spd": 507,
      "ts": 1765091589,
      "hd": 310
    },
    {
      "lat": -27.825949,
      "lng": 127.573296,
      "alt": 36000,
      "spd": 507,
      "ts": 1765091557,
      "hd": 310
    },
    {
      "lat": -27.87236,
      "lng": 127.634964,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091527,
      "hd": 310
    },
    {
      "lat": -27.92308,
      "lng": 127.702538,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091494,
      "hd": 310
    },
    {
      "lat": -27.972494,
      "lng": 127.768463,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091461,
      "hd": 310
    },
    {
      "lat": -28.021957,
      "lng": 127.834534,
      "alt": 36000,
      "spd": 507,
      "ts": 1765091428,
      "hd": 310
    },
    {
      "lat": -28.070618,
      "lng": 127.899666,
      "alt": 36000,
      "spd": 508,
      "ts": 1765091396,
      "hd": 310
    },
    {
      "lat": -28.118317,
      "lng": 127.963577,
      "alt": 36000,
      "spd": 509,
      "ts": 1765091365,
      "hd": 310
    },
    {
      "lat": -28.165237,
      "lng": 128.026642,
      "alt": 36000,
      "spd": 509,
      "ts": 1765091334,
      "hd": 310
    },
    {
      "lat": -28.215218,
      "lng": 128.093857,
      "alt": 36000,
      "spd": 508,
      "ts": 1765091301,
      "hd": 309
    },
    {
      "lat": -28.264664,
      "lng": 128.160431,
      "alt": 36000,
      "spd": 508,
      "ts": 1765091269,
      "hd": 309
    },
    {
      "lat": -28.313583,
      "lng": 128.226395,
      "alt": 36000,
      "spd": 508,
      "ts": 1765091236,
      "hd": 309
    },
    {
      "lat": -28.360931,
      "lng": 128.290314,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091205,
      "hd": 309
    },
    {
      "lat": -28.40827,
      "lng": 128.354401,
      "alt": 36000,
      "spd": 506,
      "ts": 1765091173,
      "hd": 309
    },
    {
      "lat": -28.453491,
      "lng": 128.415604,
      "alt": 36000,
      "spd": 505,
      "ts": 1765091143,
      "hd": 309
    },
    {
      "lat": -28.502975,
      "lng": 128.482788,
      "alt": 36000,
      "spd": 504,
      "ts": 1765091111,
      "hd": 309
    },
    {
      "lat": -28.548859,
      "lng": 128.545105,
      "alt": 36000,
      "spd": 504,
      "ts": 1765091079,
      "hd": 309
    },
    {
      "lat": -28.596807,
      "lng": 128.610367,
      "alt": 36000,
      "spd": 503,
      "ts": 1765091047,
      "hd": 309
    },
    {
      "lat": -28.643871,
      "lng": 128.674561,
      "alt": 36000,
      "spd": 502,
      "ts": 1765091015,
      "hd": 309
    },
    {
      "lat": -28.690702,
      "lng": 128.738434,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090984,
      "hd": 309
    },
    {
      "lat": -28.736835,
      "lng": 128.801453,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090953,
      "hd": 309
    },
    {
      "lat": -28.783722,
      "lng": 128.865723,
      "alt": 36000,
      "spd": 503,
      "ts": 1765090921,
      "hd": 309
    },
    {
      "lat": -28.833481,
      "lng": 128.93396,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090888,
      "hd": 309
    },
    {
      "lat": -28.87924,
      "lng": 128.996719,
      "alt": 36000,
      "spd": 501,
      "ts": 1765090857,
      "hd": 309
    },
    {
      "lat": -28.924953,
      "lng": 129.05957,
      "alt": 36000,
      "spd": 501,
      "ts": 1765090826,
      "hd": 309
    },
    {
      "lat": -28.972624,
      "lng": 129.125122,
      "alt": 36000,
      "spd": 501,
      "ts": 1765090795,
      "hd": 309
    },
    {
      "lat": -29.028534,
      "lng": 129.202179,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090757,
      "hd": 309
    },
    {
      "lat": -29.07662,
      "lng": 129.268631,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090724,
      "hd": 309
    },
    {
      "lat": -29.120544,
      "lng": 129.329315,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090694,
      "hd": 309
    },
    {
      "lat": -29.16568,
      "lng": 129.3918,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090664,
      "hd": 309
    },
    {
      "lat": -29.213562,
      "lng": 129.458191,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090632,
      "hd": 309
    },
    {
      "lat": -29.259106,
      "lng": 129.521423,
      "alt": 36000,
      "spd": 501,
      "ts": 1765090600,
      "hd": 309
    },
    {
      "lat": -29.305378,
      "lng": 129.585846,
      "alt": 36000,
      "spd": 501,
      "ts": 1765090569,
      "hd": 309
    },
    {
      "lat": -29.357483,
      "lng": 129.658478,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090534,
      "hd": 309
    },
    {
      "lat": -29.404022,
      "lng": 129.723389,
      "alt": 36000,
      "spd": 503,
      "ts": 1765090502,
      "hd": 309
    },
    {
      "lat": -29.454803,
      "lng": 129.794434,
      "alt": 36000,
      "spd": 503,
      "ts": 1765090469,
      "hd": 309
    },
    {
      "lat": -29.502062,
      "lng": 129.860611,
      "alt": 36000,
      "spd": 503,
      "ts": 1765090436,
      "hd": 309
    },
    {
      "lat": -29.552059,
      "lng": 129.930786,
      "alt": 36000,
      "spd": 504,
      "ts": 1765090404,
      "hd": 309
    },
    {
      "lat": -29.595585,
      "lng": 129.991959,
      "alt": 36000,
      "spd": 504,
      "ts": 1765090373,
      "hd": 309
    },
    {
      "lat": -29.647165,
      "lng": 130.06456,
      "alt": 36000,
      "spd": 503,
      "ts": 1765090337,
      "hd": 309
    },
    {
      "lat": -29.693718,
      "lng": 130.130249,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090306,
      "hd": 308
    },
    {
      "lat": -29.739338,
      "lng": 130.194672,
      "alt": 36000,
      "spd": 503,
      "ts": 1765090275,
      "hd": 308
    },
    {
      "lat": -29.820786,
      "lng": 130.309998,
      "alt": 36000,
      "spd": 503,
      "ts": 1765090219,
      "hd": 308
    },
    {
      "lat": -29.838308,
      "lng": 130.334854,
      "alt": 36000,
      "spd": 504,
      "ts": 1765090208,
      "hd": 308
    },
    {
      "lat": -29.888155,
      "lng": 130.405655,
      "alt": 36000,
      "spd": 504,
      "ts": 1765090173,
      "hd": 309
    },
    {
      "lat": -29.932165,
      "lng": 130.468155,
      "alt": 36000,
      "spd": 505,
      "ts": 1765090143,
      "hd": 309
    },
    {
      "lat": -30.02717,
      "lng": 130.603607,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090079,
      "hd": 308
    },
    {
      "lat": -30.03611,
      "lng": 130.616348,
      "alt": 36000,
      "spd": 502,
      "ts": 1765090072,
      "hd": 308
    },
    {
      "lat": -30.080893,
      "lng": 130.680344,
      "alt": 36000,
      "spd": 501,
      "ts": 1765090042,
      "hd": 308
    },
    {
      "lat": -30.132099,
      "lng": 130.753723,
      "alt": 36000,
      "spd": 501,
      "ts": 1765090006,
      "hd": 308
    },
    {
      "lat": -30.17786,
      "lng": 130.819366,
      "alt": 36000,
      "spd": 501,
      "ts": 1765089975,
      "hd": 308
    },
    {
      "lat": -30.225723,
      "lng": 130.888153,
      "alt": 36000,
      "spd": 502,
      "ts": 1765089942,
      "hd": 308
    },
    {
      "lat": -30.273247,
      "lng": 130.956543,
      "alt": 36000,
      "spd": 501,
      "ts": 1765089909,
      "hd": 308
    },
    {
      "lat": -30.319016,
      "lng": 131.022568,
      "alt": 36000,
      "spd": 501,
      "ts": 1765089878,
      "hd": 308
    },
    {
      "lat": -30.364767,
      "lng": 131.088593,
      "alt": 36000,
      "spd": 501,
      "ts": 1765089846,
      "hd": 308
    },
    {
      "lat": -30.408854,
      "lng": 131.15242,
      "alt": 36000,
      "spd": 500,
      "ts": 1765089816,
      "hd": 308
    },
    {
      "lat": -30.453873,
      "lng": 131.217529,
      "alt": 36000,
      "spd": 499,
      "ts": 1765089784,
      "hd": 308
    },
    {
      "lat": -30.497772,
      "lng": 131.281296,
      "alt": 36000,
      "spd": 498,
      "ts": 1765089754,
      "hd": 308
    },
    {
      "lat": -30.544464,
      "lng": 131.349152,
      "alt": 36000,
      "spd": 498,
      "ts": 1765089721,
      "hd": 308
    },
    {
      "lat": -30.589188,
      "lng": 131.414261,
      "alt": 36000,
      "spd": 498,
      "ts": 1765089690,
      "hd": 308
    },
    {
      "lat": -30.633282,
      "lng": 131.478546,
      "alt": 36000,
      "spd": 499,
      "ts": 1765089660,
      "hd": 308
    },
    {
      "lat": -30.677994,
      "lng": 131.543884,
      "alt": 36000,
      "spd": 498,
      "ts": 1765089628,
      "hd": 308
    },
    {
      "lat": -30.724274,
      "lng": 131.611572,
      "alt": 36000,
      "spd": 498,
      "ts": 1765089596,
      "hd": 308
    },
    {
      "lat": -30.769632,
      "lng": 131.67807,
      "alt": 36000,
      "spd": 496,
      "ts": 1765089564,
      "hd": 308
    },
    {
      "lat": -30.816231,
      "lng": 131.74646,
      "alt": 36000,
      "spd": 496,
      "ts": 1765089532,
      "hd": 308
    },
    {
      "lat": -30.86261,
      "lng": 131.814667,
      "alt": 36000,
      "spd": 497,
      "ts": 1765089499,
      "hd": 308
    },
    {
      "lat": -30.905685,
      "lng": 131.878372,
      "alt": 36000,
      "spd": 497,
      "ts": 1765089469,
      "hd": 308
    },
    {
      "lat": -30.950441,
      "lng": 131.944595,
      "alt": 36000,
      "spd": 497,
      "ts": 1765089438,
      "hd": 308
    },
    {
      "lat": -30.995178,
      "lng": 132.010864,
      "alt": 36000,
      "spd": 497,
      "ts": 1765089406,
      "hd": 308
    },
    {
      "lat": -31.041544,
      "lng": 132.079666,
      "alt": 36000,
      "spd": 497,
      "ts": 1765089373,
      "hd": 307
    },
    {
      "lat": -31.085861,
      "lng": 132.145599,
      "alt": 36000,
      "spd": 495,
      "ts": 1765089342,
      "hd": 307
    },
    {
      "lat": -31.131483,
      "lng": 132.213654,
      "alt": 36000,
      "spd": 495,
      "ts": 1765089310,
      "hd": 307
    },
    {
      "lat": -31.177231,
      "lng": 132.28186,
      "alt": 36000,
      "spd": 495,
      "ts": 1765089277,
      "hd": 307
    },
    {
      "lat": -31.223331,
      "lng": 132.350922,
      "alt": 36000,
      "spd": 496,
      "ts": 1765089244,
      "hd": 307
    },
    {
      "lat": -31.270348,
      "lng": 132.421295,
      "alt": 36000,
      "spd": 497,
      "ts": 1765089211,
      "hd": 307
    },
    {
      "lat": -31.314377,
      "lng": 132.487366,
      "alt": 36000,
      "spd": 496,
      "ts": 1765089180,
      "hd": 307
    },
    {
      "lat": -31.357407,
      "lng": 132.551987,
      "alt": 36000,
      "spd": 495,
      "ts": 1765089149,
      "hd": 307
    },
    {
      "lat": -31.402542,
      "lng": 132.62001,
      "alt": 36000,
      "spd": 494,
      "ts": 1765089117,
      "hd": 307
    },
    {
      "lat": -31.444826,
      "lng": 132.683868,
      "alt": 36000,
      "spd": 494,
      "ts": 1765089087,
      "hd": 307
    },
    {
      "lat": -31.490168,
      "lng": 132.752258,
      "alt": 36000,
      "spd": 494,
      "ts": 1765089054,
      "hd": 307
    },
    {
      "lat": -31.535202,
      "lng": 132.82045,
      "alt": 36000,
      "spd": 493,
      "ts": 1765089022,
      "hd": 307
    },
    {
      "lat": -31.577826,
      "lng": 132.885025,
      "alt": 36000,
      "spd": 493,
      "ts": 1765088991,
      "hd": 307
    },
    {
      "lat": -31.620392,
      "lng": 132.949646,
      "alt": 36000,
      "spd": 493,
      "ts": 1765088961,
      "hd": 307
    },
    {
      "lat": -31.665482,
      "lng": 133.018265,
      "alt": 36000,
      "spd": 493,
      "ts": 1765088929,
      "hd": 307
    },
    {
      "lat": -31.709702,
      "lng": 133.085632,
      "alt": 36000,
      "spd": 492,
      "ts": 1765088897,
      "hd": 307
    },
    {
      "lat": -31.755051,
      "lng": 133.154907,
      "alt": 36000,
      "spd": 493,
      "ts": 1765088864,
      "hd": 307
    },
    {
      "lat": -31.797413,
      "lng": 133.21965,
      "alt": 36000,
      "spd": 493,
      "ts": 1765088833,
      "hd": 307
    },
    {
      "lat": -31.841171,
      "lng": 133.286697,
      "alt": 36000,
      "spd": 494,
      "ts": 1765088802,
      "hd": 307
    },
    {
      "lat": -31.886307,
      "lng": 133.356003,
      "alt": 36000,
      "spd": 494,
      "ts": 1765088770,
      "hd": 307
    },
    {
      "lat": -31.930227,
      "lng": 133.423462,
      "alt": 36000,
      "spd": 493,
      "ts": 1765088738,
      "hd": 307
    },
    {
      "lat": -31.972137,
      "lng": 133.488007,
      "alt": 36000,
      "spd": 491,
      "ts": 1765088707,
      "hd": 307
    },
    {
      "lat": -32.014626,
      "lng": 133.553558,
      "alt": 36000,
      "spd": 491,
      "ts": 1765088677,
      "hd": 307
    },
    {
      "lat": -32.05983,
      "lng": 133.623352,
      "alt": 36000,
      "spd": 490,
      "ts": 1765088644,
      "hd": 307
    },
    {
      "lat": -32.105392,
      "lng": 133.693451,
      "alt": 36000,
      "spd": 489,
      "ts": 1765088611,
      "hd": 307
    },
    {
      "lat": -32.14772,
      "lng": 133.760559,
      "alt": 36000,
      "spd": 487,
      "ts": 1765088579,
      "hd": 306
    },
    {
      "lat": -32.189804,
      "lng": 133.827545,
      "alt": 36000,
      "spd": 488,
      "ts": 1765088548,
      "hd": 306
    },
    {
      "lat": -32.230534,
      "lng": 133.892563,
      "alt": 36000,
      "spd": 488,
      "ts": 1765088517,
      "hd": 306
    },
    {
      "lat": -32.272385,
      "lng": 133.959442,
      "alt": 36000,
      "spd": 489,
      "ts": 1765088486,
      "hd": 306
    },
    {
      "lat": -32.314133,
      "lng": 134.026276,
      "alt": 36000,
      "spd": 489,
      "ts": 1765088455,
      "hd": 306
    },
    {
      "lat": -32.355835,
      "lng": 134.093185,
      "alt": 36000,
      "spd": 490,
      "ts": 1765088424,
      "hd": 306
    },
    {
      "lat": -32.397354,
      "lng": 134.159821,
      "alt": 36000,
      "spd": 490,
      "ts": 1765088393,
      "hd": 306
    },
    {
      "lat": -32.439137,
      "lng": 134.227097,
      "alt": 36000,
      "spd": 490,
      "ts": 1765088362,
      "hd": 306
    },
    {
      "lat": -32.48201,
      "lng": 134.296265,
      "alt": 36000,
      "spd": 490,
      "ts": 1765088330,
      "hd": 306
    },
    {
      "lat": -32.52356,
      "lng": 134.363342,
      "alt": 36000,
      "spd": 489,
      "ts": 1765088299,
      "hd": 306
    },
    {
      "lat": -32.565811,
      "lng": 134.431793,
      "alt": 36000,
      "spd": 488,
      "ts": 1765088267,
      "hd": 306
    },
    {
      "lat": -32.609116,
      "lng": 134.501984,
      "alt": 36000,
      "spd": 488,
      "ts": 1765088235,
      "hd": 306
    },
    {
      "lat": -32.650623,
      "lng": 134.569351,
      "alt": 36000,
      "spd": 489,
      "ts": 1765088203,
      "hd": 306
    },
    {
      "lat": -32.691833,
      "lng": 134.636414,
      "alt": 36000,
      "spd": 489,
      "ts": 1765088173,
      "hd": 306
    },
    {
      "lat": -32.735394,
      "lng": 134.707458,
      "alt": 36000,
      "spd": 489,
      "ts": 1765088140,
      "hd": 305
    },
    {
      "lat": -32.775421,
      "lng": 134.772858,
      "alt": 36000,
      "spd": 488,
      "ts": 1765088110,
      "hd": 305
    },
    {
      "lat": -32.817261,
      "lng": 134.841309,
      "alt": 36000,
      "spd": 486,
      "ts": 1765088078,
      "hd": 305
    },
    {
      "lat": -32.859879,
      "lng": 134.911179,
      "alt": 36000,
      "spd": 486,
      "ts": 1765088046,
      "hd": 305
    },
    {
      "lat": -32.902496,
      "lng": 134.981216,
      "alt": 36000,
      "spd": 485,
      "ts": 1765088014,
      "hd": 305
    },
    {
      "lat": -32.944645,
      "lng": 135.050507,
      "alt": 36000,
      "spd": 486,
      "ts": 1765087981,
      "hd": 305
    },
    {
      "lat": -32.985054,
      "lng": 135.116989,
      "alt": 36000,
      "spd": 486,
      "ts": 1765087951,
      "hd": 305
    },
    {
      "lat": -33.025681,
      "lng": 135.184784,
      "alt": 36000,
      "spd": 486,
      "ts": 1765087920,
      "hd": 305
    },
    {
      "lat": -33.06731,
      "lng": 135.254364,
      "alt": 36000,
      "spd": 485,
      "ts": 1765087887,
      "hd": 305
    },
    {
      "lat": -33.107117,
      "lng": 135.321075,
      "alt": 36000,
      "spd": 484,
      "ts": 1765087857,
      "hd": 305
    },
    {
      "lat": -33.149414,
      "lng": 135.392105,
      "alt": 36000,
      "spd": 483,
      "ts": 1765087824,
      "hd": 305
    },
    {
      "lat": -33.189419,
      "lng": 135.459351,
      "alt": 36000,
      "spd": 483,
      "ts": 1765087794,
      "hd": 305
    },
    {
      "lat": -33.230942,
      "lng": 135.52916,
      "alt": 36000,
      "spd": 484,
      "ts": 1765087761,
      "hd": 305
    },
    {
      "lat": -33.273212,
      "lng": 135.600494,
      "alt": 36000,
      "spd": 485,
      "ts": 1765087729,
      "hd": 305
    },
    {
      "lat": -33.312881,
      "lng": 135.667587,
      "alt": 36000,
      "spd": 485,
      "ts": 1765087698,
      "hd": 305
    },
    {
      "lat": -33.351974,
      "lng": 135.733826,
      "alt": 36000,
      "spd": 483,
      "ts": 1765087667,
      "hd": 305
    },
    {
      "lat": -33.393356,
      "lng": 135.804138,
      "alt": 36000,
      "spd": 482,
      "ts": 1765087635,
      "hd": 305
    },
    {
      "lat": -33.434654,
      "lng": 135.874313,
      "alt": 36000,
      "spd": 483,
      "ts": 1765087603,
      "hd": 305
    },
    {
      "lat": -33.476646,
      "lng": 135.945328,
      "alt": 36000,
      "spd": 484,
      "ts": 1765087571,
      "hd": 305
    },
    {
      "lat": -33.518784,
      "lng": 136.016724,
      "alt": 36000,
      "spd": 486,
      "ts": 1765087538,
      "hd": 305
    },
    {
      "lat": -33.561813,
      "lng": 136.089722,
      "alt": 36000,
      "spd": 486,
      "ts": 1765087505,
      "hd": 305
    },
    {
      "lat": -33.603313,
      "lng": 136.16037,
      "alt": 36000,
      "spd": 484,
      "ts": 1765087473,
      "hd": 305
    },
    {
      "lat": -33.641876,
      "lng": 136.226151,
      "alt": 36000,
      "spd": 481,
      "ts": 1765087443,
      "hd": 305
    },
    {
      "lat": -33.681244,
      "lng": 136.293365,
      "alt": 36000,
      "spd": 479,
      "ts": 1765087412,
      "hd": 304
    },
    {
      "lat": -33.72216,
      "lng": 136.363388,
      "alt": 36000,
      "spd": 480,
      "ts": 1765087380,
      "hd": 304
    },
    {
      "lat": -33.760662,
      "lng": 136.429428,
      "alt": 36000,
      "spd": 481,
      "ts": 1765087349,
      "hd": 304
    },
    {
      "lat": -33.802185,
      "lng": 136.500748,
      "alt": 36000,
      "spd": 481,
      "ts": 1765087317,
      "hd": 304
    },
    {
      "lat": -33.842129,
      "lng": 136.569443,
      "alt": 36000,
      "spd": 481,
      "ts": 1765087286,
      "hd": 304
    },
    {
      "lat": -33.881229,
      "lng": 136.636902,
      "alt": 36000,
      "spd": 480,
      "ts": 1765087255,
      "hd": 304
    },
    {
      "lat": -33.922615,
      "lng": 136.708374,
      "alt": 36000,
      "spd": 481,
      "ts": 1765087222,
      "hd": 304
    },
    {
      "lat": -33.96286,
      "lng": 136.777985,
      "alt": 36000,
      "spd": 482,
      "ts": 1765087191,
      "hd": 304
    },
    {
      "lat": -34.002045,
      "lng": 136.845871,
      "alt": 36000,
      "spd": 482,
      "ts": 1765087160,
      "hd": 304
    },
    {
      "lat": -34.041183,
      "lng": 136.913788,
      "alt": 36000,
      "spd": 481,
      "ts": 1765087129,
      "hd": 304
    },
    {
      "lat": -34.081924,
      "lng": 136.984665,
      "alt": 36000,
      "spd": 480,
      "ts": 1765087097,
      "hd": 304
    },
    {
      "lat": -34.121017,
      "lng": 137.052933,
      "alt": 36000,
      "spd": 478,
      "ts": 1765087066,
      "hd": 304
    },
    {
      "lat": -34.160637,
      "lng": 137.12207,
      "alt": 36000,
      "spd": 478,
      "ts": 1765087034,
      "hd": 304
    },
    {
      "lat": -34.200073,
      "lng": 137.191208,
      "alt": 36000,
      "spd": 479,
      "ts": 1765087003,
      "hd": 304
    },
    {
      "lat": -34.240906,
      "lng": 137.262787,
      "alt": 36000,
      "spd": 479,
      "ts": 1765086970,
      "hd": 304
    },
    {
      "lat": -34.280277,
      "lng": 137.332016,
      "alt": 36000,
      "spd": 479,
      "ts": 1765086939,
      "hd": 304
    },
    {
      "lat": -34.318497,
      "lng": 137.399307,
      "alt": 36000,
      "spd": 478,
      "ts": 1765086908,
      "hd": 304
    },
    {
      "lat": -34.359512,
      "lng": 137.471695,
      "alt": 36000,
      "spd": 478,
      "ts": 1765086875,
      "hd": 304
    },
    {
      "lat": -34.399979,
      "lng": 137.543167,
      "alt": 36000,
      "spd": 479,
      "ts": 1765086843,
      "hd": 304
    },
    {
      "lat": -34.438019,
      "lng": 137.610596,
      "alt": 36000,
      "spd": 479,
      "ts": 1765086813,
      "hd": 304
    },
    {
      "lat": -34.47821,
      "lng": 137.6819,
      "alt": 36000,
      "spd": 478,
      "ts": 1765086780,
      "hd": 304
    },
    {
      "lat": -34.518402,
      "lng": 137.753357,
      "alt": 36000,
      "spd": 477,
      "ts": 1765086748,
      "hd": 304
    },
    {
      "lat": -34.558987,
      "lng": 137.825714,
      "alt": 36000,
      "spd": 475,
      "ts": 1765086716,
      "hd": 304
    },
    {
      "lat": -34.59874,
      "lng": 137.896637,
      "alt": 36000,
      "spd": 475,
      "ts": 1765086683,
      "hd": 304
    },
    {
      "lat": -34.637146,
      "lng": 137.965393,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086652,
      "hd": 304
    },
    {
      "lat": -34.67709,
      "lng": 138.036865,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086619,
      "hd": 304
    },
    {
      "lat": -34.717438,
      "lng": 138.109406,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086587,
      "hd": 303
    },
    {
      "lat": -34.758362,
      "lng": 138.182953,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086554,
      "hd": 303
    },
    {
      "lat": -34.795891,
      "lng": 138.250641,
      "alt": 36000,
      "spd": 475,
      "ts": 1765086523,
      "hd": 303
    },
    {
      "lat": -34.833893,
      "lng": 138.319275,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086492,
      "hd": 303
    },
    {
      "lat": -34.873211,
      "lng": 138.39032,
      "alt": 36000,
      "spd": 474,
      "ts": 1765086460,
      "hd": 303
    },
    {
      "lat": -34.910568,
      "lng": 138.458115,
      "alt": 36000,
      "spd": 473,
      "ts": 1765086429,
      "hd": 303
    },
    {
      "lat": -34.950668,
      "lng": 138.529129,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086397,
      "hd": 307
    },
    {
      "lat": -34.995598,
      "lng": 138.596817,
      "alt": 36000,
      "spd": 477,
      "ts": 1765086365,
      "hd": 309
    },
    {
      "lat": -35.03801,
      "lng": 138.660019,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086335,
      "hd": 309
    },
    {
      "lat": -35.083115,
      "lng": 138.727341,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086302,
      "hd": 309
    },
    {
      "lat": -35.12764,
      "lng": 138.793869,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086270,
      "hd": 309
    },
    {
      "lat": -35.172405,
      "lng": 138.860947,
      "alt": 36000,
      "spd": 477,
      "ts": 1765086238,
      "hd": 309
    },
    {
      "lat": -35.214581,
      "lng": 138.924286,
      "alt": 36000,
      "spd": 478,
      "ts": 1765086207,
      "hd": 309
    },
    {
      "lat": -35.258148,
      "lng": 138.989807,
      "alt": 36000,
      "spd": 476,
      "ts": 1765086176,
      "hd": 309
    },
    {
      "lat": -35.30061,
      "lng": 139.053787,
      "alt": 36000,
      "spd": 474,
      "ts": 1765086145,
      "hd": 308
    },
    {
      "lat": -35.344803,
      "lng": 139.12056,
      "alt": 36000,
      "spd": 474,
      "ts": 1765086114,
      "hd": 308
    },
    {
      "lat": -35.389252,
      "lng": 139.187851,
      "alt": 36000,
      "spd": 473,
      "ts": 1765086081,
      "hd": 308
    },
    {
      "lat": -35.433655,
      "lng": 139.255142,
      "alt": 36000,
      "spd": 473,
      "ts": 1765086049,
      "hd": 308
    },
    {
      "lat": -35.475643,
      "lng": 139.318848,
      "alt": 36000,
      "spd": 473,
      "ts": 1765086018,
      "hd": 308
    },
    {
      "lat": -35.517494,
      "lng": 139.382553,
      "alt": 36000,
      "spd": 473,
      "ts": 1765085988,
      "hd": 308
    },
    {
      "lat": -35.562149,
      "lng": 139.450668,
      "alt": 36000,
      "spd": 472,
      "ts": 1765085956,
      "hd": 308
    },
    {
      "lat": -35.606831,
      "lng": 139.51889,
      "alt": 36000,
      "spd": 472,
      "ts": 1765085923,
      "hd": 308
    },
    {
      "lat": -35.647934,
      "lng": 139.581818,
      "alt": 36000,
      "spd": 473,
      "ts": 1765085892,
      "hd": 308
    },
    {
      "lat": -35.69165,
      "lng": 139.648758,
      "alt": 36000,
      "spd": 474,
      "ts": 1765085861,
      "hd": 308
    },
    {
      "lat": -35.733265,
      "lng": 139.712662,
      "alt": 36000,
      "spd": 474,
      "ts": 1765085830,
      "hd": 308
    },
    {
      "lat": -35.777119,
      "lng": 139.780106,
      "alt": 36000,
      "spd": 474,
      "ts": 1765085798,
      "hd": 308
    },
    {
      "lat": -35.821712,
      "lng": 139.848892,
      "alt": 36000,
      "spd": 474,
      "ts": 1765085766,
      "hd": 308
    },
    {
      "lat": -35.863937,
      "lng": 139.914108,
      "alt": 35800,
      "spd": 474,
      "ts": 1765085735,
      "hd": 308
    },
    {
      "lat": -35.906067,
      "lng": 139.979324,
      "alt": 35375,
      "spd": 478,
      "ts": 1765085704,
      "hd": 308
    },
    {
      "lat": -35.950516,
      "lng": 140.048157,
      "alt": 34950,
      "spd": 480,
      "ts": 1765085672,
      "hd": 308
    },
    {
      "lat": -35.995399,
      "lng": 140.117996,
      "alt": 34650,
      "spd": 480,
      "ts": 1765085639,
      "hd": 308
    },
    {
      "lat": -36.039951,
      "lng": 140.187424,
      "alt": 34250,
      "spd": 481,
      "ts": 1765085607,
      "hd": 308
    },
    {
      "lat": -36.083199,
      "lng": 140.254852,
      "alt": 34000,
      "spd": 482,
      "ts": 1765085576,
      "hd": 308
    },
    {
      "lat": -36.128448,
      "lng": 140.325623,
      "alt": 33975,
      "spd": 486,
      "ts": 1765085543,
      "hd": 308
    },
    {
      "lat": -36.174545,
      "lng": 140.397949,
      "alt": 33675,
      "spd": 485,
      "ts": 1765085510,
      "hd": 308
    },
    {
      "lat": -36.216522,
      "lng": 140.463821,
      "alt": 33400,
      "spd": 482,
      "ts": 1765085480,
      "hd": 308
    },
    {
      "lat": -36.261063,
      "lng": 140.533905,
      "alt": 32900,
      "spd": 484,
      "ts": 1765085448,
      "hd": 308
    },
    {
      "lat": -36.306244,
      "lng": 140.605316,
      "alt": 32400,
      "spd": 487,
      "ts": 1765085415,
      "hd": 308
    },
    {
      "lat": -36.348862,
      "lng": 140.672775,
      "alt": 32100,
      "spd": 483,
      "ts": 1765085384,
      "hd": 306
    },
    {
      "lat": -36.386856,
      "lng": 140.743851,
      "alt": 31750,
      "spd": 475,
      "ts": 1765085353,
      "hd": 300
    },
    {
      "lat": -36.419121,
      "lng": 140.821884,
      "alt": 31325,
      "spd": 468,
      "ts": 1765085320,
      "hd": 293
    },
    {
      "lat": -36.444305,
      "lng": 140.897491,
      "alt": 31125,
      "spd": 463,
      "ts": 1765085290,
      "hd": 292
    },
    {
      "lat": -36.46962,
      "lng": 140.974213,
      "alt": 30875,
      "spd": 463,
      "ts": 1765085259,
      "hd": 292
    },
    {
      "lat": -36.49593,
      "lng": 141.054047,
      "alt": 30575,
      "spd": 464,
      "ts": 1765085226,
      "hd": 292
    },
    {
      "lat": -36.520882,
      "lng": 141.13031,
      "alt": 30400,
      "spd": 461,
      "ts": 1765085195,
      "hd": 292
    },
    {
      "lat": -36.545368,
      "lng": 141.205399,
      "alt": 30250,
      "spd": 458,
      "ts": 1765085164,
      "hd": 292
    },
    {
      "lat": -36.571251,
      "lng": 141.284592,
      "alt": 29875,
      "spd": 459,
      "ts": 1765085132,
      "hd": 291
    },
    {
      "lat": -36.596016,
      "lng": 141.360611,
      "alt": 29550,
      "spd": 460,
      "ts": 1765085101,
      "hd": 291
    },
    {
      "lat": -36.620319,
      "lng": 141.435593,
      "alt": 29300,
      "spd": 459,
      "ts": 1765085070,
      "hd": 291
    },
    {
      "lat": -36.646545,
      "lng": 141.516602,
      "alt": 28975,
      "spd": 458,
      "ts": 1765085037,
      "hd": 291
    },
    {
      "lat": -36.672176,
      "lng": 141.596115,
      "alt": 28675,
      "spd": 457,
      "ts": 1765085005,
      "hd": 291
    },
    {
      "lat": -36.696106,
      "lng": 141.670334,
      "alt": 28450,
      "spd": 454,
      "ts": 1765084974,
      "hd": 291
    },
    {
      "lat": -36.719879,
      "lng": 141.744522,
      "alt": 28225,
      "spd": 451,
      "ts": 1765084943,
      "hd": 291
    },
    {
      "lat": -36.744736,
      "lng": 141.82193,
      "alt": 27950,
      "spd": 448,
      "ts": 1765084911,
      "hd": 291
    },
    {
      "lat": -36.768448,
      "lng": 141.896271,
      "alt": 27700,
      "spd": 445,
      "ts": 1765084881,
      "hd": 291
    },
    {
      "lat": -36.792793,
      "lng": 141.97287,
      "alt": 27375,
      "spd": 442,
      "ts": 1765084848,
      "hd": 291
    },
    {
      "lat": -36.816071,
      "lng": 142.045975,
      "alt": 27075,
      "spd": 441,
      "ts": 1765084817,
      "hd": 291
    },
    {
      "lat": -36.840046,
      "lng": 142.121658,
      "alt": 26775,
      "spd": 440,
      "ts": 1765084785,
      "hd": 291
    },
    {
      "lat": -36.863388,
      "lng": 142.195343,
      "alt": 26625,
      "spd": 436,
      "ts": 1765084754,
      "hd": 291
    },
    {
      "lat": -36.885818,
      "lng": 142.266525,
      "alt": 26500,
      "spd": 431,
      "ts": 1765084723,
      "hd": 291
    },
    {
      "lat": -36.909313,
      "lng": 142.34137,
      "alt": 26275,
      "spd": 428,
      "ts": 1765084691,
      "hd": 291
    },
    {
      "lat": -36.932499,
      "lng": 142.415421,
      "alt": 25950,
      "spd": 426,
      "ts": 1765084658,
      "hd": 291
    },
    {
      "lat": -36.9543,
      "lng": 142.485077,
      "alt": 25650,
      "spd": 424,
      "ts": 1765084628,
      "hd": 291
    },
    {
      "lat": -36.977875,
      "lng": 142.560638,
      "alt": 25300,
      "spd": 422,
      "ts": 1765084595,
      "hd": 291
    },
    {
      "lat": -36.999252,
      "lng": 142.629364,
      "alt": 25025,
      "spd": 419,
      "ts": 1765084564,
      "hd": 291
    },
    {
      "lat": -37.021545,
      "lng": 142.700943,
      "alt": 24650,
      "spd": 417,
      "ts": 1765084533,
      "hd": 291
    },
    {
      "lat": -37.044159,
      "lng": 142.774048,
      "alt": 24375,
      "spd": 413,
      "ts": 1765084500,
      "hd": 291
    },
    {
      "lat": -37.065033,
      "lng": 142.841843,
      "alt": 24050,
      "spd": 411,
      "ts": 1765084469,
      "hd": 291
    },
    {
      "lat": -37.08696,
      "lng": 142.912735,
      "alt": 23575,
      "spd": 411,
      "ts": 1765084437,
      "hd": 290
    },
    {
      "lat": -37.109211,
      "lng": 142.985031,
      "alt": 23300,
      "spd": 407,
      "ts": 1765084405,
      "hd": 290
    },
    {
      "lat": -37.130066,
      "lng": 143.05304,
      "alt": 22925,
      "spd": 403,
      "ts": 1765084374,
      "hd": 290
    },
    {
      "lat": -37.150223,
      "lng": 143.118958,
      "alt": 22550,
      "spd": 400,
      "ts": 1765084344,
      "hd": 290
    },
    {
      "lat": -37.171219,
      "lng": 143.187683,
      "alt": 21925,
      "spd": 402,
      "ts": 1765084312,
      "hd": 290
    },
    {
      "lat": -37.193207,
      "lng": 143.259552,
      "alt": 21300,
      "spd": 403,
      "ts": 1765084279,
      "hd": 292
    },
    {
      "lat": -37.219528,
      "lng": 143.328506,
      "alt": 20725,
      "spd": 406,
      "ts": 1765084246,
      "hd": 296
    },
    {
      "lat": -37.244614,
      "lng": 143.391281,
      "alt": 20300,
      "spd": 401,
      "ts": 1765084216,
      "hd": 296
    },
    {
      "lat": -37.271576,
      "lng": 143.458771,
      "alt": 19925,
      "spd": 394,
      "ts": 1765084183,
      "hd": 296
    },
    {
      "lat": -37.297531,
      "lng": 143.523758,
      "alt": 19300,
      "spd": 392,
      "ts": 1765084151,
      "hd": 296
    },
    {
      "lat": -37.324081,
      "lng": 143.590439,
      "alt": 18525,
      "spd": 394,
      "ts": 1765084119,
      "hd": 296
    },
    {
      "lat": -37.350212,
      "lng": 143.656265,
      "alt": 18100,
      "spd": 387,
      "ts": 1765084086,
      "hd": 296
    },
    {
      "lat": -37.374298,
      "lng": 143.717072,
      "alt": 17500,
      "spd": 384,
      "ts": 1765084056,
      "hd": 296
    },
    {
      "lat": -37.399796,
      "lng": 143.781647,
      "alt": 16900,
      "spd": 382,
      "ts": 1765084024,
      "hd": 296
    },
    {
      "lat": -37.42474,
      "lng": 143.844894,
      "alt": 16225,
      "spd": 380,
      "ts": 1765083992,
      "hd": 296
    },
    {
      "lat": -37.448017,
      "lng": 143.903946,
      "alt": 15600,
      "spd": 377,
      "ts": 1765083962,
      "hd": 296
    },
    {
      "lat": -37.473221,
      "lng": 143.968002,
      "alt": 14875,
      "spd": 373,
      "ts": 1765083929,
      "hd": 296
    },
    {
      "lat": -37.497665,
      "lng": 144.030472,
      "alt": 14325,
      "spd": 366,
      "ts": 1765083897,
      "hd": 296
    },
    {
      "lat": -37.520081,
      "lng": 144.087723,
      "alt": 13625,
      "spd": 361,
      "ts": 1765083866,
      "hd": 296
    },
    {
      "lat": -37.544128,
      "lng": 144.149277,
      "alt": 12875,
      "spd": 357,
      "ts": 1765083834,
      "hd": 296
    },
    {
      "lat": -37.566238,
      "lng": 144.205902,
      "alt": 12125,
      "spd": 354,
      "ts": 1765083803,
      "hd": 296
    },
    {
      "lat": -37.575668,
      "lng": 144.229919,
      "alt": 11725,
      "spd": 353,
      "ts": 1765083790,
      "hd": 296
    },
    {
      "lat": -37.585018,
      "lng": 144.253952,
      "alt": 11425,
      "spd": 350,
      "ts": 1765083777,
      "hd": 296
    },
    {
      "lat": -37.594143,
      "lng": 144.27742,
      "alt": 11300,
      "spd": 342,
      "ts": 1765083764,
      "hd": 295
    },
    {
      "lat": -37.603546,
      "lng": 144.301712,
      "alt": 11175,
      "spd": 333,
      "ts": 1765083751,
      "hd": 295
    },
    {
      "lat": -37.612206,
      "lng": 144.324173,
      "alt": 11025,
      "spd": 324,
      "ts": 1765083738,
      "hd": 296
    },
    {
      "lat": -37.621658,
      "lng": 144.348465,
      "alt": 10875,
      "spd": 314,
      "ts": 1765083723,
      "hd": 295
    },
    {
      "lat": -37.629822,
      "lng": 144.369583,
      "alt": 10725,
      "spd": 305,
      "ts": 1765083710,
      "hd": 295
    },
    {
      "lat": -37.63797,
      "lng": 144.390564,
      "alt": 10575,
      "spd": 296,
      "ts": 1765083697,
      "hd": 295
    },
    {
      "lat": -37.645306,
      "lng": 144.40979,
      "alt": 10400,
      "spd": 286,
      "ts": 1765083684,
      "hd": 295
    },
    {
      "lat": -37.652664,
      "lng": 144.428787,
      "alt": 10250,
      "spd": 275,
      "ts": 1765083671,
      "hd": 296
    },
    {
      "lat": -37.659851,
      "lng": 144.447372,
      "alt": 9900,
      "spd": 272,
      "ts": 1765083658,
      "hd": 295
    },
    {
      "lat": -37.667744,
      "lng": 144.467819,
      "alt": 9500,
      "spd": 269,
      "ts": 1765083644,
      "hd": 296
    },
    {
      "lat": -37.675705,
      "lng": 144.488419,
      "alt": 8950,
      "spd": 270,
      "ts": 1765083629,
      "hd": 295
    },
    {
      "lat": -37.682877,
      "lng": 144.506851,
      "alt": 8600,
      "spd": 267,
      "ts": 1765083616,
      "hd": 296
    },
    {
      "lat": -37.689621,
      "lng": 144.524307,
      "alt": 8325,
      "spd": 260,
      "ts": 1765083604,
      "hd": 295
    },
    {
      "lat": -37.697433,
      "lng": 144.544373,
      "alt": 7650,
      "spd": 266,
      "ts": 1765083589,
      "hd": 296
    },
    {
      "lat": -37.704483,
      "lng": 144.562378,
      "alt": 7150,
      "spd": 268,
      "ts": 1765083576,
      "hd": 296
    },
    {
      "lat": -37.705811,
      "lng": 144.565704,
      "alt": 7050,
      "spd": 268,
      "ts": 1765083574,
      "hd": 295
    },
    {
      "lat": -37.706863,
      "lng": 144.56839,
      "alt": 6975,
      "spd": 268,
      "ts": 1765083572,
      "hd": 295
    },
    {
      "lat": -37.70787,
      "lng": 144.570999,
      "alt": 6900,
      "spd": 269,
      "ts": 1765083570,
      "hd": 295
    },
    {
      "lat": -37.708988,
      "lng": 144.57399,
      "alt": 6825,
      "spd": 269,
      "ts": 1765083568,
      "hd": 295
    },
    {
      "lat": -37.710106,
      "lng": 144.576797,
      "alt": 6750,
      "spd": 269,
      "ts": 1765083566,
      "hd": 295
    },
    {
      "lat": -37.711178,
      "lng": 144.579666,
      "alt": 6675,
      "spd": 269,
      "ts": 1765083564,
      "hd": 295
    },
    {
      "lat": -37.712265,
      "lng": 144.582535,
      "alt": 6625,
      "spd": 269,
      "ts": 1765083562,
      "hd": 295
    },
    {
      "lat": -37.713642,
      "lng": 144.586349,
      "alt": 6550,
      "spd": 267,
      "ts": 1765083559,
      "hd": 294
    },
    {
      "lat": -37.714508,
      "lng": 144.588669,
      "alt": 6500,
      "spd": 268,
      "ts": 1765083557,
      "hd": 294
    },
    {
      "lat": -37.715561,
      "lng": 144.591644,
      "alt": 6450,
      "spd": 266,
      "ts": 1765083555,
      "hd": 293
    },
    {
      "lat": -37.716621,
      "lng": 144.594589,
      "alt": 6375,
      "spd": 266,
      "ts": 1765083553,
      "hd": 292
    },
    {
      "lat": -37.717789,
      "lng": 144.598175,
      "alt": 6275,
      "spd": 265,
      "ts": 1765083551,
      "hd": 291
    },
    {
      "lat": -37.718491,
      "lng": 144.600586,
      "alt": 6225,
      "spd": 265,
      "ts": 1765083549,
      "hd": 288
    },
    {
      "lat": -37.71991,
      "lng": 144.606781,
      "alt": 6150,
      "spd": 262,
      "ts": 1765083545,
      "hd": 282
    },
    {
      "lat": -37.722519,
      "lng": 144.626068,
      "alt": 5775,
      "spd": 258,
      "ts": 1765083532,
      "hd": 277
    },
    {
      "lat": -37.724628,
      "lng": 144.645691,
      "alt": 5200,
      "spd": 262,
      "ts": 1765083519,
      "hd": 278
    },
    {
      "lat": -37.725815,
      "lng": 144.656113,
      "alt": 4975,
      "spd": 260,
      "ts": 1765083512,
      "hd": 278
    },
    {
      "lat": -37.727329,
      "lng": 144.668869,
      "alt": 4725,
      "spd": 257,
      "ts": 1765083504,
      "hd": 278
    },
    {
      "lat": -37.728378,
      "lng": 144.678131,
      "alt": 4625,
      "spd": 255,
      "ts": 1765083498,
      "hd": 277
    },
    {
      "lat": -37.729752,
      "lng": 144.690704,
      "alt": 4450,
      "spd": 255,
      "ts": 1765083489,
      "hd": 277
    },
    {
      "lat": -37.730759,
      "lng": 144.700287,
      "alt": 4350,
      "spd": 257,
      "ts": 1765083482,
      "hd": 277
    },
    {
      "lat": -37.731472,
      "lng": 144.706482,
      "alt": 4300,
      "spd": 258,
      "ts": 1765083478,
      "hd": 278
    },
    {
      "lat": -37.732956,
      "lng": 144.719284,
      "alt": 4150,
      "spd": 257,
      "ts": 1765083470,
      "hd": 278
    },
    {
      "lat": -37.734329,
      "lng": 144.731842,
      "alt": 3900,
      "spd": 254,
      "ts": 1765083461,
      "hd": 277
    },
    {
      "lat": -37.735012,
      "lng": 144.738251,
      "alt": 3775,
      "spd": 254,
      "ts": 1765083457,
      "hd": 277
    },
    {
      "lat": -37.736435,
      "lng": 144.750656,
      "alt": 3575,
      "spd": 249,
      "ts": 1765083448,
      "hd": 278
    },
    {
      "lat": -37.73748,
      "lng": 144.759628,
      "alt": 3475,
      "spd": 245,
      "ts": 1765083442,
      "hd": 277
    },
    {
      "lat": -37.738781,
      "lng": 144.771683,
      "alt": 3325,
      "spd": 238,
      "ts": 1765083433,
      "hd": 277
    },
    {
      "lat": -37.74004,
      "lng": 144.782547,
      "alt": 3200,
      "spd": 230,
      "ts": 1765083425,
      "hd": 278
    },
    {
      "lat": -37.740463,
      "lng": 144.785782,
      "alt": 3175,
      "spd": 228,
      "ts": 1765083423,
      "hd": 279
    },
    {
      "lat": -37.740784,
      "lng": 144.788574,
      "alt": 3150,
      "spd": 225,
      "ts": 1765083421,
      "hd": 279
    },
    {
      "lat": -37.74115,
      "lng": 144.791397,
      "alt": 3125,
      "spd": 222,
      "ts": 1765083419,
      "hd": 279
    },
    {
      "lat": -37.741482,
      "lng": 144.794006,
      "alt": 3125,
      "spd": 220,
      "ts": 1765083417,
      "hd": 279
    },
    {
      "lat": -37.741928,
      "lng": 144.797226,
      "alt": 3075,
      "spd": 217,
      "ts": 1765083414,
      "hd": 279
    },
    {
      "lat": -37.742249,
      "lng": 144.799637,
      "alt": 3050,
      "spd": 215,
      "ts": 1765083412,
      "hd": 279
    },
    {
      "lat": -37.742554,
      "lng": 144.802078,
      "alt": 3025,
      "spd": 213,
      "ts": 1765083410,
      "hd": 279
    },
    {
      "lat": -37.742924,
      "lng": 144.805237,
      "alt": 2975,
      "spd": 212,
      "ts": 1765083408,
      "hd": 279
    },
    {
      "lat": -37.743252,
      "lng": 144.807571,
      "alt": 2950,
      "spd": 210,
      "ts": 1765083406,
      "hd": 279
    },
    {
      "lat": -37.74353,
      "lng": 144.809952,
      "alt": 2925,
      "spd": 208,
      "ts": 1765083404,
      "hd": 278
    },
    {
      "lat": -37.743851,
      "lng": 144.812424,
      "alt": 2900,
      "spd": 206,
      "ts": 1765083402,
      "hd": 278
    },
    {
      "lat": -37.744087,
      "lng": 144.814911,
      "alt": 2875,
      "spd": 204,
      "ts": 1765083399,
      "hd": 277
    },
    {
      "lat": -37.74432,
      "lng": 144.817245,
      "alt": 2850,
      "spd": 203,
      "ts": 1765083397,
      "hd": 276
    },
    {
      "lat": -37.744553,
      "lng": 144.819626,
      "alt": 2825,
      "spd": 202,
      "ts": 1765083395,
      "hd": 275
    },
    {
      "lat": -37.744785,
      "lng": 144.822495,
      "alt": 2800,
      "spd": 199,
      "ts": 1765083393,
      "hd": 274
    },
    {
      "lat": -37.744881,
      "lng": 144.824829,
      "alt": 2775,
      "spd": 197,
      "ts": 1765083391,
      "hd": 272
    },
    {
      "lat": -37.744949,
      "lng": 144.827042,
      "alt": 2750,
      "spd": 194,
      "ts": 1765083389,
      "hd": 266
    },
    {
      "lat": -37.744812,
      "lng": 144.829727,
      "alt": 2725,
      "spd": 189,
      "ts": 1765083387,
      "hd": 262
    },
    {
      "lat": -37.744537,
      "lng": 144.832474,
      "alt": 2700,
      "spd": 186,
      "ts": 1765083385,
      "hd": 256
    },
    {
      "lat": -37.744034,
      "lng": 144.834686,
      "alt": 2675,
      "spd": 183,
      "ts": 1765083383,
      "hd": 250
    },
    {
      "lat": -37.743622,
      "lng": 144.836212,
      "alt": 2650,
      "spd": 182,
      "ts": 1765083380,
      "hd": 243
    },
    {
      "lat": -37.742798,
      "lng": 144.838196,
      "alt": 2625,
      "spd": 181,
      "ts": 1765083378,
      "hd": 237
    },
    {
      "lat": -37.741699,
      "lng": 144.840302,
      "alt": 2600,
      "spd": 181,
      "ts": 1765083376,
      "hd": 231
    },
    {
      "lat": -37.740738,
      "lng": 144.841766,
      "alt": 2550,
      "spd": 180,
      "ts": 1765083374,
      "hd": 226
    },
    {
      "lat": -37.739456,
      "lng": 144.843399,
      "alt": 2525,
      "spd": 179,
      "ts": 1765083372,
      "hd": 219
    },
    {
      "lat": -37.738037,
      "lng": 144.844742,
      "alt": 2500,
      "spd": 178,
      "ts": 1765083370,
      "hd": 212
    },
    {
      "lat": -37.736572,
      "lng": 144.845856,
      "alt": 2475,
      "spd": 178,
      "ts": 1765083368,
      "hd": 206
    },
    {
      "lat": -37.735104,
      "lng": 144.846741,
      "alt": 2475,
      "spd": 178,
      "ts": 1765083366,
      "hd": 200
    },
    {
      "lat": -37.733429,
      "lng": 144.847397,
      "alt": 2450,
      "spd": 178,
      "ts": 1765083364,
      "hd": 192
    },
    {
      "lat": -37.731491,
      "lng": 144.848022,
      "alt": 2425,
      "spd": 178,
      "ts": 1765083362,
      "hd": 189
    },
    {
      "lat": -37.729889,
      "lng": 144.848251,
      "alt": 2425,
      "spd": 178,
      "ts": 1765083359,
      "hd": 182
    },
    {
      "lat": -37.727921,
      "lng": 144.848312,
      "alt": 2400,
      "spd": 177,
      "ts": 1765083357,
      "hd": 178
    },
    {
      "lat": -37.726261,
      "lng": 144.848221,
      "alt": 2375,
      "spd": 176,
      "ts": 1765083355,
      "hd": 175
    },
    {
      "lat": -37.722908,
      "lng": 144.847748,
      "alt": 2325,
      "spd": 175,
      "ts": 1765083351,
      "hd": 172
    },
    {
      "lat": -37.717556,
      "lng": 144.846741,
      "alt": 2225,
      "spd": 173,
      "ts": 1765083344,
      "hd": 171
    },
    {
      "lat": -37.715878,
      "lng": 144.846436,
      "alt": 2200,
      "spd": 173,
      "ts": 1765083342,
      "hd": 171
    },
    {
      "lat": -37.714062,
      "lng": 144.846146,
      "alt": 2175,
      "spd": 172,
      "ts": 1765083340,
      "hd": 171
    },
    {
      "lat": -37.712479,
      "lng": 144.84584,
      "alt": 2150,
      "spd": 172,
      "ts": 1765083338,
      "hd": 171
    },
    {
      "lat": -37.710938,
      "lng": 144.845505,
      "alt": 2125,
      "spd": 171,
      "ts": 1765083336,
      "hd": 171
    },
    {
      "lat": -37.709221,
      "lng": 144.845184,
      "alt": 2075,
      "spd": 172,
      "ts": 1765083334,
      "hd": 170
    },
    {
      "lat": -37.707592,
      "lng": 144.844879,
      "alt": 2000,
      "spd": 172,
      "ts": 1765083332,
      "hd": 170
    },
    {
      "lat": -37.7061,
      "lng": 144.844589,
      "alt": 1950,
      "spd": 171,
      "ts": 1765083330,
      "hd": 171
    },
    {
      "lat": -37.699398,
      "lng": 144.843399,
      "alt": 1700,
      "spd": 171,
      "ts": 1765083321,
      "hd": 171
    },
    {
      "lat": -37.69265,
      "lng": 144.842194,
      "alt": 1375,
      "spd": 170,
      "ts": 1765083313,
      "hd": 172
    },
    {
      "lat": -37.686272,
      "lng": 144.841125,
      "alt": 1075,
      "spd": 167,
      "ts": 1765083305,
      "hd": 171
    },
    {
      "lat": -37.680908,
      "lng": 144.840134,
      "alt": 775,
      "spd": 170,
      "ts": 1765083297,
      "hd": 171
    },
    {
      "lat": -37.674271,
      "lng": 144.838837,
      "alt": 400,
      "spd": 175,
      "ts": 1765083289,
      "hd": 170
    },
    {
      "lat": -37.66864,
      "lng": 144.837784,
      "alt": 400,
      "spd": 156,
      "ts": 1765083282,
      "hd": 171
    },
    {
      "lat": -37.662094,
      "lng": 144.836563,
      "alt": 450,
      "spd": 122,
      "ts": 1765083272,
      "hd": 171
    },
    {
      "lat": -37.658562,
      "lng": 144.835907,
      "alt": 0,
      "spd": 88,
      "ts": 1765083265,
      "hd": 171
    },
    {
      "lat": -37.656002,
      "lng": 144.835434,
      "alt": 0,
      "spd": 58,
      "ts": 1765083258,
      "hd": 171
    },
    {
      "lat": -37.65572,
      "lng": 144.835388,
      "alt": 0,
      "spd": 54,
      "ts": 1765083256,
      "hd": 171
    },
    {
      "lat": -37.655434,
      "lng": 144.835342,
      "alt": 0,
      "spd": 49,
      "ts": 1765083255,
      "hd": 171
    },
    {
      "lat": -37.655136,
      "lng": 144.835281,
      "alt": 0,
      "spd": 44,
      "ts": 1765083254,
      "hd": 171
    },
    {
      "lat": -37.654713,
      "lng": 144.835205,
      "alt": 0,
      "spd": 35,
      "ts": 1765083252,
      "hd": 171
    },
    {
      "lat": -37.654419,
      "lng": 144.835159,
      "alt": 0,
      "spd": 25,
      "ts": 1765083250,
      "hd": 171
    },
    {
      "lat": -37.654209,
      "lng": 144.835098,
      "alt": 0,
      "spd": 17,
      "ts": 1765083248,
      "hd": 171
    },
    {
      "lat": -37.653976,
      "lng": 144.835068,
      "alt": 0,
      "spd": 12,
      "ts": 1765083244,
      "hd": 171
    },
    {
      "lat": -37.653744,
      "lng": 144.834991,
      "alt": 0,
      "spd": 9,
      "ts": 1765083240,
      "hd": 185
    },
    {
      "lat": -37.653522,
      "lng": 144.834915,
      "alt": 0,
      "spd": 9,
      "ts": 1765083234,
      "hd": 219
    },
    {
      "lat": -37.653305,
      "lng": 144.835007,
      "alt": 0,
      "spd": 8,
      "ts": 1765083228,
      "hd": 255
    },
    {
      "lat": -37.653248,
      "lng": 144.835236,
      "alt": 0,
      "spd": 8,
      "ts": 1765083223,
      "hd": 261
    },
    {
      "lat": -37.653206,
      "lng": 144.835648,
      "alt": 0,
      "spd": 8,
      "ts": 1765083215,
      "hd": 261
    },
    {
      "lat": -37.653179,
      "lng": 144.835922,
      "alt": 0,
      "spd": 7,
      "ts": 1765083208,
      "hd": 261
    },
    {
      "lat": -37.653145,
      "lng": 144.836166,
      "alt": 0,
      "spd": 5,
      "ts": 1765083201,
      "hd": 261
    },
    {
      "lat": -37.653122,
      "lng": 144.836395,
      "alt": 0,
      "spd": 1,
      "ts": 1765083183,
      "hd": 261
    },
    {
      "lat": -37.653091,
      "lng": 144.836609,
      "alt": 0,
      "spd": 4,
      "ts": 1765083154,
      "hd": 261
    },
    {
      "lat": -37.653069,
      "lng": 144.836823,
      "alt": 0,
      "spd": 5,
      "ts": 1765083144,
      "hd": 261
    },
    {
      "lat": -37.653046,
      "lng": 144.837036,
      "alt": 0,
      "spd": 6,
      "ts": 1765083137,
      "hd": 261
    },
    {
      "lat": -37.653023,
      "lng": 144.83725,
      "alt": 0,
      "spd": 7,
      "ts": 1765083131,
      "hd": 264
    },
    {
      "lat": -37.652985,
      "lng": 144.837463,
      "alt": 0,
      "spd": 8,
      "ts": 1765083126,
      "hd": 270
    },
    {
      "lat": -37.652962,
      "lng": 144.837677,
      "alt": 0,
      "spd": 8,
      "ts": 1765083121,
      "hd": 278
    },
    {
      "lat": -37.652962,
      "lng": 144.837891,
      "alt": 0,
      "spd": 8,
      "ts": 1765083116,
      "hd": 286
    },
    {
      "lat": -37.652985,
      "lng": 144.838104,
      "alt": 0,
      "spd": 8,
      "ts": 1765083112,
      "hd": 295
    },
    {
      "lat": -37.653053,
      "lng": 144.838348,
      "alt": 0,
      "spd": 9,
      "ts": 1765083107,
      "hd": 303
    },
    {
      "lat": -37.653183,
      "lng": 144.838623,
      "alt": 0,
      "spd": 8,
      "ts": 1765083101,
      "hd": 317
    },
    {
      "lat": -37.653347,
      "lng": 144.838867,
      "alt": 0,
      "spd": 8,
      "ts": 1765083094,
      "hd": 331
    },
    {
      "lat": -37.653557,
      "lng": 144.83905,
      "alt": 0,
      "spd": 8,
      "ts": 1765083087,
      "hd": 343
    },
    {
      "lat": -37.65382,
      "lng": 144.839142,
      "alt": 0,
      "spd": 8,
      "ts": 1765083079,
      "hd": 348
    },
    {
      "lat": -37.654114,
      "lng": 144.839233,
      "alt": 0,
      "spd": 9,
      "ts": 1765083072,
      "hd": 348
    },
    {
      "lat": -37.654324,
      "lng": 144.839294,
      "alt": 0,
      "spd": 9,
      "ts": 1765083067,
      "hd": 348
    },
    {
      "lat": -37.654564,
      "lng": 144.839355,
      "alt": 0,
      "spd": 9,
      "ts": 1765083061,
      "hd": 348
    },
    {
      "lat": -37.654823,
      "lng": 144.839432,
      "alt": 0,
      "spd": 10,
      "ts": 1765083055,
      "hd": 354
    },
    {
      "lat": -37.655071,
      "lng": 144.839508,
      "alt": 0,
      "spd": 11,
      "ts": 1765083050,
      "hd": 16
    },
    {
      "lat": -37.655273,
      "lng": 144.839508,
      "alt": 0,
      "spd": 11,
      "ts": 1765083046,
      "hd": 42
    },
    {
      "lat": -37.655479,
      "lng": 144.839355,
      "alt": 0,
      "spd": 10,
      "ts": 1765083041,
      "hd": 70
    },
    {
      "lat": -37.655571,
      "lng": 144.839142,
      "alt": 0,
      "spd": 10,
      "ts": 1765083036,
      "hd": 78
    },
    {
      "lat": -37.655605,
      "lng": 144.838882,
      "alt": 0,
      "spd": 9,
      "ts": 1765083032,
      "hd": 81
    },
    {
      "lat": -37.65564,
      "lng": 144.838623,
      "alt": 0,
      "spd": 9,
      "ts": 1765083028,
      "hd": 78
    },
    {
      "lat": -37.655663,
      "lng": 144.838394,
      "alt": 0,
      "spd": 9,
      "ts": 1765083023,
      "hd": 73
    },
    {
      "lat": -37.655674,
      "lng": 144.838181,
      "alt": 0,
      "spd": 9,
      "ts": 1765083019,
      "hd": 61
    },
    {
      "lat": -37.65572,
      "lng": 144.837936,
      "alt": 0,
      "spd": 9,
      "ts": 1765083014,
      "hd": 39
    },
    {
      "lat": -37.65588,
      "lng": 144.837692,
      "alt": 0,
      "spd": 9,
      "ts": 1765083008,
      "hd": 5
    },
    {
      "lat": -37.656105,
      "lng": 144.837631,
      "alt": 0,
      "spd": 9,
      "ts": 1765083003,
      "hd": 351
    },
    {
      "lat": -37.656406,
      "lng": 144.837692,
      "alt": 0,
      "spd": 10,
      "ts": 1765082996,
      "hd": 351
    },
    {
      "lat": -37.656738,
      "lng": 144.837753,
      "alt": 0,
      "spd": 11,
      "ts": 1765082989,
      "hd": 351
    },
    {
      "lat": -37.657154,
      "lng": 144.837845,
      "alt": 0,
      "spd": 14,
      "ts": 1765082982,
      "hd": 351
    },
    {
      "lat": -37.657631,
      "lng": 144.837921,
      "alt": 0,
      "spd": 15,
      "ts": 1765082975,
      "hd": 351
    },
    {
      "lat": -37.658154,
      "lng": 144.838013,
      "alt": 0,
      "spd": 15,
      "ts": 1765082967,
      "hd": 351
    },
    {
      "lat": -37.658573,
      "lng": 144.838089,
      "alt": 0,
      "spd": 15,
      "ts": 1765082961,
      "hd": 351
    },
    {
      "lat": -37.659084,
      "lng": 144.838196,
      "alt": 0,
      "spd": 15,
      "ts": 1765082953,
      "hd": 351
    },
    {
      "lat": -37.659576,
      "lng": 144.838287,
      "alt": 0,
      "spd": 15,
      "ts": 1765082947,
      "hd": 351
    },
    {
      "lat": -37.66008,
      "lng": 144.838394,
      "alt": 0,
      "spd": 17,
      "ts": 1765082940,
      "hd": 351
    },
    {
      "lat": -37.660721,
      "lng": 144.838486,
      "alt": 0,
      "spd": 18,
      "ts": 1765082932,
      "hd": 351
    },
    {
      "lat": -37.661285,
      "lng": 144.838593,
      "alt": 0,
      "spd": 15,
      "ts": 1765082925,
      "hd": 351
    },
    {
      "lat": -37.661785,
      "lng": 144.838684,
      "alt": 0,
      "spd": 13,
      "ts": 1765082918,
      "hd": 351
    },
    {
      "lat": -37.662174,
      "lng": 144.838776,
      "alt": 0,
      "spd": 11,
      "ts": 1765082911,
      "hd": 351
    },
    {
      "lat": -37.662518,
      "lng": 144.838837,
      "alt": 0,
      "spd": 9,
      "ts": 1765082903,
      "hd": 351
    },
    {
      "lat": -37.662758,
      "lng": 144.838867,
      "alt": 0,
      "spd": 6,
      "ts": 1765082896,
      "hd": 351
    },
    {
      "lat": -37.662971,
      "lng": 144.838913,
      "alt": 0,
      "spd": 0,
      "ts": 1765082888,
      "hd": 351
    },
    {
      "lat": -37.663204,
      "lng": 144.838959,
      "alt": 0,
      "spd": 3,
      "ts": 1765082474,
      "hd": 351
    },
    {
      "lat": -37.66341,
      "lng": 144.839005,
      "alt": 0,
      "spd": 5,
      "ts": 1765082462,
      "hd": 351
    },
    {
      "lat": -37.663616,
      "lng": 144.83905,
      "alt": 0,
      "spd": 5,
      "ts": 1765082454,
      "hd": 351
    },
    {
      "lat": -37.663822,
      "lng": 144.839081,
      "alt": 0,
      "spd": 4,
      "ts": 1765082445,
      "hd": 351
    },
    {
      "lat": -37.664032,
      "lng": 144.839111,
      "alt": 0,
      "spd": 3,
      "ts": 1765082432,
      "hd": 351
    },
    {
      "lat": -37.664234,
      "lng": 144.839157,
      "alt": 0,
      "spd": 3,
      "ts": 1765082415,
      "hd": 351
    },
    {
      "lat": -37.664448,
      "lng": 144.839203,
      "alt": 0,
      "spd": 5,
      "ts": 1765082402,
      "hd": 351
    },
    {
      "lat": -37.664658,
      "lng": 144.839249,
      "alt": 0,
      "spd": 6,
      "ts": 1765082393,
      "hd": 351
    },
    {
      "lat": -37.664879,
      "lng": 144.839279,
      "alt": 0,
      "spd": 7,
      "ts": 1765082386,
      "hd": 351
    },
    {
      "lat": -37.665112,
      "lng": 144.83931,
      "alt": 0,
      "spd": 6,
      "ts": 1765082378,
      "hd": 351
    },
    {
      "lat": -37.665344,
      "lng": 144.839371,
      "alt": 0,
      "spd": 6,
      "ts": 1765082371,
      "hd": 351
    },
    {
      "lat": -37.665554,
      "lng": 144.839401,
      "alt": 0,
      "spd": 6,
      "ts": 1765082363,
      "hd": 351
    },
    {
      "lat": -37.665791,
      "lng": 144.839447,
      "alt": 0,
      "spd": 5,
      "ts": 1765082357,
      "hd": 351
    },
    {
      "lat": -37.666031,
      "lng": 144.839493,
      "alt": 0,
      "spd": 5,
      "ts": 1765082344,
      "hd": 351
    },
    {
      "lat": -37.666264,
      "lng": 144.839539,
      "alt": 0,
      "spd": 6,
      "ts": 1765082337,
      "hd": 351
    },
    {
      "lat": -37.666466,
      "lng": 144.839569,
      "alt": 0,
      "spd": 6,
      "ts": 1765082328,
      "hd": 345
    },
    {
      "lat": -37.666912,
      "lng": 144.839661,
      "alt": 0,
      "spd": 10,
      "ts": 1765082314,
      "hd": 315
    },
    {
      "lat": -37.667149,
      "lng": 144.83989,
      "alt": 0,
      "spd": 11,
      "ts": 1765082308,
      "hd": 281
    },
    {
      "lat": -37.667221,
      "lng": 144.840118,
      "alt": 0,
      "spd": 10,
      "ts": 1765082304,
      "hd": 264
    },
    {
      "lat": -37.667183,
      "lng": 144.840546,
      "alt": 0,
      "spd": 10,
      "ts": 1765082296,
      "hd": 261
    },
    {
      "lat": -37.667103,
      "lng": 144.841156,
      "alt": 0,
      "spd": 11,
      "ts": 1765082286,
      "hd": 261
    },
    {
      "lat": -37.666988,
      "lng": 144.842117,
      "alt": 0,
      "spd": 15,
      "ts": 1765082273,
      "hd": 261
    },
    {
      "lat": -37.666889,
      "lng": 144.842926,
      "alt": 0,
      "spd": 15,
      "ts": 1765082264,
      "hd": 261
    },
    {
      "lat": -37.666744,
      "lng": 144.844147,
      "alt": 0,
      "spd": 14,
      "ts": 1765082250,
      "hd": 261
    },
    {
      "lat": -37.666672,
      "lng": 144.844833,
      "alt": 0,
      "spd": 14,
      "ts": 1765082243,
      "hd": 261
    },
    {
      "lat": -37.666626,
      "lng": 144.845245,
      "alt": 0,
      "spd": 13,
      "ts": 1765082236,
      "hd": 261
    },
    {
      "lat": -37.666569,
      "lng": 144.845749,
      "alt": 0,
      "spd": 13,
      "ts": 1765082230,
      "hd": 261
    },
    {
      "lat": -37.666534,
      "lng": 144.846024,
      "alt": 0,
      "spd": 12,
      "ts": 1765082226,
      "hd": 261
    },
    {
      "lat": -37.666496,
      "lng": 144.846268,
      "alt": 0,
      "spd": 12,
      "ts": 1765082222,
      "hd": 261
    },
    {
      "lat": -37.666473,
      "lng": 144.846481,
      "alt": 0,
      "spd": 11,
      "ts": 1765082219,
      "hd": 261
    },
    {
      "lat": -37.666439,
      "lng": 144.846802,
      "alt": 0,
      "spd": 11,
      "ts": 1765082214,
      "hd": 261
    },
    {
      "lat": -37.66642,
      "lng": 144.847015,
      "alt": 0,
      "spd": 11,
      "ts": 1765082211,
      "hd": 255
    },
    {
      "lat": -37.666405,
      "lng": 144.847229,
      "alt": 0,
      "spd": 11,
      "ts": 1765082207,
      "hd": 247
    },
    {
      "lat": -37.66637,
      "lng": 144.847458,
      "alt": 0,
      "spd": 11,
      "ts": 1765082204,
      "hd": 233
    },
    {
      "lat": -37.666275,
      "lng": 144.847672,
      "alt": 0,
      "spd": 11,
      "ts": 1765082201,
      "hd": 219
    },
    {
      "lat": -37.66608,
      "lng": 144.847885,
      "alt": 0,
      "spd": 9,
      "ts": 1765082195,
      "hd": 210
    },
    {
      "lat": -37.665825,
      "lng": 144.848038,
      "alt": 0,
      "spd": 6,
      "ts": 1765082187,
      "hd": 222
    },
    {
      "lat": -37.665585,
      "lng": 144.848251,
      "alt": 0,
      "spd": 6,
      "ts": 1765082177,
      "hd": 247
    },
    {
      "lat": -37.665482,
      "lng": 144.848465,
      "alt": 0,
      "spd": 4,
      "ts": 1765082168,
      "hd": 258
    },
    {
      "lat": -37.66544,
      "lng": 144.848694,
      "alt": 0,
      "spd": 4,
      "ts": 1765081807,
      "hd": 261
    },
    {
      "lat": -37.665474,
      "lng": 144.84845,
      "alt": 0,
      "spd": 4,
      "ts": 1765081797,
      "hd": 261
    },
    {
      "lat": -37.665565,
      "lng": 144.848236,
      "alt": 0,
      "spd": 5,
      "ts": 1765081788,
      "hd": 247
    },
    {
      "lat": -37.665756,
      "lng": 144.848007,
      "alt": 0,
      "spd": 5,
      "ts": 1765081776,
      "hd": 230
    },
    {
      "lat": -37.665962,
      "lng": 144.847931,
      "alt": 0,
      "spd": 6,
      "ts": 1765081768,
      "hd": 208
    },
    {
      "lat": -37.666191,
      "lng": 144.84787,
      "alt": 0,
      "spd": 7,
      "ts": 1765081760,
      "hd": 199
    },
    {
      "lat": -37.666489,
      "lng": 144.847733,
      "alt": 0,
      "spd": 7,
      "ts": 1765081749,
      "hd": 199
    },
    {
      "lat": -37.666729,
      "lng": 144.847565,
      "alt": 0,
      "spd": 6,
      "ts": 1765081741,
      "hd": 208
    },
    {
      "lat": -37.666962,
      "lng": 144.847382,
      "alt": 0,
      "spd": 6,
      "ts": 1765081732,
      "hd": 210
    },
    {
      "lat": -37.667164,
      "lng": 144.847198,
      "alt": 0,
      "spd": 4,
      "ts": 1765081722,
      "hd": 213
    },
    {
      "lat": -37.66737,
      "lng": 144.847015,
      "alt": 0,
      "spd": 0,
      "ts": 1765081685,
      "hd": 213
    }
  ],
  "firstTimestamp": 1765081685,
  "s": "arIbwhvGWbr3_XbLOgKg20J5Q_aLueOpff52KRSXSNrl6LocZxpZYg1HmYwxWedj"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d673166 = R"(
{
  "identification": {
    "id": "3d673166",
    "row": 5744618846,
    "number": {
      "default": "QF41",
      "alternative": null
    },
    "callsign": "QFA041"
  },
  "status": {
    "live": false,
    "text": "Landed 17:44",
    "icon": "green",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "landed",
        "color": "green",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765104281,
        "local": 1765129481
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "A332",
      "text": "Airbus A330-202"
    },
    "countryId": 14,
    "registration": "VH-EBM",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/6/1536183_1759849033_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11861638",
          "copyright": "Hypocrite",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/505246_1760234787_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11865396",
          "copyright": "STHILZA",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/349632_1759854097_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11861719",
          "copyright": "Jack Yang",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/647195_1753898443_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11796007",
          "copyright": "Charlie-Aviationphotography",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/1559121_1754327312_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11801033",
          "copyright": "5819_",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/6/1536183_1759849033.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11861638",
          "copyright": "Hypocrite",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/505246_1760234787.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11865396",
          "copyright": "STHILZA",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/349632_1759854097.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11861719",
          "copyright": "Jack Yang",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/647195_1753898443.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11796007",
          "copyright": "Charlie-Aviationphotography",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/1559121_1754327312.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11801033",
          "copyright": "5819_",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1536183_1759849033.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11861638",
          "copyright": "Hypocrite",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/505246_1760234787.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11865396",
          "copyright": "STHILZA",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/349632_1759854097.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11861719",
          "copyright": "Jack Yang",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/647195_1753898443.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11796007",
          "copyright": "Charlie-Aviationphotography",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1559121_1754327312.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11801033",
          "copyright": "5819_",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "7c1470"
  },
  "airline": {
    "name": "Qantas",
    "short": "Qantas",
    "code": {
      "iata": "QF",
      "icao": "QFA"
    },
    "url": "qantas-qfa"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Sydney Kingsford Smith Airport",
      "code": {
        "iata": "SYD",
        "icao": "YSSY"
      },
      "position": {
        "latitude": -33.946098,
        "longitude": 151.1772,
        "altitude": 21,
        "country": {
          "id": 14,
          "name": "Australia",
          "code": "AU",
          "codeLong": "AUS"
        },
        "region": {
          "city": "Sydney"
        }
      },
      "timezone": {
        "name": "Australia/Sydney",
        "offset": 39600,
        "offsetHours": "11:00",
        "abbr": "AEDT",
        "abbrName": "Australian Eastern Daylight Time",
        "isDst": true
      },
      "visible": true,
      "website": "http://www.sydneyairport.com.au/",
      "info": {
        "terminal": "1",
        "baggage": null,
        "gate": "C"
      }
    },
    "destination": {
      "name": "Jakarta Soekarno Hatta International Airport",
      "code": {
        "iata": "CGK",
        "icao": "WIII"
      },
      "position": {
        "latitude": -6.12556,
        "longitude": 106.6558,
        "altitude": 34,
        "country": {
          "id": 103,
          "name": "Indonesia",
          "code": "ID",
          "codeLong": "IDN"
        },
        "region": {
          "city": "Jakarta"
        }
      },
      "timezone": {
        "name": "Asia/Jakarta",
        "offset": 25200,
        "offsetHours": "7:00",
        "abbr": "WIB",
        "abbrName": "Western Indonesian Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://soekarnohatta-airport.co.id/",
      "info": {
        "terminal": "3",
        "baggage": null,
        "gate": null
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d652401",
          "number": {
            "default": "QF68"
          }
        },
        "airport": {
          "origin": {
            "name": "Bengaluru Kempegowda International Airport",
            "code": {
              "iata": "BLR",
              "icao": "VOBL"
            },
            "position": {
              "latitude": 13.198889,
              "longitude": 77.705559,
              "altitude": 3002,
              "country": {
                "id": 102,
                "name": "India",
                "code": "IN",
                "codeLong": "IND"
              },
              "region": {
                "city": "Bengaluru"
              }
            },
            "timezone": {
              "name": "Asia/Kolkata",
              "offset": 19800,
              "offsetHours": "5:30",
              "abbr": "IST",
              "abbrName": "India Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.bengaluruairport.com/"
          },
          "destination": {
            "name": "Sydney Kingsford Smith Airport",
            "code": {
              "iata": "SYD",
              "icao": "YSSY"
            },
            "position": {
              "latitude": -33.946098,
              "longitude": 151.1772,
              "altitude": 21,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Sydney"
              }
            },
            "timezone": {
              "name": "Australia/Sydney",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://www.sydneyairport.com.au/"
          }
        },
        "time": {
          "real": {
            "departure": 1765024849
          }
        }
      },
      {
        "identification": {
          "id": "3d63a6ee",
          "number": {
            "default": "QF67"
          }
        },
        "airport": {
          "origin": {
            "name": "Sydney Kingsford Smith Airport",
            "code": {
              "iata": "SYD",
              "icao": "YSSY"
            },
            "position": {
              "latitude": -33.946098,
              "longitude": 151.1772,
              "altitude": 21,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Sydney"
              }
            },
            "timezone": {
              "name": "Australia/Sydney",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://www.sydneyairport.com.au/"
          },
          "destination": {
            "name": "Bengaluru Kempegowda International Airport",
            "code": {
              "iata": "BLR",
              "icao": "VOBL"
            },
            "position": {
              "latitude": 13.198889,
              "longitude": 77.705559,
              "altitude": 3002,
              "country": {
                "id": 102,
                "name": "India",
                "code": "IN",
                "codeLong": "IND"
              },
              "region": {
                "city": "Bengaluru"
              }
            },
            "timezone": {
              "name": "Asia/Kolkata",
              "offset": 19800,
              "offsetHours": "5:30",
              "abbr": "IST",
              "abbrName": "India Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.bengaluruairport.com/"
          }
        },
        "time": {
          "real": {
            "departure": 1764975965
          }
        }
      },
      {
        "identification": {
          "id": "3d623d84",
          "number": {
            "default": "QF42"
          }
        },
        "airport": {
          "origin": {
            "name": "Jakarta Soekarno Hatta International Airport",
            "code": {
              "iata": "CGK",
              "icao": "WIII"
            },
            "position": {
              "latitude": -6.12556,
              "longitude": 106.6558,
              "altitude": 34,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Jakarta"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://soekarnohatta-airport.co.id/"
          },
          "destination": {
            "name": "Sydney Kingsford Smith Airport",
            "code": {
              "iata": "SYD",
              "icao": "YSSY"
            },
            "position": {
              "latitude": -33.946098,
              "longitude": 151.1772,
              "altitude": 21,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Sydney"
              }
            },
            "timezone": {
              "name": "Australia/Sydney",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://www.sydneyairport.com.au/"
          }
        },
        "time": {
          "real": {
            "departure": 1764945969
          }
        }
      },
      {
        "identification": {
          "id": "3d610d36",
          "number": {
            "default": "QF41"
          }
        },
        "airport": {
          "origin": {
            "name": "Sydney Kingsford Smith Airport",
            "code": {
              "iata": "SYD",
              "icao": "YSSY"
            },
            "position": {
              "latitude": -33.946098,
              "longitude": 151.1772,
              "altitude": 21,
              "country": {
                "id": 14,
                "name": "Australia",
                "code": "AU",
                "codeLong": "AUS"
              },
              "region": {
                "city": "Sydney"
              }
            },
            "timezone": {
              "name": "Australia/Sydney",
              "offset": 39600,
              "offsetHours": "11:00",
              "abbr": "AEDT",
              "abbrName": "Australian Eastern Daylight Time",
              "isDst": true
            },
            "visible": true,
            "website": "http://www.sydneyairport.com.au/"
          },
          "destination": {
            "name": "Jakarta Soekarno Hatta International Airport",
            "code": {
              "iata": "CGK",
              "icao": "WIII"
            },
            "position": {
              "latitude": -6.12556,
              "longitude": 106.6558,
              "altitude": 34,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Jakarta"
              }
            },
            "timezone": {
              "name": "Asia/Jakarta",
              "offset": 25200,
              "offsetHours": "7:00",
              "abbr": "WIB",
              "abbrName": "Western Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://soekarnohatta-airport.co.id/"
          }
        },
        "time": {
          "real": {
            "departure": 1764913575
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 1765077900,
      "arrival": 1765105200
    },
    "real": {
      "departure": 1765079005,
      "arrival": 1765104281
    },
    "estimated": {
      "departure": null,
      "arrival": null
    },
    "other": {
      "eta": 1765104281,
      "updated": 1765104281
    },
    "historical": {
      "flighttime": "26286",
      "delay": "287"
    }
  },
  "trail": [
    {
      "lat": -6.116112,
      "lng": 106.659485,
      "alt": 0,
      "spd": 14,
      "ts": 1765104796,
      "hd": 151
    },
    {
      "lat": -6.115742,
      "lng": 106.659302,
      "alt": 0,
      "spd": 12,
      "ts": 1765104792,
      "hd": 151
    },
    {
      "lat": -6.115402,
      "lng": 106.659134,
      "alt": 0,
      "spd": 12,
      "ts": 1765104782,
      "hd": 135
    },
    {
      "lat": -6.115139,
      "lng": 106.658905,
      "alt": 0,
      "spd": 10,
      "ts": 1765104775,
      "hd": 95
    },
    {
      "lat": -6.115082,
      "lng": 106.658661,
      "alt": 0,
      "spd": 11,
      "ts": 1765104769,
      "hd": 73
    },
    {
      "lat": -6.115149,
      "lng": 106.658432,
      "alt": 0,
      "spd": 13,
      "ts": 1765104766,
      "hd": 67
    },
    {
      "lat": -6.115299,
      "lng": 106.658043,
      "alt": 0,
      "spd": 17,
      "ts": 1765104760,
      "hd": 67
    },
    {
      "lat": -6.115544,
      "lng": 106.657455,
      "alt": 0,
      "spd": 21,
      "ts": 1765104752,
      "hd": 67
    },
    {
      "lat": -6.115847,
      "lng": 106.656662,
      "alt": 0,
      "spd": 0,
      "ts": 1765104744,
      "hd": 67
    },
    {
      "lat": -6.116161,
      "lng": 106.655891,
      "alt": 0,
      "spd": 0,
      "ts": 1765104736,
      "hd": 67
    },
    {
      "lat": -6.117302,
      "lng": 106.65303,
      "alt": 0,
      "spd": 25,
      "ts": 1765104710,
      "hd": 67
    },
    {
      "lat": -6.117554,
      "lng": 106.652397,
      "alt": 0,
      "spd": 23,
      "ts": 1765104704,
      "hd": 67
    },
    {
      "lat": -6.117872,
      "lng": 106.651619,
      "alt": 0,
      "spd": 21,
      "ts": 1765104696,
      "hd": 67
    },
    {
      "lat": -6.118128,
      "lng": 106.650978,
      "alt": 0,
      "spd": 22,
      "ts": 1765104689,
      "hd": 67
    },
    {
      "lat": -6.118435,
      "lng": 106.650208,
      "alt": 0,
      "spd": 21,
      "ts": 1765104681,
      "hd": 67
    },
    {
      "lat": -6.118733,
      "lng": 106.649452,
      "alt": 0,
      "spd": 19,
      "ts": 1765104673,
      "hd": 67
    },
    {
      "lat": -6.118984,
      "lng": 106.648827,
      "alt": 0,
      "spd": 24,
      "ts": 1765104666,
      "hd": 67
    },
    {
      "lat": -6.119338,
      "lng": 106.647919,
      "alt": 0,
      "spd": 25,
      "ts": 1765104659,
      "hd": 67
    },
    {
      "lat": -6.119591,
      "lng": 106.647293,
      "alt": 0,
      "spd": 23,
      "ts": 1765104651,
      "hd": 67
    },
    {
      "lat": -6.119923,
      "lng": 106.646477,
      "alt": 0,
      "spd": 21,
      "ts": 1765104643,
      "hd": 67
    },
    {
      "lat": -6.120141,
      "lng": 106.645912,
      "alt": 0,
      "spd": 20,
      "ts": 1765104637,
      "hd": 67
    },
    {
      "lat": -6.120392,
      "lng": 106.645287,
      "alt": 0,
      "spd": 18,
      "ts": 1765104630,
      "hd": 67
    },
    {
      "lat": -6.12063,
      "lng": 106.644691,
      "alt": 0,
      "spd": 0,
      "ts": 1765104621,
      "hd": 67
    },
    {
      "lat": -6.121113,
      "lng": 106.643509,
      "alt": 0,
      "spd": 11,
      "ts": 1765104600,
      "hd": 33
    },
    {
      "lat": -6.12177,
      "lng": 106.643364,
      "alt": 0,
      "spd": 10,
      "ts": 1765104583,
      "hd": 337
    },
    {
      "lat": -6.122248,
      "lng": 106.643555,
      "alt": 0,
      "spd": 16,
      "ts": 1765104575,
      "hd": 337
    },
    {
      "lat": -6.122981,
      "lng": 106.643852,
      "alt": 0,
      "spd": 18,
      "ts": 1765104566,
      "hd": 337
    },
    {
      "lat": -6.123423,
      "lng": 106.644028,
      "alt": 0,
      "spd": 16,
      "ts": 1765104560,
      "hd": 337
    },
    {
      "lat": -6.123993,
      "lng": 106.644241,
      "alt": 0,
      "spd": 22,
      "ts": 1765104552,
      "hd": 337
    },
    {
      "lat": -6.124878,
      "lng": 106.6446,
      "alt": 0,
      "spd": 25,
      "ts": 1765104544,
      "hd": 337
    },
    {
      "lat": -6.125797,
      "lng": 106.644958,
      "alt": 0,
      "spd": 24,
      "ts": 1765104537,
      "hd": 337
    },
    {
      "lat": -6.126554,
      "lng": 106.645271,
      "alt": 0,
      "spd": 22,
      "ts": 1765104529,
      "hd": 337
    },
    {
      "lat": -6.127281,
      "lng": 106.645554,
      "alt": 0,
      "spd": 22,
      "ts": 1765104521,
      "hd": 337
    },
    {
      "lat": -6.128071,
      "lng": 106.645866,
      "alt": 0,
      "spd": 26,
      "ts": 1765104513,
      "hd": 337
    },
    {
      "lat": -6.128928,
      "lng": 106.646217,
      "alt": 0,
      "spd": 22,
      "ts": 1765104505,
      "hd": 337
    },
    {
      "lat": -6.129547,
      "lng": 106.646461,
      "alt": 0,
      "spd": 0,
      "ts": 1765104498,
      "hd": 337
    },
    {
      "lat": -6.132117,
      "lng": 106.647484,
      "alt": 0,
      "spd": 21,
      "ts": 1765104474,
      "hd": 337
    },
    {
      "lat": -6.132664,
      "lng": 106.647697,
      "alt": 0,
      "spd": 21,
      "ts": 1765104463,
      "hd": 337
    },
    {
      "lat": -6.133304,
      "lng": 106.647957,
      "alt": 0,
      "spd": 23,
      "ts": 1765104457,
      "hd": 337
    },
    {
      "lat": -6.134068,
      "lng": 106.648254,
      "alt": 0,
      "spd": 22,
      "ts": 1765104449,
      "hd": 337
    },
    {
      "lat": -6.134863,
      "lng": 106.648582,
      "alt": 0,
      "spd": 21,
      "ts": 1765104441,
      "hd": 337
    },
    {
      "lat": -6.135468,
      "lng": 106.648819,
      "alt": 0,
      "spd": 19,
      "ts": 1765104436,
      "hd": 337
    },
    {
      "lat": -6.136024,
      "lng": 106.649033,
      "alt": 0,
      "spd": 18,
      "ts": 1765104427,
      "hd": 337
    },
    {
      "lat": -6.136225,
      "lng": 106.649117,
      "alt": 0,
      "spd": 17,
      "ts": 1765104425,
      "hd": 337
    },
    {
      "lat": -6.136574,
      "lng": 106.649269,
      "alt": 0,
      "spd": 16,
      "ts": 1765104420,
      "hd": 337
    },
    {
      "lat": -6.136854,
      "lng": 106.649376,
      "alt": 0,
      "spd": 15,
      "ts": 1765104416,
      "hd": 337
    },
    {
      "lat": -6.1371,
      "lng": 106.649475,
      "alt": 0,
      "spd": 14,
      "ts": 1765104413,
      "hd": 340
    },
    {
      "lat": -6.137306,
      "lng": 106.649544,
      "alt": 0,
      "spd": 13,
      "ts": 1765104409,
      "hd": 337
    },
    {
      "lat": -6.137517,
      "lng": 106.649612,
      "alt": 0,
      "spd": 13,
      "ts": 1765104405,
      "hd": 329
    },
    {
      "lat": -6.137718,
      "lng": 106.649719,
      "alt": 0,
      "spd": 12,
      "ts": 1765104401,
      "hd": 312
    },
    {
      "lat": -6.137948,
      "lng": 106.64991,
      "alt": 0,
      "spd": 12,
      "ts": 1765104396,
      "hd": 275
    },
    {
      "lat": -6.137993,
      "lng": 106.650154,
      "alt": 0,
      "spd": 10,
      "ts": 1765104391,
      "hd": 253
    },
    {
      "lat": -6.137867,
      "lng": 106.650536,
      "alt": 0,
      "spd": 14,
      "ts": 1765104383,
      "hd": 247
    },
    {
      "lat": -6.137668,
      "lng": 106.651024,
      "alt": 0,
      "spd": 15,
      "ts": 1765104376,
      "hd": 247
    },
    {
      "lat": -6.137501,
      "lng": 106.651436,
      "alt": 0,
      "spd": 14,
      "ts": 1765104370,
      "hd": 247
    },
    {
      "lat": -6.137342,
      "lng": 106.65184,
      "alt": 0,
      "spd": 13,
      "ts": 1765104363,
      "hd": 247
    },
    {
      "lat": -6.137238,
      "lng": 106.652092,
      "alt": 0,
      "spd": 12,
      "ts": 1765104358,
      "hd": 247
    },
    {
      "lat": -6.137156,
      "lng": 106.652306,
      "alt": 0,
      "spd": 11,
      "ts": 1765104354,
      "hd": 247
    },
    {
      "lat": -6.137063,
      "lng": 106.652512,
      "alt": 0,
      "spd": 10,
      "ts": 1765104350,
      "hd": 250
    },
    {
      "lat": -6.13697,
      "lng": 106.652725,
      "alt": 0,
      "spd": 10,
      "ts": 1765104345,
      "hd": 258
    },
    {
      "lat": -6.136894,
      "lng": 106.652954,
      "alt": 0,
      "spd": 9,
      "ts": 1765104339,
      "hd": 278
    },
    {
      "lat": -6.136889,
      "lng": 106.653214,
      "alt": 0,
      "spd": 8,
      "ts": 1765104332,
      "hd": 306
    },
    {
      "lat": -6.137028,
      "lng": 106.653427,
      "alt": 0,
      "spd": 7,
      "ts": 1765104325,
      "hd": 320
    },
    {
      "lat": -6.137238,
      "lng": 106.653549,
      "alt": 0,
      "spd": 6,
      "ts": 1765104316,
      "hd": 303
    },
    {
      "lat": -6.137401,
      "lng": 106.653755,
      "alt": 0,
      "spd": 9,
      "ts": 1765104309,
      "hd": 281
    },
    {
      "lat": -6.137447,
      "lng": 106.653961,
      "alt": 0,
      "spd": 11,
      "ts": 1765104305,
      "hd": 278
    },
    {
      "lat": -6.137482,
      "lng": 106.654175,
      "alt": 0,
      "spd": 14,
      "ts": 1765104301,
      "hd": 278
    },
    {
      "lat": -6.137512,
      "lng": 106.654381,
      "alt": 0,
      "spd": 17,
      "ts": 1765104297,
      "hd": 278
    },
    {
      "lat": -6.137552,
      "lng": 106.654655,
      "alt": 0,
      "spd": 19,
      "ts": 1765104294,
      "hd": 275
    },
    {
      "lat": -6.137575,
      "lng": 106.654907,
      "alt": 0,
      "spd": 22,
      "ts": 1765104292,
      "hd": 272
    },
    {
      "lat": -6.137592,
      "lng": 106.655235,
      "alt": 0,
      "spd": 24,
      "ts": 1765104289,
      "hd": 267
    },
    {
      "lat": -6.137575,
      "lng": 106.655533,
      "alt": 0,
      "spd": 26,
      "ts": 1765104287,
      "hd": 264
    },
    {
      "lat": -6.137552,
      "lng": 106.655785,
      "alt": 0,
      "spd": 28,
      "ts": 1765104285,
      "hd": 261
    },
    {
      "lat": -6.137528,
      "lng": 106.656006,
      "alt": 0,
      "spd": 33,
      "ts": 1765104283,
      "hd": 258
    },
    {
      "lat": -6.137482,
      "lng": 106.656242,
      "alt": 0,
      "spd": 37,
      "ts": 1765104282,
      "hd": 253
    },
    {
      "lat": -6.137226,
      "lng": 106.657013,
      "alt": 0,
      "spd": 53,
      "ts": 1765104277,
      "hd": 247
    },
    {
      "lat": -6.136425,
      "lng": 106.659012,
      "alt": 0,
      "spd": 80,
      "ts": 1765104270,
      "hd": 247
    },
    {
      "lat": -6.135399,
      "lng": 106.661522,
      "alt": 125,
      "spd": 102,
      "ts": 1765104264,
      "hd": 248
    },
    {
      "lat": -6.133759,
      "lng": 106.665749,
      "alt": 125,
      "spd": 125,
      "ts": 1765104255,
      "hd": 248
    },
    {
      "lat": -6.13179,
      "lng": 106.670639,
      "alt": 125,
      "spd": 140,
      "ts": 1765104247,
      "hd": 248
    },
    {
      "lat": -6.129822,
      "lng": 106.675613,
      "alt": 225,
      "spd": 140,
      "ts": 1765104239,
      "hd": 248
    },
    {
      "lat": -6.127945,
      "lng": 106.680321,
      "alt": 300,
      "spd": 136,
      "ts": 1765104231,
      "hd": 248
    },
    {
      "lat": -6.126461,
      "lng": 106.684021,
      "alt": 375,
      "spd": 136,
      "ts": 1765104224,
      "hd": 248
    },
    {
      "lat": -6.124506,
      "lng": 106.68885,
      "alt": 475,
      "spd": 137,
      "ts": 1765104216,
      "hd": 248
    },
    {
      "lat": -6.122504,
      "lng": 106.693916,
      "alt": 575,
      "spd": 139,
      "ts": 1765104208,
      "hd": 247
    },
    {
      "lat": -6.120575,
      "lng": 106.698662,
      "alt": 650,
      "spd": 137,
      "ts": 1765104200,
      "hd": 247
    },
    {
      "lat": -6.118593,
      "lng": 106.703667,
      "alt": 750,
      "spd": 136,
      "ts": 1765104192,
      "hd": 248
    },
    {
      "lat": -6.116776,
      "lng": 106.708298,
      "alt": 850,
      "spd": 136,
      "ts": 1765104184,
      "hd": 248
    },
    {
      "lat": -6.116272,
      "lng": 106.709557,
      "alt": 875,
      "spd": 137,
      "ts": 1765104182,
      "hd": 248
    },
    {
      "lat": -6.115814,
      "lng": 106.710716,
      "alt": 900,
      "spd": 137,
      "ts": 1765104180,
      "hd": 248
    },
    {
      "lat": -6.114395,
      "lng": 106.714211,
      "alt": 950,
      "spd": 138,
      "ts": 1765104173,
      "hd": 247
    },
    {
      "lat": -6.113845,
      "lng": 106.715508,
      "alt": 1000,
      "spd": 139,
      "ts": 1765104171,
      "hd": 247
    },
    {
      "lat": -6.113379,
      "lng": 106.716644,
      "alt": 1025,
      "spd": 139,
      "ts": 1765104169,
      "hd": 247
    },
    {
      "lat": -6.112793,
      "lng": 106.718071,
      "alt": 1050,
      "spd": 140,
      "ts": 1765104167,
      "hd": 247
    },
    {
      "lat": -6.111797,
      "lng": 106.720573,
      "alt": 1100,
      "spd": 138,
      "ts": 1765104163,
      "hd": 248
    },
    {
      "lat": -6.109955,
      "lng": 106.725334,
      "alt": 1175,
      "spd": 138,
      "ts": 1765104155,
      "hd": 248
    },
    {
      "lat": -6.108026,
      "lng": 106.730049,
      "alt": 1275,
      "spd": 137,
      "ts": 1765104147,
      "hd": 247
    },
    {
      "lat": -6.10649,
      "lng": 106.733978,
      "alt": 1350,
      "spd": 137,
      "ts": 1765104141,
      "hd": 248
    },
    {
      "lat": -6.104599,
      "lng": 106.738838,
      "alt": 1450,
      "spd": 139,
      "ts": 1765104132,
      "hd": 248
    },
    {
      "lat": -6.102722,
      "lng": 106.743629,
      "alt": 1550,
      "spd": 137,
      "ts": 1765104124,
      "hd": 248
    },
    {
      "lat": -6.100671,
      "lng": 106.748611,
      "alt": 1625,
      "spd": 136,
      "ts": 1765104116,
      "hd": 247
    },
    {
      "lat": -6.09874,
      "lng": 106.753448,
      "alt": 1750,
      "spd": 134,
      "ts": 1765104108,
      "hd": 248
    },
    {
      "lat": -6.097459,
      "lng": 106.756752,
      "alt": 1800,
      "spd": 132,
      "ts": 1765104102,
      "hd": 248
    },
    {
      "lat": -6.095597,
      "lng": 106.761444,
      "alt": 1900,
      "spd": 132,
      "ts": 1765104094,
      "hd": 248
    },
    {
      "lat": -6.09375,
      "lng": 106.766068,
      "alt": 2000,
      "spd": 134,
      "ts": 1765104086,
      "hd": 248
    },
    {
      "lat": -6.091826,
      "lng": 106.770775,
      "alt": 2075,
      "spd": 138,
      "ts": 1765104078,
      "hd": 247
    },
    {
      "lat": -6.089777,
      "lng": 106.775742,
      "alt": 2175,
      "spd": 143,
      "ts": 1765104070,
      "hd": 247
    },
    {
      "lat": -6.087799,
      "lng": 106.780731,
      "alt": 2275,
      "spd": 148,
      "ts": 1765104062,
      "hd": 248
    },
    {
      "lat": -6.085728,
      "lng": 106.785927,
      "alt": 2375,
      "spd": 153,
      "ts": 1765104053,
      "hd": 248
    },
    {
      "lat": -6.083539,
      "lng": 106.791466,
      "alt": 2500,
      "spd": 157,
      "ts": 1765104045,
      "hd": 248
    },
    {
      "lat": -6.081258,
      "lng": 106.797287,
      "alt": 2575,
      "spd": 159,
      "ts": 1765104037,
      "hd": 247
    },
    {
      "lat": -6.079559,
      "lng": 106.801445,
      "alt": 2675,
      "spd": 159,
      "ts": 1765104031,
      "hd": 247
    },
    {
      "lat": -6.077394,
      "lng": 106.806854,
      "alt": 2775,
      "spd": 160,
      "ts": 1765104023,
      "hd": 248
    },
    {
      "lat": -6.075114,
      "lng": 106.812584,
      "alt": 2900,
      "spd": 161,
      "ts": 1765104015,
      "hd": 248
    },
    {
      "lat": -6.072879,
      "lng": 106.818222,
      "alt": 3025,
      "spd": 161,
      "ts": 1765104007,
      "hd": 248
    },
    {
      "lat": -6.070679,
      "lng": 106.823837,
      "alt": 3125,
      "spd": 160,
      "ts": 1765103998,
      "hd": 248
    },
    {
      "lat": -6.068344,
      "lng": 106.829659,
      "alt": 3250,
      "spd": 160,
      "ts": 1765103990,
      "hd": 248
    },
    {
      "lat": -6.06665,
      "lng": 106.833801,
      "alt": 3325,
      "spd": 163,
      "ts": 1765103984,
      "hd": 247
    },
    {
      "lat": -6.064178,
      "lng": 106.839897,
      "alt": 3450,
      "spd": 166,
      "ts": 1765103976,
      "hd": 248
    },
    {
      "lat": -6.061939,
      "lng": 106.845543,
      "alt": 3550,
      "spd": 171,
      "ts": 1765103967,
      "hd": 248
    },
    {
      "lat": -6.059372,
      "lng": 106.852097,
      "alt": 3725,
      "spd": 172,
      "ts": 1765103959,
      "hd": 248
    },
    {
      "lat": -6.057037,
      "lng": 106.857964,
      "alt": 3875,
      "spd": 170,
      "ts": 1765103951,
      "hd": 247
    },
    {
      "lat": -6.054703,
      "lng": 106.863731,
      "alt": 4025,
      "spd": 169,
      "ts": 1765103943,
      "hd": 248
    },
    {
      "lat": -6.05221,
      "lng": 106.869888,
      "alt": 4150,
      "spd": 168,
      "ts": 1765103935,
      "hd": 248
    },
    {
      "lat": -6.050581,
      "lng": 106.874054,
      "alt": 4175,
      "spd": 172,
      "ts": 1765103929,
      "hd": 248
    },
    {
      "lat": -6.048113,
      "lng": 106.880257,
      "alt": 4175,
      "spd": 179,
      "ts": 1765103921,
      "hd": 248
    },
    {
      "lat": -6.045413,
      "lng": 106.887032,
      "alt": 4175,
      "spd": 187,
      "ts": 1765103912,
      "hd": 248
    },
    {
      "lat": -6.042664,
      "lng": 106.89399,
      "alt": 4150,
      "spd": 194,
      "ts": 1765103904,
      "hd": 248
    },
    {
      "lat": -6.039825,
      "lng": 106.90107,
      "alt": 4175,
      "spd": 197,
      "ts": 1765103896,
      "hd": 247
    },
    {
      "lat": -6.037033,
      "lng": 106.908005,
      "alt": 4175,
      "spd": 197,
      "ts": 1765103887,
      "hd": 248
    },
    {
      "lat": -6.034836,
      "lng": 106.913544,
      "alt": 4175,
      "spd": 197,
      "ts": 1765103881,
      "hd": 248
    },
    {
      "lat": -6.031913,
      "lng": 106.920937,
      "alt": 4175,
      "spd": 197,
      "ts": 1765103872,
      "hd": 248
    },
    {
      "lat": -6.029617,
      "lng": 106.926674,
      "alt": 4175,
      "spd": 196,
      "ts": 1765103866,
      "hd": 248
    },
    {
      "lat": -6.026886,
      "lng": 106.933723,
      "alt": 4175,
      "spd": 197,
      "ts": 1765103857,
      "hd": 248
    },
    {
      "lat": -6.024765,
      "lng": 106.939011,
      "alt": 4175,
      "spd": 202,
      "ts": 1765103851,
      "hd": 248
    },
    {
      "lat": -6.021672,
      "lng": 106.94693,
      "alt": 4225,
      "spd": 207,
      "ts": 1765103842,
      "hd": 248
    },
    {
      "lat": -6.01918,
      "lng": 106.953072,
      "alt": 4350,
      "spd": 207,
      "ts": 1765103835,
      "hd": 247
    },
    {
      "lat": -6.016937,
      "lng": 106.958611,
      "alt": 4450,
      "spd": 207,
      "ts": 1765103829,
      "hd": 247
    },
    {
      "lat": -6.013596,
      "lng": 106.966705,
      "alt": 4625,
      "spd": 207,
      "ts": 1765103820,
      "hd": 247
    },
    {
      "lat": -6.011337,
      "lng": 106.972221,
      "alt": 4700,
      "spd": 210,
      "ts": 1765103813,
      "hd": 247
    },
    {
      "lat": -6.008102,
      "lng": 106.979881,
      "alt": 4875,
      "spd": 213,
      "ts": 1765103805,
      "hd": 247
    },
    {
      "lat": -6.005471,
      "lng": 106.986092,
      "alt": 4975,
      "spd": 216,
      "ts": 1765103798,
      "hd": 247
    },
    {
      "lat": -6.000118,
      "lng": 106.998787,
      "alt": 5225,
      "spd": 223,
      "ts": 1765103785,
      "hd": 247
    },
    {
      "lat": -5.994827,
      "lng": 107.011581,
      "alt": 5475,
      "spd": 229,
      "ts": 1765103772,
      "hd": 248
    },
    {
      "lat": -5.989876,
      "lng": 107.024025,
      "alt": 5725,
      "spd": 234,
      "ts": 1765103759,
      "hd": 248
    },
    {
      "lat": -5.989038,
      "lng": 107.026154,
      "alt": 5750,
      "spd": 235,
      "ts": 1765103757,
      "hd": 248
    },
    {
      "lat": -5.987961,
      "lng": 107.028992,
      "alt": 5800,
      "spd": 236,
      "ts": 1765103755,
      "hd": 248
    },
    {
      "lat": -5.983359,
      "lng": 107.042496,
      "alt": 6050,
      "spd": 242,
      "ts": 1765103742,
      "hd": 253
    },
    {
      "lat": -5.978485,
      "lng": 107.05674,
      "alt": 6325,
      "spd": 240,
      "ts": 1765103728,
      "hd": 248
    },
    {
      "lat": -5.973129,
      "lng": 107.070145,
      "alt": 6600,
      "spd": 236,
      "ts": 1765103716,
      "hd": 248
    },
    {
      "lat": -5.97228,
      "lng": 107.072327,
      "alt": 6625,
      "spd": 236,
      "ts": 1765103713,
      "hd": 248
    },
    {
      "lat": -5.971395,
      "lng": 107.074455,
      "alt": 6675,
      "spd": 235,
      "ts": 1765103711,
      "hd": 248
    },
    {
      "lat": -5.970428,
      "lng": 107.076851,
      "alt": 6725,
      "spd": 234,
      "ts": 1765103709,
      "hd": 248
    },
    {
      "lat": -5.969719,
      "lng": 107.07872,
      "alt": 6750,
      "spd": 234,
      "ts": 1765103707,
      "hd": 248
    },
    {
      "lat": -5.968695,
      "lng": 107.081276,
      "alt": 6800,
      "spd": 234,
      "ts": 1765103705,
      "hd": 248
    },
    {
      "lat": -5.967625,
      "lng": 107.083885,
      "alt": 6850,
      "spd": 234,
      "ts": 1765103702,
      "hd": 248
    },
    {
      "lat": -5.966812,
      "lng": 107.085976,
      "alt": 6875,
      "spd": 233,
      "ts": 1765103699,
      "hd": 248
    },
    {
      "lat": -5.965856,
      "lng": 107.088478,
      "alt": 6925,
      "spd": 233,
      "ts": 1765103697,
      "hd": 249
    },
    {
      "lat": -5.964798,
      "lng": 107.091331,
      "alt": 6975,
      "spd": 233,
      "ts": 1765103695,
      "hd": 249
    },
    {
      "lat": -5.964157,
      "lng": 107.093193,
      "alt": 7025,
      "spd": 233,
      "ts": 1765103693,
      "hd": 250
    },
    {
      "lat": -5.963425,
      "lng": 107.095329,
      "alt": 7050,
      "spd": 232,
      "ts": 1765103691,
      "hd": 252
    },
    {
      "lat": -5.96283,
      "lng": 107.097473,
      "alt": 7075,
      "spd": 232,
      "ts": 1765103688,
      "hd": 255
    },
    {
      "lat": -5.962326,
      "lng": 107.099518,
      "alt": 7100,
      "spd": 232,
      "ts": 1765103686,
      "hd": 258
    },
    {
      "lat": -5.96196,
      "lng": 107.101753,
      "alt": 7125,
      "spd": 232,
      "ts": 1765103684,
      "hd": 264
    },
    {
      "lat": -5.961526,
      "lng": 107.106941,
      "alt": 7175,
      "spd": 233,
      "ts": 1765103680,
      "hd": 268
    },
    {
      "lat": -5.961456,
      "lng": 107.12056,
      "alt": 7150,
      "spd": 240,
      "ts": 1765103667,
      "hd": 269
    },
    {
      "lat": -5.961411,
      "lng": 107.138115,
      "alt": 7200,
      "spd": 250,
      "ts": 1765103652,
      "hd": 270
    },
    {
      "lat": -5.961387,
      "lng": 107.152832,
      "alt": 7275,
      "spd": 257,
      "ts": 1765103639,
      "hd": 270
    },
    {
      "lat": -5.961433,
      "lng": 107.16893,
      "alt": 7625,
      "spd": 261,
      "ts": 1765103626,
      "hd": 270
    },
    {
      "lat": -5.961411,
      "lng": 107.183968,
      "alt": 7975,
      "spd": 263,
      "ts": 1765103613,
      "hd": 270
    },
    {
      "lat": -5.961387,
      "lng": 107.20047,
      "alt": 8375,
      "spd": 266,
      "ts": 1765103600,
      "hd": 270
    },
    {
      "lat": -5.961365,
      "lng": 107.21711,
      "alt": 8775,
      "spd": 263,
      "ts": 1765103587,
      "hd": 270
    },
    {
      "lat": -5.961365,
      "lng": 107.233032,
      "alt": 9150,
      "spd": 265,
      "ts": 1765103573,
      "hd": 270
    },
    {
      "lat": -5.961411,
      "lng": 107.24942,
      "alt": 9550,
      "spd": 267,
      "ts": 1765103560,
      "hd": 270
    },
    {
      "lat": -5.96148,
      "lng": 107.26577,
      "alt": 9950,
      "spd": 273,
      "ts": 1765103547,
      "hd": 270
    },
    {
      "lat": -5.961502,
      "lng": 107.284615,
      "alt": 10375,
      "spd": 282,
      "ts": 1765103532,
      "hd": 270
    },
    {
      "lat": -5.961526,
      "lng": 107.302002,
      "alt": 10800,
      "spd": 288,
      "ts": 1765103519,
      "hd": 270
    },
    {
      "lat": -5.961526,
      "lng": 107.319191,
      "alt": 11200,
      "spd": 292,
      "ts": 1765103506,
      "hd": 270
    },
    {
      "lat": -5.961526,
      "lng": 107.337372,
      "alt": 11525,
      "spd": 299,
      "ts": 1765103493,
      "hd": 270
    },
    {
      "lat": -5.961526,
      "lng": 107.358444,
      "alt": 11900,
      "spd": 307,
      "ts": 1765103478,
      "hd": 270
    },
    {
      "lat": -5.961548,
      "lng": 107.404953,
      "alt": 12775,
      "spd": 313,
      "ts": 1765103446,
      "hd": 270
    },
    {
      "lat": -5.961666,
      "lng": 107.452019,
      "alt": 13450,
      "spd": 317,
      "ts": 1765103414,
      "hd": 270
    },
    {
      "lat": -5.961619,
      "lng": 107.496819,
      "alt": 14250,
      "spd": 315,
      "ts": 1765103384,
      "hd": 270
    },
    {
      "lat": -5.961573,
      "lng": 107.544739,
      "alt": 15100,
      "spd": 332,
      "ts": 1765103352,
      "hd": 270
    },
    {
      "lat": -5.961526,
      "lng": 107.594414,
      "alt": 16025,
      "spd": 331,
      "ts": 1765103319,
      "hd": 269
    },
    {
      "lat": -5.961411,
      "lng": 107.641251,
      "alt": 16825,
      "spd": 338,
      "ts": 1765103289,
      "hd": 269
    },
    {
      "lat": -5.961433,
      "lng": 107.694,
      "alt": 17775,
      "spd": 357,
      "ts": 1765103256,
      "hd": 270
    },
    {
      "lat": -5.961456,
      "lng": 107.75032,
      "alt": 18800,
      "spd": 372,
      "ts": 1765103223,
      "hd": 270
    },
    {
      "lat": -5.961502,
      "lng": 107.805069,
      "alt": 19750,
      "spd": 376,
      "ts": 1765103191,
      "hd": 270
    },
    {
      "lat": -5.961685,
      "lng": 107.861206,
      "alt": 20775,
      "spd": 379,
      "ts": 1765103159,
      "hd": 270
    },
    {
      "lat": -5.961594,
      "lng": 107.917999,
      "alt": 21800,
      "spd": 383,
      "ts": 1765103127,
      "hd": 269
    },
    {
      "lat": -5.961573,
      "lng": 107.921494,
      "alt": 21850,
      "spd": 385,
      "ts": 1765103125,
      "hd": 269
    },
    {
      "lat": -5.961526,
      "lng": 107.924904,
      "alt": 21925,
      "spd": 386,
      "ts": 1765103123,
      "hd": 269
    },
    {
      "lat": -5.961456,
      "lng": 107.929451,
      "alt": 22000,
      "spd": 388,
      "ts": 1765103121,
      "hd": 268
    },
    {
      "lat": -5.961387,
      "lng": 107.932243,
      "alt": 22050,
      "spd": 390,
      "ts": 1765103119,
      "hd": 268
    },
    {
      "lat": -5.961319,
      "lng": 107.936859,
      "alt": 22125,
      "spd": 391,
      "ts": 1765103117,
      "hd": 268
    },
    {
      "lat": -5.961247,
      "lng": 107.940056,
      "alt": 22200,
      "spd": 393,
      "ts": 1765103115,
      "hd": 268
    },
    {
      "lat": -5.961107,
      "lng": 107.944794,
      "alt": 22275,
      "spd": 394,
      "ts": 1765103112,
      "hd": 268
    },
    {
      "lat": -5.961044,
      "lng": 107.94873,
      "alt": 22350,
      "spd": 396,
      "ts": 1765103110,
      "hd": 268
    },
    {
      "lat": -5.960921,
      "lng": 107.952705,
      "alt": 22425,
      "spd": 398,
      "ts": 1765103108,
      "hd": 268
    },
    {
      "lat": -5.960907,
      "lng": 107.956314,
      "alt": 22475,
      "spd": 400,
      "ts": 1765103106,
      "hd": 269
    },
    {
      "lat": -5.960907,
      "lng": 107.960922,
      "alt": 22550,
      "spd": 401,
      "ts": 1765103104,
      "hd": 271
    },
    {
      "lat": -5.961044,
      "lng": 107.964836,
      "alt": 22600,
      "spd": 403,
      "ts": 1765103101,
      "hd": 273
    },
    {
      "lat": -5.961319,
      "lng": 107.968605,
      "alt": 22675,
      "spd": 405,
      "ts": 1765103099,
      "hd": 276
    },
    {
      "lat": -5.961823,
      "lng": 107.973076,
      "alt": 22750,
      "spd": 406,
      "ts": 1765103097,
      "hd": 278
    },
    {
      "lat": -5.96255,
      "lng": 107.97747,
      "alt": 22825,
      "spd": 408,
      "ts": 1765103095,
      "hd": 280
    },
    {
      "lat": -5.963342,
      "lng": 107.981354,
      "alt": 22900,
      "spd": 409,
      "ts": 1765103093,
      "hd": 282
    },
    {
      "lat": -5.964272,
      "lng": 107.985237,
      "alt": 22950,
      "spd": 410,
      "ts": 1765103090,
      "hd": 284
    },
    {
      "lat": -5.965622,
      "lng": 107.989929,
      "alt": 23025,
      "spd": 411,
      "ts": 1765103088,
      "hd": 286
    },
    {
      "lat": -5.984616,
      "lng": 108.030838,
      "alt": 23625,
      "spd": 416,
      "ts": 1765103065,
      "hd": 297
    },
    {
      "lat": -6.013412,
      "lng": 108.0868,
      "alt": 24600,
      "spd": 420,
      "ts": 1765103032,
      "hd": 297
    },
    {
      "lat": -6.042389,
      "lng": 108.143127,
      "alt": 25575,
      "spd": 423,
      "ts": 1765103000,
      "hd": 297
    },
    {
      "lat": -6.071686,
      "lng": 108.200203,
      "alt": 26575,
      "spd": 427,
      "ts": 1765102967,
      "hd": 297
    },
    {
      "lat": -6.101349,
      "lng": 108.258018,
      "alt": 27575,
      "spd": 430,
      "ts": 1765102935,
      "hd": 297
    },
    {
      "lat": -6.131332,
      "lng": 108.315887,
      "alt": 28550,
      "spd": 434,
      "ts": 1765102902,
      "hd": 297
    },
    {
      "lat": -6.161328,
      "lng": 108.373589,
      "alt": 29450,
      "spd": 436,
      "ts": 1765102870,
      "hd": 297
    },
    {
      "lat": -6.164075,
      "lng": 108.37899,
      "alt": 29500,
      "spd": 436,
      "ts": 1765102867,
      "hd": 297
    },
    {
      "lat": -6.165844,
      "lng": 108.382446,
      "alt": 29525,
      "spd": 435,
      "ts": 1765102865,
      "hd": 296
    },
    {
      "lat": -6.167753,
      "lng": 108.386238,
      "alt": 29550,
      "spd": 436,
      "ts": 1765102863,
      "hd": 296
    },
    {
      "lat": -6.169661,
      "lng": 108.390022,
      "alt": 29600,
      "spd": 435,
      "ts": 1765102861,
      "hd": 296
    },
    {
      "lat": -6.172129,
      "lng": 108.394852,
      "alt": 29650,
      "spd": 436,
      "ts": 1765102858,
      "hd": 296
    },
    {
      "lat": -6.17363,
      "lng": 108.397865,
      "alt": 29675,
      "spd": 435,
      "ts": 1765102856,
      "hd": 296
    },
    {
      "lat": -6.175644,
      "lng": 108.401817,
      "alt": 29700,
      "spd": 436,
      "ts": 1765102854,
      "hd": 297
    },
    {
      "lat": -6.177482,
      "lng": 108.405319,
      "alt": 29725,
      "spd": 437,
      "ts": 1765102852,
      "hd": 298
    },
    {
      "lat": -6.179993,
      "lng": 108.409874,
      "alt": 29775,
      "spd": 436,
      "ts": 1765102850,
      "hd": 299
    },
    {
      "lat": -6.182184,
      "lng": 108.413651,
      "alt": 29825,
      "spd": 437,
      "ts": 1765102848,
      "hd": 301
    },
    {
      "lat": -6.184186,
      "lng": 108.416924,
      "alt": 29850,
      "spd": 438,
      "ts": 1765102846,
      "hd": 302
    },
    {
      "lat": -6.186539,
      "lng": 108.420624,
      "alt": 29875,
      "spd": 440,
      "ts": 1765102844,
      "hd": 303
    },
    {
      "lat": -6.189194,
      "lng": 108.424492,
      "alt": 29900,
      "spd": 440,
      "ts": 1765102841,
      "hd": 305
    },
    {
      "lat": -6.191401,
      "lng": 108.427574,
      "alt": 29950,
      "spd": 440,
      "ts": 1765102839,
      "hd": 306
    },
    {
      "lat": -6.194641,
      "lng": 108.431892,
      "alt": 29975,
      "spd": 442,
      "ts": 1765102837,
      "hd": 307
    },
    {
      "lat": -6.197205,
      "lng": 108.435104,
      "alt": 30025,
      "spd": 443,
      "ts": 1765102835,
      "hd": 309
    },
    {
      "lat": -6.19986,
      "lng": 108.438271,
      "alt": 30050,
      "spd": 444,
      "ts": 1765102833,
      "hd": 310
    },
    {
      "lat": -6.202835,
      "lng": 108.441666,
      "alt": 30100,
      "spd": 444,
      "ts": 1765102831,
      "hd": 312
    },
    {
      "lat": -6.206158,
      "lng": 108.445236,
      "alt": 30150,
      "spd": 446,
      "ts": 1765102828,
      "hd": 313
    },
    {
      "lat": -6.209244,
      "lng": 108.448418,
      "alt": 30200,
      "spd": 446,
      "ts": 1765102826,
      "hd": 315
    },
    {
      "lat": -6.212303,
      "lng": 108.451347,
      "alt": 30250,
      "spd": 447,
      "ts": 1765102824,
      "hd": 317
    },
    {
      "lat": -6.215981,
      "lng": 108.454712,
      "alt": 30325,
      "spd": 447,
      "ts": 1765102822,
      "hd": 318
    },
    {
      "lat": -6.219146,
      "lng": 108.457458,
      "alt": 30375,
      "spd": 447,
      "ts": 1765102820,
      "hd": 320
    },
    {
      "lat": -6.222172,
      "lng": 108.459969,
      "alt": 30450,
      "spd": 448,
      "ts": 1765102818,
      "hd": 321
    },
    {
      "lat": -6.226455,
      "lng": 108.46328,
      "alt": 30525,
      "spd": 448,
      "ts": 1765102815,
      "hd": 322
    },
    {
      "lat": -6.229946,
      "lng": 108.465889,
      "alt": 30600,
      "spd": 448,
      "ts": 1765102813,
      "hd": 324
    },
    {
      "lat": -6.233345,
      "lng": 108.468254,
      "alt": 30675,
      "spd": 448,
      "ts": 1765102811,
      "hd": 326
    },
    {
      "lat": -6.237442,
      "lng": 108.470947,
      "alt": 30750,
      "spd": 448,
      "ts": 1765102809,
      "hd": 327
    },
    {
      "lat": -6.240829,
      "lng": 108.473045,
      "alt": 30800,
      "spd": 448,
      "ts": 1765102807,
      "hd": 329
    },
    {
      "lat": -6.245402,
      "lng": 108.475739,
      "alt": 30875,
      "spd": 448,
      "ts": 1765102804,
      "hd": 330
    },
    {
      "lat": -6.249405,
      "lng": 108.477959,
      "alt": 30950,
      "spd": 449,
      "ts": 1765102802,
      "hd": 331
    },
    {
      "lat": -6.252897,
      "lng": 108.479759,
      "alt": 31025,
      "spd": 448,
      "ts": 1765102800,
      "hd": 333
    },
    {
      "lat": -6.256481,
      "lng": 108.481514,
      "alt": 31100,
      "spd": 448,
      "ts": 1765102798,
      "hd": 335
    },
    {
      "lat": -6.261043,
      "lng": 108.483597,
      "alt": 31175,
      "spd": 448,
      "ts": 1765102796,
      "hd": 336
    },
    {
      "lat": -6.264587,
      "lng": 108.4851,
      "alt": 31250,
      "spd": 447,
      "ts": 1765102794,
      "hd": 338
    },
    {
      "lat": -6.268616,
      "lng": 108.486687,
      "alt": 31300,
      "spd": 448,
      "ts": 1765102792,
      "hd": 339
    },
    {
      "lat": -6.273426,
      "lng": 108.488426,
      "alt": 31400,
      "spd": 448,
      "ts": 1765102789,
      "hd": 341
    },
    {
      "lat": -6.277569,
      "lng": 108.489799,
      "alt": 31450,
      "spd": 448,
      "ts": 1765102787,
      "hd": 343
    },
    {
      "lat": -6.281662,
      "lng": 108.491058,
      "alt": 31525,
      "spd": 448,
      "ts": 1765102785,
      "hd": 344
    },
    {
      "lat": -6.295678,
      "lng": 108.494438,
      "alt": 31750,
      "spd": 447,
      "ts": 1765102779,
      "hd": 349
    },
    {
      "lat": -6.363784,
      "lng": 108.501877,
      "alt": 32650,
      "spd": 453,
      "ts": 1765102746,
      "hd": 354
    },
    {
      "lat": -6.432495,
      "lng": 108.509125,
      "alt": 33650,
      "spd": 458,
      "ts": 1765102713,
      "hd": 353
    },
    {
      "lat": -6.496536,
      "lng": 108.516342,
      "alt": 34750,
      "spd": 460,
      "ts": 1765102683,
      "hd": 353
    },
    {
      "lat": -6.56543,
      "lng": 108.524765,
      "alt": 35825,
      "spd": 466,
      "ts": 1765102650,
      "hd": 352
    },
    {
      "lat": -6.635463,
      "lng": 108.533844,
      "alt": 36800,
      "spd": 463,
      "ts": 1765102618,
      "hd": 352
    },
    {
      "lat": -6.700012,
      "lng": 108.542175,
      "alt": 37300,
      "spd": 460,
      "ts": 1765102588,
      "hd": 354
    },
    {
      "lat": -6.769952,
      "lng": 108.549232,
      "alt": 37875,
      "spd": 455,
      "ts": 1765102555,
      "hd": 354
    },
    {
      "lat": -6.838337,
      "lng": 108.556473,
      "alt": 38700,
      "spd": 450,
      "ts": 1765102522,
      "hd": 353
    },
    {
      "lat": -6.902393,
      "lng": 108.562866,
      "alt": 39725,
      "spd": 446,
      "ts": 1765102491,
      "hd": 354
    },
    {
      "lat": -6.964828,
      "lng": 108.56871,
      "alt": 40000,
      "spd": 451,
      "ts": 1765102461,
      "hd": 354
    },
    {
      "lat": -7.032028,
      "lng": 108.575508,
      "alt": 40000,
      "spd": 452,
      "ts": 1765102429,
      "hd": 354
    },
    {
      "lat": -7.096516,
      "lng": 108.582283,
      "alt": 40000,
      "spd": 452,
      "ts": 1765102398,
      "hd": 354
    },
    {
      "lat": -7.161829,
      "lng": 108.589531,
      "alt": 40000,
      "spd": 454,
      "ts": 1765102366,
      "hd": 353
    },
    {
      "lat": -7.22612,
      "lng": 108.594597,
      "alt": 40000,
      "spd": 454,
      "ts": 1765102336,
      "hd": 356
    },
    {
      "lat": -7.354019,
      "lng": 108.605301,
      "alt": 40000,
      "spd": 454,
      "ts": 1765102275,
      "hd": 351
    },
    {
      "lat": -7.364822,
      "lng": 108.607025,
      "alt": 40000,
      "spd": 454,
      "ts": 1765102270,
      "hd": 350
    },
    {
      "lat": -7.433258,
      "lng": 108.617867,
      "alt": 40000,
      "spd": 459,
      "ts": 1765102237,
      "hd": 351
    },
    {
      "lat": -7.498029,
      "lng": 108.627037,
      "alt": 40000,
      "spd": 462,
      "ts": 1765102206,
      "hd": 352
    },
    {
      "lat": -7.56633,
      "lng": 108.636536,
      "alt": 40000,
      "spd": 464,
      "ts": 1765102175,
      "hd": 352
    },
    {
      "lat": -7.634241,
      "lng": 108.645645,
      "alt": 40000,
      "spd": 461,
      "ts": 1765102142,
      "hd": 352
    },
    {
      "lat": -7.699787,
      "lng": 108.657204,
      "alt": 40000,
      "spd": 461,
      "ts": 1765102111,
      "hd": 347
    },
    {
      "lat": -7.763809,
      "lng": 108.671822,
      "alt": 40025,
      "spd": 461,
      "ts": 1765102081,
      "hd": 347
    },
    {
      "lat": -7.829086,
      "lng": 108.686722,
      "alt": 40000,
      "spd": 463,
      "ts": 1765102050,
      "hd": 347
    },
    {
      "lat": -7.896927,
      "lng": 108.702316,
      "alt": 40000,
      "spd": 464,
      "ts": 1765102017,
      "hd": 347
    },
    {
      "lat": -7.964529,
      "lng": 108.717766,
      "alt": 40000,
      "spd": 463,
      "ts": 1765101985,
      "hd": 347
    },
    {
      "lat": -8.027802,
      "lng": 108.732246,
      "alt": 40000,
      "spd": 463,
      "ts": 1765101955,
      "hd": 347
    },
    {
      "lat": -8.096458,
      "lng": 108.747978,
      "alt": 40000,
      "spd": 462,
      "ts": 1765101922,
      "hd": 347
    },
    {
      "lat": -8.162748,
      "lng": 108.76313,
      "alt": 40000,
      "spd": 461,
      "ts": 1765101891,
      "hd": 347
    },
    {
      "lat": -8.225418,
      "lng": 108.777496,
      "alt": 40000,
      "spd": 462,
      "ts": 1765101861,
      "hd": 347
    },
    {
      "lat": -8.29184,
      "lng": 108.792717,
      "alt": 40000,
      "spd": 461,
      "ts": 1765101828,
      "hd": 347
    },
    {
      "lat": -8.357666,
      "lng": 108.807846,
      "alt": 40000,
      "spd": 462,
      "ts": 1765101797,
      "hd": 347
    },
    {
      "lat": -8.422806,
      "lng": 108.822701,
      "alt": 40000,
      "spd": 462,
      "ts": 1765101766,
      "hd": 347
    },
    {
      "lat": -8.487078,
      "lng": 108.837433,
      "alt": 40000,
      "spd": 460,
      "ts": 1765101735,
      "hd": 347
    },
    {
      "lat": -8.554579,
      "lng": 108.853012,
      "alt": 40000,
      "spd": 460,
      "ts": 1765101703,
      "hd": 347
    },
    {
      "lat": -8.621246,
      "lng": 108.868317,
      "alt": 40000,
      "spd": 458,
      "ts": 1765101671,
      "hd": 347
    },
    {
      "lat": -8.69,
      "lng": 108.884171,
      "alt": 40000,
      "spd": 457,
      "ts": 1765101638,
      "hd": 346
    },
    {
      "lat": -8.753494,
      "lng": 108.899048,
      "alt": 40000,
      "spd": 456,
      "ts": 1765101607,
      "hd": 346
    },
    {
      "lat": -8.821747,
      "lng": 108.915009,
      "alt": 40000,
      "spd": 454,
      "ts": 1765101574,
      "hd": 347
    },
    {
      "lat": -8.825455,
      "lng": 108.915848,
      "alt": 40000,
      "spd": 454,
      "ts": 1765101572,
      "hd": 347
    },
    {
      "lat": -8.830913,
      "lng": 108.917084,
      "alt": 40000,
      "spd": 453,
      "ts": 1765101570,
      "hd": 347
    },
    {
      "lat": -8.835196,
      "lng": 108.91803,
      "alt": 40000,
      "spd": 453,
      "ts": 1765101567,
      "hd": 347
    },
    {
      "lat": -8.840549,
      "lng": 108.919212,
      "alt": 40000,
      "spd": 453,
      "ts": 1765101565,
      "hd": 347
    },
    {
      "lat": -8.844692,
      "lng": 108.920113,
      "alt": 40000,
      "spd": 454,
      "ts": 1765101562,
      "hd": 347
    },
    {
      "lat": -8.848975,
      "lng": 108.921059,
      "alt": 40025,
      "spd": 452,
      "ts": 1765101560,
      "hd": 348
    },
    {
      "lat": -8.853724,
      "lng": 108.922104,
      "alt": 40000,
      "spd": 453,
      "ts": 1765101558,
      "hd": 347
    },
    {
      "lat": -8.857727,
      "lng": 108.922974,
      "alt": 40000,
      "spd": 453,
      "ts": 1765101556,
      "hd": 347
    },
    {
      "lat": -8.863965,
      "lng": 108.924469,
      "alt": 40000,
      "spd": 453,
      "ts": 1765101554,
      "hd": 345
    },
    {
      "lat": -8.870178,
      "lng": 108.92614,
      "alt": 40000,
      "spd": 455,
      "ts": 1765101551,
      "hd": 343
    },
    {
      "lat": -8.874113,
      "lng": 108.927361,
      "alt": 40000,
      "spd": 455,
      "ts": 1765101549,
      "hd": 342
    },
    {
      "lat": -8.878349,
      "lng": 108.928734,
      "alt": 40000,
      "spd": 455,
      "ts": 1765101546,
      "hd": 341
    },
    {
      "lat": -8.882446,
      "lng": 108.930191,
      "alt": 40000,
      "spd": 455,
      "ts": 1765101544,
      "hd": 339
    },
    {
      "lat": -8.890593,
      "lng": 108.933418,
      "alt": 40000,
      "spd": 457,
      "ts": 1765101541,
      "hd": 336
    },
    {
      "lat": -8.894211,
      "lng": 108.935028,
      "alt": 40000,
      "spd": 457,
      "ts": 1765101538,
      "hd": 335
    },
    {
      "lat": -8.898056,
      "lng": 108.936844,
      "alt": 40000,
      "spd": 458,
      "ts": 1765101536,
      "hd": 333
    },
    {
      "lat": -8.903549,
      "lng": 108.939636,
      "alt": 40000,
      "spd": 458,
      "ts": 1765101534,
      "hd": 332
    },
    {
      "lat": -8.956604,
      "lng": 108.977997,
      "alt": 40000,
      "spd": 464,
      "ts": 1765101502,
      "hd": 321
    },
    {
      "lat": -9.009022,
      "lng": 109.019844,
      "alt": 40000,
      "spd": 464,
      "ts": 1765101472,
      "hd": 321
    },
    {
      "lat": -9.063581,
      "lng": 109.063217,
      "alt": 40000,
      "spd": 464,
      "ts": 1765101439,
      "hd": 321
    },
    {
      "lat": -9.11693,
      "lng": 109.105652,
      "alt": 40000,
      "spd": 464,
      "ts": 1765101408,
      "hd": 321
    },
    {
      "lat": -9.170654,
      "lng": 109.148468,
      "alt": 40000,
      "spd": 466,
      "ts": 1765101376,
      "hd": 321
    },
    {
      "lat": -9.226135,
      "lng": 109.19265,
      "alt": 40000,
      "spd": 466,
      "ts": 1765101343,
      "hd": 321
    },
    {
      "lat": -9.280197,
      "lng": 109.23571,
      "alt": 40000,
      "spd": 466,
      "ts": 1765101312,
      "hd": 321
    },
    {
      "lat": -9.33284,
      "lng": 109.277611,
      "alt": 40000,
      "spd": 463,
      "ts": 1765101281,
      "hd": 321
    },
    {
      "lat": -9.38805,
      "lng": 109.321587,
      "alt": 40000,
      "spd": 462,
      "ts": 1765101248,
      "hd": 321
    },
    {
      "lat": -9.439133,
      "lng": 109.362289,
      "alt": 40000,
      "spd": 462,
      "ts": 1765101217,
      "hd": 321
    },
    {
      "lat": -9.492979,
      "lng": 109.405266,
      "alt": 40000,
      "spd": 461,
      "ts": 1765101185,
      "hd": 321
    },
    {
      "lat": -9.543961,
      "lng": 109.445938,
      "alt": 40000,
      "spd": 461,
      "ts": 1765101155,
      "hd": 321
    },
    {
      "lat": -9.597107,
      "lng": 109.48835,
      "alt": 40000,
      "spd": 462,
      "ts": 1765101123,
      "hd": 321
    },
    {
      "lat": -9.650848,
      "lng": 109.531273,
      "alt": 40000,
      "spd": 463,
      "ts": 1765101091,
      "hd": 321
    },
    {
      "lat": -9.703954,
      "lng": 109.573753,
      "alt": 40000,
      "spd": 465,
      "ts": 1765101060,
      "hd": 321
    },
    {
      "lat": -9.758926,
      "lng": 109.617722,
      "alt": 40000,
      "spd": 468,
      "ts": 1765101028,
      "hd": 321
    },
    {
      "lat": -9.811024,
      "lng": 109.65937,
      "alt": 40000,
      "spd": 468,
      "ts": 1765100997,
      "hd": 321
    },
    {
      "lat": -9.865219,
      "lng": 109.702721,
      "alt": 40000,
      "spd": 466,
      "ts": 1765100965,
      "hd": 321
    },
    {
      "lat": -9.921432,
      "lng": 109.747742,
      "alt": 40000,
      "spd": 465,
      "ts": 1765100932,
      "hd": 321
    },
    {
      "lat": -9.976913,
      "lng": 109.792198,
      "alt": 40000,
      "spd": 466,
      "ts": 1765100900,
      "hd": 321
    },
    {
      "lat": -10.029634,
      "lng": 109.834396,
      "alt": 40000,
      "spd": 468,
      "ts": 1765100868,
      "hd": 321
    },
    {
      "lat": -10.084854,
      "lng": 109.878647,
      "alt": 40000,
      "spd": 467,
      "ts": 1765100836,
      "hd": 321
    },
    {
      "lat": -10.137863,
      "lng": 109.921143,
      "alt": 40000,
      "spd": 467,
      "ts": 1765100804,
      "hd": 321
    },
    {
      "lat": -10.189682,
      "lng": 109.962715,
      "alt": 40000,
      "spd": 467,
      "ts": 1765100774,
      "hd": 321
    },
    {
      "lat": -10.242982,
      "lng": 110.005539,
      "alt": 40000,
      "spd": 467,
      "ts": 1765100743,
      "hd": 321
    },
    {
      "lat": -10.296295,
      "lng": 110.048325,
      "alt": 40000,
      "spd": 468,
      "ts": 1765100711,
      "hd": 321
    },
    {
      "lat": -10.34967,
      "lng": 110.09111,
      "alt": 40000,
      "spd": 468,
      "ts": 1765100680,
      "hd": 321
    },
    {
      "lat": -10.404282,
      "lng": 110.134956,
      "alt": 40000,
      "spd": 466,
      "ts": 1765100647,
      "hd": 321
    },
    {
      "lat": -10.459167,
      "lng": 110.179092,
      "alt": 40000,
      "spd": 466,
      "ts": 1765100615,
      "hd": 321
    },
    {
      "lat": -10.515499,
      "lng": 110.224388,
      "alt": 40000,
      "spd": 467,
      "ts": 1765100582,
      "hd": 321
    },
    {
      "lat": -10.568336,
      "lng": 110.26693,
      "alt": 40000,
      "spd": 472,
      "ts": 1765100551,
      "hd": 321
    },
    {
      "lat": -10.623001,
      "lng": 110.310974,
      "alt": 40000,
      "spd": 475,
      "ts": 1765100520,
      "hd": 321
    },
    {
      "lat": -10.678199,
      "lng": 110.3554,
      "alt": 40000,
      "spd": 476,
      "ts": 1765100487,
      "hd": 321
    },
    {
      "lat": -10.734833,
      "lng": 110.401047,
      "alt": 40000,
      "spd": 477,
      "ts": 1765100455,
      "hd": 321
    },
    {
      "lat": -10.790111,
      "lng": 110.445656,
      "alt": 40000,
      "spd": 476,
      "ts": 1765100423,
      "hd": 321
    },
    {
      "lat": -10.848358,
      "lng": 110.492676,
      "alt": 40000,
      "spd": 474,
      "ts": 1765100389,
      "hd": 321
    },
    {
      "lat": -10.904536,
      "lng": 110.538025,
      "alt": 40000,
      "spd": 473,
      "ts": 1765100357,
      "hd": 321
    },
    {
      "lat": -10.959137,
      "lng": 110.582077,
      "alt": 40000,
      "spd": 471,
      "ts": 1765100324,
      "hd": 321
    },
    {
      "lat": -11.016122,
      "lng": 110.628082,
      "alt": 40000,
      "spd": 469,
      "ts": 1765100291,
      "hd": 321
    },
    {
      "lat": -11.067981,
      "lng": 110.670006,
      "alt": 40000,
      "spd": 468,
      "ts": 1765100260,
      "hd": 321
    },
    {
      "lat": -11.151542,
      "lng": 110.737564,
      "alt": 40000,
      "spd": 466,
      "ts": 1765100211,
      "hd": 321
    },
    {
      "lat": -11.484695,
      "lng": 111.007561,
      "alt": 40000,
      "spd": 461,
      "ts": 1765100015,
      "hd": 321
    },
    {
      "lat": -11.995697,
      "lng": 111.424194,
      "alt": 40000,
      "spd": 457,
      "ts": 1765099703,
      "hd": 313
    },
    {
      "lat": -14.647007,
      "lng": 114.330254,
      "alt": 40000,
      "spd": 458,
      "ts": 1765097859,
      "hd": 314
    },
    {
      "lat": -16.56757,
      "lng": 116.354584,
      "alt": 40000,
      "spd": 449,
      "ts": 1765096561,
      "hd": 314
    },
    {
      "lat": -17.201019,
      "lng": 117.035332,
      "alt": 40000,
      "spd": 448,
      "ts": 1765096124,
      "hd": 314
    },
    {
      "lat": -17.245277,
      "lng": 117.08316,
      "alt": 40000,
      "spd": 449,
      "ts": 1765096092,
      "hd": 313
    },
    {
      "lat": -17.291473,
      "lng": 117.133095,
      "alt": 40000,
      "spd": 449,
      "ts": 1765096060,
      "hd": 313
    },
    {
      "lat": -17.33725,
      "lng": 117.182632,
      "alt": 40000,
      "spd": 449,
      "ts": 1765096029,
      "hd": 313
    },
    {
      "lat": -17.382248,
      "lng": 117.231346,
      "alt": 40000,
      "spd": 450,
      "ts": 1765095998,
      "hd": 313
    },
    {
      "lat": -17.428041,
      "lng": 117.281013,
      "alt": 40000,
      "spd": 450,
      "ts": 1765095966,
      "hd": 313
    },
    {
      "lat": -17.472702,
      "lng": 117.329407,
      "alt": 40000,
      "spd": 449,
      "ts": 1765095935,
      "hd": 313
    },
    {
      "lat": -17.519981,
      "lng": 117.380722,
      "alt": 40000,
      "spd": 449,
      "ts": 1765095903,
      "hd": 313
    },
    {
      "lat": -17.564857,
      "lng": 117.429527,
      "alt": 40000,
      "spd": 430,
      "ts": 1765095871,
      "hd": 313
    },
    {
      "lat": -17.624634,
      "lng": 117.494492,
      "alt": 40000,
      "spd": 449,
      "ts": 1765095830,
      "hd": 313
    },
    {
      "lat": -17.670811,
      "lng": 117.544785,
      "alt": 40000,
      "spd": 449,
      "ts": 1765095798,
      "hd": 313
    },
    {
      "lat": -17.715176,
      "lng": 117.593094,
      "alt": 40000,
      "spd": 451,
      "ts": 1765095767,
      "hd": 313
    },
    {
      "lat": -17.759678,
      "lng": 117.641647,
      "alt": 40000,
      "spd": 451,
      "ts": 1765095736,
      "hd": 313
    },
    {
      "lat": -17.805588,
      "lng": 117.691811,
      "alt": 40000,
      "spd": 451,
      "ts": 1765095704,
      "hd": 313
    },
    {
      "lat": -17.852644,
      "lng": 117.74337,
      "alt": 40000,
      "spd": 451,
      "ts": 1765095672,
      "hd": 313
    },
    {
      "lat": -17.900034,
      "lng": 117.795212,
      "alt": 40000,
      "spd": 451,
      "ts": 1765095640,
      "hd": 313
    },
    {
      "lat": -17.94397,
      "lng": 117.842773,
      "alt": 40000,
      "spd": 450,
      "ts": 1765095609,
      "hd": 314
    },
    {
      "lat": -17.989532,
      "lng": 117.897675,
      "alt": 40000,
      "spd": 450,
      "ts": 1765095575,
      "hd": 308
    },
    {
      "lat": -18.044718,
      "lng": 117.971977,
      "alt": 40000,
      "spd": 449,
      "ts": 1765095532,
      "hd": 307
    },
    {
      "lat": -18.085545,
      "lng": 118.027008,
      "alt": 40000,
      "spd": 448,
      "ts": 1765095501,
      "hd": 307
    },
    {
      "lat": -18.126389,
      "lng": 118.082069,
      "alt": 40000,
      "spd": 448,
      "ts": 1765095469,
      "hd": 307
    },
    {
      "lat": -18.165436,
      "lng": 118.134682,
      "alt": 40000,
      "spd": 449,
      "ts": 1765095438,
      "hd": 307
    },
    {
      "lat": -18.20842,
      "lng": 118.19268,
      "alt": 40000,
      "spd": 449,
      "ts": 1765095405,
      "hd": 307
    },
    {
      "lat": -18.250433,
      "lng": 118.249596,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095371,
      "hd": 307
    },
    {
      "lat": -18.291092,
      "lng": 118.304512,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095339,
      "hd": 307
    },
    {
      "lat": -18.332016,
      "lng": 118.359932,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095307,
      "hd": 307
    },
    {
      "lat": -18.371561,
      "lng": 118.413445,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095276,
      "hd": 307
    },
    {
      "lat": -18.412107,
      "lng": 118.468422,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095244,
      "hd": 307
    },
    {
      "lat": -18.451309,
      "lng": 118.521584,
      "alt": 40000,
      "spd": 446,
      "ts": 1765095213,
      "hd": 307
    },
    {
      "lat": -18.492004,
      "lng": 118.576859,
      "alt": 40000,
      "spd": 445,
      "ts": 1765095181,
      "hd": 307
    },
    {
      "lat": -18.530777,
      "lng": 118.629585,
      "alt": 40000,
      "spd": 445,
      "ts": 1765095150,
      "hd": 307
    },
    {
      "lat": -18.570694,
      "lng": 118.683975,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095118,
      "hd": 307
    },
    {
      "lat": -18.611572,
      "lng": 118.739594,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095086,
      "hd": 307
    },
    {
      "lat": -18.65062,
      "lng": 118.792763,
      "alt": 40000,
      "spd": 447,
      "ts": 1765095055,
      "hd": 307
    },
    {
      "lat": -18.691086,
      "lng": 118.847992,
      "alt": 40000,
      "spd": 446,
      "ts": 1765095023,
      "hd": 307
    },
    {
      "lat": -18.733086,
      "lng": 118.905281,
      "alt": 40000,
      "spd": 446,
      "ts": 1765094990,
      "hd": 307
    },
    {
      "lat": -18.772476,
      "lng": 118.959175,
      "alt": 40000,
      "spd": 446,
      "ts": 1765094959,
      "hd": 307
    },
    {
      "lat": -18.812027,
      "lng": 119.013222,
      "alt": 40000,
      "spd": 445,
      "ts": 1765094927,
      "hd": 307
    },
    {
      "lat": -18.852213,
      "lng": 119.068275,
      "alt": 40000,
      "spd": 445,
      "ts": 1765094895,
      "hd": 307
    },
    {
      "lat": -18.89113,
      "lng": 119.121613,
      "alt": 40000,
      "spd": 446,
      "ts": 1765094864,
      "hd": 307
    },
    {
      "lat": -18.930374,
      "lng": 119.175346,
      "alt": 40000,
      "spd": 447,
      "ts": 1765094833,
      "hd": 307
    },
    {
      "lat": -18.96999,
      "lng": 119.229622,
      "alt": 40000,
      "spd": 447,
      "ts": 1765094802,
      "hd": 307
    },
    {
      "lat": -19.011189,
      "lng": 119.286606,
      "alt": 40000,
      "spd": 447,
      "ts": 1765094769,
      "hd": 306
    },
    {
      "lat": -19.051922,
      "lng": 119.338989,
      "alt": 40000,
      "spd": 448,
      "ts": 1765094738,
      "hd": 311
    },
    {
      "lat": -19.093964,
      "lng": 119.389015,
      "alt": 40000,
      "spd": 447,
      "ts": 1765094707,
      "hd": 311
    },
    {
      "lat": -19.136972,
      "lng": 119.440315,
      "alt": 40000,
      "spd": 446,
      "ts": 1765094677,
      "hd": 311
    },
    {
      "lat": -19.178879,
      "lng": 119.490349,
      "alt": 40000,
      "spd": 444,
      "ts": 1765094646,
      "hd": 311
    },
    {
      "lat": -19.221233,
      "lng": 119.540939,
      "alt": 40000,
      "spd": 444,
      "ts": 1765094614,
      "hd": 311
    },
    {
      "lat": -19.263565,
      "lng": 119.591476,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094584,
      "hd": 311
    },
    {
      "lat": -19.306704,
      "lng": 119.643112,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094552,
      "hd": 311
    },
    {
      "lat": -19.35074,
      "lng": 119.695847,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094520,
      "hd": 311
    },
    {
      "lat": -19.393204,
      "lng": 119.746658,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094488,
      "hd": 311
    },
    {
      "lat": -19.436676,
      "lng": 119.798767,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094456,
      "hd": 311
    },
    {
      "lat": -19.478256,
      "lng": 119.848679,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094425,
      "hd": 311
    },
    {
      "lat": -19.520096,
      "lng": 119.898949,
      "alt": 40000,
      "spd": 444,
      "ts": 1765094395,
      "hd": 311
    },
    {
      "lat": -19.563309,
      "lng": 119.95089,
      "alt": 40000,
      "spd": 444,
      "ts": 1765094363,
      "hd": 311
    },
    {
      "lat": -19.604645,
      "lng": 120.000671,
      "alt": 40000,
      "spd": 442,
      "ts": 1765094333,
      "hd": 311
    },
    {
      "lat": -19.647326,
      "lng": 120.052101,
      "alt": 40000,
      "spd": 442,
      "ts": 1765094301,
      "hd": 311
    },
    {
      "lat": -19.689968,
      "lng": 120.103539,
      "alt": 40000,
      "spd": 442,
      "ts": 1765094269,
      "hd": 311
    },
    {
      "lat": -19.733505,
      "lng": 120.155998,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094237,
      "hd": 311
    },
    {
      "lat": -19.776855,
      "lng": 120.208328,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094205,
      "hd": 311
    },
    {
      "lat": -19.819569,
      "lng": 120.259941,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094173,
      "hd": 311
    },
    {
      "lat": -19.862411,
      "lng": 120.311768,
      "alt": 40000,
      "spd": 443,
      "ts": 1765094142,
      "hd": 311
    },
    {
      "lat": -19.903734,
      "lng": 120.361816,
      "alt": 40000,
      "spd": 442,
      "ts": 1765094111,
      "hd": 311
    },
    {
      "lat": -19.946564,
      "lng": 120.413704,
      "alt": 40000,
      "spd": 442,
      "ts": 1765094080,
      "hd": 311
    },
    {
      "lat": -19.988274,
      "lng": 120.46434,
      "alt": 40000,
      "spd": 442,
      "ts": 1765094049,
      "hd": 311
    },
    {
      "lat": -20.030451,
      "lng": 120.515625,
      "alt": 40000,
      "spd": 442,
      "ts": 1765094017,
      "hd": 311
    },
    {
      "lat": -20.075226,
      "lng": 120.569847,
      "alt": 40000,
      "spd": 442,
      "ts": 1765093984,
      "hd": 311
    },
    {
      "lat": -20.117798,
      "lng": 120.621643,
      "alt": 40000,
      "spd": 443,
      "ts": 1765093953,
      "hd": 311
    },
    {
      "lat": -20.158655,
      "lng": 120.671379,
      "alt": 39925,
      "spd": 441,
      "ts": 1765093922,
      "hd": 311
    },
    {
      "lat": -20.202646,
      "lng": 120.725067,
      "alt": 39725,
      "spd": 440,
      "ts": 1765093890,
      "hd": 310
    },
    {
      "lat": -20.244003,
      "lng": 120.77565,
      "alt": 39425,
      "spd": 442,
      "ts": 1765093859,
      "hd": 310
    },
    {
      "lat": -20.285889,
      "lng": 120.826805,
      "alt": 39050,
      "spd": 444,
      "ts": 1765093828,
      "hd": 310
    },
    {
      "lat": -20.326309,
      "lng": 120.876144,
      "alt": 38625,
      "spd": 447,
      "ts": 1765093798,
      "hd": 311
    },
    {
      "lat": -20.369024,
      "lng": 120.928108,
      "alt": 38150,
      "spd": 452,
      "ts": 1765093767,
      "hd": 310
    },
    {
      "lat": -20.413834,
      "lng": 120.983017,
      "alt": 38000,
      "spd": 452,
      "ts": 1765093734,
      "hd": 310
    },
    {
      "lat": -20.457184,
      "lng": 121.036133,
      "alt": 38000,
      "spd": 453,
      "ts": 1765093703,
      "hd": 310
    },
    {
      "lat": -20.501266,
      "lng": 121.090233,
      "alt": 38000,
      "spd": 453,
      "ts": 1765093670,
      "hd": 310
    },
    {
      "lat": -20.5448,
      "lng": 121.143692,
      "alt": 38000,
      "spd": 452,
      "ts": 1765093639,
      "hd": 310
    },
    {
      "lat": -20.58959,
      "lng": 121.198776,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093606,
      "hd": 310
    },
    {
      "lat": -20.631113,
      "lng": 121.249809,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093575,
      "hd": 310
    },
    {
      "lat": -20.675385,
      "lng": 121.304344,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093543,
      "hd": 310
    },
    {
      "lat": -20.717794,
      "lng": 121.356575,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093512,
      "hd": 310
    },
    {
      "lat": -20.763153,
      "lng": 121.412514,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093479,
      "hd": 310
    },
    {
      "lat": -20.804707,
      "lng": 121.463799,
      "alt": 38000,
      "spd": 451,
      "ts": 1765093448,
      "hd": 310
    },
    {
      "lat": -20.847656,
      "lng": 121.516884,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093417,
      "hd": 310
    },
    {
      "lat": -20.888268,
      "lng": 121.567169,
      "alt": 38000,
      "spd": 449,
      "ts": 1765093387,
      "hd": 310
    },
    {
      "lat": -20.933146,
      "lng": 121.62265,
      "alt": 38000,
      "spd": 449,
      "ts": 1765093354,
      "hd": 310
    },
    {
      "lat": -20.97546,
      "lng": 121.675079,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093323,
      "hd": 310
    },
    {
      "lat": -21.020279,
      "lng": 121.730576,
      "alt": 38000,
      "spd": 450,
      "ts": 1765093290,
      "hd": 310
    },
    {
      "lat": -21.064283,
      "lng": 121.785179,
      "alt": 38000,
      "spd": 452,
      "ts": 1765093258,
      "hd": 310
    },
    {
      "lat": -21.105341,
      "lng": 121.836601,
      "alt": 38000,
      "spd": 453,
      "ts": 1765093228,
      "hd": 311
    },
    {
      "lat": -21.153397,
      "lng": 121.889267,
      "alt": 38000,
      "spd": 455,
      "ts": 1765093195,
      "hd": 315
    },
    {
      "lat": -21.199448,
      "lng": 121.938156,
      "alt": 38000,
      "spd": 454,
      "ts": 1765093164,
      "hd": 315
    },
    {
      "lat": -21.244583,
      "lng": 121.986198,
      "alt": 38000,
      "spd": 453,
      "ts": 1765093134,
      "hd": 315
    },
    {
      "lat": -21.293472,
      "lng": 122.038231,
      "alt": 38000,
      "spd": 451,
      "ts": 1765093101,
      "hd": 315
    },
    {
      "lat": -21.341629,
      "lng": 122.089516,
      "alt": 38000,
      "spd": 451,
      "ts": 1765093069,
      "hd": 315
    },
    {
      "lat": -21.388321,
      "lng": 122.139305,
      "alt": 38000,
      "spd": 449,
      "ts": 1765093037,
      "hd": 314
    },
    {
      "lat": -21.433914,
      "lng": 122.187996,
      "alt": 38000,
      "spd": 449,
      "ts": 1765093006,
      "hd": 314
    },
    {
      "lat": -21.47905,
      "lng": 122.236282,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092976,
      "hd": 314
    },
    {
      "lat": -21.526499,
      "lng": 122.286987,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092943,
      "hd": 314
    },
    {
      "lat": -21.571888,
      "lng": 122.335564,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092912,
      "hd": 314
    },
    {
      "lat": -21.617386,
      "lng": 122.3843,
      "alt": 38000,
      "spd": 450,
      "ts": 1765092881,
      "hd": 314
    },
    {
      "lat": -21.665226,
      "lng": 122.435608,
      "alt": 38000,
      "spd": 450,
      "ts": 1765092849,
      "hd": 314
    },
    {
      "lat": -21.714151,
      "lng": 122.488152,
      "alt": 38000,
      "spd": 450,
      "ts": 1765092816,
      "hd": 314
    },
    {
      "lat": -21.759634,
      "lng": 122.536926,
      "alt": 38000,
      "spd": 451,
      "ts": 1765092785,
      "hd": 314
    },
    {
      "lat": -21.805161,
      "lng": 122.585907,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092754,
      "hd": 314
    },
    {
      "lat": -21.852814,
      "lng": 122.637184,
      "alt": 38000,
      "spd": 448,
      "ts": 1765092722,
      "hd": 314
    },
    {
      "lat": -21.900101,
      "lng": 122.688118,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092690,
      "hd": 314
    },
    {
      "lat": -21.94574,
      "lng": 122.737312,
      "alt": 38000,
      "spd": 451,
      "ts": 1765092659,
      "hd": 314
    },
    {
      "lat": -21.991045,
      "lng": 122.786156,
      "alt": 38000,
      "spd": 450,
      "ts": 1765092628,
      "hd": 314
    },
    {
      "lat": -22.039179,
      "lng": 122.838234,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092595,
      "hd": 314
    },
    {
      "lat": -22.083527,
      "lng": 122.886223,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092565,
      "hd": 314
    },
    {
      "lat": -22.129072,
      "lng": 122.935539,
      "alt": 38000,
      "spd": 447,
      "ts": 1765092534,
      "hd": 314
    },
    {
      "lat": -22.176649,
      "lng": 122.98716,
      "alt": 38000,
      "spd": 446,
      "ts": 1765092501,
      "hd": 314
    },
    {
      "lat": -22.221664,
      "lng": 123.036041,
      "alt": 38000,
      "spd": 447,
      "ts": 1765092470,
      "hd": 314
    },
    {
      "lat": -22.266998,
      "lng": 123.085327,
      "alt": 38000,
      "spd": 448,
      "ts": 1765092439,
      "hd": 314
    },
    {
      "lat": -22.312395,
      "lng": 123.134712,
      "alt": 38000,
      "spd": 449,
      "ts": 1765092408,
      "hd": 314
    },
    {
      "lat": -22.356945,
      "lng": 123.183235,
      "alt": 38000,
      "spd": 448,
      "ts": 1765092378,
      "hd": 314
    },
    {
      "lat": -22.404057,
      "lng": 123.234558,
      "alt": 38000,
      "spd": 448,
      "ts": 1765092346,
      "hd": 314
    },
    {
      "lat": -22.449234,
      "lng": 123.283783,
      "alt": 38000,
      "spd": 448,
      "ts": 1765092314,
      "hd": 314
    },
    {
      "lat": -22.498352,
      "lng": 123.337311,
      "alt": 38000,
      "spd": 446,
      "ts": 1765092281,
      "hd": 314
    },
    {
      "lat": -22.54632,
      "lng": 123.38974,
      "alt": 38000,
      "spd": 445,
      "ts": 1765092247,
      "hd": 314
    },
    {
      "lat": -22.599606,
      "lng": 123.44809,
      "alt": 38000,
      "spd": 445,
      "ts": 1765092211,
      "hd": 315
    },
    {
      "lat": -22.653214,
      "lng": 123.506706,
      "alt": 38000,
      "spd": 443,
      "ts": 1765092173,
      "hd": 314
    },
    {
      "lat": -22.707752,
      "lng": 123.566498,
      "alt": 38000,
      "spd": 444,
      "ts": 1765092136,
      "hd": 314
    },
    {
      "lat": -22.772598,
      "lng": 123.637711,
      "alt": 38000,
      "spd": 445,
      "ts": 1765092091,
      "hd": 315
    },
    {
      "lat": -22.859009,
      "lng": 123.732788,
      "alt": 38000,
      "spd": 444,
      "ts": 1765092031,
      "hd": 314
    },
    {
      "lat": -22.873428,
      "lng": 123.748627,
      "alt": 38000,
      "spd": 444,
      "ts": 1765092021,
      "hd": 314
    },
    {
      "lat": -22.940756,
      "lng": 123.822884,
      "alt": 38000,
      "spd": 444,
      "ts": 1765091975,
      "hd": 314
    },
    {
      "lat": -22.986191,
      "lng": 123.873047,
      "alt": 38000,
      "spd": 444,
      "ts": 1765091942,
      "hd": 314
    },
    {
      "lat": -23.039795,
      "lng": 123.93232,
      "alt": 38000,
      "spd": 445,
      "ts": 1765091905,
      "hd": 314
    },
    {
      "lat": -23.089636,
      "lng": 123.98745,
      "alt": 38000,
      "spd": 446,
      "ts": 1765091871,
      "hd": 314
    },
    {
      "lat": -23.140039,
      "lng": 124.043365,
      "alt": 38000,
      "spd": 446,
      "ts": 1765091836,
      "hd": 314
    },
    {
      "lat": -23.198339,
      "lng": 124.108002,
      "alt": 38000,
      "spd": 445,
      "ts": 1765091795,
      "hd": 314
    },
    {
      "lat": -23.268936,
      "lng": 124.187393,
      "alt": 38000,
      "spd": 440,
      "ts": 1765091746,
      "hd": 310
    },
    {
      "lat": -23.326035,
      "lng": 124.264214,
      "alt": 38000,
      "spd": 437,
      "ts": 1765091701,
      "hd": 309
    },
    {
      "lat": -23.363886,
      "lng": 124.31543,
      "alt": 38000,
      "spd": 438,
      "ts": 1765091671,
      "hd": 309
    },
    {
      "lat": -23.420834,
      "lng": 124.3927,
      "alt": 38000,
      "spd": 438,
      "ts": 1765091626,
      "hd": 309
    },
    {
      "lat": -23.496838,
      "lng": 124.496086,
      "alt": 38000,
      "spd": 440,
      "ts": 1765091566,
      "hd": 309
    },
    {
      "lat": -23.515827,
      "lng": 124.521919,
      "alt": 38000,
      "spd": 440,
      "ts": 1765091551,
      "hd": 309
    },
    {
      "lat": -23.572754,
      "lng": 124.599617,
      "alt": 38000,
      "spd": 438,
      "ts": 1765091506,
      "hd": 309
    },
    {
      "lat": -23.629553,
      "lng": 124.677185,
      "alt": 38000,
      "spd": 438,
      "ts": 1765091461,
      "hd": 308
    },
    {
      "lat": -23.667276,
      "lng": 124.728752,
      "alt": 38000,
      "spd": 438,
      "ts": 1765091432,
      "hd": 308
    },
    {
      "lat": -23.723795,
      "lng": 124.806084,
      "alt": 38000,
      "spd": 438,
      "ts": 1765091387,
      "hd": 308
    },
    {
      "lat": -23.761518,
      "lng": 124.857796,
      "alt": 38000,
      "spd": 438,
      "ts": 1765091357,
      "hd": 308
    },
    {
      "lat": -23.818295,
      "lng": 124.93573,
      "alt": 38000,
      "spd": 440,
      "ts": 1765091312,
      "hd": 308
    },
    {
      "lat": -23.875351,
      "lng": 125.014069,
      "alt": 38000,
      "spd": 444,
      "ts": 1765091267,
      "hd": 308
    },
    {
      "lat": -23.932837,
      "lng": 125.093185,
      "alt": 38000,
      "spd": 445,
      "ts": 1765091222,
      "hd": 308
    },
    {
      "lat": -23.971073,
      "lng": 125.145973,
      "alt": 38000,
      "spd": 446,
      "ts": 1765091192,
      "hd": 308
    },
    {
      "lat": -24.009377,
      "lng": 125.198738,
      "alt": 38000,
      "spd": 444,
      "ts": 1765091162,
      "hd": 308
    },
    {
      "lat": -24.085722,
      "lng": 125.304222,
      "alt": 38000,
      "spd": 443,
      "ts": 1765091102,
      "hd": 308
    },
    {
      "lat": -24.123659,
      "lng": 125.356773,
      "alt": 38000,
      "spd": 442,
      "ts": 1765091072,
      "hd": 308
    },
    {
      "lat": -24.180523,
      "lng": 125.435654,
      "alt": 38000,
      "spd": 441,
      "ts": 1765091027,
      "hd": 308
    },
    {
      "lat": -24.256203,
      "lng": 125.540665,
      "alt": 38000,
      "spd": 441,
      "ts": 1765090967,
      "hd": 308
    },
    {
      "lat": -24.294012,
      "lng": 125.5933,
      "alt": 38000,
      "spd": 442,
      "ts": 1765090937,
      "hd": 308
    },
    {
      "lat": -24.313002,
      "lng": 125.619759,
      "alt": 38000,
      "spd": 442,
      "ts": 1765090922,
      "hd": 308
    },
    {
      "lat": -24.38879,
      "lng": 125.725456,
      "alt": 38000,
      "spd": 443,
      "ts": 1765090862,
      "hd": 308
    },
    {
      "lat": -24.445696,
      "lng": 125.804893,
      "alt": 38000,
      "spd": 445,
      "ts": 1765090818,
      "hd": 308
    },
    {
      "lat": -24.464771,
      "lng": 125.831543,
      "alt": 38000,
      "spd": 445,
      "ts": 1765090802,
      "hd": 308
    },
    {
      "lat": -24.521635,
      "lng": 125.911064,
      "alt": 38000,
      "spd": 441,
      "ts": 1765090758,
      "hd": 308
    },
    {
      "lat": -24.577875,
      "lng": 125.990227,
      "alt": 38000,
      "spd": 438,
      "ts": 1765090713,
      "hd": 308
    },
    {
      "lat": -24.634245,
      "lng": 126.069336,
      "alt": 37800,
      "spd": 450,
      "ts": 1765090668,
      "hd": 308
    },
    {
      "lat": -24.703674,
      "lng": 126.167297,
      "alt": 36975,
      "spd": 454,
      "ts": 1765090615,
      "hd": 307
    },
    {
      "lat": -24.731297,
      "lng": 126.206047,
      "alt": 35900,
      "spd": 472,
      "ts": 1765090593,
      "hd": 308
    },
    {
      "lat": -24.793932,
      "lng": 126.294151,
      "alt": 34100,
      "spd": 501,
      "ts": 1765090548,
      "hd": 308
    },
    {
      "lat": -24.836462,
      "lng": 126.354279,
      "alt": 34000,
      "spd": 499,
      "ts": 1765090518,
      "hd": 308
    },
    {
      "lat": -24.895298,
      "lng": 126.43766,
      "alt": 34000,
      "spd": 499,
      "ts": 1765090476,
      "hd": 307
    },
    {
      "lat": -24.942549,
      "lng": 126.504539,
      "alt": 34000,
      "spd": 501,
      "ts": 1765090443,
      "hd": 308
    },
    {
      "lat": -24.987007,
      "lng": 126.567627,
      "alt": 34000,
      "spd": 501,
      "ts": 1765090412,
      "hd": 307
    },
    {
      "lat": -25.0746,
      "lng": 126.6922,
      "alt": 34000,
      "spd": 500,
      "ts": 1765090352,
      "hd": 307
    },
    {
      "lat": -25.103155,
      "lng": 126.732895,
      "alt": 34000,
      "spd": 501,
      "ts": 1765090330,
      "hd": 307
    },
    {
      "lat": -25.149195,
      "lng": 126.798599,
      "alt": 34000,
      "spd": 501,
      "ts": 1765090298,
      "hd": 307
    },
    {
      "lat": -25.194118,
      "lng": 126.862755,
      "alt": 34000,
      "spd": 501,
      "ts": 1765090267,
      "hd": 307
    },
    {
      "lat": -25.241043,
      "lng": 126.929932,
      "alt": 34000,
      "spd": 501,
      "ts": 1765090233,
      "hd": 307
    },
    {
      "lat": -25.284943,
      "lng": 126.992851,
      "alt": 34000,
      "spd": 501,
      "ts": 1765090201,
      "hd": 307
    },
    {
      "lat": -25.332367,
      "lng": 127.060852,
      "alt": 34000,
      "spd": 502,
      "ts": 1765090169,
      "hd": 307
    },
    {
      "lat": -25.377411,
      "lng": 127.125549,
      "alt": 34000,
      "spd": 502,
      "ts": 1765090137,
      "hd": 307
    },
    {
      "lat": -25.421618,
      "lng": 127.189034,
      "alt": 34000,
      "spd": 503,
      "ts": 1765090105,
      "hd": 307
    },
    {
      "lat": -25.464661,
      "lng": 127.251076,
      "alt": 34000,
      "spd": 503,
      "ts": 1765090075,
      "hd": 307
    },
    {
      "lat": -25.509369,
      "lng": 127.315529,
      "alt": 34000,
      "spd": 503,
      "ts": 1765090043,
      "hd": 307
    },
    {
      "lat": -25.554758,
      "lng": 127.381035,
      "alt": 34000,
      "spd": 502,
      "ts": 1765090011,
      "hd": 307
    },
    {
      "lat": -25.600388,
      "lng": 127.446953,
      "alt": 34000,
      "spd": 503,
      "ts": 1765089979,
      "hd": 307
    },
    {
      "lat": -25.644091,
      "lng": 127.510277,
      "alt": 34000,
      "spd": 505,
      "ts": 1765089948,
      "hd": 307
    },
    {
      "lat": -25.688278,
      "lng": 127.574364,
      "alt": 34000,
      "spd": 506,
      "ts": 1765089917,
      "hd": 307
    },
    {
      "lat": -25.731033,
      "lng": 127.636467,
      "alt": 34000,
      "spd": 507,
      "ts": 1765089887,
      "hd": 307
    },
    {
      "lat": -25.775461,
      "lng": 127.701141,
      "alt": 34000,
      "spd": 511,
      "ts": 1765089856,
      "hd": 307
    },
    {
      "lat": -25.820251,
      "lng": 127.766365,
      "alt": 34000,
      "spd": 512,
      "ts": 1765089825,
      "hd": 307
    },
    {
      "lat": -25.867355,
      "lng": 127.835098,
      "alt": 34000,
      "spd": 513,
      "ts": 1765089792,
      "hd": 307
    },
    {
      "lat": -25.912838,
      "lng": 127.901512,
      "alt": 34000,
      "spd": 514,
      "ts": 1765089760,
      "hd": 307
    },
    {
      "lat": -25.959732,
      "lng": 127.9702,
      "alt": 34000,
      "spd": 514,
      "ts": 1765089727,
      "hd": 307
    },
    {
      "lat": -26.006966,
      "lng": 128.039368,
      "alt": 34000,
      "spd": 514,
      "ts": 1765089695,
      "hd": 307
    },
    {
      "lat": -26.054077,
      "lng": 128.108459,
      "alt": 34000,
      "spd": 514,
      "ts": 1765089662,
      "hd": 307
    },
    {
      "lat": -26.098116,
      "lng": 128.173218,
      "alt": 34000,
      "spd": 515,
      "ts": 1765089631,
      "hd": 306
    },
    {
      "lat": -26.142805,
      "lng": 128.238968,
      "alt": 34000,
      "spd": 515,
      "ts": 1765089600,
      "hd": 306
    },
    {
      "lat": -26.186325,
      "lng": 128.303055,
      "alt": 34000,
      "spd": 516,
      "ts": 1765089570,
      "hd": 306
    },
    {
      "lat": -26.232788,
      "lng": 128.371613,
      "alt": 34000,
      "spd": 516,
      "ts": 1765089537,
      "hd": 306
    },
    {
      "lat": -26.277901,
      "lng": 128.438263,
      "alt": 34000,
      "spd": 517,
      "ts": 1765089506,
      "hd": 306
    },
    {
      "lat": -26.32259,
      "lng": 128.50444,
      "alt": 34000,
      "spd": 516,
      "ts": 1765089475,
      "hd": 306
    },
    {
      "lat": -26.367828,
      "lng": 128.571548,
      "alt": 34000,
      "spd": 515,
      "ts": 1765089443,
      "hd": 306
    },
    {
      "lat": -26.415695,
      "lng": 128.642563,
      "alt": 34000,
      "spd": 514,
      "ts": 1765089410,
      "hd": 306
    },
    {
      "lat": -26.461166,
      "lng": 128.710175,
      "alt": 34000,
      "spd": 515,
      "ts": 1765089378,
      "hd": 306
    },
    {
      "lat": -26.505386,
      "lng": 128.776138,
      "alt": 34000,
      "spd": 516,
      "ts": 1765089347,
      "hd": 306
    },
    {
      "lat": -26.552628,
      "lng": 128.846832,
      "alt": 34000,
      "spd": 516,
      "ts": 1765089314,
      "hd": 306
    },
    {
      "lat": -26.596207,
      "lng": 128.911453,
      "alt": 34000,
      "spd": 516,
      "ts": 1765089283,
      "hd": 306
    },
    {
      "lat": -26.640289,
      "lng": 128.983582,
      "alt": 34000,
      "spd": 512,
      "ts": 1765089251,
      "hd": 300
    },
    {
      "lat": -26.676714,
      "lng": 129.057343,
      "alt": 34000,
      "spd": 510,
      "ts": 1765089219,
      "hd": 298
    },
    {
      "lat": -26.712465,
      "lng": 129.131973,
      "alt": 34000,
      "spd": 510,
      "ts": 1765089187,
      "hd": 298
    },
    {
      "lat": -26.746857,
      "lng": 129.203827,
      "alt": 34000,
      "spd": 511,
      "ts": 1765089156,
      "hd": 298
    },
    {
      "lat": -26.783689,
      "lng": 129.280823,
      "alt": 34000,
      "spd": 511,
      "ts": 1765089123,
      "hd": 298
    },
    {
      "lat": -26.818588,
      "lng": 129.353851,
      "alt": 34000,
      "spd": 510,
      "ts": 1765089091,
      "hd": 298
    },
    {
      "lat": -26.853058,
      "lng": 129.4263,
      "alt": 34000,
      "spd": 510,
      "ts": 1765089061,
      "hd": 298
    },
    {
      "lat": -26.886795,
      "lng": 129.497192,
      "alt": 34000,
      "spd": 510,
      "ts": 1765089030,
      "hd": 297
    },
    {
      "lat": -26.922323,
      "lng": 129.572021,
      "alt": 34000,
      "spd": 511,
      "ts": 1765088998,
      "hd": 297
    },
    {
      "lat": -26.956741,
      "lng": 129.644684,
      "alt": 34000,
      "spd": 512,
      "ts": 1765088967,
      "hd": 297
    },
    {
      "lat": -26.99015,
      "lng": 129.715363,
      "alt": 34000,
      "spd": 512,
      "ts": 1765088937,
      "hd": 297
    },
    {
      "lat": -27.024738,
      "lng": 129.78862,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088906,
      "hd": 297
    },
    {
      "lat": -27.060537,
      "lng": 129.864578,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088874,
      "hd": 297
    },
    {
      "lat": -27.095169,
      "lng": 129.938095,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088842,
      "hd": 297
    },
    {
      "lat": -27.12962,
      "lng": 130.011414,
      "alt": 34000,
      "spd": 512,
      "ts": 1765088811,
      "hd": 297
    },
    {
      "lat": -27.165527,
      "lng": 130.087967,
      "alt": 34000,
      "spd": 512,
      "ts": 1765088778,
      "hd": 297
    },
    {
      "lat": -27.202286,
      "lng": 130.166534,
      "alt": 34000,
      "spd": 512,
      "ts": 1765088745,
      "hd": 297
    },
    {
      "lat": -27.236691,
      "lng": 130.240128,
      "alt": 34000,
      "spd": 512,
      "ts": 1765088714,
      "hd": 297
    },
    {
      "lat": -27.2715,
      "lng": 130.314697,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088682,
      "hd": 297
    },
    {
      "lat": -27.306751,
      "lng": 130.390396,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088650,
      "hd": 297
    },
    {
      "lat": -27.341665,
      "lng": 130.465607,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088618,
      "hd": 297
    },
    {
      "lat": -27.375595,
      "lng": 130.538666,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088587,
      "hd": 297
    },
    {
      "lat": -27.409103,
      "lng": 130.610962,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088557,
      "hd": 297
    },
    {
      "lat": -27.443802,
      "lng": 130.68605,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088525,
      "hd": 297
    },
    {
      "lat": -27.480064,
      "lng": 130.764557,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088492,
      "hd": 297
    },
    {
      "lat": -27.513519,
      "lng": 130.837173,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088461,
      "hd": 297
    },
    {
      "lat": -27.549179,
      "lng": 130.914642,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088429,
      "hd": 297
    },
    {
      "lat": -27.584249,
      "lng": 130.99115,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088397,
      "hd": 297
    },
    {
      "lat": -27.619303,
      "lng": 131.067581,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088365,
      "hd": 297
    },
    {
      "lat": -27.654217,
      "lng": 131.144012,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088332,
      "hd": 297
    },
    {
      "lat": -27.687973,
      "lng": 131.217957,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088301,
      "hd": 297
    },
    {
      "lat": -27.722763,
      "lng": 131.294235,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088270,
      "hd": 297
    },
    {
      "lat": -27.758148,
      "lng": 131.372025,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088237,
      "hd": 297
    },
    {
      "lat": -27.790833,
      "lng": 131.443954,
      "alt": 34000,
      "spd": 515,
      "ts": 1765088207,
      "hd": 297
    },
    {
      "lat": -27.825165,
      "lng": 131.519775,
      "alt": 34000,
      "spd": 515,
      "ts": 1765088175,
      "hd": 297
    },
    {
      "lat": -27.858675,
      "lng": 131.593918,
      "alt": 34000,
      "spd": 515,
      "ts": 1765088144,
      "hd": 297
    },
    {
      "lat": -27.892502,
      "lng": 131.668762,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088113,
      "hd": 296
    },
    {
      "lat": -27.92514,
      "lng": 131.741257,
      "alt": 34000,
      "spd": 514,
      "ts": 1765088082,
      "hd": 296
    },
    {
      "lat": -27.958715,
      "lng": 131.815735,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088052,
      "hd": 296
    },
    {
      "lat": -27.991907,
      "lng": 131.889572,
      "alt": 34000,
      "spd": 513,
      "ts": 1765088020,
      "hd": 296
    },
    {
      "lat": -28.026764,
      "lng": 131.967346,
      "alt": 34000,
      "spd": 512,
      "ts": 1765087988,
      "hd": 296
    },
    {
      "lat": -28.090485,
      "lng": 132.109756,
      "alt": 34000,
      "spd": 511,
      "ts": 1765087931,
      "hd": 296
    },
    {
      "lat": -28.112778,
      "lng": 132.159714,
      "alt": 34000,
      "spd": 512,
      "ts": 1765087907,
      "hd": 296
    },
    {
      "lat": -28.164755,
      "lng": 132.276581,
      "alt": 34000,
      "spd": 511,
      "ts": 1765087858,
      "hd": 296
    },
    {
      "lat": -28.198412,
      "lng": 132.352356,
      "alt": 34000,
      "spd": 511,
      "ts": 1765087827,
      "hd": 296
    },
    {
      "lat": -28.231279,
      "lng": 132.42662,
      "alt": 34000,
      "spd": 509,
      "ts": 1765087796,
      "hd": 296
    },
    {
      "lat": -28.263885,
      "lng": 132.500244,
      "alt": 34000,
      "spd": 509,
      "ts": 1765087765,
      "hd": 296
    },
    {
      "lat": -28.298401,
      "lng": 132.578354,
      "alt": 34000,
      "spd": 510,
      "ts": 1765087732,
      "hd": 296
    },
    {
      "lat": -28.331272,
      "lng": 132.652969,
      "alt": 34000,
      "spd": 511,
      "ts": 1765087701,
      "hd": 296
    },
    {
      "lat": -28.363998,
      "lng": 132.727417,
      "alt": 34000,
      "spd": 510,
      "ts": 1765087670,
      "hd": 296
    },
    {
      "lat": -28.3965,
      "lng": 132.801468,
      "alt": 34000,
      "spd": 510,
      "ts": 1765087639,
      "hd": 296
    },
    {
      "lat": -28.429276,
      "lng": 132.876251,
      "alt": 34000,
      "spd": 511,
      "ts": 1765087608,
      "hd": 296
    },
    {
      "lat": -28.463528,
      "lng": 132.954605,
      "alt": 34000,
      "spd": 510,
      "ts": 1765087576,
      "hd": 296
    },
    {
      "lat": -28.495556,
      "lng": 133.028015,
      "alt": 34000,
      "spd": 509,
      "ts": 1765087545,
      "hd": 296
    },
    {
      "lat": -28.530075,
      "lng": 133.107132,
      "alt": 34000,
      "spd": 511,
      "ts": 1765087512,
      "hd": 296
    },
    {
      "lat": -28.563171,
      "lng": 133.183182,
      "alt": 34000,
      "spd": 510,
      "ts": 1765087480,
      "hd": 296
    },
    {
      "lat": -28.596268,
      "lng": 133.259399,
      "alt": 33975,
      "spd": 510,
      "ts": 1765087449,
      "hd": 296
    },
    {
      "lat": -28.633375,
      "lng": 133.345169,
      "alt": 34000,
      "spd": 505,
      "ts": 1765087413,
      "hd": 296
    },
    {
      "lat": -28.678162,
      "lng": 133.448608,
      "alt": 34125,
      "spd": 508,
      "ts": 1765087369,
      "hd": 296
    },
    {
      "lat": -28.710348,
      "lng": 133.523315,
      "alt": 34400,
      "spd": 511,
      "ts": 1765087339,
      "hd": 296
    },
    {
      "lat": -28.743773,
      "lng": 133.600906,
      "alt": 34850,
      "spd": 511,
      "ts": 1765087307,
      "hd": 295
    },
    {
      "lat": -28.775162,
      "lng": 133.673981,
      "alt": 35225,
      "spd": 510,
      "ts": 1765087276,
      "hd": 295
    },
    {
      "lat": -28.807037,
      "lng": 133.748367,
      "alt": 35475,
      "spd": 509,
      "ts": 1765087245,
      "hd": 295
    },
    {
      "lat": -28.838739,
      "lng": 133.822571,
      "alt": 35750,
      "spd": 508,
      "ts": 1765087214,
      "hd": 295
    },
    {
      "lat": -28.873077,
      "lng": 133.903214,
      "alt": 36025,
      "spd": 506,
      "ts": 1765087181,
      "hd": 295
    },
    {
      "lat": -28.904144,
      "lng": 133.976868,
      "alt": 36275,
      "spd": 505,
      "ts": 1765087150,
      "hd": 295
    },
    {
      "lat": -28.937622,
      "lng": 134.055542,
      "alt": 36550,
      "spd": 504,
      "ts": 1765087117,
      "hd": 296
    },
    {
      "lat": -28.971226,
      "lng": 134.132294,
      "alt": 36975,
      "spd": 500,
      "ts": 1765087085,
      "hd": 296
    },
    {
      "lat": -29.005117,
      "lng": 134.209686,
      "alt": 37525,
      "spd": 492,
      "ts": 1765087052,
      "hd": 296
    },
    {
      "lat": -29.035841,
      "lng": 134.280182,
      "alt": 37975,
      "spd": 484,
      "ts": 1765087021,
      "hd": 296
    },
    {
      "lat": -29.069126,
      "lng": 134.356384,
      "alt": 38000,
      "spd": 481,
      "ts": 1765086988,
      "hd": 296
    },
    {
      "lat": -29.099625,
      "lng": 134.426544,
      "alt": 38000,
      "spd": 480,
      "ts": 1765086957,
      "hd": 296
    },
    {
      "lat": -29.132204,
      "lng": 134.501572,
      "alt": 38000,
      "spd": 478,
      "ts": 1765086924,
      "hd": 296
    },
    {
      "lat": -29.162247,
      "lng": 134.571106,
      "alt": 38000,
      "spd": 479,
      "ts": 1765086893,
      "hd": 296
    },
    {
      "lat": -29.193008,
      "lng": 134.642212,
      "alt": 38025,
      "spd": 479,
      "ts": 1765086862,
      "hd": 296
    },
    {
      "lat": -29.223907,
      "lng": 134.713455,
      "alt": 38000,
      "spd": 482,
      "ts": 1765086831,
      "hd": 296
    },
    {
      "lat": -29.255754,
      "lng": 134.787384,
      "alt": 38025,
      "spd": 484,
      "ts": 1765086799,
      "hd": 296
    },
    {
      "lat": -29.287922,
      "lng": 134.86235,
      "alt": 38000,
      "spd": 485,
      "ts": 1765086766,
      "hd": 296
    },
    {
      "lat": -29.318134,
      "lng": 134.932846,
      "alt": 38000,
      "spd": 485,
      "ts": 1765086735,
      "hd": 296
    },
    {
      "lat": -29.35058,
      "lng": 135.008621,
      "alt": 38000,
      "spd": 485,
      "ts": 1765086702,
      "hd": 296
    },
    {
      "lat": -29.380966,
      "lng": 135.079437,
      "alt": 38000,
      "spd": 485,
      "ts": 1765086672,
      "hd": 296
    },
    {
      "lat": -29.413055,
      "lng": 135.154648,
      "alt": 38000,
      "spd": 484,
      "ts": 1765086639,
      "hd": 295
    },
    {
      "lat": -29.443588,
      "lng": 135.226334,
      "alt": 38000,
      "spd": 483,
      "ts": 1765086608,
      "hd": 295
    },
    {
      "lat": -29.476364,
      "lng": 135.303391,
      "alt": 38025,
      "spd": 483,
      "ts": 1765086575,
      "hd": 296
    },
    {
      "lat": -29.507904,
      "lng": 135.377502,
      "alt": 38000,
      "spd": 483,
      "ts": 1765086542,
      "hd": 295
    },
    {
      "lat": -29.53842,
      "lng": 135.449417,
      "alt": 38000,
      "spd": 484,
      "ts": 1765086511,
      "hd": 295
    },
    {
      "lat": -29.570633,
      "lng": 135.525681,
      "alt": 38000,
      "spd": 484,
      "ts": 1765086478,
      "hd": 295
    },
    {
      "lat": -29.60083,
      "lng": 135.597275,
      "alt": 38000,
      "spd": 484,
      "ts": 1765086447,
      "hd": 295
    },
    {
      "lat": -29.632233,
      "lng": 135.671799,
      "alt": 38000,
      "spd": 484,
      "ts": 1765086415,
      "hd": 295
    },
    {
      "lat": -29.662399,
      "lng": 135.743683,
      "alt": 38000,
      "spd": 482,
      "ts": 1765086384,
      "hd": 295
    },
    {
      "lat": -29.691742,
      "lng": 135.813721,
      "alt": 38000,
      "spd": 481,
      "ts": 1765086353,
      "hd": 295
    },
    {
      "lat": -29.7223,
      "lng": 135.886658,
      "alt": 38000,
      "spd": 482,
      "ts": 1765086322,
      "hd": 295
    },
    {
      "lat": -29.752808,
      "lng": 135.959717,
      "alt": 38000,
      "spd": 482,
      "ts": 1765086290,
      "hd": 295
    },
    {
      "lat": -29.783249,
      "lng": 136.032455,
      "alt": 37975,
      "spd": 481,
      "ts": 1765086259,
      "hd": 295
    },
    {
      "lat": -29.812519,
      "lng": 136.102722,
      "alt": 38000,
      "spd": 480,
      "ts": 1765086228,
      "hd": 295
    },
    {
      "lat": -29.842209,
      "lng": 136.17421,
      "alt": 38000,
      "spd": 479,
      "ts": 1765086197,
      "hd": 295
    },
    {
      "lat": -29.872105,
      "lng": 136.246201,
      "alt": 38000,
      "spd": 480,
      "ts": 1765086166,
      "hd": 295
    },
    {
      "lat": -29.900986,
      "lng": 136.31604,
      "alt": 38000,
      "spd": 480,
      "ts": 1765086136,
      "hd": 295
    },
    {
      "lat": -29.930832,
      "lng": 136.388153,
      "alt": 38000,
      "spd": 481,
      "ts": 1765086105,
      "hd": 295
    },
    {
      "lat": -29.960228,
      "lng": 136.459473,
      "alt": 38000,
      "spd": 480,
      "ts": 1765086074,
      "hd": 295
    },
    {
      "lat": -29.991486,
      "lng": 136.535339,
      "alt": 37975,
      "spd": 479,
      "ts": 1765086041,
      "hd": 295
    },
    {
      "lat": -30.021378,
      "lng": 136.608093,
      "alt": 38000,
      "spd": 479,
      "ts": 1765086009,
      "hd": 295
    },
    {
      "lat": -30.052185,
      "lng": 136.683228,
      "alt": 38000,
      "spd": 477,
      "ts": 1765085977,
      "hd": 295
    },
    {
      "lat": -30.081711,
      "lng": 136.755554,
      "alt": 38000,
      "spd": 477,
      "ts": 1765085945,
      "hd": 295
    },
    {
      "lat": -30.111649,
      "lng": 136.828949,
      "alt": 38000,
      "spd": 475,
      "ts": 1765085913,
      "hd": 295
    },
    {
      "lat": -30.140619,
      "lng": 136.899918,
      "alt": 38000,
      "spd": 475,
      "ts": 1765085883,
      "hd": 295
    },
    {
      "lat": -30.171021,
      "lng": 136.974365,
      "alt": 37975,
      "spd": 472,
      "ts": 1765085850,
      "hd": 295
    },
    {
      "lat": -30.199448,
      "lng": 137.044373,
      "alt": 38000,
      "spd": 469,
      "ts": 1765085819,
      "hd": 295
    },
    {
      "lat": -30.228104,
      "lng": 137.115189,
      "alt": 38000,
      "spd": 469,
      "ts": 1765085788,
      "hd": 294
    },
    {
      "lat": -30.256161,
      "lng": 137.18457,
      "alt": 38000,
      "spd": 471,
      "ts": 1765085758,
      "hd": 294
    },
    {
      "lat": -30.284821,
      "lng": 137.255539,
      "alt": 38000,
      "spd": 473,
      "ts": 1765085726,
      "hd": 294
    },
    {
      "lat": -30.313654,
      "lng": 137.327179,
      "alt": 38000,
      "spd": 474,
      "ts": 1765085695,
      "hd": 294
    },
    {
      "lat": -30.34259,
      "lng": 137.399063,
      "alt": 38000,
      "spd": 471,
      "ts": 1765085664,
      "hd": 294
    },
    {
      "lat": -30.370308,
      "lng": 137.468079,
      "alt": 38000,
      "spd": 470,
      "ts": 1765085634,
      "hd": 294
    },
    {
      "lat": -30.3983,
      "lng": 137.537949,
      "alt": 38000,
      "spd": 470,
      "ts": 1765085603,
      "hd": 294
    },
    {
      "lat": -30.428375,
      "lng": 137.613235,
      "alt": 38000,
      "spd": 466,
      "ts": 1765085570,
      "hd": 294
    },
    {
      "lat": -30.456299,
      "lng": 137.683197,
      "alt": 38000,
      "spd": 465,
      "ts": 1765085539,
      "hd": 294
    },
    {
      "lat": -30.484221,
      "lng": 137.753174,
      "alt": 38000,
      "spd": 463,
      "ts": 1765085508,
      "hd": 294
    },
    {
      "lat": -30.512054,
      "lng": 137.823166,
      "alt": 38000,
      "spd": 464,
      "ts": 1765085477,
      "hd": 294
    },
    {
      "lat": -30.541388,
      "lng": 137.897034,
      "alt": 38000,
      "spd": 465,
      "ts": 1765085444,
      "hd": 294
    },
    {
      "lat": -30.570902,
      "lng": 137.971741,
      "alt": 38000,
      "spd": 464,
      "ts": 1765085411,
      "hd": 294
    },
    {
      "lat": -30.598297,
      "lng": 138.041275,
      "alt": 38000,
      "spd": 464,
      "ts": 1765085381,
      "hd": 294
    },
    {
      "lat": -30.625507,
      "lng": 138.110229,
      "alt": 38000,
      "spd": 463,
      "ts": 1765085350,
      "hd": 294
    },
    {
      "lat": -30.653412,
      "lng": 138.18103,
      "alt": 38000,
      "spd": 463,
      "ts": 1765085319,
      "hd": 294
    },
    {
      "lat": -30.680878,
      "lng": 138.250977,
      "alt": 38000,
      "spd": 464,
      "ts": 1765085288,
      "hd": 294
    },
    {
      "lat": -30.707951,
      "lng": 138.320129,
      "alt": 38000,
      "spd": 465,
      "ts": 1765085257,
      "hd": 294
    },
    {
      "lat": -30.735855,
      "lng": 138.391281,
      "alt": 38025,
      "spd": 468,
      "ts": 1765085226,
      "hd": 294
    },
    {
      "lat": -30.765152,
      "lng": 138.466354,
      "alt": 38000,
      "spd": 470,
      "ts": 1765085193,
      "hd": 294
    },
    {
      "lat": -30.792755,
      "lng": 138.537277,
      "alt": 38000,
      "spd": 470,
      "ts": 1765085162,
      "hd": 294
    },
    {
      "lat": -30.820221,
      "lng": 138.607773,
      "alt": 38000,
      "spd": 469,
      "ts": 1765085131,
      "hd": 294
    },
    {
      "lat": -30.848398,
      "lng": 138.680359,
      "alt": 38000,
      "spd": 468,
      "ts": 1765085100,
      "hd": 294
    },
    {
      "lat": -30.875381,
      "lng": 138.749939,
      "alt": 38000,
      "spd": 468,
      "ts": 1765085069,
      "hd": 294
    },
    {
      "lat": -30.903006,
      "lng": 138.821213,
      "alt": 38000,
      "spd": 466,
      "ts": 1765085038,
      "hd": 294
    },
    {
      "lat": -30.9321,
      "lng": 138.896683,
      "alt": 38000,
      "spd": 464,
      "ts": 1765085005,
      "hd": 294
    },
    {
      "lat": -30.959194,
      "lng": 138.967224,
      "alt": 38000,
      "spd": 461,
      "ts": 1765084974,
      "hd": 294
    },
    {
      "lat": -30.986193,
      "lng": 139.037262,
      "alt": 38000,
      "spd": 459,
      "ts": 1765084943,
      "hd": 294
    },
    {
      "lat": -31.013054,
      "lng": 139.107346,
      "alt": 38000,
      "spd": 457,
      "ts": 1765084912,
      "hd": 293
    },
    {
      "lat": -31.040222,
      "lng": 139.178406,
      "alt": 38000,
      "spd": 455,
      "ts": 1765084880,
      "hd": 293
    },
    {
      "lat": -31.066729,
      "lng": 139.247864,
      "alt": 38000,
      "spd": 452,
      "ts": 1765084849,
      "hd": 293
    },
    {
      "lat": -31.093231,
      "lng": 139.317352,
      "alt": 38000,
      "spd": 452,
      "ts": 1765084818,
      "hd": 293
    },
    {
      "lat": -31.119379,
      "lng": 139.386078,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084787,
      "hd": 293
    },
    {
      "lat": -31.145449,
      "lng": 139.454788,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084756,
      "hd": 293
    },
    {
      "lat": -31.171705,
      "lng": 139.524231,
      "alt": 38025,
      "spd": 448,
      "ts": 1765084725,
      "hd": 293
    },
    {
      "lat": -31.197281,
      "lng": 139.591797,
      "alt": 38000,
      "spd": 447,
      "ts": 1765084694,
      "hd": 293
    },
    {
      "lat": -31.223051,
      "lng": 139.660019,
      "alt": 38000,
      "spd": 448,
      "ts": 1765084664,
      "hd": 293
    },
    {
      "lat": -31.24954,
      "lng": 139.730331,
      "alt": 38000,
      "spd": 448,
      "ts": 1765084631,
      "hd": 293
    },
    {
      "lat": -31.275879,
      "lng": 139.800385,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084600,
      "hd": 293
    },
    {
      "lat": -31.301605,
      "lng": 139.868988,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084569,
      "hd": 293
    },
    {
      "lat": -31.327375,
      "lng": 139.937744,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084538,
      "hd": 293
    },
    {
      "lat": -31.355213,
      "lng": 140.012177,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084505,
      "hd": 293
    },
    {
      "lat": -31.381516,
      "lng": 140.082886,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084473,
      "hd": 293
    },
    {
      "lat": -31.407072,
      "lng": 140.151825,
      "alt": 38000,
      "spd": 450,
      "ts": 1765084442,
      "hd": 293
    },
    {
      "lat": -31.432846,
      "lng": 140.220551,
      "alt": 38000,
      "spd": 449,
      "ts": 1765084411,
      "hd": 293
    },
    {
      "lat": -31.457291,
      "lng": 140.294769,
      "alt": 38000,
      "spd": 444,
      "ts": 1765084379,
      "hd": 287
    },
    {
      "lat": -31.475693,
      "lng": 140.365158,
      "alt": 38000,
      "spd": 443,
      "ts": 1765084348,
      "hd": 286
    },
    {
      "lat": -31.494598,
      "lng": 140.437424,
      "alt": 38000,
      "spd": 442,
      "ts": 1765084316,
      "hd": 286
    },
    {
      "lat": -31.512747,
      "lng": 140.507065,
      "alt": 38000,
      "spd": 440,
      "ts": 1765084286,
      "hd": 286
    },
    {
      "lat": -31.531973,
      "lng": 140.580948,
      "alt": 38000,
      "spd": 440,
      "ts": 1765084253,
      "hd": 286
    },
    {
      "lat": -31.550779,
      "lng": 140.653564,
      "alt": 38000,
      "spd": 440,
      "ts": 1765084221,
      "hd": 286
    },
    {
      "lat": -31.570129,
      "lng": 140.727921,
      "alt": 38000,
      "spd": 441,
      "ts": 1765084189,
      "hd": 286
    },
    {
      "lat": -31.587936,
      "lng": 140.796951,
      "alt": 38000,
      "spd": 440,
      "ts": 1765084159,
      "hd": 286
    },
    {
      "lat": -31.606659,
      "lng": 140.869659,
      "alt": 38000,
      "spd": 439,
      "ts": 1765084127,
      "hd": 286
    },
    {
      "lat": -31.624565,
      "lng": 140.93959,
      "alt": 38000,
      "spd": 440,
      "ts": 1765084096,
      "hd": 286
    },
    {
      "lat": -31.642673,
      "lng": 141.010284,
      "alt": 38000,
      "spd": 439,
      "ts": 1765084065,
      "hd": 286
    },
    {
      "lat": -31.661041,
      "lng": 141.082123,
      "alt": 38000,
      "spd": 439,
      "ts": 1765084034,
      "hd": 286
    },
    {
      "lat": -31.678844,
      "lng": 141.151962,
      "alt": 38000,
      "spd": 439,
      "ts": 1765084003,
      "hd": 286
    },
    {
      "lat": -31.696627,
      "lng": 141.221832,
      "alt": 38000,
      "spd": 438,
      "ts": 1765083972,
      "hd": 286
    },
    {
      "lat": -31.715057,
      "lng": 141.294678,
      "alt": 38000,
      "spd": 436,
      "ts": 1765083940,
      "hd": 286
    },
    {
      "lat": -31.732706,
      "lng": 141.364548,
      "alt": 38000,
      "spd": 434,
      "ts": 1765083909,
      "hd": 286
    },
    {
      "lat": -31.751404,
      "lng": 141.438629,
      "alt": 38000,
      "spd": 432,
      "ts": 1765083877,
      "hd": 286
    },
    {
      "lat": -31.76976,
      "lng": 141.511765,
      "alt": 38000,
      "spd": 431,
      "ts": 1765083844,
      "hd": 286
    },
    {
      "lat": -31.787125,
      "lng": 141.580582,
      "alt": 38000,
      "spd": 432,
      "ts": 1765083813,
      "hd": 286
    },
    {
      "lat": -31.805513,
      "lng": 141.65419,
      "alt": 38000,
      "spd": 432,
      "ts": 1765083781,
      "hd": 286
    },
    {
      "lat": -31.822266,
      "lng": 141.721375,
      "alt": 38000,
      "spd": 430,
      "ts": 1765083751,
      "hd": 286
    },
    {
      "lat": -31.840473,
      "lng": 141.794373,
      "alt": 38000,
      "spd": 429,
      "ts": 1765083718,
      "hd": 286
    },
    {
      "lat": -31.857466,
      "lng": 141.862869,
      "alt": 38000,
      "spd": 427,
      "ts": 1765083687,
      "hd": 286
    },
    {
      "lat": -31.875668,
      "lng": 141.936295,
      "alt": 38000,
      "spd": 425,
      "ts": 1765083654,
      "hd": 286
    },
    {
      "lat": -31.892578,
      "lng": 142.004883,
      "alt": 38000,
      "spd": 424,
      "ts": 1765083623,
      "hd": 286
    },
    {
      "lat": -31.910442,
      "lng": 142.077271,
      "alt": 38000,
      "spd": 423,
      "ts": 1765083591,
      "hd": 286
    },
    {
      "lat": -31.928421,
      "lng": 142.150391,
      "alt": 38000,
      "spd": 424,
      "ts": 1765083558,
      "hd": 286
    },
    {
      "lat": -31.946136,
      "lng": 142.222748,
      "alt": 38000,
      "spd": 423,
      "ts": 1765083525,
      "hd": 286
    },
    {
      "lat": -31.963303,
      "lng": 142.292938,
      "alt": 38000,
      "spd": 422,
      "ts": 1765083493,
      "hd": 285
    },
    {
      "lat": -31.980606,
      "lng": 142.363922,
      "alt": 38000,
      "spd": 422,
      "ts": 1765083461,
      "hd": 285
    },
    {
      "lat": -31.996796,
      "lng": 142.430573,
      "alt": 38000,
      "spd": 421,
      "ts": 1765083430,
      "hd": 285
    },
    {
      "lat": -32.014343,
      "lng": 142.503052,
      "alt": 38000,
      "spd": 418,
      "ts": 1765083398,
      "hd": 285
    },
    {
      "lat": -32.030411,
      "lng": 142.569473,
      "alt": 38000,
      "spd": 417,
      "ts": 1765083367,
      "hd": 285
    },
    {
      "lat": -32.047119,
      "lng": 142.638641,
      "alt": 38000,
      "spd": 417,
      "ts": 1765083336,
      "hd": 285
    },
    {
      "lat": -32.064297,
      "lng": 142.710052,
      "alt": 38000,
      "spd": 416,
      "ts": 1765083303,
      "hd": 285
    },
    {
      "lat": -32.080452,
      "lng": 142.777252,
      "alt": 38000,
      "spd": 414,
      "ts": 1765083272,
      "hd": 285
    },
    {
      "lat": -32.096279,
      "lng": 142.843567,
      "alt": 38000,
      "spd": 412,
      "ts": 1765083241,
      "hd": 285
    },
    {
      "lat": -32.112293,
      "lng": 142.910767,
      "alt": 38000,
      "spd": 412,
      "ts": 1765083210,
      "hd": 285
    },
    {
      "lat": -32.12851,
      "lng": 142.979034,
      "alt": 38000,
      "spd": 413,
      "ts": 1765083179,
      "hd": 285
    },
    {
      "lat": -32.145309,
      "lng": 143.049622,
      "alt": 38000,
      "spd": 415,
      "ts": 1765083146,
      "hd": 285
    },
    {
      "lat": -32.161964,
      "lng": 143.119736,
      "alt": 38000,
      "spd": 416,
      "ts": 1765083114,
      "hd": 285
    },
    {
      "lat": -32.178814,
      "lng": 143.191086,
      "alt": 38000,
      "spd": 415,
      "ts": 1765083081,
      "hd": 285
    },
    {
      "lat": -32.194412,
      "lng": 143.257462,
      "alt": 38000,
      "spd": 413,
      "ts": 1765083051,
      "hd": 285
    },
    {
      "lat": -32.21117,
      "lng": 143.329102,
      "alt": 38000,
      "spd": 413,
      "ts": 1765083018,
      "hd": 285
    },
    {
      "lat": -32.22723,
      "lng": 143.397537,
      "alt": 37975,
      "spd": 410,
      "ts": 1765082986,
      "hd": 285
    },
    {
      "lat": -32.243454,
      "lng": 143.466721,
      "alt": 37800,
      "spd": 408,
      "ts": 1765082954,
      "hd": 285
    },
    {
      "lat": -32.258789,
      "lng": 143.532593,
      "alt": 37450,
      "spd": 411,
      "ts": 1765082923,
      "hd": 285
    },
    {
      "lat": -32.274666,
      "lng": 143.600723,
      "alt": 36950,
      "spd": 417,
      "ts": 1765082892,
      "hd": 285
    },
    {
      "lat": -32.291656,
      "lng": 143.673492,
      "alt": 36150,
      "spd": 428,
      "ts": 1765082859,
      "hd": 285
    },
    {
      "lat": -32.308231,
      "lng": 143.746231,
      "alt": 36000,
      "spd": 431,
      "ts": 1765082827,
      "hd": 285
    },
    {
      "lat": -32.324341,
      "lng": 143.815872,
      "alt": 36000,
      "spd": 433,
      "ts": 1765082796,
      "hd": 285
    },
    {
      "lat": -32.340454,
      "lng": 143.88591,
      "alt": 36000,
      "spd": 433,
      "ts": 1765082766,
      "hd": 285
    },
    {
      "lat": -32.357712,
      "lng": 143.961273,
      "alt": 36000,
      "spd": 435,
      "ts": 1765082733,
      "hd": 285
    },
    {
      "lat": -32.374832,
      "lng": 144.036148,
      "alt": 36000,
      "spd": 435,
      "ts": 1765082700,
      "hd": 285
    },
    {
      "lat": -32.391083,
      "lng": 144.107559,
      "alt": 36000,
      "spd": 435,
      "ts": 1765082669,
      "hd": 285
    },
    {
      "lat": -32.407478,
      "lng": 144.179688,
      "alt": 36000,
      "spd": 435,
      "ts": 1765082638,
      "hd": 285
    },
    {
      "lat": -32.423813,
      "lng": 144.251694,
      "alt": 36000,
      "spd": 434,
      "ts": 1765082607,
      "hd": 284
    },
    {
      "lat": -32.440437,
      "lng": 144.325256,
      "alt": 36000,
      "spd": 433,
      "ts": 1765082574,
      "hd": 284
    },
    {
      "lat": -32.456818,
      "lng": 144.397766,
      "alt": 36000,
      "spd": 431,
      "ts": 1765082543,
      "hd": 284
    },
    {
      "lat": -32.472931,
      "lng": 144.469543,
      "alt": 36000,
      "spd": 430,
      "ts": 1765082511,
      "hd": 284
    },
    {
      "lat": -32.489365,
      "lng": 144.542969,
      "alt": 36000,
      "spd": 429,
      "ts": 1765082479,
      "hd": 284
    },
    {
      "lat": -32.504959,
      "lng": 144.61293,
      "alt": 36000,
      "spd": 428,
      "ts": 1765082448,
      "hd": 284
    },
    {
      "lat": -32.520493,
      "lng": 144.6828,
      "alt": 36000,
      "spd": 425,
      "ts": 1765082417,
      "hd": 284
    },
    {
      "lat": -32.536198,
      "lng": 144.753845,
      "alt": 36000,
      "spd": 425,
      "ts": 1765082385,
      "hd": 284
    },
    {
      "lat": -32.551575,
      "lng": 144.823486,
      "alt": 36000,
      "spd": 426,
      "ts": 1765082354,
      "hd": 284
    },
    {
      "lat": -32.567947,
      "lng": 144.897507,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082322,
      "hd": 284
    },
    {
      "lat": -32.583389,
      "lng": 144.967834,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082291,
      "hd": 284
    },
    {
      "lat": -32.598995,
      "lng": 145.038818,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082259,
      "hd": 284
    },
    {
      "lat": -32.614105,
      "lng": 145.107635,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082229,
      "hd": 284
    },
    {
      "lat": -32.630356,
      "lng": 145.18219,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082196,
      "hd": 284
    },
    {
      "lat": -32.645508,
      "lng": 145.251892,
      "alt": 36000,
      "spd": 426,
      "ts": 1765082165,
      "hd": 284
    },
    {
      "lat": -32.660477,
      "lng": 145.320892,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082135,
      "hd": 284
    },
    {
      "lat": -32.676224,
      "lng": 145.393829,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082102,
      "hd": 284
    },
    {
      "lat": -32.691494,
      "lng": 145.464752,
      "alt": 36000,
      "spd": 427,
      "ts": 1765082071,
      "hd": 284
    },
    {
      "lat": -32.706764,
      "lng": 145.535614,
      "alt": 36000,
      "spd": 426,
      "ts": 1765082040,
      "hd": 284
    },
    {
      "lat": -32.721615,
      "lng": 145.604782,
      "alt": 36000,
      "spd": 425,
      "ts": 1765082010,
      "hd": 284
    },
    {
      "lat": -32.737381,
      "lng": 145.678497,
      "alt": 36025,
      "spd": 424,
      "ts": 1765081977,
      "hd": 284
    },
    {
      "lat": -32.752808,
      "lng": 145.751389,
      "alt": 36000,
      "spd": 424,
      "ts": 1765081944,
      "hd": 284
    },
    {
      "lat": -32.767776,
      "lng": 145.821747,
      "alt": 36000,
      "spd": 423,
      "ts": 1765081913,
      "hd": 284
    },
    {
      "lat": -32.782654,
      "lng": 145.892014,
      "alt": 36000,
      "spd": 424,
      "ts": 1765081882,
      "hd": 282
    },
    {
      "lat": -32.794189,
      "lng": 145.964081,
      "alt": 36000,
      "spd": 424,
      "ts": 1765081850,
      "hd": 280
    },
    {
      "lat": -32.805363,
      "lng": 146.035202,
      "alt": 36000,
      "spd": 424,
      "ts": 1765081820,
      "hd": 280
    },
    {
      "lat": -32.81686,
      "lng": 146.108414,
      "alt": 36000,
      "spd": 425,
      "ts": 1765081787,
      "hd": 280
    },
    {
      "lat": -32.828266,
      "lng": 146.181107,
      "alt": 36000,
      "spd": 425,
      "ts": 1765081756,
      "hd": 280
    },
    {
      "lat": -32.840042,
      "lng": 146.256775,
      "alt": 36000,
      "spd": 424,
      "ts": 1765081723,
      "hd": 280
    },
    {
      "lat": -32.850891,
      "lng": 146.32663,
      "alt": 36000,
      "spd": 421,
      "ts": 1765081692,
      "hd": 280
    },
    {
      "lat": -32.862297,
      "lng": 146.400391,
      "alt": 36000,
      "spd": 417,
      "ts": 1765081660,
      "hd": 280
    },
    {
      "lat": -32.873016,
      "lng": 146.469727,
      "alt": 36000,
      "spd": 416,
      "ts": 1765081629,
      "hd": 280
    },
    {
      "lat": -32.883385,
      "lng": 146.537994,
      "alt": 36000,
      "spd": 416,
      "ts": 1765081599,
      "hd": 280
    },
    {
      "lat": -32.894028,
      "lng": 146.607269,
      "alt": 36000,
      "spd": 415,
      "ts": 1765081568,
      "hd": 280
    },
    {
      "lat": -32.904842,
      "lng": 146.678528,
      "alt": 36000,
      "spd": 415,
      "ts": 1765081536,
      "hd": 280
    },
    {
      "lat": -32.915737,
      "lng": 146.750549,
      "alt": 36000,
      "spd": 414,
      "ts": 1765081504,
      "hd": 280
    },
    {
      "lat": -32.925934,
      "lng": 146.817932,
      "alt": 36000,
      "spd": 413,
      "ts": 1765081474,
      "hd": 280
    },
    {
      "lat": -32.936455,
      "lng": 146.888275,
      "alt": 36000,
      "spd": 413,
      "ts": 1765081442,
      "hd": 280
    },
    {
      "lat": -32.947021,
      "lng": 146.958725,
      "alt": 36000,
      "spd": 412,
      "ts": 1765081411,
      "hd": 280
    },
    {
      "lat": -32.95784,
      "lng": 147.031403,
      "alt": 36000,
      "spd": 411,
      "ts": 1765081378,
      "hd": 280
    },
    {
      "lat": -32.968246,
      "lng": 147.101273,
      "alt": 36000,
      "spd": 410,
      "ts": 1765081347,
      "hd": 279
    },
    {
      "lat": -32.978817,
      "lng": 147.172577,
      "alt": 36000,
      "spd": 410,
      "ts": 1765081314,
      "hd": 279
    },
    {
      "lat": -32.989059,
      "lng": 147.241898,
      "alt": 36000,
      "spd": 412,
      "ts": 1765081283,
      "hd": 279
    },
    {
      "lat": -32.999039,
      "lng": 147.31012,
      "alt": 36000,
      "spd": 413,
      "ts": 1765081253,
      "hd": 279
    },
    {
      "lat": -33.009521,
      "lng": 147.381866,
      "alt": 36000,
      "spd": 413,
      "ts": 1765081221,
      "hd": 279
    },
    {
      "lat": -33.019455,
      "lng": 147.450592,
      "alt": 36000,
      "spd": 413,
      "ts": 1765081190,
      "hd": 279
    },
    {
      "lat": -33.029617,
      "lng": 147.520508,
      "alt": 36000,
      "spd": 414,
      "ts": 1765081159,
      "hd": 279
    },
    {
      "lat": -33.040054,
      "lng": 147.592468,
      "alt": 36000,
      "spd": 411,
      "ts": 1765081127,
      "hd": 279
    },
    {
      "lat": -33.049854,
      "lng": 147.660675,
      "alt": 36000,
      "spd": 406,
      "ts": 1765081096,
      "hd": 279
    },
    {
      "lat": -33.060051,
      "lng": 147.731583,
      "alt": 36000,
      "spd": 404,
      "ts": 1765081064,
      "hd": 279
    },
    {
      "lat": -33.070267,
      "lng": 147.803635,
      "alt": 36000,
      "spd": 406,
      "ts": 1765081032,
      "hd": 279
    },
    {
      "lat": -33.079788,
      "lng": 147.871094,
      "alt": 36000,
      "spd": 408,
      "ts": 1765081000,
      "hd": 279
    },
    {
      "lat": -33.090042,
      "lng": 147.943817,
      "alt": 36000,
      "spd": 408,
      "ts": 1765080968,
      "hd": 279
    },
    {
      "lat": -33.099701,
      "lng": 148.012146,
      "alt": 36000,
      "spd": 407,
      "ts": 1765080937,
      "hd": 279
    },
    {
      "lat": -33.109726,
      "lng": 148.082733,
      "alt": 36000,
      "spd": 405,
      "ts": 1765080905,
      "hd": 279
    },
    {
      "lat": -33.119869,
      "lng": 148.154449,
      "alt": 36000,
      "spd": 404,
      "ts": 1765080872,
      "hd": 279
    },
    {
      "lat": -33.129822,
      "lng": 148.223038,
      "alt": 36000,
      "spd": 402,
      "ts": 1765080841,
      "hd": 282
    },
    {
      "lat": -33.147007,
      "lng": 148.291779,
      "alt": 36000,
      "spd": 404,
      "ts": 1765080809,
      "hd": 289
    },
    {
      "lat": -33.165756,
      "lng": 148.356415,
      "alt": 36000,
      "spd": 404,
      "ts": 1765080778,
      "hd": 289
    },
    {
      "lat": -33.184708,
      "lng": 148.421722,
      "alt": 36000,
      "spd": 402,
      "ts": 1765080747,
      "hd": 289
    },
    {
      "lat": -33.204174,
      "lng": 148.489075,
      "alt": 36000,
      "spd": 402,
      "ts": 1765080714,
      "hd": 288
    },
    {
      "lat": -33.22403,
      "lng": 148.558014,
      "alt": 36000,
      "spd": 402,
      "ts": 1765080682,
      "hd": 288
    },
    {
      "lat": -33.243744,
      "lng": 148.626526,
      "alt": 36000,
      "spd": 400,
      "ts": 1765080649,
      "hd": 288
    },
    {
      "lat": -33.261715,
      "lng": 148.689194,
      "alt": 36000,
      "spd": 395,
      "ts": 1765080619,
      "hd": 288
    },
    {
      "lat": -33.280518,
      "lng": 148.754883,
      "alt": 36000,
      "spd": 391,
      "ts": 1765080587,
      "hd": 288
    },
    {
      "lat": -33.299747,
      "lng": 148.822266,
      "alt": 36000,
      "spd": 389,
      "ts": 1765080554,
      "hd": 288
    },
    {
      "lat": -33.318512,
      "lng": 148.887878,
      "alt": 36000,
      "spd": 390,
      "ts": 1765080522,
      "hd": 288
    },
    {
      "lat": -33.337036,
      "lng": 148.95314,
      "alt": 36000,
      "spd": 390,
      "ts": 1765080490,
      "hd": 288
    },
    {
      "lat": -33.355934,
      "lng": 149.019791,
      "alt": 36000,
      "spd": 391,
      "ts": 1765080457,
      "hd": 288
    },
    {
      "lat": -33.373577,
      "lng": 149.081894,
      "alt": 36000,
      "spd": 392,
      "ts": 1765080427,
      "hd": 288
    },
    {
      "lat": -33.392212,
      "lng": 149.147858,
      "alt": 36000,
      "spd": 393,
      "ts": 1765080394,
      "hd": 288
    },
    {
      "lat": -33.411194,
      "lng": 149.21524,
      "alt": 36000,
      "spd": 389,
      "ts": 1765080362,
      "hd": 288
    },
    {
      "lat": -33.428558,
      "lng": 149.277222,
      "alt": 35775,
      "spd": 386,
      "ts": 1765080331,
      "hd": 288
    },
    {
      "lat": -33.446686,
      "lng": 149.341766,
      "alt": 35475,
      "spd": 386,
      "ts": 1765080299,
      "hd": 288
    },
    {
      "lat": -33.464264,
      "lng": 149.404663,
      "alt": 35200,
      "spd": 384,
      "ts": 1765080268,
      "hd": 288
    },
    {
      "lat": -33.48251,
      "lng": 149.469894,
      "alt": 35000,
      "spd": 379,
      "ts": 1765080236,
      "hd": 288
    },
    {
      "lat": -33.499596,
      "lng": 149.531219,
      "alt": 34275,
      "spd": 384,
      "ts": 1765080205,
      "hd": 288
    },
    {
      "lat": -33.51796,
      "lng": 149.597092,
      "alt": 33450,
      "spd": 392,
      "ts": 1765080173,
      "hd": 288
    },
    {
      "lat": -33.536499,
      "lng": 149.663895,
      "alt": 32775,
      "spd": 397,
      "ts": 1765080140,
      "hd": 288
    },
    {
      "lat": -33.554436,
      "lng": 149.728714,
      "alt": 32225,
      "spd": 397,
      "ts": 1765080109,
      "hd": 288
    },
    {
      "lat": -33.573029,
      "lng": 149.795898,
      "alt": 31950,
      "spd": 389,
      "ts": 1765080077,
      "hd": 288
    },
    {
      "lat": -33.589909,
      "lng": 149.857056,
      "alt": 31800,
      "spd": 380,
      "ts": 1765080047,
      "hd": 288
    },
    {
      "lat": -33.607178,
      "lng": 149.920181,
      "alt": 31375,
      "spd": 373,
      "ts": 1765080014,
      "hd": 288
    },
    {
      "lat": -33.624775,
      "lng": 149.984497,
      "alt": 30325,
      "spd": 382,
      "ts": 1765079982,
      "hd": 288
    },
    {
      "lat": -33.64151,
      "lng": 150.045715,
      "alt": 29900,
      "spd": 377,
      "ts": 1765079952,
      "hd": 288
    },
    {
      "lat": -33.658813,
      "lng": 150.109009,
      "alt": 29425,
      "spd": 372,
      "ts": 1765079919,
      "hd": 287
    },
    {
      "lat": -33.676208,
      "lng": 150.173233,
      "alt": 28775,
      "spd": 367,
      "ts": 1765079887,
      "hd": 287
    },
    {
      "lat": -33.692551,
      "lng": 150.234726,
      "alt": 28100,
      "spd": 365,
      "ts": 1765079855,
      "hd": 287
    },
    {
      "lat": -33.709808,
      "lng": 150.296494,
      "alt": 27500,
      "spd": 360,
      "ts": 1765079823,
      "hd": 292
    },
    {
      "lat": -33.733196,
      "lng": 150.354599,
      "alt": 26575,
      "spd": 362,
      "ts": 1765079790,
      "hd": 296
    },
    {
      "lat": -33.756935,
      "lng": 150.412323,
      "alt": 25500,
      "spd": 366,
      "ts": 1765079759,
      "hd": 296
    },
    {
      "lat": -33.780716,
      "lng": 150.470261,
      "alt": 24500,
      "spd": 365,
      "ts": 1765079726,
      "hd": 296
    },
    {
      "lat": -33.805206,
      "lng": 150.530075,
      "alt": 23400,
      "spd": 364,
      "ts": 1765079694,
      "hd": 296
    },
    {
      "lat": -33.827545,
      "lng": 150.584717,
      "alt": 22425,
      "spd": 361,
      "ts": 1765079663,
      "hd": 296
    },
    {
      "lat": -33.851204,
      "lng": 150.642868,
      "alt": 21375,
      "spd": 358,
      "ts": 1765079631,
      "hd": 295
    },
    {
      "lat": -33.874714,
      "lng": 150.700607,
      "alt": 20150,
      "spd": 358,
      "ts": 1765079599,
      "hd": 295
    },
    {
      "lat": -33.896965,
      "lng": 150.75531,
      "alt": 18900,
      "spd": 359,
      "ts": 1765079568,
      "hd": 296
    },
    {
      "lat": -33.919357,
      "lng": 150.810303,
      "alt": 17775,
      "spd": 355,
      "ts": 1765079537,
      "hd": 296
    },
    {
      "lat": -33.942215,
      "lng": 150.866089,
      "alt": 16600,
      "spd": 349,
      "ts": 1765079506,
      "hd": 296
    },
    {
      "lat": -33.964142,
      "lng": 150.919769,
      "alt": 15625,
      "spd": 337,
      "ts": 1765079475,
      "hd": 295
    },
    {
      "lat": -33.965561,
      "lng": 150.923401,
      "alt": 15575,
      "spd": 335,
      "ts": 1765079473,
      "hd": 295
    },
    {
      "lat": -33.966888,
      "lng": 150.926758,
      "alt": 15550,
      "spd": 333,
      "ts": 1765079470,
      "hd": 295
    },
    {
      "lat": -33.968124,
      "lng": 150.929947,
      "alt": 15525,
      "spd": 332,
      "ts": 1765079468,
      "hd": 294
    },
    {
      "lat": -33.969543,
      "lng": 150.933594,
      "alt": 15500,
      "spd": 328,
      "ts": 1765079466,
      "hd": 294
    },
    {
      "lat": -33.97089,
      "lng": 150.937042,
      "alt": 15475,
      "spd": 326,
      "ts": 1765079464,
      "hd": 294
    },
    {
      "lat": -33.972153,
      "lng": 150.94043,
      "alt": 15450,
      "spd": 324,
      "ts": 1765079462,
      "hd": 294
    },
    {
      "lat": -33.973591,
      "lng": 150.944244,
      "alt": 15400,
      "spd": 322,
      "ts": 1765079460,
      "hd": 294
    },
    {
      "lat": -33.974808,
      "lng": 150.947433,
      "alt": 15375,
      "spd": 320,
      "ts": 1765079458,
      "hd": 294
    },
    {
      "lat": -33.976009,
      "lng": 150.950607,
      "alt": 15350,
      "spd": 318,
      "ts": 1765079456,
      "hd": 294
    },
    {
      "lat": -33.977692,
      "lng": 150.955063,
      "alt": 15300,
      "spd": 317,
      "ts": 1765079453,
      "hd": 294
    },
    {
      "lat": -33.978943,
      "lng": 150.95816,
      "alt": 15250,
      "spd": 315,
      "ts": 1765079451,
      "hd": 296
    },
    {
      "lat": -33.980526,
      "lng": 150.961884,
      "alt": 15175,
      "spd": 314,
      "ts": 1765079449,
      "hd": 298
    },
    {
      "lat": -33.981876,
      "lng": 150.964798,
      "alt": 15125,
      "spd": 314,
      "ts": 1765079447,
      "hd": 301
    },
    {
      "lat": -33.98378,
      "lng": 150.968399,
      "alt": 15025,
      "spd": 316,
      "ts": 1765079444,
      "hd": 304
    },
    {
      "lat": -33.9856,
      "lng": 150.971497,
      "alt": 14950,
      "spd": 316,
      "ts": 1765079442,
      "hd": 307
    },
    {
      "lat": -33.987461,
      "lng": 150.974182,
      "alt": 14850,
      "spd": 318,
      "ts": 1765079440,
      "hd": 312
    },
    {
      "lat": -33.989418,
      "lng": 150.976807,
      "alt": 14775,
      "spd": 318,
      "ts": 1765079438,
      "hd": 313
    },
    {
      "lat": -33.99184,
      "lng": 150.979675,
      "alt": 14675,
      "spd": 320,
      "ts": 1765079436,
      "hd": 318
    },
    {
      "lat": -34.030609,
      "lng": 151.012238,
      "alt": 13375,
      "spd": 318,
      "ts": 1765079404,
      "hd": 326
    },
    {
      "lat": -34.070068,
      "lng": 151.044067,
      "alt": 12025,
      "spd": 312,
      "ts": 1765079372,
      "hd": 325
    },
    {
      "lat": -34.087456,
      "lng": 151.058182,
      "alt": 11500,
      "spd": 305,
      "ts": 1765079357,
      "hd": 325
    },
    {
      "lat": -34.102539,
      "lng": 151.070541,
      "alt": 11075,
      "spd": 299,
      "ts": 1765079344,
      "hd": 325
    },
    {
      "lat": -34.116669,
      "lng": 151.082184,
      "alt": 10775,
      "spd": 289,
      "ts": 1765079332,
      "hd": 325
    },
    {
      "lat": -34.130585,
      "lng": 151.093735,
      "alt": 10525,
      "spd": 274,
      "ts": 1765079319,
      "hd": 325
    },
    {
      "lat": -34.13269,
      "lng": 151.095413,
      "alt": 10475,
      "spd": 272,
      "ts": 1765079317,
      "hd": 325
    },
    {
      "lat": -34.134846,
      "lng": 151.097198,
      "alt": 10425,
      "spd": 270,
      "ts": 1765079314,
      "hd": 325
    },
    {
      "lat": -34.136948,
      "lng": 151.098892,
      "alt": 10375,
      "spd": 269,
      "ts": 1765079312,
      "hd": 325
    },
    {
      "lat": -34.139084,
      "lng": 151.100632,
      "alt": 10300,
      "spd": 268,
      "ts": 1765079310,
      "hd": 326
    },
    {
      "lat": -34.141457,
      "lng": 151.102585,
      "alt": 10200,
      "spd": 267,
      "ts": 1765079308,
      "hd": 326
    },
    {
      "lat": -34.143833,
      "lng": 151.104462,
      "alt": 10125,
      "spd": 266,
      "ts": 1765079306,
      "hd": 326
    },
    {
      "lat": -34.14592,
      "lng": 151.106125,
      "alt": 10050,
      "spd": 266,
      "ts": 1765079304,
      "hd": 326
    },
    {
      "lat": -34.148071,
      "lng": 151.107864,
      "alt": 9975,
      "spd": 264,
      "ts": 1765079302,
      "hd": 326
    },
    {
      "lat": -34.150581,
      "lng": 151.109848,
      "alt": 9875,
      "spd": 264,
      "ts": 1765079299,
      "hd": 326
    },
    {
      "lat": -34.15221,
      "lng": 151.11116,
      "alt": 9825,
      "spd": 262,
      "ts": 1765079297,
      "hd": 326
    },
    {
      "lat": -34.154819,
      "lng": 151.113342,
      "alt": 9725,
      "spd": 261,
      "ts": 1765079295,
      "hd": 325
    },
    {
      "lat": -34.156914,
      "lng": 151.115112,
      "alt": 9650,
      "spd": 260,
      "ts": 1765079293,
      "hd": 323
    },
    {
      "lat": -34.158371,
      "lng": 151.11644,
      "alt": 9600,
      "spd": 259,
      "ts": 1765079291,
      "hd": 322
    },
    {
      "lat": -34.160431,
      "lng": 151.118454,
      "alt": 9500,
      "spd": 256,
      "ts": 1765079289,
      "hd": 317
    },
    {
      "lat": -34.162174,
      "lng": 151.120438,
      "alt": 9450,
      "spd": 254,
      "ts": 1765079287,
      "hd": 313
    },
    {
      "lat": -34.164185,
      "lng": 151.123108,
      "alt": 9350,
      "spd": 251,
      "ts": 1765079285,
      "hd": 309
    },
    {
      "lat": -34.16534,
      "lng": 151.124786,
      "alt": 9300,
      "spd": 249,
      "ts": 1765079283,
      "hd": 305
    },
    {
      "lat": -34.166828,
      "lng": 151.127411,
      "alt": 9225,
      "spd": 247,
      "ts": 1765079281,
      "hd": 301
    },
    {
      "lat": -34.168179,
      "lng": 151.13028,
      "alt": 9125,
      "spd": 246,
      "ts": 1765079278,
      "hd": 297
    },
    {
      "lat": -34.169174,
      "lng": 151.132645,
      "alt": 9050,
      "spd": 243,
      "ts": 1765079276,
      "hd": 292
    },
    {
      "lat": -34.170044,
      "lng": 151.135162,
      "alt": 8975,
      "spd": 242,
      "ts": 1765079274,
      "hd": 289
    },
    {
      "lat": -34.170971,
      "lng": 151.138397,
      "alt": 8850,
      "spd": 242,
      "ts": 1765079272,
      "hd": 286
    },
    {
      "lat": -34.171577,
      "lng": 151.141037,
      "alt": 8775,
      "spd": 242,
      "ts": 1765079270,
      "hd": 283
    },
    {
      "lat": -34.172104,
      "lng": 151.143738,
      "alt": 8650,
      "spd": 241,
      "ts": 1765079268,
      "hd": 280
    },
    {
      "lat": -34.172417,
      "lng": 151.146072,
      "alt": 8550,
      "spd": 243,
      "ts": 1765079266,
      "hd": 277
    },
    {
      "lat": -34.172745,
      "lng": 151.149628,
      "alt": 8400,
      "spd": 243,
      "ts": 1765079264,
      "hd": 274
    },
    {
      "lat": -34.172882,
      "lng": 151.15242,
      "alt": 8275,
      "spd": 245,
      "ts": 1765079262,
      "hd": 271
    },
    {
      "lat": -34.172882,
      "lng": 151.155167,
      "alt": 8175,
      "spd": 246,
      "ts": 1765079260,
      "hd": 268
    },
    {
      "lat": -34.172745,
      "lng": 151.157806,
      "alt": 8075,
      "spd": 247,
      "ts": 1765079257,
      "hd": 265
    },
    {
      "lat": -34.172516,
      "lng": 151.160721,
      "alt": 7975,
      "spd": 248,
      "ts": 1765079255,
      "hd": 260
    },
    {
      "lat": -34.172134,
      "lng": 151.163239,
      "alt": 7875,
      "spd": 250,
      "ts": 1765079253,
      "hd": 256
    },
    {
      "lat": -34.171436,
      "lng": 151.166611,
      "alt": 7750,
      "spd": 250,
      "ts": 1765079251,
      "hd": 252
    },
    {
      "lat": -34.170731,
      "lng": 151.169189,
      "alt": 7650,
      "spd": 252,
      "ts": 1765079249,
      "hd": 248
    },
    {
      "lat": -34.169903,
      "lng": 151.171753,
      "alt": 7550,
      "spd": 254,
      "ts": 1765079247,
      "hd": 245
    },
    {
      "lat": -34.168808,
      "lng": 151.174515,
      "alt": 7450,
      "spd": 254,
      "ts": 1765079245,
      "hd": 242
    },
    {
      "lat": -34.167667,
      "lng": 151.177032,
      "alt": 7350,
      "spd": 256,
      "ts": 1765079243,
      "hd": 239
    },
    {
      "lat": -34.166317,
      "lng": 151.179718,
      "alt": 7225,
      "spd": 257,
      "ts": 1765079241,
      "hd": 236
    },
    {
      "lat": -34.164825,
      "lng": 151.182251,
      "alt": 7125,
      "spd": 259,
      "ts": 1765079238,
      "hd": 232
    },
    {
      "lat": -34.163197,
      "lng": 151.184692,
      "alt": 7025,
      "spd": 261,
      "ts": 1765079236,
      "hd": 228
    },
    {
      "lat": -34.161522,
      "lng": 151.186981,
      "alt": 6925,
      "spd": 262,
      "ts": 1765079234,
      "hd": 225
    },
    {
      "lat": -34.159798,
      "lng": 151.189041,
      "alt": 6825,
      "spd": 263,
      "ts": 1765079232,
      "hd": 222
    },
    {
      "lat": -34.157936,
      "lng": 151.191162,
      "alt": 6725,
      "spd": 264,
      "ts": 1765079230,
      "hd": 219
    },
    {
      "lat": -34.156082,
      "lng": 151.192947,
      "alt": 6650,
      "spd": 266,
      "ts": 1765079228,
      "hd": 216
    },
    {
      "lat": -34.154022,
      "lng": 151.194794,
      "alt": 6550,
      "spd": 266,
      "ts": 1765079226,
      "hd": 213
    },
    {
      "lat": -34.151558,
      "lng": 151.196762,
      "alt": 6450,
      "spd": 267,
      "ts": 1765079224,
      "hd": 211
    },
    {
      "lat": -34.149094,
      "lng": 151.198486,
      "alt": 6325,
      "spd": 268,
      "ts": 1765079222,
      "hd": 208
    },
    {
      "lat": -34.146744,
      "lng": 151.199951,
      "alt": 6225,
      "spd": 269,
      "ts": 1765079219,
      "hd": 205
    },
    {
      "lat": -34.14439,
      "lng": 151.201233,
      "alt": 6125,
      "spd": 272,
      "ts": 1765079217,
      "hd": 201
    },
    {
      "lat": -34.142063,
      "lng": 151.202316,
      "alt": 6000,
      "spd": 274,
      "ts": 1765079215,
      "hd": 198
    },
    {
      "lat": -34.139465,
      "lng": 151.203369,
      "alt": 5875,
      "spd": 275,
      "ts": 1765079213,
      "hd": 195
    },
    {
      "lat": -34.137177,
      "lng": 151.204147,
      "alt": 5775,
      "spd": 278,
      "ts": 1765079211,
      "hd": 192
    },
    {
      "lat": -34.134476,
      "lng": 151.204834,
      "alt": 5650,
      "spd": 280,
      "ts": 1765079209,
      "hd": 188
    },
    {
      "lat": -34.131866,
      "lng": 151.205292,
      "alt": 5550,
      "spd": 281,
      "ts": 1765079207,
      "hd": 185
    },
    {
      "lat": -34.129211,
      "lng": 151.205566,
      "alt": 5450,
      "spd": 283,
      "ts": 1765079205,
      "hd": 182
    },
    {
      "lat": -34.126141,
      "lng": 151.205627,
      "alt": 5325,
      "spd": 284,
      "ts": 1765079203,
      "hd": 178
    },
    {
      "lat": -34.122894,
      "lng": 151.205505,
      "alt": 5225,
      "spd": 283,
      "ts": 1765079200,
      "hd": 175
    },
    {
      "lat": -34.114838,
      "lng": 151.204056,
      "alt": 4975,
      "spd": 284,
      "ts": 1765079194,
      "hd": 166
    },
    {
      "lat": -34.104263,
      "lng": 151.200592,
      "alt": 4650,
      "spd": 280,
      "ts": 1765079186,
      "hd": 164
    },
    {
      "lat": -34.096985,
      "lng": 151.198166,
      "alt": 4500,
      "spd": 276,
      "ts": 1765079180,
      "hd": 164
    },
    {
      "lat": -34.086945,
      "lng": 151.194763,
      "alt": 4325,
      "spd": 262,
      "ts": 1765079171,
      "hd": 164
    },
    {
      "lat": -34.077164,
      "lng": 151.191437,
      "alt": 3975,
      "spd": 257,
      "ts": 1765079163,
      "hd": 164
    },
    {
      "lat": -34.074703,
      "lng": 151.190643,
      "alt": 3875,
      "spd": 257,
      "ts": 1765079161,
      "hd": 164
    },
    {
      "lat": -34.072357,
      "lng": 151.189865,
      "alt": 3775,
      "spd": 257,
      "ts": 1765079159,
      "hd": 164
    },
    {
      "lat": -34.069393,
      "lng": 151.188873,
      "alt": 3675,
      "spd": 255,
      "ts": 1765079157,
      "hd": 164
    },
    {
      "lat": -34.067581,
      "lng": 151.188293,
      "alt": 3600,
      "spd": 255,
      "ts": 1765079154,
      "hd": 165
    },
    {
      "lat": -34.064987,
      "lng": 151.187454,
      "alt": 3500,
      "spd": 255,
      "ts": 1765079152,
      "hd": 165
    },
    {
      "lat": -34.062786,
      "lng": 151.186752,
      "alt": 3375,
      "spd": 255,
      "ts": 1765079150,
      "hd": 165
    },
    {
      "lat": -34.06004,
      "lng": 151.185898,
      "alt": 3250,
      "spd": 256,
      "ts": 1765079148,
      "hd": 165
    },
    {
      "lat": -34.057663,
      "lng": 151.185165,
      "alt": 3150,
      "spd": 254,
      "ts": 1765079146,
      "hd": 165
    },
    {
      "lat": -34.055511,
      "lng": 151.184494,
      "alt": 3075,
      "spd": 254,
      "ts": 1765079144,
      "hd": 164
    },
    {
      "lat": -34.053055,
      "lng": 151.183716,
      "alt": 3000,
      "spd": 252,
      "ts": 1765079142,
      "hd": 164
    },
    {
      "lat": -34.050262,
      "lng": 151.1828,
      "alt": 2900,
      "spd": 251,
      "ts": 1765079140,
      "hd": 165
    },
    {
      "lat": -34.047592,
      "lng": 151.181915,
      "alt": 2825,
      "spd": 249,
      "ts": 1765079137,
      "hd": 164
    },
    {
      "lat": -34.045944,
      "lng": 151.181351,
      "alt": 2775,
      "spd": 247,
      "ts": 1765079135,
      "hd": 164
    },
    {
      "lat": -34.043652,
      "lng": 151.180634,
      "alt": 2700,
      "spd": 245,
      "ts": 1765079133,
      "hd": 163
    },
    {
      "lat": -34.041412,
      "lng": 151.17984,
      "alt": 2625,
      "spd": 244,
      "ts": 1765079131,
      "hd": 163
    },
    {
      "lat": -34.038765,
      "lng": 151.178909,
      "alt": 2575,
      "spd": 241,
      "ts": 1765079129,
      "hd": 163
    },
    {
      "lat": -34.03653,
      "lng": 151.178162,
      "alt": 2525,
      "spd": 239,
      "ts": 1765079127,
      "hd": 164
    },
    {
      "lat": -34.034546,
      "lng": 151.177536,
      "alt": 2475,
      "spd": 237,
      "ts": 1765079125,
      "hd": 166
    },
    {
      "lat": -34.032341,
      "lng": 151.17691,
      "alt": 2425,
      "spd": 234,
      "ts": 1765079123,
      "hd": 169
    },
    {
      "lat": -34.029778,
      "lng": 151.176392,
      "alt": 2375,
      "spd": 231,
      "ts": 1765079121,
      "hd": 173
    },
    {
      "lat": -34.027725,
      "lng": 151.176132,
      "alt": 2350,
      "spd": 229,
      "ts": 1765079119,
      "hd": 176
    },
    {
      "lat": -34.025448,
      "lng": 151.175995,
      "alt": 2300,
      "spd": 226,
      "ts": 1765079117,
      "hd": 179
    },
    {
      "lat": -34.023285,
      "lng": 151.176025,
      "alt": 2275,
      "spd": 224,
      "ts": 1765079115,
      "hd": 182
    },
    {
      "lat": -34.017059,
      "lng": 151.17659,
      "alt": 2125,
      "spd": 216,
      "ts": 1765079108,
      "hd": 184
    },
    {
      "lat": -34.008736,
      "lng": 151.177368,
      "alt": 2000,
      "spd": 202,
      "ts": 1765079100,
      "hd": 184
    },
    {
      "lat": -34.002964,
      "lng": 151.177826,
      "alt": 1950,
      "spd": 194,
      "ts": 1765079093,
      "hd": 183
    },
    {
      "lat": -33.99575,
      "lng": 151.178452,
      "alt": 1825,
      "spd": 185,
      "ts": 1765079085,
      "hd": 184
    },
    {
      "lat": -33.993622,
      "lng": 151.178604,
      "alt": 1800,
      "spd": 183,
      "ts": 1765079083,
      "hd": 184
    },
    {
      "lat": -33.99184,
      "lng": 151.178802,
      "alt": 1775,
      "spd": 181,
      "ts": 1765079081,
      "hd": 184
    },
    {
      "lat": -33.99007,
      "lng": 151.17897,
      "alt": 1750,
      "spd": 179,
      "ts": 1765079079,
      "hd": 184
    },
    {
      "lat": -33.988396,
      "lng": 151.179138,
      "alt": 1725,
      "spd": 177,
      "ts": 1765079077,
      "hd": 184
    },
    {
      "lat": -33.986893,
      "lng": 151.179276,
      "alt": 1700,
      "spd": 175,
      "ts": 1765079075,
      "hd": 185
    },
    {
      "lat": -33.98497,
      "lng": 151.179504,
      "alt": 1650,
      "spd": 174,
      "ts": 1765079072,
      "hd": 185
    },
    {
      "lat": -33.983276,
      "lng": 151.179672,
      "alt": 1625,
      "spd": 170,
      "ts": 1765079070,
      "hd": 185
    },
    {
      "lat": -33.981537,
      "lng": 151.179886,
      "alt": 1575,
      "spd": 170,
      "ts": 1765079068,
      "hd": 185
    },
    {
      "lat": -33.980072,
      "lng": 151.180054,
      "alt": 1550,
      "spd": 168,
      "ts": 1765079066,
      "hd": 186
    },
    {
      "lat": -33.978516,
      "lng": 151.180283,
      "alt": 1500,
      "spd": 167,
      "ts": 1765079064,
      "hd": 186
    },
    {
      "lat": -33.976711,
      "lng": 151.180511,
      "alt": 1450,
      "spd": 166,
      "ts": 1765079062,
      "hd": 186
    },
    {
      "lat": -33.975174,
      "lng": 151.180695,
      "alt": 1400,
      "spd": 165,
      "ts": 1765079060,
      "hd": 186
    },
    {
      "lat": -33.973637,
      "lng": 151.180862,
      "alt": 1350,
      "spd": 165,
      "ts": 1765079058,
      "hd": 185
    },
    {
      "lat": -33.972382,
      "lng": 151.181015,
      "alt": 1300,
      "spd": 163,
      "ts": 1765079056,
      "hd": 183
    },
    {
      "lat": -33.970516,
      "lng": 151.181091,
      "alt": 1225,
      "spd": 162,
      "ts": 1765079054,
      "hd": 181
    },
    {
      "lat": -33.969074,
      "lng": 151.181091,
      "alt": 1150,
      "spd": 161,
      "ts": 1765079052,
      "hd": 178
    },
    {
      "lat": -33.967678,
      "lng": 151.18103,
      "alt": 1075,
      "spd": 159,
      "ts": 1765079050,
      "hd": 176
    },
    {
      "lat": -33.965927,
      "lng": 151.180893,
      "alt": 975,
      "spd": 159,
      "ts": 1765079048,
      "hd": 173
    },
    {
      "lat": -33.964466,
      "lng": 151.180634,
      "alt": 875,
      "spd": 160,
      "ts": 1765079045,
      "hd": 170
    },
    {
      "lat": -33.962978,
      "lng": 151.180344,
      "alt": 775,
      "spd": 159,
      "ts": 1765079043,
      "hd": 168
    },
    {
      "lat": -33.961487,
      "lng": 151.179947,
      "alt": 675,
      "spd": 160,
      "ts": 1765079041,
      "hd": 166
    },
    {
      "lat": -33.95842,
      "lng": 151.179108,
      "alt": 475,
      "spd": 164,
      "ts": 1765079037,
      "hd": 167
    },
    {
      "lat": -33.952194,
      "lng": 151.177475,
      "alt": 100,
      "spd": 172,
      "ts": 1765079029,
      "hd": 167
    },
    {
      "lat": -33.947342,
      "lng": 151.176254,
      "alt": 50,
      "spd": 158,
      "ts": 1765079022,
      "hd": 167
    },
    {
      "lat": -33.941711,
      "lng": 151.174789,
      "alt": 75,
      "spd": 132,
      "ts": 1765079014,
      "hd": 167
    },
    {
      "lat": -33.937557,
      "lng": 151.173706,
      "alt": 75,
      "spd": 109,
      "ts": 1765079007,
      "hd": 167
    },
    {
      "lat": -33.93465,
      "lng": 151.172974,
      "alt": 0,
      "spd": 84,
      "ts": 1765079000,
      "hd": 168
    },
    {
      "lat": -33.934113,
      "lng": 151.172821,
      "alt": 0,
      "spd": 80,
      "ts": 1765078999,
      "hd": 168
    },
    {
      "lat": -33.933746,
      "lng": 151.172729,
      "alt": 0,
      "spd": 76,
      "ts": 1765078998,
      "hd": 168
    },
    {
      "lat": -33.932911,
      "lng": 151.172516,
      "alt": 0,
      "spd": 65,
      "ts": 1765078995,
      "hd": 168
    },
    {
      "lat": -33.93259,
      "lng": 151.172424,
      "alt": 0,
      "spd": 61,
      "ts": 1765078994,
      "hd": 168
    },
    {
      "lat": -33.931641,
      "lng": 151.17218,
      "alt": 0,
      "spd": 49,
      "ts": 1765078990,
      "hd": 168
    },
    {
      "lat": -33.931393,
      "lng": 151.172119,
      "alt": 0,
      "spd": 45,
      "ts": 1765078989,
      "hd": 168
    },
    {
      "lat": -33.930851,
      "lng": 151.171967,
      "alt": 0,
      "spd": 32,
      "ts": 1765078986,
      "hd": 168
    },
    {
      "lat": -33.930553,
      "lng": 151.171906,
      "alt": 0,
      "spd": 18,
      "ts": 1765078985,
      "hd": 168
    },
    {
      "lat": -33.930347,
      "lng": 151.171844,
      "alt": 0,
      "spd": 15,
      "ts": 1765078981,
      "hd": 168
    },
    {
      "lat": -33.930111,
      "lng": 151.171783,
      "alt": 0,
      "spd": 13,
      "ts": 1765078978,
      "hd": 163
    },
    {
      "lat": -33.929741,
      "lng": 151.171692,
      "alt": 0,
      "spd": 10,
      "ts": 1765078970,
      "hd": 129
    },
    {
      "lat": -33.929512,
      "lng": 151.171387,
      "alt": 0,
      "spd": 9,
      "ts": 1765078962,
      "hd": 84
    },
    {
      "lat": -33.929535,
      "lng": 151.171112,
      "alt": 0,
      "spd": 8,
      "ts": 1765078958,
      "hd": 78
    },
    {
      "lat": -33.929588,
      "lng": 151.170837,
      "alt": 0,
      "spd": 7,
      "ts": 1765078950,
      "hd": 75
    },
    {
      "lat": -33.929634,
      "lng": 151.170563,
      "alt": 0,
      "spd": 5,
      "ts": 1765078943,
      "hd": 75
    },
    {
      "lat": -33.92968,
      "lng": 151.170334,
      "alt": 0,
      "spd": 2,
      "ts": 1765078930,
      "hd": 75
    },
    {
      "lat": -33.929726,
      "lng": 151.170105,
      "alt": 0,
      "spd": 4,
      "ts": 1765078792,
      "hd": 75
    },
    {
      "lat": -33.92976,
      "lng": 151.169891,
      "alt": 0,
      "spd": 6,
      "ts": 1765078784,
      "hd": 73
    },
    {
      "lat": -33.929821,
      "lng": 151.169556,
      "alt": 0,
      "spd": 8,
      "ts": 1765078776,
      "hd": 56
    },
    {
      "lat": -33.929913,
      "lng": 151.169312,
      "alt": 0,
      "spd": 8,
      "ts": 1765078771,
      "hd": 30
    },
    {
      "lat": -33.930191,
      "lng": 151.169083,
      "alt": 0,
      "spd": 7,
      "ts": 1765078760,
      "hd": 357
    },
    {
      "lat": -33.930412,
      "lng": 151.169067,
      "alt": 0,
      "spd": 5,
      "ts": 1765078752,
      "hd": 348
    },
    {
      "lat": -33.930634,
      "lng": 151.169128,
      "alt": 0,
      "spd": 3,
      "ts": 1765078741,
      "hd": 348
    },
    {
      "lat": -33.93084,
      "lng": 151.169189,
      "alt": 0,
      "spd": 4,
      "ts": 1765078670,
      "hd": 348
    },
    {
      "lat": -33.931046,
      "lng": 151.16922,
      "alt": 0,
      "spd": 9,
      "ts": 1765078663,
      "hd": 348
    },
    {
      "lat": -33.931389,
      "lng": 151.169327,
      "alt": 0,
      "spd": 10,
      "ts": 1765078655,
      "hd": 348
    },
    {
      "lat": -33.931625,
      "lng": 151.169388,
      "alt": 0,
      "spd": 10,
      "ts": 1765078650,
      "hd": 348
    },
    {
      "lat": -33.93187,
      "lng": 151.169449,
      "alt": 0,
      "spd": 12,
      "ts": 1765078645,
      "hd": 348
    },
    {
      "lat": -33.932098,
      "lng": 151.169495,
      "alt": 0,
      "spd": 13,
      "ts": 1765078641,
      "hd": 343
    },
    {
      "lat": -33.932472,
      "lng": 151.169617,
      "alt": 0,
      "spd": 12,
      "ts": 1765078634,
      "hd": 326
    },
    {
      "lat": -33.932705,
      "lng": 151.169769,
      "alt": 0,
      "spd": 11,
      "ts": 1765078629,
      "hd": 312
    },
    {
      "lat": -33.932854,
      "lng": 151.169983,
      "alt": 0,
      "spd": 12,
      "ts": 1765078625,
      "hd": 312
    },
    {
      "lat": -33.933022,
      "lng": 151.170212,
      "alt": 0,
      "spd": 13,
      "ts": 1765078622,
      "hd": 320
    },
    {
      "lat": -33.933254,
      "lng": 151.170441,
      "alt": 0,
      "spd": 13,
      "ts": 1765078615,
      "hd": 334
    },
    {
      "lat": -33.933521,
      "lng": 151.170624,
      "alt": 0,
      "spd": 13,
      "ts": 1765078611,
      "hd": 343
    },
    {
      "lat": -33.933849,
      "lng": 151.170731,
      "alt": 0,
      "spd": 14,
      "ts": 1765078605,
      "hd": 348
    },
    {
      "lat": -33.934299,
      "lng": 151.170837,
      "alt": 0,
      "spd": 14,
      "ts": 1765078597,
      "hd": 348
    },
    {
      "lat": -33.934628,
      "lng": 151.170929,
      "alt": 0,
      "spd": 13,
      "ts": 1765078592,
      "hd": 348
    },
    {
      "lat": -33.934872,
      "lng": 151.17099,
      "alt": 0,
      "spd": 12,
      "ts": 1765078588,
      "hd": 348
    },
    {
      "lat": -33.93512,
      "lng": 151.171066,
      "alt": 0,
      "spd": 12,
      "ts": 1765078584,
      "hd": 345
    },
    {
      "lat": -33.935543,
      "lng": 151.171173,
      "alt": 0,
      "spd": 11,
      "ts": 1765078576,
      "hd": 348
    },
    {
      "lat": -33.935802,
      "lng": 151.171234,
      "alt": 0,
      "spd": 11,
      "ts": 1765078570,
      "hd": 348
    },
    {
      "lat": -33.936161,
      "lng": 151.171326,
      "alt": 0,
      "spd": 14,
      "ts": 1765078563,
      "hd": 348
    },
    {
      "lat": -33.936382,
      "lng": 151.171387,
      "alt": 0,
      "spd": 16,
      "ts": 1765078560,
      "hd": 348
    },
    {
      "lat": -33.936596,
      "lng": 151.171448,
      "alt": 0,
      "spd": 17,
      "ts": 1765078558,
      "hd": 348
    },
    {
      "lat": -33.936989,
      "lng": 151.171539,
      "alt": 0,
      "spd": 17,
      "ts": 1765078552,
      "hd": 345
    },
    {
      "lat": -33.937431,
      "lng": 151.171661,
      "alt": 0,
      "spd": 16,
      "ts": 1765078548,
      "hd": 348
    },
    {
      "lat": -33.937862,
      "lng": 151.171768,
      "alt": 0,
      "spd": 15,
      "ts": 1765078541,
      "hd": 348
    },
    {
      "lat": -33.938152,
      "lng": 151.171844,
      "alt": 0,
      "spd": 14,
      "ts": 1765078536,
      "hd": 345
    },
    {
      "lat": -33.938381,
      "lng": 151.171906,
      "alt": 0,
      "spd": 14,
      "ts": 1765078533,
      "hd": 345
    },
    {
      "lat": -33.938633,
      "lng": 151.171967,
      "alt": 0,
      "spd": 13,
      "ts": 1765078529,
      "hd": 345
    },
    {
      "lat": -33.938873,
      "lng": 151.172043,
      "alt": 0,
      "spd": 12,
      "ts": 1765078524,
      "hd": 348
    },
    {
      "lat": -33.939079,
      "lng": 151.172119,
      "alt": 0,
      "spd": 11,
      "ts": 1765078520,
      "hd": 354
    },
    {
      "lat": -33.939316,
      "lng": 151.17218,
      "alt": 0,
      "spd": 11,
      "ts": 1765078516,
      "hd": 14
    },
    {
      "lat": -33.939537,
      "lng": 151.17215,
      "alt": 0,
      "spd": 11,
      "ts": 1765078511,
      "hd": 42
    },
    {
      "lat": -33.939781,
      "lng": 151.171936,
      "alt": 0,
      "spd": 9,
      "ts": 1765078505,
      "hd": 70
    },
    {
      "lat": -33.939869,
      "lng": 151.171585,
      "alt": 0,
      "spd": 11,
      "ts": 1765078498,
      "hd": 75
    },
    {
      "lat": -33.939995,
      "lng": 151.171051,
      "alt": 0,
      "spd": 14,
      "ts": 1765078491,
      "hd": 73
    },
    {
      "lat": -33.940121,
      "lng": 151.170532,
      "alt": 0,
      "spd": 13,
      "ts": 1765078484,
      "hd": 75
    },
    {
      "lat": -33.940178,
      "lng": 151.170242,
      "alt": 0,
      "spd": 12,
      "ts": 1765078480,
      "hd": 73
    },
    {
      "lat": -33.940235,
      "lng": 151.170013,
      "alt": 0,
      "spd": 12,
      "ts": 1765078477,
      "hd": 73
    },
    {
      "lat": -33.940292,
      "lng": 151.169739,
      "alt": 0,
      "spd": 11,
      "ts": 1765078472,
      "hd": 73
    },
    {
      "lat": -33.940353,
      "lng": 151.16951,
      "alt": 0,
      "spd": 10,
      "ts": 1765078468,
      "hd": 73
    },
    {
      "lat": -33.940399,
      "lng": 151.169296,
      "alt": 0,
      "spd": 10,
      "ts": 1765078464,
      "hd": 73
    },
    {
      "lat": -33.940525,
      "lng": 151.168839,
      "alt": 0,
      "spd": 10,
      "ts": 1765078455,
      "hd": 84
    },
    {
      "lat": -33.940598,
      "lng": 151.168503,
      "alt": 0,
      "spd": 10,
      "ts": 1765078449,
      "hd": 112
    },
    {
      "lat": -33.940468,
      "lng": 151.168091,
      "alt": 0,
      "spd": 8,
      "ts": 1765078440,
      "hd": 157
    },
    {
      "lat": -33.940178,
      "lng": 151.167984,
      "alt": 0,
      "spd": 6,
      "ts": 1765078431,
      "hd": 163
    },
    {
      "lat": -33.939957,
      "lng": 151.167908,
      "alt": 0,
      "spd": 4,
      "ts": 1765078421,
      "hd": 163
    },
    {
      "lat": -33.939754,
      "lng": 151.167847,
      "alt": 0,
      "spd": 0,
      "ts": 1765078405,
      "hd": 163
    },
    {
      "lat": -33.939526,
      "lng": 151.16777,
      "alt": 0,
      "spd": 0,
      "ts": 1765078126,
      "hd": 163
    },
    {
      "lat": -33.939316,
      "lng": 151.167694,
      "alt": 0,
      "spd": 3,
      "ts": 1765078107,
      "hd": 163
    },
    {
      "lat": -33.939095,
      "lng": 151.167633,
      "alt": 0,
      "spd": 2,
      "ts": 1765078088,
      "hd": 163
    },
    {
      "lat": -33.938885,
      "lng": 151.167542,
      "alt": 0,
      "spd": 3,
      "ts": 1765078071,
      "hd": 163
    },
    {
      "lat": -33.938663,
      "lng": 151.16745,
      "alt": 0,
      "spd": 3,
      "ts": 1765078051,
      "hd": 160
    },
    {
      "lat": -33.938427,
      "lng": 151.167374,
      "alt": 0,
      "spd": 2,
      "ts": 1765078029,
      "hd": 146
    },
    {
      "lat": -33.93821,
      "lng": 151.167175,
      "alt": 0,
      "spd": 0,
      "ts": 1765078006,
      "hd": 163
    },
    {
      "lat": -33.938004,
      "lng": 151.167053,
      "alt": 0,
      "spd": 2,
      "ts": 1765077957,
      "hd": 196
    },
    {
      "lat": -33.93821,
      "lng": 151.166855,
      "alt": 0,
      "spd": 3,
      "ts": 1765077937,
      "hd": 219
    },
    {
      "lat": -33.938198,
      "lng": 151.166641,
      "alt": 0,
      "spd": 3,
      "ts": 1765077922,
      "hd": 247
    },
    {
      "lat": -33.938187,
      "lng": 151.166412,
      "alt": 0,
      "spd": 3,
      "ts": 1765077909,
      "hd": 264
    },
    {
      "lat": -33.938259,
      "lng": 151.166199,
      "alt": 0,
      "spd": 3,
      "ts": 1765077892,
      "hd": 253
    },
    {
      "lat": -33.938408,
      "lng": 151.16597,
      "alt": 0,
      "spd": 1,
      "ts": 1765077846,
      "hd": 253
    }
  ],
  "firstTimestamp": 1765077846,
  "s": "yZCYjhjkf5XIunwmEFKr_mZcLEyDCWYeEEUX6uvJxWUQ93OQmpSDphILd5JUR2xV"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d67ea32 = R"(
{
  "identification": {
    "id": "3d67ea32",
    "row": 5744587383,
    "number": {
      "default": "LH1364",
      "alternative": null
    },
    "callsign": "DLH3LR"
  },
  "status": {
    "live": true,
    "text": "Delayed 13:05",
    "icon": "red",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "delayed",
        "color": "red",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765109120,
        "local": 1765112720
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "A321",
      "text": "Airbus A321-231"
    },
    "countryId": 83,
    "registration": "D-AIDJ",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/6/1715029_1762784666_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11896496",
          "copyright": "ronniesaphira",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/1028912_1756856070_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11830460",
          "copyright": "Bernd Borchert",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/534566_1757870121_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11842123",
          "copyright": "Alexander Lebedev",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/859666_1757320302_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11835143",
          "copyright": "Claus Seifert",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/1376445_1741367232_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11657812",
          "copyright": "Julian S.",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/6/1715029_1762784666.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11896496",
          "copyright": "ronniesaphira",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/1028912_1756856070.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11830460",
          "copyright": "Bernd Borchert",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/534566_1757870121.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11842123",
          "copyright": "Alexander Lebedev",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/859666_1757320302.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11835143",
          "copyright": "Claus Seifert",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/1376445_1741367232.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11657812",
          "copyright": "Julian S.",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1715029_1762784666.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11896496",
          "copyright": "ronniesaphira",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/1028912_1756856070.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11830460",
          "copyright": "Bernd Borchert",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/534566_1757870121.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11842123",
          "copyright": "Alexander Lebedev",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/859666_1757320302.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11835143",
          "copyright": "Claus Seifert",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1376445_1741367232.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11657812",
          "copyright": "Julian S.",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "3c648a"
  },
  "airline": {
    "name": "Lufthansa",
    "short": "Lufthansa",
    "code": {
      "iata": "LH",
      "icao": "DLH"
    },
    "url": "lufthansa-dlh"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Frankfurt Airport",
      "code": {
        "iata": "FRA",
        "icao": "EDDF"
      },
      "position": {
        "latitude": 50.037796,
        "longitude": 8.555783,
        "altitude": 364,
        "country": {
          "id": 83,
          "name": "Germany",
          "code": "DE",
          "codeLong": "DEU"
        },
        "region": {
          "city": "Frankfurt"
        }
      },
      "timezone": {
        "name": "Europe/Berlin",
        "offset": 3600,
        "offsetHours": "1:00",
        "abbr": "CET",
        "abbrName": "Central European Time",
        "isDst": false
      },
      "visible": true,
      "website": "https://www.frankfurt-airport.com/en.html",
      "info": {
        "terminal": "1",
        "baggage": null,
        "gate": "A18"
      }
    },
    "destination": {
      "name": "Krakow John Paul II International Airport",
      "code": {
        "iata": "KRK",
        "icao": "EPKK"
      },
      "position": {
        "latitude": 50.077728,
        "longitude": 19.78483,
        "altitude": 791,
        "country": {
          "id": 176,
          "name": "Poland",
          "code": "PL",
          "codeLong": "POL"
        },
        "region": {
          "city": "Krakow"
        }
      },
      "timezone": {
        "name": "Europe/Warsaw",
        "offset": 3600,
        "offsetHours": "1:00",
        "abbr": "CET",
        "abbrName": "Central European Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.krakowairport.pl/en",
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": null
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d65510d",
          "number": {
            "default": "LH1497"
          }
        },
        "airport": {
          "origin": {
            "name": "Faro Airport",
            "code": {
              "iata": "FAO",
              "icao": "LPFR"
            },
            "position": {
              "latitude": 37.015244,
              "longitude": -7.971661,
              "altitude": 18,
              "country": {
                "id": 177,
                "name": "Portugal",
                "code": "PT",
                "codeLong": "PRT"
              },
              "region": {
                "city": "Faro"
              }
            },
            "timezone": {
              "name": "Europe/Lisbon",
              "offset": 0,
              "offsetHours": "0:00",
              "abbr": "WET",
              "abbrName": "Western European Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.faro-airport.org/"
          },
          "destination": {
            "name": "Frankfurt Airport",
            "code": {
              "iata": "FRA",
              "icao": "EDDF"
            },
            "position": {
              "latitude": 50.037796,
              "longitude": 8.555783,
              "altitude": 364,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Frankfurt"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.frankfurt-airport.com/en.html"
          }
        },
        "time": {
          "real": {
            "departure": 1765029112
          }
        }
      },
      {
        "identification": {
          "id": "3d64d042",
          "number": {
            "default": "LH1496"
          }
        },
        "airport": {
          "origin": {
            "name": "Frankfurt Airport",
            "code": {
              "iata": "FRA",
              "icao": "EDDF"
            },
            "position": {
              "latitude": 50.037796,
              "longitude": 8.555783,
              "altitude": 364,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Frankfurt"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.frankfurt-airport.com/en.html"
          },
          "destination": {
            "name": "Faro Airport",
            "code": {
              "iata": "FAO",
              "icao": "LPFR"
            },
            "position": {
              "latitude": 37.015244,
              "longitude": -7.971661,
              "altitude": 18,
              "country": {
                "id": 177,
                "name": "Portugal",
                "code": "PT",
                "codeLong": "PRT"
              },
              "region": {
                "city": "Faro"
              }
            },
            "timezone": {
              "name": "Europe/Lisbon",
              "offset": 0,
              "offsetHours": "0:00",
              "abbr": "WET",
              "abbrName": "Western European Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.faro-airport.org/"
          }
        },
        "time": {
          "real": {
            "departure": 1765014557
          }
        }
      },
      {
        "identification": {
          "id": "3d649a77",
          "number": {
            "default": "LH75"
          }
        },
        "airport": {
          "origin": {
            "name": "Dusseldorf Airport",
            "code": {
              "iata": "DUS",
              "icao": "EDDL"
            },
            "position": {
              "latitude": 51.289452,
              "longitude": 6.766775,
              "altitude": 147,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Dusseldorf"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.duesseldorf-international.de/dus_en/"
          },
          "destination": {
            "name": "Frankfurt Airport",
            "code": {
              "iata": "FRA",
              "icao": "EDDF"
            },
            "position": {
              "latitude": 50.037796,
              "longitude": 8.555783,
              "altitude": 364,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Frankfurt"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.frankfurt-airport.com/en.html"
          }
        },
        "time": {
          "real": {
            "departure": 1765005893
          }
        }
      },
      {
        "identification": {
          "id": "3d64764e",
          "number": {
            "default": "LH72"
          }
        },
        "airport": {
          "origin": {
            "name": "Frankfurt Airport",
            "code": {
              "iata": "FRA",
              "icao": "EDDF"
            },
            "position": {
              "latitude": 50.037796,
              "longitude": 8.555783,
              "altitude": 364,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Frankfurt"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.frankfurt-airport.com/en.html"
          },
          "destination": {
            "name": "Dusseldorf Airport",
            "code": {
              "iata": "DUS",
              "icao": "EDDL"
            },
            "position": {
              "latitude": 51.289452,
              "longitude": 6.766775,
              "altitude": 147,
              "country": {
                "id": 83,
                "name": "Germany",
                "code": "DE",
                "codeLong": "DEU"
              },
              "region": {
                "city": "Dusseldorf"
              }
            },
            "timezone": {
              "name": "Europe/Berlin",
              "offset": 3600,
              "offsetHours": "1:00",
              "abbr": "CET",
              "abbrName": "Central European Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.duesseldorf-international.de/dus_en/"
          }
        },
        "time": {
          "real": {
            "departure": 1765000703
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 1765099800,
      "arrival": 1765105500
    },
    "real": {
      "departure": 1765104626,
      "arrival": null
    },
    "estimated": {
      "departure": null,
      "arrival": 1765109120
    },
    "other": {
      "eta": 1765109120,
      "updated": 1765105045
    },
    "historical": {
      "flighttime": "4370",
      "delay": "593"
    }
  },
  "trail": [
    {
      "lat": 49.888126,
      "lng": 9.717853,
      "alt": 18325,
      "spd": 472,
      "ts": 1765105179,
      "hd": 83
    },
    {
      "lat": 49.879715,
      "lng": 9.610218,
      "alt": 17425,
      "spd": 465,
      "ts": 1765105147,
      "hd": 82
    },
    {
      "lat": 49.87146,
      "lng": 9.505995,
      "alt": 16425,
      "spd": 460,
      "ts": 1765105115,
      "hd": 82
    },
    {
      "lat": 49.863033,
      "lng": 9.401031,
      "alt": 15350,
      "spd": 453,
      "ts": 1765105083,
      "hd": 82
    },
    {
      "lat": 49.854748,
      "lng": 9.298962,
      "alt": 14250,
      "spd": 445,
      "ts": 1765105051,
      "hd": 82
    },
    {
      "lat": 49.8466,
      "lng": 9.19912,
      "alt": 13275,
      "spd": 432,
      "ts": 1765105018,
      "hd": 82
    },
    {
      "lat": 49.838745,
      "lng": 9.104053,
      "alt": 12800,
      "spd": 402,
      "ts": 1765104987,
      "hd": 82
    },
    {
      "lat": 49.830864,
      "lng": 9.016658,
      "alt": 12225,
      "spd": 370,
      "ts": 1765104955,
      "hd": 81
    },
    {
      "lat": 49.830353,
      "lng": 9.011165,
      "alt": 12200,
      "spd": 366,
      "ts": 1765104953,
      "hd": 81
    },
    {
      "lat": 49.829819,
      "lng": 9.005681,
      "alt": 12150,
      "spd": 366,
      "ts": 1765104950,
      "hd": 81
    },
    {
      "lat": 49.829361,
      "lng": 9.000766,
      "alt": 12125,
      "spd": 362,
      "ts": 1765104948,
      "hd": 81
    },
    {
      "lat": 49.828857,
      "lng": 8.995345,
      "alt": 12100,
      "spd": 360,
      "ts": 1765104946,
      "hd": 81
    },
    {
      "lat": 49.828262,
      "lng": 8.989202,
      "alt": 12050,
      "spd": 358,
      "ts": 1765104944,
      "hd": 81
    },
    {
      "lat": 49.827793,
      "lng": 8.984144,
      "alt": 12000,
      "spd": 356,
      "ts": 1765104942,
      "hd": 82
    },
    {
      "lat": 49.827328,
      "lng": 8.9788,
      "alt": 11975,
      "spd": 355,
      "ts": 1765104940,
      "hd": 82
    },
    {
      "lat": 49.826889,
      "lng": 8.973806,
      "alt": 11950,
      "spd": 352,
      "ts": 1765104938,
      "hd": 82
    },
    {
      "lat": 49.826385,
      "lng": 8.968024,
      "alt": 11875,
      "spd": 350,
      "ts": 1765104936,
      "hd": 83
    },
    {
      "lat": 49.826069,
      "lng": 8.963284,
      "alt": 11850,
      "spd": 348,
      "ts": 1765104934,
      "hd": 84
    },
    {
      "lat": 49.825699,
      "lng": 8.958339,
      "alt": 11800,
      "spd": 345,
      "ts": 1765104932,
      "hd": 85
    },
    {
      "lat": 49.82542,
      "lng": 8.95267,
      "alt": 11750,
      "spd": 345,
      "ts": 1765104929,
      "hd": 87
    },
    {
      "lat": 49.825188,
      "lng": 8.947548,
      "alt": 11725,
      "spd": 343,
      "ts": 1765104927,
      "hd": 89
    },
    {
      "lat": 49.825138,
      "lng": 8.942351,
      "alt": 11700,
      "spd": 342,
      "ts": 1765104925,
      "hd": 92
    },
    {
      "lat": 49.825241,
      "lng": 8.937739,
      "alt": 11675,
      "spd": 336,
      "ts": 1765104923,
      "hd": 97
    },
    {
      "lat": 49.825516,
      "lng": 8.93268,
      "alt": 11650,
      "spd": 333,
      "ts": 1765104921,
      "hd": 100
    },
    {
      "lat": 49.826111,
      "lng": 8.926537,
      "alt": 11600,
      "spd": 330,
      "ts": 1765104919,
      "hd": 103
    },
    {
      "lat": 49.826843,
      "lng": 8.921621,
      "alt": 11575,
      "spd": 327,
      "ts": 1765104917,
      "hd": 106
    },
    {
      "lat": 49.82785,
      "lng": 8.915983,
      "alt": 11525,
      "spd": 325,
      "ts": 1765104915,
      "hd": 108
    },
    {
      "lat": 49.832428,
      "lng": 8.898492,
      "alt": 11275,
      "spd": 318,
      "ts": 1765104906,
      "hd": 117
    },
    {
      "lat": 49.843388,
      "lng": 8.867897,
      "alt": 10600,
      "spd": 315,
      "ts": 1765104891,
      "hd": 119
    },
    {
      "lat": 49.852203,
      "lng": 8.843416,
      "alt": 10175,
      "spd": 308,
      "ts": 1765104878,
      "hd": 119
    },
    {
      "lat": 49.860947,
      "lng": 8.818986,
      "alt": 9650,
      "spd": 304,
      "ts": 1765104865,
      "hd": 119
    },
    {
      "lat": 49.862381,
      "lng": 8.815043,
      "alt": 9550,
      "spd": 303,
      "ts": 1765104863,
      "hd": 118
    },
    {
      "lat": 49.864014,
      "lng": 8.810457,
      "alt": 9450,
      "spd": 302,
      "ts": 1765104861,
      "hd": 119
    },
    {
      "lat": 49.865314,
      "lng": 8.806878,
      "alt": 9375,
      "spd": 302,
      "ts": 1765104859,
      "hd": 119
    },
    {
      "lat": 49.866669,
      "lng": 8.803084,
      "alt": 9300,
      "spd": 301,
      "ts": 1765104857,
      "hd": 119
    },
    {
      "lat": 49.868061,
      "lng": 8.799307,
      "alt": 9200,
      "spd": 300,
      "ts": 1765104855,
      "hd": 119
    },
    {
      "lat": 49.869781,
      "lng": 8.794628,
      "alt": 9100,
      "spd": 300,
      "ts": 1765104853,
      "hd": 119
    },
    {
      "lat": 49.871273,
      "lng": 8.790547,
      "alt": 9000,
      "spd": 298,
      "ts": 1765104851,
      "hd": 120
    },
    {
      "lat": 49.872623,
      "lng": 8.787058,
      "alt": 8925,
      "spd": 297,
      "ts": 1765104849,
      "hd": 120
    },
    {
      "lat": 49.874084,
      "lng": 8.783135,
      "alt": 8825,
      "spd": 297,
      "ts": 1765104846,
      "hd": 121
    },
    {
      "lat": 49.875595,
      "lng": 8.779305,
      "alt": 8725,
      "spd": 296,
      "ts": 1765104844,
      "hd": 121
    },
    {
      "lat": 49.877243,
      "lng": 8.775185,
      "alt": 8625,
      "spd": 295,
      "ts": 1765104842,
      "hd": 122
    },
    {
      "lat": 49.878571,
      "lng": 8.771933,
      "alt": 8550,
      "spd": 294,
      "ts": 1765104840,
      "hd": 123
    },
    {
      "lat": 49.880352,
      "lng": 8.767684,
      "alt": 8450,
      "spd": 293,
      "ts": 1765104838,
      "hd": 125
    },
    {
      "lat": 49.881866,
      "lng": 8.764198,
      "alt": 8350,
      "spd": 291,
      "ts": 1765104836,
      "hd": 128
    },
    {
      "lat": 49.883606,
      "lng": 8.760657,
      "alt": 8275,
      "spd": 289,
      "ts": 1765104834,
      "hd": 131
    },
    {
      "lat": 49.88533,
      "lng": 8.757514,
      "alt": 8200,
      "spd": 287,
      "ts": 1765104831,
      "hd": 133
    },
    {
      "lat": 49.887333,
      "lng": 8.754173,
      "alt": 8075,
      "spd": 287,
      "ts": 1765104829,
      "hd": 136
    },
    {
      "lat": 49.889755,
      "lng": 8.750536,
      "alt": 7975,
      "spd": 285,
      "ts": 1765104827,
      "hd": 139
    },
    {
      "lat": 49.891937,
      "lng": 8.747575,
      "alt": 7850,
      "spd": 284,
      "ts": 1765104825,
      "hd": 142
    },
    {
      "lat": 49.893478,
      "lng": 8.745637,
      "alt": 7775,
      "spd": 284,
      "ts": 1765104823,
      "hd": 143
    },
    {
      "lat": 49.896084,
      "lng": 8.742594,
      "alt": 7650,
      "spd": 283,
      "ts": 1765104821,
      "hd": 144
    },
    {
      "lat": 49.898041,
      "lng": 8.74044,
      "alt": 7550,
      "spd": 284,
      "ts": 1765104819,
      "hd": 144
    },
    {
      "lat": 49.900177,
      "lng": 8.738106,
      "alt": 7450,
      "spd": 284,
      "ts": 1765104817,
      "hd": 144
    },
    {
      "lat": 49.902508,
      "lng": 8.735467,
      "alt": 7350,
      "spd": 284,
      "ts": 1765104815,
      "hd": 143
    },
    {
      "lat": 49.905071,
      "lng": 8.732572,
      "alt": 7200,
      "spd": 283,
      "ts": 1765104812,
      "hd": 143
    },
    {
      "lat": 49.907257,
      "lng": 8.730048,
      "alt": 7100,
      "spd": 283,
      "ts": 1765104810,
      "hd": 143
    },
    {
      "lat": 49.909725,
      "lng": 8.727227,
      "alt": 7000,
      "spd": 284,
      "ts": 1765104808,
      "hd": 142
    },
    {
      "lat": 49.911587,
      "lng": 8.725,
      "alt": 6900,
      "spd": 283,
      "ts": 1765104806,
      "hd": 142
    },
    {
      "lat": 49.914192,
      "lng": 8.721957,
      "alt": 6775,
      "spd": 283,
      "ts": 1765104804,
      "hd": 141
    },
    {
      "lat": 49.916756,
      "lng": 8.718765,
      "alt": 6675,
      "spd": 284,
      "ts": 1765104801,
      "hd": 140
    },
    {
      "lat": 49.918671,
      "lng": 8.716351,
      "alt": 6575,
      "spd": 284,
      "ts": 1765104799,
      "hd": 138
    },
    {
      "lat": 49.920666,
      "lng": 8.713643,
      "alt": 6475,
      "spd": 286,
      "ts": 1765104797,
      "hd": 135
    },
    {
      "lat": 49.922562,
      "lng": 8.710857,
      "alt": 6400,
      "spd": 286,
      "ts": 1765104795,
      "hd": 131
    },
    {
      "lat": 49.9249,
      "lng": 8.707036,
      "alt": 6275,
      "spd": 285,
      "ts": 1765104793,
      "hd": 128
    },
    {
      "lat": 49.92659,
      "lng": 8.703846,
      "alt": 6200,
      "spd": 286,
      "ts": 1765104791,
      "hd": 125
    },
    {
      "lat": 49.928112,
      "lng": 8.700801,
      "alt": 6100,
      "spd": 286,
      "ts": 1765104789,
      "hd": 123
    },
    {
      "lat": 49.929611,
      "lng": 8.697413,
      "alt": 6025,
      "spd": 286,
      "ts": 1765104787,
      "hd": 120
    },
    {
      "lat": 49.93137,
      "lng": 8.692783,
      "alt": 5875,
      "spd": 286,
      "ts": 1765104784,
      "hd": 117
    },
    {
      "lat": 49.932312,
      "lng": 8.690113,
      "alt": 5800,
      "spd": 286,
      "ts": 1765104782,
      "hd": 114
    },
    {
      "lat": 49.93364,
      "lng": 8.685849,
      "alt": 5700,
      "spd": 286,
      "ts": 1765104780,
      "hd": 111
    },
    {
      "lat": 49.934647,
      "lng": 8.682091,
      "alt": 5575,
      "spd": 287,
      "ts": 1765104778,
      "hd": 108
    },
    {
      "lat": 49.935791,
      "lng": 8.676959,
      "alt": 5475,
      "spd": 287,
      "ts": 1765104776,
      "hd": 103
    },
    {
      "lat": 49.936478,
      "lng": 8.672983,
      "alt": 5375,
      "spd": 286,
      "ts": 1765104774,
      "hd": 100
    },
    {
      "lat": 49.937748,
      "lng": 8.660196,
      "alt": 5100,
      "spd": 284,
      "ts": 1765104768,
      "hd": 94
    },
    {
      "lat": 49.93803,
      "lng": 8.654331,
      "alt": 4975,
      "spd": 284,
      "ts": 1765104765,
      "hd": 93
    },
    {
      "lat": 49.938126,
      "lng": 8.652095,
      "alt": 4925,
      "spd": 283,
      "ts": 1765104763,
      "hd": 93
    },
    {
      "lat": 49.938309,
      "lng": 8.64676,
      "alt": 4800,
      "spd": 282,
      "ts": 1765104761,
      "hd": 93
    },
    {
      "lat": 49.938492,
      "lng": 8.642337,
      "alt": 4725,
      "spd": 280,
      "ts": 1765104759,
      "hd": 94
    },
    {
      "lat": 49.938728,
      "lng": 8.637332,
      "alt": 4625,
      "spd": 278,
      "ts": 1765104757,
      "hd": 94
    },
    {
      "lat": 49.938904,
      "lng": 8.634531,
      "alt": 4600,
      "spd": 276,
      "ts": 1765104755,
      "hd": 95
    },
    {
      "lat": 49.939144,
      "lng": 8.629761,
      "alt": 4550,
      "spd": 273,
      "ts": 1765104753,
      "hd": 95
    },
    {
      "lat": 49.939426,
      "lng": 8.625827,
      "alt": 4475,
      "spd": 270,
      "ts": 1765104750,
      "hd": 96
    },
    {
      "lat": 49.939751,
      "lng": 8.621447,
      "alt": 4425,
      "spd": 268,
      "ts": 1765104748,
      "hd": 96
    },
    {
      "lat": 49.940002,
      "lng": 8.617546,
      "alt": 4375,
      "spd": 265,
      "ts": 1765104746,
      "hd": 96
    },
    {
      "lat": 49.940277,
      "lng": 8.613788,
      "alt": 4300,
      "spd": 263,
      "ts": 1765104744,
      "hd": 96
    },
    {
      "lat": 49.94059,
      "lng": 8.610015,
      "alt": 4250,
      "spd": 262,
      "ts": 1765104742,
      "hd": 97
    },
    {
      "lat": 49.940872,
      "lng": 8.606487,
      "alt": 4200,
      "spd": 257,
      "ts": 1765104740,
      "hd": 100
    },
    {
      "lat": 49.94133,
      "lng": 8.601717,
      "alt": 4125,
      "spd": 255,
      "ts": 1765104737,
      "hd": 102
    },
    {
      "lat": 49.941879,
      "lng": 8.597741,
      "alt": 4025,
      "spd": 253,
      "ts": 1765104735,
      "hd": 106
    },
    {
      "lat": 49.942657,
      "lng": 8.593332,
      "alt": 3925,
      "spd": 252,
      "ts": 1765104733,
      "hd": 109
    },
    {
      "lat": 49.94339,
      "lng": 8.59008,
      "alt": 3875,
      "spd": 247,
      "ts": 1765104731,
      "hd": 114
    },
    {
      "lat": 49.944214,
      "lng": 8.587189,
      "alt": 3800,
      "spd": 246,
      "ts": 1765104729,
      "hd": 115
    },
    {
      "lat": 49.94545,
      "lng": 8.583141,
      "alt": 3700,
      "spd": 245,
      "ts": 1765104727,
      "hd": 118
    },
    {
      "lat": 49.946594,
      "lng": 8.579728,
      "alt": 3600,
      "spd": 244,
      "ts": 1765104725,
      "hd": 118
    },
    {
      "lat": 49.947464,
      "lng": 8.577287,
      "alt": 3525,
      "spd": 243,
      "ts": 1765104723,
      "hd": 118
    },
    {
      "lat": 49.94883,
      "lng": 8.573419,
      "alt": 3400,
      "spd": 243,
      "ts": 1765104721,
      "hd": 118
    },
    {
      "lat": 49.949947,
      "lng": 8.570227,
      "alt": 3275,
      "spd": 243,
      "ts": 1765104718,
      "hd": 118
    },
    {
      "lat": 49.951065,
      "lng": 8.56696,
      "alt": 3200,
      "spd": 242,
      "ts": 1765104716,
      "hd": 118
    },
    {
      "lat": 49.952133,
      "lng": 8.563917,
      "alt": 3100,
      "spd": 240,
      "ts": 1765104714,
      "hd": 119
    },
    {
      "lat": 49.953297,
      "lng": 8.560725,
      "alt": 3000,
      "spd": 239,
      "ts": 1765104712,
      "hd": 120
    },
    {
      "lat": 49.95433,
      "lng": 8.557916,
      "alt": 2925,
      "spd": 238,
      "ts": 1765104710,
      "hd": 121
    },
    {
      "lat": 49.955811,
      "lng": 8.554118,
      "alt": 2800,
      "spd": 236,
      "ts": 1765104708,
      "hd": 122
    },
    {
      "lat": 49.956757,
      "lng": 8.551845,
      "alt": 2750,
      "spd": 234,
      "ts": 1765104706,
      "hd": 123
    },
    {
      "lat": 49.957993,
      "lng": 8.548809,
      "alt": 2675,
      "spd": 231,
      "ts": 1765104704,
      "hd": 124
    },
    {
      "lat": 49.959538,
      "lng": 8.545359,
      "alt": 2600,
      "spd": 227,
      "ts": 1765104702,
      "hd": 128
    },
    {
      "lat": 49.960606,
      "lng": 8.543057,
      "alt": 2575,
      "spd": 222,
      "ts": 1765104699,
      "hd": 132
    },
    {
      "lat": 49.96225,
      "lng": 8.540135,
      "alt": 2550,
      "spd": 217,
      "ts": 1765104697,
      "hd": 136
    },
    {
      "lat": 49.965076,
      "lng": 8.536154,
      "alt": 2500,
      "spd": 207,
      "ts": 1765104694,
      "hd": 144
    },
    {
      "lat": 49.96661,
      "lng": 8.534299,
      "alt": 2450,
      "spd": 203,
      "ts": 1765104692,
      "hd": 148
    },
    {
      "lat": 49.968288,
      "lng": 8.532665,
      "alt": 2400,
      "spd": 200,
      "ts": 1765104689,
      "hd": 152
    },
    {
      "lat": 49.970058,
      "lng": 8.53118,
      "alt": 2375,
      "spd": 196,
      "ts": 1765104687,
      "hd": 156
    },
    {
      "lat": 49.971687,
      "lng": 8.529993,
      "alt": 2325,
      "spd": 192,
      "ts": 1765104685,
      "hd": 160
    },
    {
      "lat": 49.973782,
      "lng": 8.528731,
      "alt": 2275,
      "spd": 187,
      "ts": 1765104683,
      "hd": 165
    },
    {
      "lat": 49.97541,
      "lng": 8.527988,
      "alt": 2250,
      "spd": 183,
      "ts": 1765104681,
      "hd": 168
    },
    {
      "lat": 49.977264,
      "lng": 8.527342,
      "alt": 2200,
      "spd": 179,
      "ts": 1765104679,
      "hd": 171
    },
    {
      "lat": 49.978912,
      "lng": 8.526909,
      "alt": 2150,
      "spd": 176,
      "ts": 1765104677,
      "hd": 174
    },
    {
      "lat": 49.984406,
      "lng": 8.52633,
      "alt": 2000,
      "spd": 169,
      "ts": 1765104670,
      "hd": 180
    },
    {
      "lat": 49.990585,
      "lng": 8.52633,
      "alt": 1800,
      "spd": 159,
      "ts": 1765104662,
      "hd": 179
    },
    {
      "lat": 49.995117,
      "lng": 8.526258,
      "alt": 1625,
      "spd": 154,
      "ts": 1765104655,
      "hd": 179
    },
    {
      "lat": 50.000931,
      "lng": 8.526258,
      "alt": 1225,
      "spd": 158,
      "ts": 1765104647,
      "hd": 179
    },
    {
      "lat": 50.006882,
      "lng": 8.526186,
      "alt": 900,
      "spd": 157,
      "ts": 1765104639,
      "hd": 179
    },
    {
      "lat": 50.013676,
      "lng": 8.526133,
      "alt": 475,
      "spd": 164,
      "ts": 1765104630,
      "hd": 180
    },
    {
      "lat": 50.030785,
      "lng": 8.525985,
      "alt": 0,
      "spd": 68,
      "ts": 1765104601,
      "hd": 180
    },
    {
      "lat": 50.032612,
      "lng": 8.525966,
      "alt": 0,
      "spd": 36,
      "ts": 1765104594,
      "hd": 180
    },
    {
      "lat": 50.03352,
      "lng": 8.525966,
      "alt": 0,
      "spd": 0,
      "ts": 1765104588,
      "hd": 177
    },
    {
      "lat": 50.033752,
      "lng": 8.525891,
      "alt": 0,
      "spd": 6,
      "ts": 1765104455,
      "hd": 196
    },
    {
      "lat": 50.033981,
      "lng": 8.52595,
      "alt": 0,
      "spd": 10,
      "ts": 1765104448,
      "hd": 241
    },
    {
      "lat": 50.034061,
      "lng": 8.526204,
      "alt": 0,
      "spd": 12,
      "ts": 1765104444,
      "hd": 247
    },
    {
      "lat": 50.034176,
      "lng": 8.526673,
      "alt": 0,
      "spd": 12,
      "ts": 1765104438,
      "hd": 247
    },
    {
      "lat": 50.034252,
      "lng": 8.526968,
      "alt": 0,
      "spd": 11,
      "ts": 1765104435,
      "hd": 247
    },
    {
      "lat": 50.034359,
      "lng": 8.52736,
      "alt": 0,
      "spd": 10,
      "ts": 1765104429,
      "hd": 247
    },
    {
      "lat": 50.034405,
      "lng": 8.527577,
      "alt": 0,
      "spd": 10,
      "ts": 1765104425,
      "hd": 247
    },
    {
      "lat": 50.034473,
      "lng": 8.527859,
      "alt": 0,
      "spd": 12,
      "ts": 1765104421,
      "hd": 244
    },
    {
      "lat": 50.034542,
      "lng": 8.528082,
      "alt": 0,
      "spd": 13,
      "ts": 1765104419,
      "hd": 247
    },
    {
      "lat": 50.034695,
      "lng": 8.528638,
      "alt": 0,
      "spd": 15,
      "ts": 1765104412,
      "hd": 247
    },
    {
      "lat": 50.034908,
      "lng": 8.529456,
      "alt": 0,
      "spd": 20,
      "ts": 1765104405,
      "hd": 247
    },
    {
      "lat": 50.035,
      "lng": 8.529818,
      "alt": 0,
      "spd": 22,
      "ts": 1765104402,
      "hd": 247
    },
    {
      "lat": 50.035091,
      "lng": 8.530161,
      "alt": 0,
      "spd": 23,
      "ts": 1765104400,
      "hd": 247
    },
    {
      "lat": 50.035172,
      "lng": 8.530486,
      "alt": 0,
      "spd": 24,
      "ts": 1765104398,
      "hd": 247
    },
    {
      "lat": 50.035252,
      "lng": 8.530829,
      "alt": 0,
      "spd": 25,
      "ts": 1765104396,
      "hd": 250
    },
    {
      "lat": 50.035583,
      "lng": 8.532221,
      "alt": 0,
      "spd": 29,
      "ts": 1765104388,
      "hd": 250
    },
    {
      "lat": 50.035648,
      "lng": 8.532536,
      "alt": 0,
      "spd": 29,
      "ts": 1765104387,
      "hd": 250
    },
    {
      "lat": 50.035706,
      "lng": 8.53274,
      "alt": 0,
      "spd": 29,
      "ts": 1765104386,
      "hd": 250
    },
    {
      "lat": 50.035835,
      "lng": 8.533315,
      "alt": 0,
      "spd": 28,
      "ts": 1765104383,
      "hd": 250
    },
    {
      "lat": 50.03595,
      "lng": 8.533797,
      "alt": 0,
      "spd": 28,
      "ts": 1765104380,
      "hd": 247
    },
    {
      "lat": 50.036335,
      "lng": 8.535357,
      "alt": 0,
      "spd": 27,
      "ts": 1765104372,
      "hd": 247
    },
    {
      "lat": 50.036442,
      "lng": 8.535746,
      "alt": 0,
      "spd": 27,
      "ts": 1765104370,
      "hd": 247
    },
    {
      "lat": 50.03651,
      "lng": 8.536016,
      "alt": 0,
      "spd": 27,
      "ts": 1765104368,
      "hd": 247
    },
    {
      "lat": 50.036625,
      "lng": 8.536489,
      "alt": 0,
      "spd": 26,
      "ts": 1765104366,
      "hd": 247
    },
    {
      "lat": 50.036674,
      "lng": 8.536693,
      "alt": 0,
      "spd": 26,
      "ts": 1765104365,
      "hd": 247
    },
    {
      "lat": 50.0369,
      "lng": 8.537642,
      "alt": 0,
      "spd": 25,
      "ts": 1765104359,
      "hd": 250
    },
    {
      "lat": 50.037025,
      "lng": 8.538148,
      "alt": 0,
      "spd": 25,
      "ts": 1765104356,
      "hd": 250
    },
    {
      "lat": 50.037094,
      "lng": 8.538419,
      "alt": 0,
      "spd": 25,
      "ts": 1765104355,
      "hd": 250
    },
    {
      "lat": 50.037209,
      "lng": 8.538938,
      "alt": 0,
      "spd": 25,
      "ts": 1765104352,
      "hd": 250
    },
    {
      "lat": 50.037277,
      "lng": 8.539178,
      "alt": 0,
      "spd": 24,
      "ts": 1765104350,
      "hd": 250
    },
    {
      "lat": 50.037334,
      "lng": 8.53942,
      "alt": 0,
      "spd": 24,
      "ts": 1765104349,
      "hd": 247
    },
    {
      "lat": 50.037392,
      "lng": 8.539683,
      "alt": 0,
      "spd": 24,
      "ts": 1765104347,
      "hd": 247
    },
    {
      "lat": 50.037506,
      "lng": 8.540154,
      "alt": 0,
      "spd": 23,
      "ts": 1765104344,
      "hd": 250
    },
    {
      "lat": 50.037605,
      "lng": 8.540571,
      "alt": 0,
      "spd": 23,
      "ts": 1765104342,
      "hd": 250
    },
    {
      "lat": 50.037712,
      "lng": 8.540985,
      "alt": 0,
      "spd": 23,
      "ts": 1765104339,
      "hd": 250
    },
    {
      "lat": 50.037766,
      "lng": 8.541221,
      "alt": 0,
      "spd": 23,
      "ts": 1765104338,
      "hd": 250
    },
    {
      "lat": 50.037827,
      "lng": 8.541499,
      "alt": 0,
      "spd": 22,
      "ts": 1765104336,
      "hd": 247
    },
    {
      "lat": 50.037884,
      "lng": 8.541721,
      "alt": 0,
      "spd": 22,
      "ts": 1765104335,
      "hd": 247
    },
    {
      "lat": 50.037941,
      "lng": 8.541945,
      "alt": 0,
      "spd": 22,
      "ts": 1765104333,
      "hd": 244
    },
    {
      "lat": 50.038036,
      "lng": 8.54226,
      "alt": 0,
      "spd": 24,
      "ts": 1765104331,
      "hd": 241
    },
    {
      "lat": 50.038105,
      "lng": 8.542482,
      "alt": 0,
      "spd": 26,
      "ts": 1765104330,
      "hd": 239
    },
    {
      "lat": 50.038372,
      "lng": 8.543095,
      "alt": 0,
      "spd": 29,
      "ts": 1765104326,
      "hd": 236
    },
    {
      "lat": 50.038452,
      "lng": 8.543299,
      "alt": 0,
      "spd": 29,
      "ts": 1765104325,
      "hd": 239
    },
    {
      "lat": 50.038593,
      "lng": 8.543652,
      "alt": 0,
      "spd": 29,
      "ts": 1765104323,
      "hd": 241
    },
    {
      "lat": 50.038685,
      "lng": 8.54393,
      "alt": 0,
      "spd": 28,
      "ts": 1765104321,
      "hd": 244
    },
    {
      "lat": 50.038776,
      "lng": 8.544291,
      "alt": 0,
      "spd": 28,
      "ts": 1765104319,
      "hd": 247
    },
    {
      "lat": 50.038837,
      "lng": 8.544524,
      "alt": 0,
      "spd": 28,
      "ts": 1765104318,
      "hd": 250
    },
    {
      "lat": 50.038906,
      "lng": 8.544803,
      "alt": 0,
      "spd": 27,
      "ts": 1765104316,
      "hd": 250
    },
    {
      "lat": 50.039017,
      "lng": 8.545249,
      "alt": 0,
      "spd": 27,
      "ts": 1765104314,
      "hd": 250
    },
    {
      "lat": 50.039104,
      "lng": 8.545637,
      "alt": 0,
      "spd": 27,
      "ts": 1765104312,
      "hd": 250
    },
    {
      "lat": 50.039173,
      "lng": 8.545916,
      "alt": 0,
      "spd": 26,
      "ts": 1765104310,
      "hd": 247
    },
    {
      "lat": 50.039234,
      "lng": 8.546188,
      "alt": 0,
      "spd": 26,
      "ts": 1765104309,
      "hd": 247
    },
    {
      "lat": 50.039314,
      "lng": 8.546491,
      "alt": 0,
      "spd": 26,
      "ts": 1765104307,
      "hd": 250
    },
    {
      "lat": 50.039371,
      "lng": 8.546732,
      "alt": 0,
      "spd": 26,
      "ts": 1765104306,
      "hd": 250
    },
    {
      "lat": 50.039524,
      "lng": 8.547381,
      "alt": 0,
      "spd": 25,
      "ts": 1765104302,
      "hd": 247
    },
    {
      "lat": 50.039814,
      "lng": 8.54857,
      "alt": 0,
      "spd": 24,
      "ts": 1765104295,
      "hd": 250
    },
    {
      "lat": 50.040131,
      "lng": 8.549924,
      "alt": 0,
      "spd": 23,
      "ts": 1765104288,
      "hd": 250
    },
    {
      "lat": 50.040401,
      "lng": 8.551049,
      "alt": 0,
      "spd": 22,
      "ts": 1765104280,
      "hd": 250
    },
    {
      "lat": 50.040756,
      "lng": 8.55256,
      "alt": 0,
      "spd": 22,
      "ts": 1765104273,
      "hd": 250
    },
    {
      "lat": 50.041061,
      "lng": 8.553784,
      "alt": 0,
      "spd": 22,
      "ts": 1765104263,
      "hd": 250
    },
    {
      "lat": 50.041294,
      "lng": 8.554771,
      "alt": 0,
      "spd": 21,
      "ts": 1765104255,
      "hd": 250
    },
    {
      "lat": 50.04134,
      "lng": 8.554989,
      "alt": 0,
      "spd": 21,
      "ts": 1765104254,
      "hd": 250
    },
    {
      "lat": 50.04142,
      "lng": 8.555296,
      "alt": 0,
      "spd": 21,
      "ts": 1765104252,
      "hd": 250
    },
    {
      "lat": 50.041504,
      "lng": 8.55564,
      "alt": 0,
      "spd": 21,
      "ts": 1765104250,
      "hd": 250
    },
    {
      "lat": 50.04158,
      "lng": 8.555983,
      "alt": 0,
      "spd": 20,
      "ts": 1765104247,
      "hd": 250
    },
    {
      "lat": 50.041664,
      "lng": 8.556364,
      "alt": 0,
      "spd": 20,
      "ts": 1765104245,
      "hd": 250
    },
    {
      "lat": 50.041752,
      "lng": 8.556705,
      "alt": 0,
      "spd": 19,
      "ts": 1765104242,
      "hd": 250
    },
    {
      "lat": 50.041855,
      "lng": 8.557121,
      "alt": 0,
      "spd": 18,
      "ts": 1765104239,
      "hd": 247
    },
    {
      "lat": 50.04192,
      "lng": 8.557422,
      "alt": 0,
      "spd": 17,
      "ts": 1765104237,
      "hd": 250
    },
    {
      "lat": 50.041992,
      "lng": 8.557699,
      "alt": 0,
      "spd": 17,
      "ts": 1765104234,
      "hd": 250
    },
    {
      "lat": 50.042038,
      "lng": 8.557904,
      "alt": 0,
      "spd": 16,
      "ts": 1765104233,
      "hd": 250
    },
    {
      "lat": 50.042107,
      "lng": 8.558151,
      "alt": 0,
      "spd": 16,
      "ts": 1765104230,
      "hd": 250
    },
    {
      "lat": 50.042271,
      "lng": 8.55885,
      "alt": 0,
      "spd": 14,
      "ts": 1765104226,
      "hd": 250
    },
    {
      "lat": 50.042347,
      "lng": 8.559199,
      "alt": 0,
      "spd": 13,
      "ts": 1765104220,
      "hd": 250
    },
    {
      "lat": 50.042412,
      "lng": 8.559482,
      "alt": 0,
      "spd": 12,
      "ts": 1765104217,
      "hd": 250
    },
    {
      "lat": 50.042469,
      "lng": 8.559741,
      "alt": 0,
      "spd": 11,
      "ts": 1765104214,
      "hd": 247
    },
    {
      "lat": 50.04253,
      "lng": 8.559958,
      "alt": 0,
      "spd": 10,
      "ts": 1765104211,
      "hd": 244
    },
    {
      "lat": 50.042656,
      "lng": 8.560428,
      "alt": 0,
      "spd": 8,
      "ts": 1765104204,
      "hd": 222
    },
    {
      "lat": 50.042747,
      "lng": 8.560633,
      "alt": 0,
      "spd": 7,
      "ts": 1765104200,
      "hd": 202
    },
    {
      "lat": 50.042965,
      "lng": 8.560789,
      "alt": 0,
      "spd": 4,
      "ts": 1765104191,
      "hd": 168
    },
    {
      "lat": 50.04319,
      "lng": 8.560725,
      "alt": 0,
      "spd": 8,
      "ts": 1765104143,
      "hd": 160
    },
    {
      "lat": 50.043411,
      "lng": 8.56059,
      "alt": 0,
      "spd": 6,
      "ts": 1765104136,
      "hd": 160
    },
    {
      "lat": 50.043736,
      "lng": 8.56041,
      "alt": 0,
      "spd": 10,
      "ts": 1765104125,
      "hd": 165
    },
    {
      "lat": 50.043945,
      "lng": 8.56028,
      "alt": 0,
      "spd": 11,
      "ts": 1765104120,
      "hd": 194
    },
    {
      "lat": 50.044189,
      "lng": 8.560335,
      "alt": 0,
      "spd": 13,
      "ts": 1765104115,
      "hd": 222
    },
    {
      "lat": 50.044376,
      "lng": 8.560576,
      "alt": 0,
      "spd": 16,
      "ts": 1765104111,
      "hd": 244
    },
    {
      "lat": 50.044575,
      "lng": 8.561375,
      "alt": 0,
      "spd": 16,
      "ts": 1765104110,
      "hd": 247
    },
    {
      "lat": 50.044682,
      "lng": 8.561801,
      "alt": 0,
      "spd": 16,
      "ts": 1765104100,
      "hd": 250
    },
    {
      "lat": 50.044762,
      "lng": 8.562136,
      "alt": 0,
      "spd": 16,
      "ts": 1765104098,
      "hd": 250
    },
    {
      "lat": 50.044945,
      "lng": 8.562958,
      "alt": 0,
      "spd": 15,
      "ts": 1765104092,
      "hd": 250
    },
    {
      "lat": 50.045029,
      "lng": 8.563305,
      "alt": 0,
      "spd": 15,
      "ts": 1765104087,
      "hd": 250
    },
    {
      "lat": 50.045105,
      "lng": 8.563626,
      "alt": 0,
      "spd": 15,
      "ts": 1765104083,
      "hd": 247
    },
    {
      "lat": 50.045174,
      "lng": 8.563933,
      "alt": 0,
      "spd": 14,
      "ts": 1765104081,
      "hd": 233
    },
    {
      "lat": 50.045425,
      "lng": 8.564363,
      "alt": 0,
      "spd": 14,
      "ts": 1765104077,
      "hd": 205
    },
    {
      "lat": 50.0457,
      "lng": 8.564566,
      "alt": 0,
      "spd": 13,
      "ts": 1765104070,
      "hd": 205
    },
    {
      "lat": 50.045952,
      "lng": 8.564746,
      "alt": 0,
      "spd": 12,
      "ts": 1765104065,
      "hd": 205
    },
    {
      "lat": 50.046204,
      "lng": 8.564919,
      "alt": 0,
      "spd": 12,
      "ts": 1765104060,
      "hd": 205
    },
    {
      "lat": 50.046646,
      "lng": 8.565234,
      "alt": 0,
      "spd": 10,
      "ts": 1765104052,
      "hd": 205
    },
    {
      "lat": 50.046986,
      "lng": 8.565475,
      "alt": 0,
      "spd": 9,
      "ts": 1765104044,
      "hd": 222
    },
    {
      "lat": 50.047256,
      "lng": 8.565957,
      "alt": 0,
      "spd": 7,
      "ts": 1765104033,
      "hd": 233
    },
    {
      "lat": 50.047405,
      "lng": 8.566282,
      "alt": 0,
      "spd": 5,
      "ts": 1765104025,
      "hd": 225
    },
    {
      "lat": 50.047668,
      "lng": 8.566644,
      "alt": 0,
      "spd": 2,
      "ts": 1765103822,
      "hd": 205
    },
    {
      "lat": 50.047462,
      "lng": 8.566444,
      "alt": 0,
      "spd": 3,
      "ts": 1765103805,
      "hd": 213
    },
    {
      "lat": 50.04723,
      "lng": 8.566348,
      "alt": 0,
      "spd": 3,
      "ts": 1765103787,
      "hd": 191
    },
    {
      "lat": 50.046997,
      "lng": 8.566571,
      "alt": 0,
      "spd": 3,
      "ts": 1765103767,
      "hd": 154
    },
    {
      "lat": 50.046925,
      "lng": 8.566775,
      "alt": 0,
      "spd": 3,
      "ts": 1765103756,
      "hd": 132
    },
    {
      "lat": 50.046867,
      "lng": 8.566987,
      "alt": 0,
      "spd": 3,
      "ts": 1765103744,
      "hd": 120
    },
    {
      "lat": 50.046925,
      "lng": 8.567202,
      "alt": 0,
      "spd": 0,
      "ts": 1765103553,
      "hd": 115
    }
  ],
  "firstTimestamp": 1765103553,
  "s": "tLTNRW7zpLhi5Ja9_losNjLY6QZq3e2n34Bcu-VFcJOCDamLAiVCksWkjGraW23U"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d674059 = R"(
{
  "identification": {
    "id": "3d674059",
    "row": 5744813807,
    "number": {
      "default": "EK39",
      "alternative": null
    },
    "callsign": "UAE39"
  },
  "status": {
    "live": true,
    "text": "Estimated- 11:27",
    "icon": "green",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "estimated",
        "color": "green",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765106841,
        "local": 1765106841
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "A388",
      "text": "Airbus A380-842"
    },
    "countryId": 234,
    "registration": "A6-EUX",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/5/793460_1755089756_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11809362",
          "copyright": "BiggyHsia",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/1408921_1754755393_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11805397",
          "copyright": "tobiashsu1217_spotter",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/3723844_1748878085_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11741922",
          "copyright": "jgch_970513",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/603319_1742550787_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11670525",
          "copyright": "Michael Eaton",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/1352306_1740665424_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11650488",
          "copyright": "James Dinsdale",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/5/793460_1755089756.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11809362",
          "copyright": "BiggyHsia",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/1408921_1754755393.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11805397",
          "copyright": "tobiashsu1217_spotter",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/3723844_1748878085.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11741922",
          "copyright": "jgch_970513",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/603319_1742550787.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11670525",
          "copyright": "Michael Eaton",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/1352306_1740665424.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11650488",
          "copyright": "James Dinsdale",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/5/793460_1755089756.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11809362",
          "copyright": "BiggyHsia",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/1408921_1754755393.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11805397",
          "copyright": "tobiashsu1217_spotter",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/3723844_1748878085.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11741922",
          "copyright": "jgch_970513",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/603319_1742550787.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11670525",
          "copyright": "Michael Eaton",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1352306_1740665424.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11650488",
          "copyright": "James Dinsdale",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "896482"
  },
  "airline": {
    "name": "Emirates",
    "short": "Emirates",
    "code": {
      "iata": "EK",
      "icao": "UAE"
    },
    "url": "emirates-uae"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Dubai International Airport",
      "code": {
        "iata": "DXB",
        "icao": "OMDB"
      },
      "position": {
        "latitude": 25.252769,
        "longitude": 55.364441,
        "altitude": 62,
        "country": {
          "id": 234,
          "name": "United Arab Emirates",
          "code": "AE",
          "codeLong": "ARE"
        },
        "region": {
          "city": "Dubai"
        }
      },
      "timezone": {
        "name": "Asia/Dubai",
        "offset": 14400,
        "offsetHours": "4:00",
        "abbr": "+04",
        "abbrName": "",
        "isDst": false
      },
      "visible": true,
      "website": "https://www.dubaiairports.ae/",
      "info": {
        "terminal": "3",
        "baggage": null,
        "gate": "A13"
      }
    },
    "destination": {
      "name": "Birmingham Airport",
      "code": {
        "iata": "BHX",
        "icao": "EGBB"
      },
      "position": {
        "latitude": 52.45385,
        "longitude": -1.74802,
        "altitude": 327,
        "country": {
          "id": 235,
          "name": "United Kingdom",
          "code": "GB",
          "codeLong": "GBR"
        },
        "region": {
          "city": "Birmingham"
        }
      },
      "timezone": {
        "name": "Europe/London",
        "offset": 0,
        "offsetHours": "0:00",
        "abbr": "GMT",
        "abbrName": "Greenwich Mean Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.birminghamairport.co.uk/",
      "info": {
        "terminal": null,
        "baggage": "4",
        "gate": "42"
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d6512b7",
          "number": {
            "default": "EK369"
          }
        },
        "airport": {
          "origin": {
            "name": "Denpasar Ngurah Rai International Airport",
            "code": {
              "iata": "DPS",
              "icao": "WADD"
            },
            "position": {
              "latitude": -8.74816,
              "longitude": 115.167099,
              "altitude": 14,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Denpasar"
              }
            },
            "timezone": {
              "name": "Asia/Makassar",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "WITA",
              "abbrName": "Central Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.ngurahrai-airport.co.id/home/"
          },
          "destination": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          }
        },
        "time": {
          "real": {
            "departure": 1765023350
          }
        }
      },
      {
        "identification": {
          "id": "3d63d6c5",
          "number": {
            "default": "EK368"
          }
        },
        "airport": {
          "origin": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          },
          "destination": {
            "name": "Denpasar Ngurah Rai International Airport",
            "code": {
              "iata": "DPS",
              "icao": "WADD"
            },
            "position": {
              "latitude": -8.74816,
              "longitude": 115.167099,
              "altitude": 14,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Denpasar"
              }
            },
            "timezone": {
              "name": "Asia/Makassar",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "WITA",
              "abbrName": "Central Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.ngurahrai-airport.co.id/home/"
          }
        },
        "time": {
          "real": {
            "departure": 1764980347
          }
        }
      },
      {
        "identification": {
          "id": "3d61c2f2",
          "number": {
            "default": "EK369"
          }
        },
        "airport": {
          "origin": {
            "name": "Denpasar Ngurah Rai International Airport",
            "code": {
              "iata": "DPS",
              "icao": "WADD"
            },
            "position": {
              "latitude": -8.74816,
              "longitude": 115.167099,
              "altitude": 14,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Denpasar"
              }
            },
            "timezone": {
              "name": "Asia/Makassar",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "WITA",
              "abbrName": "Central Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.ngurahrai-airport.co.id/home/"
          },
          "destination": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          }
        },
        "time": {
          "real": {
            "departure": 1764935738
          }
        }
      },
      {
        "identification": {
          "id": "3d604a8a",
          "number": {
            "default": "EK368"
          }
        },
        "airport": {
          "origin": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          },
          "destination": {
            "name": "Denpasar Ngurah Rai International Airport",
            "code": {
              "iata": "DPS",
              "icao": "WADD"
            },
            "position": {
              "latitude": -8.74816,
              "longitude": 115.167099,
              "altitude": 14,
              "country": {
                "id": 103,
                "name": "Indonesia",
                "code": "ID",
                "codeLong": "IDN"
              },
              "region": {
                "city": "Denpasar"
              }
            },
            "timezone": {
              "name": "Asia/Makassar",
              "offset": 28800,
              "offsetHours": "8:00",
              "abbr": "WITA",
              "abbrName": "Central Indonesian Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.ngurahrai-airport.co.id/home/"
          }
        },
        "time": {
          "real": {
            "departure": 1764892534
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 1765078800,
      "arrival": 1765107600
    },
    "real": {
      "departure": 1765080994,
      "arrival": null
    },
    "estimated": {
      "departure": null,
      "arrival": 1765106841
    },
    "other": {
      "eta": 1765106841,
      "updated": 1765102066
    },
    "historical": {
      "flighttime": "25561",
      "delay": "-932"
    }
  },
  "trail": [
    {
      "lat": 51.610233,
      "lng": 0.436859,
      "alt": 27000,
      "spd": 382,
      "ts": 1765105194,
      "hd": 281
    },
    {
      "lat": 51.599075,
      "lng": 0.524226,
      "alt": 27000,
      "spd": 382,
      "ts": 1765105163,
      "hd": 281
    },
    {
      "lat": 51.587906,
      "lng": 0.611003,
      "alt": 27000,
      "spd": 378,
      "ts": 1765105132,
      "hd": 281
    },
    {
      "lat": 51.576759,
      "lng": 0.697174,
      "alt": 27025,
      "spd": 380,
      "ts": 1765105101,
      "hd": 281
    },
    {
      "lat": 51.565567,
      "lng": 0.783073,
      "alt": 27300,
      "spd": 382,
      "ts": 1765105069,
      "hd": 282
    },
    {
      "lat": 51.554089,
      "lng": 0.870056,
      "alt": 27575,
      "spd": 380,
      "ts": 1765105038,
      "hd": 281
    },
    {
      "lat": 51.542778,
      "lng": 0.955811,
      "alt": 28475,
      "spd": 388,
      "ts": 1765105007,
      "hd": 281
    },
    {
      "lat": 51.531048,
      "lng": 1.044617,
      "alt": 29725,
      "spd": 393,
      "ts": 1765104976,
      "hd": 281
    },
    {
      "lat": 51.518803,
      "lng": 1.136703,
      "alt": 30525,
      "spd": 412,
      "ts": 1765104944,
      "hd": 282
    },
    {
      "lat": 51.506096,
      "lng": 1.231003,
      "alt": 32200,
      "spd": 413,
      "ts": 1765104913,
      "hd": 282
    },
    {
      "lat": 51.493431,
      "lng": 1.323929,
      "alt": 34125,
      "spd": 408,
      "ts": 1765104882,
      "hd": 282
    },
    {
      "lat": 51.481064,
      "lng": 1.414341,
      "alt": 36100,
      "spd": 401,
      "ts": 1765104850,
      "hd": 282
    },
    {
      "lat": 51.468807,
      "lng": 1.50444,
      "alt": 38125,
      "spd": 391,
      "ts": 1765104819,
      "hd": 282
    },
    {
      "lat": 51.456562,
      "lng": 1.59317,
      "alt": 39300,
      "spd": 398,
      "ts": 1765104787,
      "hd": 282
    },
    {
      "lat": 51.443714,
      "lng": 1.685715,
      "alt": 39950,
      "spd": 414,
      "ts": 1765104756,
      "hd": 282
    },
    {
      "lat": 51.430618,
      "lng": 1.779785,
      "alt": 40000,
      "spd": 415,
      "ts": 1765104725,
      "hd": 282
    },
    {
      "lat": 51.417389,
      "lng": 1.873763,
      "alt": 40000,
      "spd": 414,
      "ts": 1765104693,
      "hd": 282
    },
    {
      "lat": 51.404297,
      "lng": 1.966404,
      "alt": 40025,
      "spd": 414,
      "ts": 1765104662,
      "hd": 282
    },
    {
      "lat": 51.391296,
      "lng": 2.057858,
      "alt": 40000,
      "spd": 415,
      "ts": 1765104631,
      "hd": 282
    },
    {
      "lat": 51.37775,
      "lng": 2.152405,
      "alt": 40000,
      "spd": 414,
      "ts": 1765104600,
      "hd": 282
    },
    {
      "lat": 51.364342,
      "lng": 2.245331,
      "alt": 40000,
      "spd": 414,
      "ts": 1765104568,
      "hd": 282
    },
    {
      "lat": 51.350784,
      "lng": 2.339197,
      "alt": 40025,
      "spd": 416,
      "ts": 1765104537,
      "hd": 283
    },
    {
      "lat": 51.337326,
      "lng": 2.43117,
      "alt": 39975,
      "spd": 416,
      "ts": 1765104506,
      "hd": 283
    },
    {
      "lat": 51.323822,
      "lng": 2.523292,
      "alt": 40025,
      "spd": 416,
      "ts": 1765104475,
      "hd": 283
    },
    {
      "lat": 51.310181,
      "lng": 2.616157,
      "alt": 40000,
      "spd": 415,
      "ts": 1765104444,
      "hd": 283
    },
    {
      "lat": 51.296402,
      "lng": 2.708724,
      "alt": 40000,
      "spd": 413,
      "ts": 1765104413,
      "hd": 283
    },
    {
      "lat": 51.282257,
      "lng": 2.803221,
      "alt": 40000,
      "spd": 411,
      "ts": 1765104381,
      "hd": 283
    },
    {
      "lat": 51.26857,
      "lng": 2.894749,
      "alt": 40000,
      "spd": 410,
      "ts": 1765104350,
      "hd": 283
    },
    {
      "lat": 51.253689,
      "lng": 2.993011,
      "alt": 40000,
      "spd": 411,
      "ts": 1765104317,
      "hd": 283
    },
    {
      "lat": 51.239822,
      "lng": 3.084263,
      "alt": 40000,
      "spd": 412,
      "ts": 1765104285,
      "hd": 283
    },
    {
      "lat": 51.225571,
      "lng": 3.177414,
      "alt": 40000,
      "spd": 414,
      "ts": 1765104254,
      "hd": 283
    },
    {
      "lat": 51.211929,
      "lng": 3.26973,
      "alt": 40025,
      "spd": 414,
      "ts": 1765104223,
      "hd": 282
    },
    {
      "lat": 51.198303,
      "lng": 3.362336,
      "alt": 39975,
      "spd": 413,
      "ts": 1765104191,
      "hd": 284
    },
    {
      "lat": 51.181915,
      "lng": 3.453419,
      "alt": 40000,
      "spd": 412,
      "ts": 1765104160,
      "hd": 286
    },
    {
      "lat": 51.164658,
      "lng": 3.544947,
      "alt": 40000,
      "spd": 412,
      "ts": 1765104129,
      "hd": 286
    },
    {
      "lat": 51.147503,
      "lng": 3.636093,
      "alt": 40000,
      "spd": 412,
      "ts": 1765104097,
      "hd": 286
    },
    {
      "lat": 51.130692,
      "lng": 3.724588,
      "alt": 40000,
      "spd": 411,
      "ts": 1765104067,
      "hd": 286
    },
    {
      "lat": 51.113342,
      "lng": 3.815374,
      "alt": 40000,
      "spd": 411,
      "ts": 1765104036,
      "hd": 286
    },
    {
      "lat": 51.096481,
      "lng": 3.903275,
      "alt": 40000,
      "spd": 410,
      "ts": 1765104004,
      "hd": 286
    },
    {
      "lat": 51.079147,
      "lng": 3.993233,
      "alt": 39975,
      "spd": 410,
      "ts": 1765103973,
      "hd": 286
    },
    {
      "lat": 51.061615,
      "lng": 4.083786,
      "alt": 40000,
      "spd": 409,
      "ts": 1765103942,
      "hd": 287
    },
    {
      "lat": 51.044403,
      "lng": 4.172281,
      "alt": 40000,
      "spd": 410,
      "ts": 1765103911,
      "hd": 287
    },
    {
      "lat": 51.026608,
      "lng": 4.263458,
      "alt": 40000,
      "spd": 410,
      "ts": 1765103879,
      "hd": 287
    },
    {
      "lat": 51.00901,
      "lng": 4.353104,
      "alt": 40000,
      "spd": 410,
      "ts": 1765103848,
      "hd": 287
    },
    {
      "lat": 50.991486,
      "lng": 4.441891,
      "alt": 40000,
      "spd": 405,
      "ts": 1765103817,
      "hd": 287
    },
    {
      "lat": 50.973724,
      "lng": 4.531479,
      "alt": 40000,
      "spd": 406,
      "ts": 1765103785,
      "hd": 287
    },
    {
      "lat": 50.956192,
      "lng": 4.619454,
      "alt": 40025,
      "spd": 405,
      "ts": 1765103754,
      "hd": 287
    },
    {
      "lat": 50.938435,
      "lng": 4.707947,
      "alt": 39975,
      "spd": 408,
      "ts": 1765103723,
      "hd": 287
    },
    {
      "lat": 50.920376,
      "lng": 4.798203,
      "alt": 40000,
      "spd": 408,
      "ts": 1765103691,
      "hd": 287
    },
    {
      "lat": 50.902172,
      "lng": 4.888306,
      "alt": 40000,
      "spd": 408,
      "ts": 1765103659,
      "hd": 287
    },
    {
      "lat": 50.883736,
      "lng": 4.979248,
      "alt": 40000,
      "spd": 409,
      "ts": 1765103627,
      "hd": 287
    },
    {
      "lat": 50.865555,
      "lng": 5.068409,
      "alt": 40000,
      "spd": 411,
      "ts": 1765103596,
      "hd": 287
    },
    {
      "lat": 50.847099,
      "lng": 5.158539,
      "alt": 40000,
      "spd": 412,
      "ts": 1765103564,
      "hd": 287
    },
    {
      "lat": 50.828934,
      "lng": 5.247233,
      "alt": 40000,
      "spd": 412,
      "ts": 1765103533,
      "hd": 287
    },
    {
      "lat": 50.810093,
      "lng": 5.338211,
      "alt": 40000,
      "spd": 412,
      "ts": 1765103502,
      "hd": 288
    },
    {
      "lat": 50.791378,
      "lng": 5.428391,
      "alt": 40000,
      "spd": 414,
      "ts": 1765103470,
      "hd": 288
    },
    {
      "lat": 50.772629,
      "lng": 5.518551,
      "alt": 40000,
      "spd": 414,
      "ts": 1765103439,
      "hd": 288
    },
    {
      "lat": 50.753952,
      "lng": 5.607555,
      "alt": 40000,
      "spd": 415,
      "ts": 1765103407,
      "hd": 288
    },
    {
      "lat": 50.734863,
      "lng": 5.698547,
      "alt": 40000,
      "spd": 415,
      "ts": 1765103376,
      "hd": 288
    },
    {
      "lat": 50.716194,
      "lng": 5.786896,
      "alt": 40025,
      "spd": 414,
      "ts": 1765103345,
      "hd": 288
    },
    {
      "lat": 50.696182,
      "lng": 5.881323,
      "alt": 40000,
      "spd": 412,
      "ts": 1765103312,
      "hd": 288
    },
    {
      "lat": 50.677094,
      "lng": 5.970993,
      "alt": 40000,
      "spd": 411,
      "ts": 1765103281,
      "hd": 288
    },
    {
      "lat": 50.658237,
      "lng": 6.058812,
      "alt": 40000,
      "spd": 410,
      "ts": 1765103249,
      "hd": 288
    },
    {
      "lat": 50.639011,
      "lng": 6.148261,
      "alt": 40000,
      "spd": 410,
      "ts": 1765103218,
      "hd": 288
    },
    {
      "lat": 50.620422,
      "lng": 6.234308,
      "alt": 40000,
      "spd": 409,
      "ts": 1765103187,
      "hd": 288
    },
    {
      "lat": 50.601288,
      "lng": 6.322704,
      "alt": 40000,
      "spd": 409,
      "ts": 1765103156,
      "hd": 288
    },
    {
      "lat": 50.58197,
      "lng": 6.41139,
      "alt": 40000,
      "spd": 409,
      "ts": 1765103124,
      "hd": 289
    },
    {
      "lat": 50.562618,
      "lng": 6.499749,
      "alt": 40000,
      "spd": 408,
      "ts": 1765103092,
      "hd": 289
    },
    {
      "lat": 50.54306,
      "lng": 6.588761,
      "alt": 40000,
      "spd": 408,
      "ts": 1765103061,
      "hd": 289
    },
    {
      "lat": 50.523743,
      "lng": 6.676507,
      "alt": 40000,
      "spd": 407,
      "ts": 1765103029,
      "hd": 289
    },
    {
      "lat": 50.504013,
      "lng": 6.765337,
      "alt": 40000,
      "spd": 408,
      "ts": 1765102998,
      "hd": 289
    },
    {
      "lat": 50.485016,
      "lng": 6.850495,
      "alt": 40000,
      "spd": 406,
      "ts": 1765102966,
      "hd": 289
    },
    {
      "lat": 50.465324,
      "lng": 6.938757,
      "alt": 40000,
      "spd": 408,
      "ts": 1765102935,
      "hd": 289
    },
    {
      "lat": 50.445915,
      "lng": 7.025014,
      "alt": 40000,
      "spd": 411,
      "ts": 1765102904,
      "hd": 289
    },
    {
      "lat": 50.426285,
      "lng": 7.112202,
      "alt": 40000,
      "spd": 413,
      "ts": 1765102873,
      "hd": 289
    },
    {
      "lat": 50.406391,
      "lng": 7.200796,
      "alt": 40000,
      "spd": 417,
      "ts": 1765102841,
      "hd": 289
    },
    {
      "lat": 50.386368,
      "lng": 7.29138,
      "alt": 40000,
      "spd": 419,
      "ts": 1765102810,
      "hd": 288
    },
    {
      "lat": 50.365997,
      "lng": 7.381512,
      "alt": 40000,
      "spd": 419,
      "ts": 1765102779,
      "hd": 290
    },
    {
      "lat": 50.343704,
      "lng": 7.469908,
      "alt": 40000,
      "spd": 420,
      "ts": 1765102747,
      "hd": 291
    },
    {
      "lat": 50.321045,
      "lng": 7.558377,
      "alt": 40000,
      "spd": 425,
      "ts": 1765102716,
      "hd": 291
    },
    {
      "lat": 50.298248,
      "lng": 7.647207,
      "alt": 40000,
      "spd": 427,
      "ts": 1765102685,
      "hd": 291
    },
    {
      "lat": 50.275589,
      "lng": 7.735242,
      "alt": 40000,
      "spd": 430,
      "ts": 1765102654,
      "hd": 292
    },
    {
      "lat": 50.252163,
      "lng": 7.825755,
      "alt": 40000,
      "spd": 428,
      "ts": 1765102623,
      "hd": 292
    },
    {
      "lat": 50.229492,
      "lng": 7.912977,
      "alt": 40000,
      "spd": 424,
      "ts": 1765102591,
      "hd": 292
    },
    {
      "lat": 50.2061,
      "lng": 8.002673,
      "alt": 40000,
      "spd": 424,
      "ts": 1765102560,
      "hd": 292
    },
    {
      "lat": 50.183304,
      "lng": 8.089768,
      "alt": 40000,
      "spd": 424,
      "ts": 1765102529,
      "hd": 292
    },
    {
      "lat": 50.156799,
      "lng": 8.190597,
      "alt": 40000,
      "spd": 426,
      "ts": 1765102493,
      "hd": 292
    },
    {
      "lat": 50.133133,
      "lng": 8.280294,
      "alt": 40000,
      "spd": 429,
      "ts": 1765102462,
      "hd": 292
    },
    {
      "lat": 50.109154,
      "lng": 8.370617,
      "alt": 40000,
      "spd": 429,
      "ts": 1765102431,
      "hd": 292
    },
    {
      "lat": 50.08548,
      "lng": 8.459689,
      "alt": 40000,
      "spd": 430,
      "ts": 1765102399,
      "hd": 292
    },
    {
      "lat": 50.060898,
      "lng": 8.5517,
      "alt": 40000,
      "spd": 430,
      "ts": 1765102367,
      "hd": 292
    },
    {
      "lat": 50.036774,
      "lng": 8.641542,
      "alt": 40000,
      "spd": 429,
      "ts": 1765102335,
      "hd": 292
    },
    {
      "lat": 49.991425,
      "lng": 8.809699,
      "alt": 40000,
      "spd": 428,
      "ts": 1765102276,
      "hd": 292
    },
    {
      "lat": 49.984814,
      "lng": 8.834122,
      "alt": 40000,
      "spd": 428,
      "ts": 1765102267,
      "hd": 292
    },
    {
      "lat": 49.960785,
      "lng": 8.922778,
      "alt": 40000,
      "spd": 428,
      "ts": 1765102236,
      "hd": 292
    },
    {
      "lat": 49.936447,
      "lng": 9.012055,
      "alt": 40000,
      "spd": 429,
      "ts": 1765102204,
      "hd": 292
    },
    {
      "lat": 49.912144,
      "lng": 9.100986,
      "alt": 40000,
      "spd": 429,
      "ts": 1765102173,
      "hd": 293
    },
    {
      "lat": 49.888046,
      "lng": 9.188618,
      "alt": 40000,
      "spd": 428,
      "ts": 1765102141,
      "hd": 293
    },
    {
      "lat": 49.863419,
      "lng": 9.278027,
      "alt": 40000,
      "spd": 426,
      "ts": 1765102110,
      "hd": 293
    },
    {
      "lat": 49.839111,
      "lng": 9.365917,
      "alt": 40000,
      "spd": 425,
      "ts": 1765102078,
      "hd": 293
    },
    {
      "lat": 49.814529,
      "lng": 9.454313,
      "alt": 40000,
      "spd": 424,
      "ts": 1765102047,
      "hd": 293
    },
    {
      "lat": 49.790131,
      "lng": 9.541997,
      "alt": 40000,
      "spd": 425,
      "ts": 1765102015,
      "hd": 293
    },
    {
      "lat": 49.765503,
      "lng": 9.630023,
      "alt": 40000,
      "spd": 428,
      "ts": 1765101984,
      "hd": 293
    },
    {
      "lat": 49.740326,
      "lng": 9.719647,
      "alt": 40000,
      "spd": 430,
      "ts": 1765101951,
      "hd": 293
    },
    {
      "lat": 49.7146,
      "lng": 9.810863,
      "alt": 40000,
      "spd": 433,
      "ts": 1765101919,
      "hd": 293
    },
    {
      "lat": 49.689438,
      "lng": 9.899943,
      "alt": 40000,
      "spd": 434,
      "ts": 1765101888,
      "hd": 293
    },
    {
      "lat": 49.664486,
      "lng": 9.987686,
      "alt": 40000,
      "spd": 434,
      "ts": 1765101857,
      "hd": 293
    },
    {
      "lat": 49.638565,
      "lng": 10.078655,
      "alt": 40000,
      "spd": 436,
      "ts": 1765101825,
      "hd": 293
    },
    {
      "lat": 49.613094,
      "lng": 10.167772,
      "alt": 40000,
      "spd": 436,
      "ts": 1765101793,
      "hd": 293
    },
    {
      "lat": 49.587212,
      "lng": 10.257815,
      "alt": 40000,
      "spd": 436,
      "ts": 1765101762,
      "hd": 293
    },
    {
      "lat": 49.56142,
      "lng": 10.347265,
      "alt": 40000,
      "spd": 436,
      "ts": 1765101730,
      "hd": 293
    },
    {
      "lat": 49.536236,
      "lng": 10.43434,
      "alt": 40000,
      "spd": 434,
      "ts": 1765101699,
      "hd": 294
    },
    {
      "lat": 49.510025,
      "lng": 10.524468,
      "alt": 40000,
      "spd": 434,
      "ts": 1765101667,
      "hd": 294
    },
    {
      "lat": 49.484562,
      "lng": 10.611902,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101636,
      "hd": 294
    },
    {
      "lat": 49.458542,
      "lng": 10.700758,
      "alt": 40000,
      "spd": 434,
      "ts": 1765101604,
      "hd": 294
    },
    {
      "lat": 49.432194,
      "lng": 10.788351,
      "alt": 40000,
      "spd": 433,
      "ts": 1765101573,
      "hd": 295
    },
    {
      "lat": 49.405518,
      "lng": 10.875742,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101541,
      "hd": 294
    },
    {
      "lat": 49.381073,
      "lng": 10.966468,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101510,
      "hd": 291
    },
    {
      "lat": 49.358093,
      "lng": 11.05457,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101478,
      "hd": 291
    },
    {
      "lat": 49.33429,
      "lng": 11.145207,
      "alt": 40000,
      "spd": 433,
      "ts": 1765101447,
      "hd": 292
    },
    {
      "lat": 49.310551,
      "lng": 11.235472,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101414,
      "hd": 292
    },
    {
      "lat": 49.286716,
      "lng": 11.325459,
      "alt": 40000,
      "spd": 433,
      "ts": 1765101383,
      "hd": 292
    },
    {
      "lat": 49.262375,
      "lng": 11.417119,
      "alt": 40000,
      "spd": 436,
      "ts": 1765101351,
      "hd": 292
    },
    {
      "lat": 49.238251,
      "lng": 11.507756,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101319,
      "hd": 292
    },
    {
      "lat": 49.214722,
      "lng": 11.595647,
      "alt": 40000,
      "spd": 431,
      "ts": 1765101288,
      "hd": 292
    },
    {
      "lat": 49.190353,
      "lng": 11.6862,
      "alt": 40000,
      "spd": 437,
      "ts": 1765101256,
      "hd": 292
    },
    {
      "lat": 49.166061,
      "lng": 11.776287,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101224,
      "hd": 292
    },
    {
      "lat": 49.142635,
      "lng": 11.863138,
      "alt": 40000,
      "spd": 429,
      "ts": 1765101193,
      "hd": 292
    },
    {
      "lat": 49.1185,
      "lng": 11.951928,
      "alt": 40000,
      "spd": 429,
      "ts": 1765101161,
      "hd": 292
    },
    {
      "lat": 49.0952,
      "lng": 12.037283,
      "alt": 40000,
      "spd": 430,
      "ts": 1765101130,
      "hd": 292
    },
    {
      "lat": 49.071041,
      "lng": 12.125364,
      "alt": 40000,
      "spd": 433,
      "ts": 1765101099,
      "hd": 292
    },
    {
      "lat": 49.046539,
      "lng": 12.214684,
      "alt": 39975,
      "spd": 436,
      "ts": 1765101067,
      "hd": 292
    },
    {
      "lat": 49.022186,
      "lng": 12.303138,
      "alt": 40000,
      "spd": 432,
      "ts": 1765101036,
      "hd": 292
    },
    {
      "lat": 48.997467,
      "lng": 12.392437,
      "alt": 40000,
      "spd": 431,
      "ts": 1765101004,
      "hd": 292
    },
    {
      "lat": 48.97023,
      "lng": 12.490398,
      "alt": 40000,
      "spd": 433,
      "ts": 1765100973,
      "hd": 293
    },
    {
      "lat": 48.945969,
      "lng": 12.577127,
      "alt": 40000,
      "spd": 442,
      "ts": 1765100938,
      "hd": 292
    },
    {
      "lat": 48.920773,
      "lng": 12.667346,
      "alt": 40000,
      "spd": 442,
      "ts": 1765100907,
      "hd": 293
    },
    {
      "lat": 48.895512,
      "lng": 12.756929,
      "alt": 40000,
      "spd": 444,
      "ts": 1765100875,
      "hd": 293
    },
    {
      "lat": 48.869427,
      "lng": 12.849641,
      "alt": 40000,
      "spd": 445,
      "ts": 1765100843,
      "hd": 293
    },
    {
      "lat": 48.844204,
      "lng": 12.938752,
      "alt": 40000,
      "spd": 449,
      "ts": 1765100812,
      "hd": 293
    },
    {
      "lat": 48.81802,
      "lng": 13.030441,
      "alt": 40000,
      "spd": 451,
      "ts": 1765100780,
      "hd": 293
    },
    {
      "lat": 48.79163,
      "lng": 13.123041,
      "alt": 40000,
      "spd": 451,
      "ts": 1765100748,
      "hd": 293
    },
    {
      "lat": 48.765141,
      "lng": 13.215549,
      "alt": 40000,
      "spd": 449,
      "ts": 1765100716,
      "hd": 293
    },
    {
      "lat": 48.7388,
      "lng": 13.307335,
      "alt": 40000,
      "spd": 456,
      "ts": 1765100685,
      "hd": 293
    },
    {
      "lat": 48.712105,
      "lng": 13.399699,
      "alt": 40000,
      "spd": 455,
      "ts": 1765100653,
      "hd": 293
    },
    {
      "lat": 48.685478,
      "lng": 13.491136,
      "alt": 40000,
      "spd": 459,
      "ts": 1765100622,
      "hd": 293
    },
    {
      "lat": 48.658566,
      "lng": 13.583782,
      "alt": 40000,
      "spd": 460,
      "ts": 1765100590,
      "hd": 293
    },
    {
      "lat": 48.632126,
      "lng": 13.674505,
      "alt": 40000,
      "spd": 458,
      "ts": 1765100559,
      "hd": 293
    },
    {
      "lat": 48.604694,
      "lng": 13.767776,
      "alt": 40000,
      "spd": 456,
      "ts": 1765100527,
      "hd": 293
    },
    {
      "lat": 48.577766,
      "lng": 13.859405,
      "alt": 40000,
      "spd": 454,
      "ts": 1765100495,
      "hd": 293
    },
    {
      "lat": 48.551044,
      "lng": 13.950097,
      "alt": 40000,
      "spd": 452,
      "ts": 1765100464,
      "hd": 293
    },
    {
      "lat": 48.52388,
      "lng": 14.041569,
      "alt": 40000,
      "spd": 450,
      "ts": 1765100432,
      "hd": 294
    },
    {
      "lat": 48.496841,
      "lng": 14.13236,
      "alt": 40000,
      "spd": 450,
      "ts": 1765100400,
      "hd": 294
    },
    {
      "lat": 48.470318,
      "lng": 14.221066,
      "alt": 40000,
      "spd": 448,
      "ts": 1765100369,
      "hd": 294
    },
    {
      "lat": 48.443436,
      "lng": 14.310637,
      "alt": 40000,
      "spd": 448,
      "ts": 1765100337,
      "hd": 294
    },
    {
      "lat": 48.416309,
      "lng": 14.400739,
      "alt": 40000,
      "spd": 447,
      "ts": 1765100306,
      "hd": 294
    },
    {
      "lat": 48.389427,
      "lng": 14.490042,
      "alt": 39975,
      "spd": 452,
      "ts": 1765100274,
      "hd": 294
    },
    {
      "lat": 48.361763,
      "lng": 14.58128,
      "alt": 40000,
      "spd": 454,
      "ts": 1765100242,
      "hd": 294
    },
    {
      "lat": 48.33453,
      "lng": 14.670902,
      "alt": 40000,
      "spd": 455,
      "ts": 1765100211,
      "hd": 294
    },
    {
      "lat": 48.307045,
      "lng": 14.760827,
      "alt": 40000,
      "spd": 454,
      "ts": 1765100180,
      "hd": 294
    },
    {
      "lat": 48.279644,
      "lng": 14.850337,
      "alt": 40000,
      "spd": 454,
      "ts": 1765100148,
      "hd": 294
    },
    {
      "lat": 48.252525,
      "lng": 14.938447,
      "alt": 40000,
      "spd": 448,
      "ts": 1765100117,
      "hd": 294
    },
    {
      "lat": 48.22517,
      "lng": 15.027199,
      "alt": 40000,
      "spd": 450,
      "ts": 1765100086,
      "hd": 294
    },
    {
      "lat": 48.197453,
      "lng": 15.116491,
      "alt": 40025,
      "spd": 444,
      "ts": 1765100054,
      "hd": 294
    },
    {
      "lat": 48.170151,
      "lng": 15.204548,
      "alt": 39975,
      "spd": 441,
      "ts": 1765100022,
      "hd": 294
    },
    {
      "lat": 48.142704,
      "lng": 15.292246,
      "alt": 40000,
      "spd": 442,
      "ts": 1765099991,
      "hd": 295
    },
    {
      "lat": 48.114899,
      "lng": 15.380906,
      "alt": 40000,
      "spd": 447,
      "ts": 1765099959,
      "hd": 295
    },
    {
      "lat": 48.087074,
      "lng": 15.469826,
      "alt": 40000,
      "spd": 449,
      "ts": 1765099927,
      "hd": 295
    },
    {
      "lat": 48.058987,
      "lng": 15.558784,
      "alt": 40025,
      "spd": 454,
      "ts": 1765099896,
      "hd": 295
    },
    {
      "lat": 48.030735,
      "lng": 15.648308,
      "alt": 40000,
      "spd": 464,
      "ts": 1765099864,
      "hd": 295
    },
    {
      "lat": 48.002041,
      "lng": 15.738539,
      "alt": 40000,
      "spd": 468,
      "ts": 1765099833,
      "hd": 295
    },
    {
      "lat": 47.972538,
      "lng": 15.830664,
      "alt": 40000,
      "spd": 468,
      "ts": 1765099802,
      "hd": 295
    },
    {
      "lat": 47.943214,
      "lng": 15.92275,
      "alt": 40000,
      "spd": 467,
      "ts": 1765099770,
      "hd": 295
    },
    {
      "lat": 47.913643,
      "lng": 16.014538,
      "alt": 40025,
      "spd": 463,
      "ts": 1765099738,
      "hd": 295
    },
    {
      "lat": 47.885071,
      "lng": 16.10335,
      "alt": 40000,
      "spd": 458,
      "ts": 1765099707,
      "hd": 295
    },
    {
      "lat": 47.855873,
      "lng": 16.193821,
      "alt": 39875,
      "spd": 458,
      "ts": 1765099675,
      "hd": 295
    },
    {
      "lat": 47.827309,
      "lng": 16.281984,
      "alt": 39625,
      "spd": 458,
      "ts": 1765099644,
      "hd": 295
    },
    {
      "lat": 47.79837,
      "lng": 16.370838,
      "alt": 39350,
      "spd": 456,
      "ts": 1765099612,
      "hd": 296
    },
    {
      "lat": 47.768589,
      "lng": 16.460283,
      "alt": 39100,
      "spd": 454,
      "ts": 1765099580,
      "hd": 296
    },
    {
      "lat": 47.739037,
      "lng": 16.547394,
      "alt": 38850,
      "spd": 456,
      "ts": 1765099549,
      "hd": 296
    },
    {
      "lat": 47.711452,
      "lng": 16.637445,
      "alt": 38575,
      "spd": 456,
      "ts": 1765099518,
      "hd": 293
    },
    {
      "lat": 47.684155,
      "lng": 16.728951,
      "alt": 38325,
      "spd": 462,
      "ts": 1765099486,
      "hd": 293
    },
    {
      "lat": 47.657196,
      "lng": 16.81925,
      "alt": 38075,
      "spd": 464,
      "ts": 1765099455,
      "hd": 293
    },
    {
      "lat": 47.629822,
      "lng": 16.910349,
      "alt": 38000,
      "spd": 462,
      "ts": 1765099423,
      "hd": 294
    },
    {
      "lat": 47.602764,
      "lng": 17.000057,
      "alt": 38000,
      "spd": 460,
      "ts": 1765099392,
      "hd": 294
    },
    {
      "lat": 47.575386,
      "lng": 17.090363,
      "alt": 38000,
      "spd": 457,
      "ts": 1765099360,
      "hd": 294
    },
    {
      "lat": 47.547886,
      "lng": 17.181147,
      "alt": 38000,
      "spd": 456,
      "ts": 1765099328,
      "hd": 294
    },
    {
      "lat": 47.520699,
      "lng": 17.270407,
      "alt": 38000,
      "spd": 454,
      "ts": 1765099297,
      "hd": 294
    },
    {
      "lat": 47.493286,
      "lng": 17.36005,
      "alt": 38000,
      "spd": 454,
      "ts": 1765099265,
      "hd": 294
    },
    {
      "lat": 47.466286,
      "lng": 17.447918,
      "alt": 38000,
      "spd": 450,
      "ts": 1765099234,
      "hd": 294
    },
    {
      "lat": 47.438976,
      "lng": 17.536516,
      "alt": 38000,
      "spd": 454,
      "ts": 1765099202,
      "hd": 294
    },
    {
      "lat": 47.411648,
      "lng": 17.625055,
      "alt": 38000,
      "spd": 453,
      "ts": 1765099171,
      "hd": 294
    },
    {
      "lat": 47.38443,
      "lng": 17.713032,
      "alt": 38000,
      "spd": 452,
      "ts": 1765099139,
      "hd": 294
    },
    {
      "lat": 47.356636,
      "lng": 17.802071,
      "alt": 38000,
      "spd": 458,
      "ts": 1765099108,
      "hd": 294
    },
    {
      "lat": 47.328667,
      "lng": 17.891609,
      "alt": 38000,
      "spd": 459,
      "ts": 1765099076,
      "hd": 294
    },
    {
      "lat": 47.301159,
      "lng": 17.979309,
      "alt": 38000,
      "spd": 459,
      "ts": 1765099045,
      "hd": 294
    },
    {
      "lat": 47.273209,
      "lng": 18.06831,
      "alt": 38000,
      "spd": 458,
      "ts": 1765099014,
      "hd": 294
    },
    {
      "lat": 47.244946,
      "lng": 18.157913,
      "alt": 38000,
      "spd": 464,
      "ts": 1765098982,
      "hd": 294
    },
    {
      "lat": 47.216606,
      "lng": 18.247458,
      "alt": 38000,
      "spd": 464,
      "ts": 1765098951,
      "hd": 295
    },
    {
      "lat": 47.188122,
      "lng": 18.337009,
      "alt": 38000,
      "spd": 463,
      "ts": 1765098919,
      "hd": 295
    },
    {
      "lat": 47.160137,
      "lng": 18.424583,
      "alt": 38000,
      "spd": 460,
      "ts": 1765098888,
      "hd": 295
    },
    {
      "lat": 47.131618,
      "lng": 18.513798,
      "alt": 38000,
      "spd": 459,
      "ts": 1765098857,
      "hd": 295
    },
    {
      "lat": 47.102928,
      "lng": 18.603125,
      "alt": 37975,
      "spd": 463,
      "ts": 1765098825,
      "hd": 295
    },
    {
      "lat": 47.073341,
      "lng": 18.694786,
      "alt": 38000,
      "spd": 470,
      "ts": 1765098793,
      "hd": 295
    },
    {
      "lat": 47.044098,
      "lng": 18.7852,
      "alt": 38000,
      "spd": 468,
      "ts": 1765098761,
      "hd": 295
    },
    {
      "lat": 47.014931,
      "lng": 18.874958,
      "alt": 38000,
      "spd": 466,
      "ts": 1765098730,
      "hd": 295
    },
    {
      "lat": 46.985447,
      "lng": 18.965513,
      "alt": 38000,
      "spd": 465,
      "ts": 1765098698,
      "hd": 295
    },
    {
      "lat": 46.955582,
      "lng": 19.056873,
      "alt": 38000,
      "spd": 466,
      "ts": 1765098666,
      "hd": 295
    },
    {
      "lat": 46.926216,
      "lng": 19.146427,
      "alt": 38000,
      "spd": 465,
      "ts": 1765098634,
      "hd": 295
    },
    {
      "lat": 46.896614,
      "lng": 19.236284,
      "alt": 38000,
      "spd": 467,
      "ts": 1765098603,
      "hd": 295
    },
    {
      "lat": 46.867229,
      "lng": 19.325392,
      "alt": 38000,
      "spd": 467,
      "ts": 1765098571,
      "hd": 295
    },
    {
      "lat": 46.837116,
      "lng": 19.416147,
      "alt": 38000,
      "spd": 466,
      "ts": 1765098539,
      "hd": 295
    },
    {
      "lat": 46.807564,
      "lng": 19.504921,
      "alt": 38000,
      "spd": 464,
      "ts": 1765098507,
      "hd": 295
    },
    {
      "lat": 46.777828,
      "lng": 19.593891,
      "alt": 38000,
      "spd": 462,
      "ts": 1765098475,
      "hd": 295
    },
    {
      "lat": 46.747982,
      "lng": 19.682962,
      "alt": 38000,
      "spd": 463,
      "ts": 1765098444,
      "hd": 295
    },
    {
      "lat": 46.718021,
      "lng": 19.772282,
      "alt": 38000,
      "spd": 462,
      "ts": 1765098412,
      "hd": 296
    },
    {
      "lat": 46.689541,
      "lng": 19.856701,
      "alt": 38000,
      "spd": 463,
      "ts": 1765098382,
      "hd": 296
    },
    {
      "lat": 46.659847,
      "lng": 19.944513,
      "alt": 38000,
      "spd": 465,
      "ts": 1765098350,
      "hd": 296
    },
    {
      "lat": 46.629635,
      "lng": 20.03343,
      "alt": 38000,
      "spd": 466,
      "ts": 1765098318,
      "hd": 296
    },
    {
      "lat": 46.598652,
      "lng": 20.124273,
      "alt": 38000,
      "spd": 467,
      "ts": 1765098286,
      "hd": 296
    },
    {
      "lat": 46.568031,
      "lng": 20.213758,
      "alt": 38000,
      "spd": 468,
      "ts": 1765098254,
      "hd": 296
    },
    {
      "lat": 46.537506,
      "lng": 20.302753,
      "alt": 38000,
      "spd": 466,
      "ts": 1765098222,
      "hd": 296
    },
    {
      "lat": 46.507248,
      "lng": 20.390646,
      "alt": 38000,
      "spd": 468,
      "ts": 1765098191,
      "hd": 296
    },
    {
      "lat": 46.476166,
      "lng": 20.480551,
      "alt": 38000,
      "spd": 470,
      "ts": 1765098159,
      "hd": 296
    },
    {
      "lat": 46.44553,
      "lng": 20.56893,
      "alt": 38000,
      "spd": 468,
      "ts": 1765098127,
      "hd": 296
    },
    {
      "lat": 46.41497,
      "lng": 20.656792,
      "alt": 38000,
      "spd": 468,
      "ts": 1765098096,
      "hd": 296
    },
    {
      "lat": 46.383839,
      "lng": 20.745968,
      "alt": 38000,
      "spd": 469,
      "ts": 1765098064,
      "hd": 296
    },
    {
      "lat": 46.353107,
      "lng": 20.833885,
      "alt": 38000,
      "spd": 470,
      "ts": 1765098033,
      "hd": 296
    },
    {
      "lat": 46.321758,
      "lng": 20.92309,
      "alt": 38000,
      "spd": 468,
      "ts": 1765098001,
      "hd": 296
    },
    {
      "lat": 46.290466,
      "lng": 21.011971,
      "alt": 38000,
      "spd": 469,
      "ts": 1765097969,
      "hd": 297
    },
    {
      "lat": 46.260479,
      "lng": 21.096672,
      "alt": 38000,
      "spd": 469,
      "ts": 1765097939,
      "hd": 297
    },
    {
      "lat": 46.228951,
      "lng": 21.185579,
      "alt": 38000,
      "spd": 469,
      "ts": 1765097907,
      "hd": 297
    },
    {
      "lat": 46.197933,
      "lng": 21.273048,
      "alt": 38000,
      "spd": 467,
      "ts": 1765097875,
      "hd": 296
    },
    {
      "lat": 46.166683,
      "lng": 21.361412,
      "alt": 38000,
      "spd": 465,
      "ts": 1765097843,
      "hd": 296
    },
    {
      "lat": 46.134602,
      "lng": 21.449671,
      "alt": 38000,
      "spd": 464,
      "ts": 1765097811,
      "hd": 298
    },
    {
      "lat": 46.101852,
      "lng": 21.536968,
      "alt": 38000,
      "spd": 464,
      "ts": 1765097779,
      "hd": 298
    },
    {
      "lat": 46.069321,
      "lng": 21.623558,
      "alt": 38000,
      "spd": 464,
      "ts": 1765097747,
      "hd": 298
    },
    {
      "lat": 46.038307,
      "lng": 21.705978,
      "alt": 38000,
      "spd": 466,
      "ts": 1765097717,
      "hd": 298
    },
    {
      "lat": 46.005432,
      "lng": 21.792965,
      "alt": 38000,
      "spd": 470,
      "ts": 1765097685,
      "hd": 298
    },
    {
      "lat": 45.972145,
      "lng": 21.880747,
      "alt": 38000,
      "spd": 476,
      "ts": 1765097653,
      "hd": 298
    },
    {
      "lat": 45.939152,
      "lng": 21.967173,
      "alt": 38000,
      "spd": 477,
      "ts": 1765097621,
      "hd": 298
    },
    {
      "lat": 45.90517,
      "lng": 22.05534,
      "alt": 38000,
      "spd": 480,
      "ts": 1765097590,
      "hd": 299
    },
    {
      "lat": 45.870083,
      "lng": 22.145895,
      "alt": 38000,
      "spd": 481,
      "ts": 1765097557,
      "hd": 299
    },
    {
      "lat": 45.835072,
      "lng": 22.236647,
      "alt": 38000,
      "spd": 483,
      "ts": 1765097525,
      "hd": 298
    },
    {
      "lat": 45.800423,
      "lng": 22.326717,
      "alt": 38000,
      "spd": 486,
      "ts": 1765097493,
      "hd": 298
    },
    {
      "lat": 45.765709,
      "lng": 22.416786,
      "alt": 38000,
      "spd": 487,
      "ts": 1765097461,
      "hd": 298
    },
    {
      "lat": 45.731045,
      "lng": 22.505949,
      "alt": 38000,
      "spd": 487,
      "ts": 1765097429,
      "hd": 299
    },
    {
      "lat": 45.695896,
      "lng": 22.596176,
      "alt": 38000,
      "spd": 488,
      "ts": 1765097397,
      "hd": 299
    },
    {
      "lat": 45.660923,
      "lng": 22.685648,
      "alt": 38000,
      "spd": 487,
      "ts": 1765097365,
      "hd": 299
    },
    {
      "lat": 45.62616,
      "lng": 22.774408,
      "alt": 38000,
      "spd": 486,
      "ts": 1765097333,
      "hd": 299
    },
    {
      "lat": 45.59074,
      "lng": 22.864445,
      "alt": 38000,
      "spd": 484,
      "ts": 1765097301,
      "hd": 299
    },
    {
      "lat": 45.556618,
      "lng": 22.950876,
      "alt": 38000,
      "spd": 480,
      "ts": 1765097269,
      "hd": 299
    },
    {
      "lat": 45.521652,
      "lng": 23.039581,
      "alt": 38000,
      "spd": 480,
      "ts": 1765097237,
      "hd": 299
    },
    {
      "lat": 45.487247,
      "lng": 23.126854,
      "alt": 38000,
      "spd": 482,
      "ts": 1765097206,
      "hd": 299
    },
    {
      "lat": 45.452858,
      "lng": 23.213106,
      "alt": 38000,
      "spd": 481,
      "ts": 1765097175,
      "hd": 299
    },
    {
      "lat": 45.420544,
      "lng": 23.295528,
      "alt": 38000,
      "spd": 480,
      "ts": 1765097145,
      "hd": 299
    },
    {
      "lat": 45.385513,
      "lng": 23.382561,
      "alt": 38000,
      "spd": 478,
      "ts": 1765097113,
      "hd": 299
    },
    {
      "lat": 45.350464,
      "lng": 23.469727,
      "alt": 38000,
      "spd": 476,
      "ts": 1765097081,
      "hd": 299
    },
    {
      "lat": 45.315273,
      "lng": 23.556154,
      "alt": 38000,
      "spd": 477,
      "ts": 1765097049,
      "hd": 299
    },
    {
      "lat": 45.28075,
      "lng": 23.642408,
      "alt": 38000,
      "spd": 480,
      "ts": 1765097017,
      "hd": 299
    },
    {
      "lat": 45.245338,
      "lng": 23.729847,
      "alt": 38000,
      "spd": 482,
      "ts": 1765096985,
      "hd": 300
    },
    {
      "lat": 45.209484,
      "lng": 23.817305,
      "alt": 38000,
      "spd": 480,
      "ts": 1765096953,
      "hd": 300
    },
    {
      "lat": 45.174305,
      "lng": 23.903967,
      "alt": 38000,
      "spd": 480,
      "ts": 1765096921,
      "hd": 300
    },
    {
      "lat": 45.138283,
      "lng": 23.99061,
      "alt": 38000,
      "spd": 480,
      "ts": 1765096889,
      "hd": 300
    },
    {
      "lat": 45.103886,
      "lng": 24.07659,
      "alt": 38000,
      "spd": 478,
      "ts": 1765096858,
      "hd": 300
    },
    {
      "lat": 45.068722,
      "lng": 24.15976,
      "alt": 38000,
      "spd": 479,
      "ts": 1765096827,
      "hd": 300
    },
    {
      "lat": 45.03273,
      "lng": 24.246445,
      "alt": 38000,
      "spd": 478,
      "ts": 1765096795,
      "hd": 300
    },
    {
      "lat": 44.999008,
      "lng": 24.327068,
      "alt": 38000,
      "spd": 478,
      "ts": 1765096765,
      "hd": 300
    },
    {
      "lat": 44.963776,
      "lng": 24.412287,
      "alt": 38000,
      "spd": 477,
      "ts": 1765096733,
      "hd": 300
    },
    {
      "lat": 44.927219,
      "lng": 24.499094,
      "alt": 38000,
      "spd": 476,
      "ts": 1765096700,
      "hd": 300
    },
    {
      "lat": 44.890903,
      "lng": 24.585493,
      "alt": 38000,
      "spd": 477,
      "ts": 1765096668,
      "hd": 300
    },
    {
      "lat": 44.857098,
      "lng": 24.665989,
      "alt": 38000,
      "spd": 476,
      "ts": 1765096638,
      "hd": 300
    },
    {
      "lat": 44.821247,
      "lng": 24.751024,
      "alt": 38000,
      "spd": 474,
      "ts": 1765096606,
      "hd": 300
    },
    {
      "lat": 44.784939,
      "lng": 24.836826,
      "alt": 38000,
      "spd": 475,
      "ts": 1765096574,
      "hd": 300
    },
    {
      "lat": 44.749557,
      "lng": 24.920576,
      "alt": 38000,
      "spd": 477,
      "ts": 1765096542,
      "hd": 300
    },
    {
      "lat": 44.713238,
      "lng": 25.006086,
      "alt": 38000,
      "spd": 479,
      "ts": 1765096510,
      "hd": 300
    },
    {
      "lat": 44.676601,
      "lng": 25.092764,
      "alt": 38000,
      "spd": 484,
      "ts": 1765096478,
      "hd": 300
    },
    {
      "lat": 44.641006,
      "lng": 25.177298,
      "alt": 38000,
      "spd": 484,
      "ts": 1765096447,
      "hd": 300
    },
    {
      "lat": 44.604961,
      "lng": 25.262186,
      "alt": 38000,
      "spd": 482,
      "ts": 1765096415,
      "hd": 300
    },
    {
      "lat": 44.569035,
      "lng": 25.346462,
      "alt": 38000,
      "spd": 483,
      "ts": 1765096383,
      "hd": 300
    },
    {
      "lat": 44.532017,
      "lng": 25.432783,
      "alt": 38000,
      "spd": 486,
      "ts": 1765096352,
      "hd": 301
    },
    {
      "lat": 44.495712,
      "lng": 25.517067,
      "alt": 38000,
      "spd": 484,
      "ts": 1765096320,
      "hd": 301
    },
    {
      "lat": 44.458553,
      "lng": 25.60342,
      "alt": 38000,
      "spd": 484,
      "ts": 1765096288,
      "hd": 301
    },
    {
      "lat": 44.422344,
      "lng": 25.687281,
      "alt": 38000,
      "spd": 483,
      "ts": 1765096256,
      "hd": 301
    },
    {
      "lat": 44.385773,
      "lng": 25.770824,
      "alt": 38000,
      "spd": 482,
      "ts": 1765096225,
      "hd": 301
    },
    {
      "lat": 44.348953,
      "lng": 25.855478,
      "alt": 38000,
      "spd": 484,
      "ts": 1765096194,
      "hd": 301
    },
    {
      "lat": 44.312195,
      "lng": 25.939516,
      "alt": 38000,
      "spd": 482,
      "ts": 1765096162,
      "hd": 301
    },
    {
      "lat": 44.274956,
      "lng": 26.023794,
      "alt": 38000,
      "spd": 482,
      "ts": 1765096130,
      "hd": 301
    },
    {
      "lat": 44.238167,
      "lng": 26.107174,
      "alt": 38000,
      "spd": 482,
      "ts": 1765096098,
      "hd": 301
    },
    {
      "lat": 44.201237,
      "lng": 26.19058,
      "alt": 38000,
      "spd": 484,
      "ts": 1765096067,
      "hd": 301
    },
    {
      "lat": 44.1637,
      "lng": 26.275009,
      "alt": 38000,
      "spd": 486,
      "ts": 1765096035,
      "hd": 301
    },
    {
      "lat": 44.126991,
      "lng": 26.357357,
      "alt": 38000,
      "spd": 488,
      "ts": 1765096004,
      "hd": 301
    },
    {
      "lat": 44.089512,
      "lng": 26.441086,
      "alt": 38000,
      "spd": 488,
      "ts": 1765095973,
      "hd": 301
    },
    {
      "lat": 44.051537,
      "lng": 26.525644,
      "alt": 38000,
      "spd": 487,
      "ts": 1765095941,
      "hd": 301
    },
    {
      "lat": 44.013927,
      "lng": 26.608969,
      "alt": 38000,
      "spd": 488,
      "ts": 1765095909,
      "hd": 302
    },
    {
      "lat": 43.975983,
      "lng": 26.69265,
      "alt": 38000,
      "spd": 488,
      "ts": 1765095878,
      "hd": 302
    },
    {
      "lat": 43.938164,
      "lng": 26.775995,
      "alt": 38000,
      "spd": 489,
      "ts": 1765095846,
      "hd": 302
    },
    {
      "lat": 43.899685,
      "lng": 26.861008,
      "alt": 38000,
      "spd": 489,
      "ts": 1765095814,
      "hd": 302
    },
    {
      "lat": 43.861706,
      "lng": 26.94466,
      "alt": 38000,
      "spd": 490,
      "ts": 1765095783,
      "hd": 302
    },
    {
      "lat": 43.823837,
      "lng": 27.02771,
      "alt": 38000,
      "spd": 488,
      "ts": 1765095751,
      "hd": 302
    },
    {
      "lat": 43.785713,
      "lng": 27.11088,
      "alt": 38000,
      "spd": 490,
      "ts": 1765095720,
      "hd": 302
    },
    {
      "lat": 43.747456,
      "lng": 27.19408,
      "alt": 38000,
      "spd": 488,
      "ts": 1765095688,
      "hd": 302
    },
    {
      "lat": 43.709465,
      "lng": 27.27669,
      "alt": 38000,
      "spd": 489,
      "ts": 1765095657,
      "hd": 302
    },
    {
      "lat": 43.671131,
      "lng": 27.359837,
      "alt": 38000,
      "spd": 488,
      "ts": 1765095625,
      "hd": 302
    },
    {
      "lat": 43.633057,
      "lng": 27.442589,
      "alt": 38000,
      "spd": 489,
      "ts": 1765095594,
      "hd": 302
    },
    {
      "lat": 43.594303,
      "lng": 27.526337,
      "alt": 38000,
      "spd": 488,
      "ts": 1765095562,
      "hd": 302
    },
    {
      "lat": 43.556313,
      "lng": 27.608458,
      "alt": 38000,
      "spd": 486,
      "ts": 1765095530,
      "hd": 302
    },
    {
      "lat": 43.518097,
      "lng": 27.69075,
      "alt": 38000,
      "spd": 486,
      "ts": 1765095499,
      "hd": 302
    },
    {
      "lat": 43.479683,
      "lng": 27.773081,
      "alt": 38000,
      "spd": 486,
      "ts": 1765095467,
      "hd": 302
    },
    {
      "lat": 43.441433,
      "lng": 27.854607,
      "alt": 38000,
      "spd": 482,
      "ts": 1765095436,
      "hd": 302
    },
    {
      "lat": 43.403908,
      "lng": 27.934664,
      "alt": 38000,
      "spd": 480,
      "ts": 1765095404,
      "hd": 302
    },
    {
      "lat": 43.366268,
      "lng": 28.014734,
      "alt": 38000,
      "spd": 480,
      "ts": 1765095373,
      "hd": 302
    },
    {
      "lat": 43.32814,
      "lng": 28.095823,
      "alt": 38000,
      "spd": 479,
      "ts": 1765095341,
      "hd": 302
    },
    {
      "lat": 43.29031,
      "lng": 28.176102,
      "alt": 38000,
      "spd": 478,
      "ts": 1765095310,
      "hd": 302
    },
    {
      "lat": 43.252838,
      "lng": 28.255447,
      "alt": 38000,
      "spd": 478,
      "ts": 1765095279,
      "hd": 302
    },
    {
      "lat": 43.214729,
      "lng": 28.336132,
      "alt": 38000,
      "spd": 477,
      "ts": 1765095247,
      "hd": 302
    },
    {
      "lat": 43.176231,
      "lng": 28.417143,
      "alt": 38000,
      "spd": 478,
      "ts": 1765095215,
      "hd": 303
    },
    {
      "lat": 43.138176,
      "lng": 28.496269,
      "alt": 38000,
      "spd": 476,
      "ts": 1765095183,
      "hd": 303
    },
    {
      "lat": 43.100071,
      "lng": 28.575655,
      "alt": 38000,
      "spd": 478,
      "ts": 1765095152,
      "hd": 303
    },
    {
      "lat": 43.061234,
      "lng": 28.656374,
      "alt": 38000,
      "spd": 478,
      "ts": 1765095120,
      "hd": 303
    },
    {
      "lat": 43.022942,
      "lng": 28.735542,
      "alt": 38000,
      "spd": 480,
      "ts": 1765095088,
      "hd": 303
    },
    {
      "lat": 42.984219,
      "lng": 28.815186,
      "alt": 38000,
      "spd": 481,
      "ts": 1765095057,
      "hd": 303
    },
    {
      "lat": 42.944427,
      "lng": 28.897196,
      "alt": 38000,
      "spd": 482,
      "ts": 1765095024,
      "hd": 303
    },
    {
      "lat": 42.905354,
      "lng": 28.977671,
      "alt": 38000,
      "spd": 483,
      "ts": 1765094993,
      "hd": 303
    },
    {
      "lat": 42.865547,
      "lng": 29.058981,
      "alt": 38000,
      "spd": 490,
      "ts": 1765094960,
      "hd": 303
    },
    {
      "lat": 42.826073,
      "lng": 29.139158,
      "alt": 38000,
      "spd": 490,
      "ts": 1765094929,
      "hd": 303
    },
    {
      "lat": 42.78553,
      "lng": 29.221861,
      "alt": 38000,
      "spd": 492,
      "ts": 1765094897,
      "hd": 303
    },
    {
      "lat": 42.745003,
      "lng": 29.303858,
      "alt": 38000,
      "spd": 496,
      "ts": 1765094865,
      "hd": 303
    },
    {
      "lat": 42.703838,
      "lng": 29.387175,
      "alt": 38000,
      "spd": 496,
      "ts": 1765094833,
      "hd": 303
    },
    {
      "lat": 42.66518,
      "lng": 29.465282,
      "alt": 38025,
      "spd": 498,
      "ts": 1765094803,
      "hd": 303
    },
    {
      "lat": 42.623798,
      "lng": 29.548063,
      "alt": 38000,
      "spd": 498,
      "ts": 1765094771,
      "hd": 303
    },
    {
      "lat": 42.583157,
      "lng": 29.630682,
      "alt": 38000,
      "spd": 497,
      "ts": 1765094739,
      "hd": 303
    },
    {
      "lat": 42.542778,
      "lng": 29.711828,
      "alt": 38000,
      "spd": 495,
      "ts": 1765094707,
      "hd": 304
    },
    {
      "lat": 42.502968,
      "lng": 29.792969,
      "alt": 38000,
      "spd": 494,
      "ts": 1765094676,
      "hd": 301
    },
    {
      "lat": 42.469372,
      "lng": 29.877468,
      "alt": 38000,
      "spd": 494,
      "ts": 1765094645,
      "hd": 295
    },
    {
      "lat": 42.442314,
      "lng": 29.968014,
      "alt": 38000,
      "spd": 493,
      "ts": 1765094613,
      "hd": 288
    },
    {
      "lat": 42.42149,
      "lng": 30.062241,
      "alt": 38000,
      "spd": 494,
      "ts": 1765094581,
      "hd": 286
    },
    {
      "lat": 42.401016,
      "lng": 30.156099,
      "alt": 38000,
      "spd": 494,
      "ts": 1765094549,
      "hd": 286
    },
    {
      "lat": 42.380871,
      "lng": 30.250221,
      "alt": 38000,
      "spd": 496,
      "ts": 1765094516,
      "hd": 286
    },
    {
      "lat": 42.359718,
      "lng": 30.346224,
      "alt": 38000,
      "spd": 497,
      "ts": 1765094485,
      "hd": 286
    },
    {
      "lat": 42.339153,
      "lng": 30.439743,
      "alt": 38000,
      "spd": 495,
      "ts": 1765094453,
      "hd": 286
    },
    {
      "lat": 42.318119,
      "lng": 30.534857,
      "alt": 38000,
      "spd": 495,
      "ts": 1765094421,
      "hd": 286
    },
    {
      "lat": 42.297188,
      "lng": 30.629288,
      "alt": 38000,
      "spd": 497,
      "ts": 1765094389,
      "hd": 286
    },
    {
      "lat": 42.276199,
      "lng": 30.723322,
      "alt": 38000,
      "spd": 497,
      "ts": 1765094357,
      "hd": 286
    },
    {
      "lat": 42.254997,
      "lng": 30.817614,
      "alt": 38000,
      "spd": 498,
      "ts": 1765094326,
      "hd": 286
    },
    {
      "lat": 42.234001,
      "lng": 30.910948,
      "alt": 38000,
      "spd": 498,
      "ts": 1765094294,
      "hd": 286
    },
    {
      "lat": 42.212658,
      "lng": 31.005243,
      "alt": 38000,
      "spd": 497,
      "ts": 1765094262,
      "hd": 287
    },
    {
      "lat": 42.191158,
      "lng": 31.099407,
      "alt": 37975,
      "spd": 497,
      "ts": 1765094230,
      "hd": 287
    },
    {
      "lat": 42.17004,
      "lng": 31.192757,
      "alt": 37725,
      "spd": 497,
      "ts": 1765094198,
      "hd": 287
    },
    {
      "lat": 42.148716,
      "lng": 31.285715,
      "alt": 37450,
      "spd": 499,
      "ts": 1765094167,
      "hd": 287
    },
    {
      "lat": 42.127201,
      "lng": 31.379301,
      "alt": 37200,
      "spd": 498,
      "ts": 1765094136,
      "hd": 287
    },
    {
      "lat": 42.105358,
      "lng": 31.473749,
      "alt": 36925,
      "spd": 498,
      "ts": 1765094104,
      "hd": 287
    },
    {
      "lat": 42.084641,
      "lng": 31.560225,
      "alt": 36675,
      "spd": 494,
      "ts": 1765094073,
      "hd": 287
    },
    {
      "lat": 42.063206,
      "lng": 31.652952,
      "alt": 36425,
      "spd": 488,
      "ts": 1765094041,
      "hd": 287
    },
    {
      "lat": 42.042629,
      "lng": 31.741674,
      "alt": 36150,
      "spd": 491,
      "ts": 1765094011,
      "hd": 287
    },
    {
      "lat": 42.020657,
      "lng": 31.836016,
      "alt": 36000,
      "spd": 493,
      "ts": 1765093978,
      "hd": 287
    },
    {
      "lat": 41.998825,
      "lng": 31.929335,
      "alt": 36000,
      "spd": 494,
      "ts": 1765093946,
      "hd": 287
    },
    {
      "lat": 41.976883,
      "lng": 32.022526,
      "alt": 36000,
      "spd": 494,
      "ts": 1765093915,
      "hd": 287
    },
    {
      "lat": 41.955231,
      "lng": 32.114349,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093883,
      "hd": 287
    },
    {
      "lat": 41.932343,
      "lng": 32.210102,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093850,
      "hd": 287
    },
    {
      "lat": 41.909863,
      "lng": 32.303764,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093818,
      "hd": 287
    },
    {
      "lat": 41.887657,
      "lng": 32.397148,
      "alt": 36000,
      "spd": 495,
      "ts": 1765093786,
      "hd": 287
    },
    {
      "lat": 41.865685,
      "lng": 32.488487,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093755,
      "hd": 287
    },
    {
      "lat": 41.843307,
      "lng": 32.581268,
      "alt": 36000,
      "spd": 498,
      "ts": 1765093723,
      "hd": 287
    },
    {
      "lat": 41.820808,
      "lng": 32.674488,
      "alt": 36000,
      "spd": 497,
      "ts": 1765093691,
      "hd": 287
    },
    {
      "lat": 41.798275,
      "lng": 32.767105,
      "alt": 36000,
      "spd": 500,
      "ts": 1765093660,
      "hd": 287
    },
    {
      "lat": 41.776398,
      "lng": 32.85685,
      "alt": 36000,
      "spd": 499,
      "ts": 1765093630,
      "hd": 288
    },
    {
      "lat": 41.753216,
      "lng": 32.952023,
      "alt": 36000,
      "spd": 499,
      "ts": 1765093597,
      "hd": 288
    },
    {
      "lat": 41.730915,
      "lng": 33.04253,
      "alt": 36000,
      "spd": 502,
      "ts": 1765093566,
      "hd": 288
    },
    {
      "lat": 41.706707,
      "lng": 33.139938,
      "alt": 36000,
      "spd": 501,
      "ts": 1765093533,
      "hd": 288
    },
    {
      "lat": 41.684456,
      "lng": 33.229427,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093503,
      "hd": 288
    },
    {
      "lat": 41.661179,
      "lng": 33.322937,
      "alt": 36000,
      "spd": 495,
      "ts": 1765093470,
      "hd": 288
    },
    {
      "lat": 41.63916,
      "lng": 33.410767,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093440,
      "hd": 288
    },
    {
      "lat": 41.615189,
      "lng": 33.506001,
      "alt": 36000,
      "spd": 498,
      "ts": 1765093407,
      "hd": 288
    },
    {
      "lat": 41.592003,
      "lng": 33.59798,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093375,
      "hd": 288
    },
    {
      "lat": 41.56831,
      "lng": 33.691555,
      "alt": 36000,
      "spd": 494,
      "ts": 1765093343,
      "hd": 288
    },
    {
      "lat": 41.544891,
      "lng": 33.783726,
      "alt": 36000,
      "spd": 493,
      "ts": 1765093311,
      "hd": 288
    },
    {
      "lat": 41.522324,
      "lng": 33.872036,
      "alt": 36000,
      "spd": 497,
      "ts": 1765093281,
      "hd": 288
    },
    {
      "lat": 41.498749,
      "lng": 33.964294,
      "alt": 36000,
      "spd": 498,
      "ts": 1765093248,
      "hd": 288
    },
    {
      "lat": 41.475018,
      "lng": 34.057171,
      "alt": 36000,
      "spd": 498,
      "ts": 1765093217,
      "hd": 288
    },
    {
      "lat": 41.451416,
      "lng": 34.149914,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093185,
      "hd": 288
    },
    {
      "lat": 41.428421,
      "lng": 34.239979,
      "alt": 36000,
      "spd": 495,
      "ts": 1765093153,
      "hd": 288
    },
    {
      "lat": 41.405563,
      "lng": 34.327614,
      "alt": 36000,
      "spd": 497,
      "ts": 1765093123,
      "hd": 289
    },
    {
      "lat": 41.381927,
      "lng": 34.41687,
      "alt": 36000,
      "spd": 497,
      "ts": 1765093092,
      "hd": 289
    },
    {
      "lat": 41.356705,
      "lng": 34.51239,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093059,
      "hd": 289
    },
    {
      "lat": 41.331776,
      "lng": 34.606808,
      "alt": 36000,
      "spd": 494,
      "ts": 1765093026,
      "hd": 289
    },
    {
      "lat": 41.30822,
      "lng": 34.695698,
      "alt": 36000,
      "spd": 496,
      "ts": 1765092995,
      "hd": 289
    },
    {
      "lat": 41.282898,
      "lng": 34.790329,
      "alt": 36000,
      "spd": 498,
      "ts": 1765092962,
      "hd": 289
    },
    {
      "lat": 41.259621,
      "lng": 34.877846,
      "alt": 36000,
      "spd": 495,
      "ts": 1765092932,
      "hd": 289
    },
    {
      "lat": 41.234715,
      "lng": 34.970982,
      "alt": 36000,
      "spd": 493,
      "ts": 1765092899,
      "hd": 289
    },
    {
      "lat": 41.209305,
      "lng": 35.065613,
      "alt": 36000,
      "spd": 494,
      "ts": 1765092866,
      "hd": 289
    },
    {
      "lat": 41.184036,
      "lng": 35.159241,
      "alt": 36000,
      "spd": 495,
      "ts": 1765092833,
      "hd": 289
    },
    {
      "lat": 41.159271,
      "lng": 35.250916,
      "alt": 36000,
      "spd": 495,
      "ts": 1765092801,
      "hd": 289
    },
    {
      "lat": 41.135281,
      "lng": 35.339336,
      "alt": 36000,
      "spd": 496,
      "ts": 1765092770,
      "hd": 289
    },
    {
      "lat": 41.11005,
      "lng": 35.431656,
      "alt": 36000,
      "spd": 495,
      "ts": 1765092737,
      "hd": 289
    },
    {
      "lat": 41.086212,
      "lng": 35.518982,
      "alt": 36000,
      "spd": 493,
      "ts": 1765092707,
      "hd": 289
    },
    {
      "lat": 41.060852,
      "lng": 35.611328,
      "alt": 36000,
      "spd": 491,
      "ts": 1765092674,
      "hd": 290
    },
    {
      "lat": 41.036453,
      "lng": 35.699707,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092643,
      "hd": 290
    },
    {
      "lat": 41.013336,
      "lng": 35.783569,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092613,
      "hd": 290
    },
    {
      "lat": 40.988113,
      "lng": 35.874634,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092581,
      "hd": 290
    },
    {
      "lat": 40.963074,
      "lng": 35.964355,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092548,
      "hd": 290
    },
    {
      "lat": 40.937714,
      "lng": 36.055176,
      "alt": 36000,
      "spd": 496,
      "ts": 1765092516,
      "hd": 290
    },
    {
      "lat": 40.912434,
      "lng": 36.145332,
      "alt": 36000,
      "spd": 497,
      "ts": 1765092484,
      "hd": 290
    },
    {
      "lat": 40.887203,
      "lng": 36.235157,
      "alt": 36000,
      "spd": 494,
      "ts": 1765092453,
      "hd": 290
    },
    {
      "lat": 40.861862,
      "lng": 36.324768,
      "alt": 36000,
      "spd": 494,
      "ts": 1765092421,
      "hd": 290
    },
    {
      "lat": 40.836369,
      "lng": 36.415184,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092389,
      "hd": 290
    },
    {
      "lat": 40.810959,
      "lng": 36.504639,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092357,
      "hd": 290
    },
    {
      "lat": 40.784454,
      "lng": 36.597656,
      "alt": 36000,
      "spd": 488,
      "ts": 1765092324,
      "hd": 290
    },
    {
      "lat": 40.75882,
      "lng": 36.687317,
      "alt": 36000,
      "spd": 489,
      "ts": 1765092292,
      "hd": 290
    },
    {
      "lat": 40.732929,
      "lng": 36.777481,
      "alt": 36000,
      "spd": 488,
      "ts": 1765092259,
      "hd": 290
    },
    {
      "lat": 40.70723,
      "lng": 36.866394,
      "alt": 36000,
      "spd": 486,
      "ts": 1765092227,
      "hd": 290
    },
    {
      "lat": 40.681442,
      "lng": 36.955761,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092195,
      "hd": 290
    },
    {
      "lat": 40.655464,
      "lng": 37.045399,
      "alt": 36000,
      "spd": 483,
      "ts": 1765092162,
      "hd": 290
    },
    {
      "lat": 40.631561,
      "lng": 37.127625,
      "alt": 36000,
      "spd": 483,
      "ts": 1765092132,
      "hd": 290
    },
    {
      "lat": 40.605377,
      "lng": 37.217373,
      "alt": 36000,
      "spd": 482,
      "ts": 1765092099,
      "hd": 291
    },
    {
      "lat": 40.579605,
      "lng": 37.305237,
      "alt": 36000,
      "spd": 483,
      "ts": 1765092067,
      "hd": 291
    },
    {
      "lat": 40.555099,
      "lng": 37.388409,
      "alt": 36000,
      "spd": 481,
      "ts": 1765092037,
      "hd": 291
    },
    {
      "lat": 40.530487,
      "lng": 37.472168,
      "alt": 36000,
      "spd": 478,
      "ts": 1765092006,
      "hd": 291
    },
    {
      "lat": 40.504349,
      "lng": 37.560669,
      "alt": 36000,
      "spd": 475,
      "ts": 1765091973,
      "hd": 291
    },
    {
      "lat": 40.479965,
      "lng": 37.642654,
      "alt": 36000,
      "spd": 477,
      "ts": 1765091942,
      "hd": 291
    },
    {
      "lat": 40.453941,
      "lng": 37.730045,
      "alt": 35975,
      "spd": 478,
      "ts": 1765091910,
      "hd": 291
    },
    {
      "lat": 40.429268,
      "lng": 37.812569,
      "alt": 36000,
      "spd": 478,
      "ts": 1765091879,
      "hd": 291
    },
    {
      "lat": 40.403664,
      "lng": 37.897152,
      "alt": 36000,
      "spd": 477,
      "ts": 1765091848,
      "hd": 291
    },
    {
      "lat": 40.378738,
      "lng": 37.979675,
      "alt": 36000,
      "spd": 476,
      "ts": 1765091817,
      "hd": 291
    },
    {
      "lat": 40.351868,
      "lng": 38.067566,
      "alt": 36000,
      "spd": 479,
      "ts": 1765091784,
      "hd": 294
    },
    {
      "lat": 40.318939,
      "lng": 38.151398,
      "alt": 36000,
      "spd": 484,
      "ts": 1765091752,
      "hd": 300
    },
    {
      "lat": 40.279278,
      "lng": 38.229427,
      "alt": 36000,
      "spd": 493,
      "ts": 1765091720,
      "hd": 307
    },
    {
      "lat": 40.233307,
      "lng": 38.305237,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091688,
      "hd": 308
    },
    {
      "lat": 40.187477,
      "lng": 38.379677,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091656,
      "hd": 308
    },
    {
      "lat": 40.14061,
      "lng": 38.455566,
      "alt": 36000,
      "spd": 495,
      "ts": 1765091623,
      "hd": 308
    },
    {
      "lat": 40.0952,
      "lng": 38.529236,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091591,
      "hd": 308
    },
    {
      "lat": 40.051208,
      "lng": 38.600525,
      "alt": 36000,
      "spd": 485,
      "ts": 1765091560,
      "hd": 308
    },
    {
      "lat": 40.005432,
      "lng": 38.67157,
      "alt": 36000,
      "spd": 482,
      "ts": 1765091528,
      "hd": 308
    },
    {
      "lat": 39.95853,
      "lng": 38.73798,
      "alt": 36000,
      "spd": 484,
      "ts": 1765091498,
      "hd": 308
    },
    {
      "lat": 38.623058,
      "lng": 40.837471,
      "alt": 36000,
      "spd": 457,
      "ts": 1765090526,
      "hd": 309
    },
    {
      "lat": 38.578117,
      "lng": 40.897766,
      "alt": 36000,
      "spd": 456,
      "ts": 1765090495,
      "hd": 309
    },
    {
      "lat": 38.534317,
      "lng": 40.965389,
      "alt": 36000,
      "spd": 454,
      "ts": 1765090463,
      "hd": 309
    },
    {
      "lat": 38.491379,
      "lng": 41.031727,
      "alt": 36000,
      "spd": 453,
      "ts": 1765090430,
      "hd": 309
    },
    {
      "lat": 38.446884,
      "lng": 41.097527,
      "alt": 36000,
      "spd": 455,
      "ts": 1765090398,
      "hd": 310
    },
    {
      "lat": 38.403267,
      "lng": 41.161652,
      "alt": 36000,
      "spd": 457,
      "ts": 1765090367,
      "hd": 310
    },
    {
      "lat": 38.357574,
      "lng": 41.228886,
      "alt": 36000,
      "spd": 458,
      "ts": 1765090334,
      "hd": 310
    },
    {
      "lat": 38.314354,
      "lng": 41.292412,
      "alt": 36000,
      "spd": 457,
      "ts": 1765090303,
      "hd": 310
    },
    {
      "lat": 38.272568,
      "lng": 41.353767,
      "alt": 36000,
      "spd": 457,
      "ts": 1765090272,
      "hd": 311
    },
    {
      "lat": 38.229488,
      "lng": 41.416607,
      "alt": 36000,
      "spd": 458,
      "ts": 1765090241,
      "hd": 311
    },
    {
      "lat": 38.185589,
      "lng": 41.480495,
      "alt": 36000,
      "spd": 457,
      "ts": 1765090210,
      "hd": 311
    },
    {
      "lat": 38.140869,
      "lng": 41.545502,
      "alt": 36000,
      "spd": 457,
      "ts": 1765090177,
      "hd": 311
    },
    {
      "lat": 38.097607,
      "lng": 41.60815,
      "alt": 36000,
      "spd": 455,
      "ts": 1765090147,
      "hd": 311
    },
    {
      "lat": 38.052963,
      "lng": 41.673054,
      "alt": 36000,
      "spd": 453,
      "ts": 1765090114,
      "hd": 310
    },
    {
      "lat": 38.009125,
      "lng": 41.736652,
      "alt": 36000,
      "spd": 453,
      "ts": 1765090082,
      "hd": 311
    },
    {
      "lat": 37.964607,
      "lng": 41.799992,
      "alt": 36000,
      "spd": 457,
      "ts": 1765090051,
      "hd": 311
    },
    {
      "lat": 37.922802,
      "lng": 41.863762,
      "alt": 36000,
      "spd": 447,
      "ts": 1765090019,
      "hd": 306
    },
    {
      "lat": 37.887314,
      "lng": 41.933121,
      "alt": 36000,
      "spd": 434,
      "ts": 1765089987,
      "hd": 299
    },
    {
      "lat": 37.858337,
      "lng": 42.002663,
      "alt": 36000,
      "spd": 430,
      "ts": 1765089957,
      "hd": 297
    },
    {
      "lat": 37.828674,
      "lng": 42.074772,
      "alt": 36000,
      "spd": 427,
      "ts": 1765089924,
      "hd": 297
    },
    {
      "lat": 37.798828,
      "lng": 42.14706,
      "alt": 36000,
      "spd": 425,
      "ts": 1765089891,
      "hd": 297
    },
    {
      "lat": 37.769577,
      "lng": 42.217712,
      "alt": 36000,
      "spd": 427,
      "ts": 1765089859,
      "hd": 297
    },
    {
      "lat": 37.739666,
      "lng": 42.289898,
      "alt": 36000,
      "spd": 428,
      "ts": 1765089826,
      "hd": 297
    },
    {
      "lat": 37.711361,
      "lng": 42.357788,
      "alt": 36000,
      "spd": 427,
      "ts": 1765089795,
      "hd": 297
    },
    {
      "lat": 37.683247,
      "lng": 42.42532,
      "alt": 36000,
      "spd": 426,
      "ts": 1765089765,
      "hd": 297
    },
    {
      "lat": 37.653809,
      "lng": 42.495876,
      "alt": 36000,
      "spd": 425,
      "ts": 1765089732,
      "hd": 297
    },
    {
      "lat": 37.623779,
      "lng": 42.567463,
      "alt": 36000,
      "spd": 426,
      "ts": 1765089700,
      "hd": 297
    },
    {
      "lat": 37.595306,
      "lng": 42.63496,
      "alt": 36000,
      "spd": 426,
      "ts": 1765089669,
      "hd": 297
    },
    {
      "lat": 37.565235,
      "lng": 42.706604,
      "alt": 36000,
      "spd": 424,
      "ts": 1765089637,
      "hd": 297
    },
    {
      "lat": 37.536713,
      "lng": 42.774509,
      "alt": 36000,
      "spd": 422,
      "ts": 1765089605,
      "hd": 297
    },
    {
      "lat": 37.508255,
      "lng": 42.841785,
      "alt": 36000,
      "spd": 421,
      "ts": 1765089574,
      "hd": 298
    },
    {
      "lat": 37.479263,
      "lng": 42.909557,
      "alt": 36000,
      "spd": 420,
      "ts": 1765089542,
      "hd": 298
    },
    {
      "lat": 37.449554,
      "lng": 42.979801,
      "alt": 36000,
      "spd": 421,
      "ts": 1765089510,
      "hd": 299
    },
    {
      "lat": 37.417992,
      "lng": 43.042999,
      "alt": 36000,
      "spd": 426,
      "ts": 1765089480,
      "hd": 304
    },
    {
      "lat": 37.378609,
      "lng": 43.106411,
      "alt": 36000,
      "spd": 431,
      "ts": 1765089447,
      "hd": 310
    },
    {
      "lat": 37.333778,
      "lng": 43.164745,
      "alt": 36000,
      "spd": 440,
      "ts": 1765089415,
      "hd": 317
    },
    {
      "lat": 37.283035,
      "lng": 43.218185,
      "alt": 36000,
      "spd": 449,
      "ts": 1765089383,
      "hd": 322
    },
    {
      "lat": 37.229279,
      "lng": 43.263866,
      "alt": 36000,
      "spd": 457,
      "ts": 1765089352,
      "hd": 328
    },
    {
      "lat": 37.168121,
      "lng": 43.304016,
      "alt": 36000,
      "spd": 466,
      "ts": 1765089320,
      "hd": 336
    },
    {
      "lat": 37.103809,
      "lng": 43.33617,
      "alt": 36000,
      "spd": 470,
      "ts": 1765089288,
      "hd": 338
    },
    {
      "lat": 37.03952,
      "lng": 43.367516,
      "alt": 36000,
      "spd": 469,
      "ts": 1765089256,
      "hd": 338
    },
    {
      "lat": 36.973976,
      "lng": 43.399517,
      "alt": 36000,
      "spd": 467,
      "ts": 1765089224,
      "hd": 338
    },
    {
      "lat": 36.908936,
      "lng": 43.431408,
      "alt": 36000,
      "spd": 465,
      "ts": 1765089192,
      "hd": 338
    },
    {
      "lat": 36.84668,
      "lng": 43.461857,
      "alt": 36000,
      "spd": 463,
      "ts": 1765089160,
      "hd": 338
    },
    {
      "lat": 36.782085,
      "lng": 43.493237,
      "alt": 36000,
      "spd": 466,
      "ts": 1765089128,
      "hd": 338
    },
    {
      "lat": 36.717499,
      "lng": 43.524513,
      "alt": 36000,
      "spd": 464,
      "ts": 1765089096,
      "hd": 338
    },
    {
      "lat": 36.655277,
      "lng": 43.554714,
      "alt": 36000,
      "spd": 464,
      "ts": 1765089065,
      "hd": 338
    },
    {
      "lat": 36.593445,
      "lng": 43.584709,
      "alt": 36000,
      "spd": 464,
      "ts": 1765089034,
      "hd": 338
    },
    {
      "lat": 36.531464,
      "lng": 43.614635,
      "alt": 36000,
      "spd": 465,
      "ts": 1765089003,
      "hd": 338
    },
    {
      "lat": 36.469803,
      "lng": 43.644447,
      "alt": 36000,
      "spd": 470,
      "ts": 1765088972,
      "hd": 338
    },
    {
      "lat": 36.405579,
      "lng": 43.675346,
      "alt": 36000,
      "spd": 470,
      "ts": 1765088941,
      "hd": 338
    },
    {
      "lat": 36.343643,
      "lng": 43.704987,
      "alt": 36000,
      "spd": 472,
      "ts": 1765088910,
      "hd": 338
    },
    {
      "lat": 36.27951,
      "lng": 43.73558,
      "alt": 36000,
      "spd": 474,
      "ts": 1765088879,
      "hd": 339
    },
    {
      "lat": 36.217407,
      "lng": 43.765205,
      "alt": 36000,
      "spd": 474,
      "ts": 1765088849,
      "hd": 338
    },
    {
      "lat": 36.151245,
      "lng": 43.796711,
      "alt": 36000,
      "spd": 472,
      "ts": 1765088816,
      "hd": 338
    },
    {
      "lat": 36.086975,
      "lng": 43.827267,
      "alt": 36000,
      "spd": 470,
      "ts": 1765088785,
      "hd": 338
    },
    {
      "lat": 36.021004,
      "lng": 43.858589,
      "alt": 36000,
      "spd": 468,
      "ts": 1765088752,
      "hd": 338
    },
    {
      "lat": 35.955647,
      "lng": 43.889503,
      "alt": 36000,
      "spd": 468,
      "ts": 1765088720,
      "hd": 339
    },
    {
      "lat": 35.888889,
      "lng": 43.921001,
      "alt": 36000,
      "spd": 470,
      "ts": 1765088687,
      "hd": 338
    },
    {
      "lat": 35.827579,
      "lng": 43.949989,
      "alt": 36000,
      "spd": 469,
      "ts": 1765088657,
      "hd": 339
    },
    {
      "lat": 35.762268,
      "lng": 43.980785,
      "alt": 36000,
      "spd": 469,
      "ts": 1765088624,
      "hd": 339
    },
    {
      "lat": 35.698242,
      "lng": 44.010944,
      "alt": 36000,
      "spd": 469,
      "ts": 1765088593,
      "hd": 339
    },
    {
      "lat": 35.633644,
      "lng": 44.04121,
      "alt": 36000,
      "spd": 470,
      "ts": 1765088561,
      "hd": 339
    },
    {
      "lat": 35.569355,
      "lng": 44.071362,
      "alt": 36000,
      "spd": 473,
      "ts": 1765088530,
      "hd": 339
    },
    {
      "lat": 35.505661,
      "lng": 44.101181,
      "alt": 36025,
      "spd": 473,
      "ts": 1765088498,
      "hd": 339
    },
    {
      "lat": 35.440338,
      "lng": 44.13168,
      "alt": 36000,
      "spd": 474,
      "ts": 1765088466,
      "hd": 339
    },
    {
      "lat": 35.375473,
      "lng": 44.161892,
      "alt": 36000,
      "spd": 474,
      "ts": 1765088435,
      "hd": 339
    },
    {
      "lat": 35.312714,
      "lng": 44.191101,
      "alt": 36000,
      "spd": 475,
      "ts": 1765088405,
      "hd": 339
    },
    {
      "lat": 35.246841,
      "lng": 44.221725,
      "alt": 36000,
      "spd": 476,
      "ts": 1765088372,
      "hd": 339
    },
    {
      "lat": 35.181526,
      "lng": 44.252014,
      "alt": 36000,
      "spd": 476,
      "ts": 1765088341,
      "hd": 339
    },
    {
      "lat": 35.117432,
      "lng": 44.281685,
      "alt": 36000,
      "spd": 476,
      "ts": 1765088310,
      "hd": 339
    },
    {
      "lat": 35.051285,
      "lng": 44.312233,
      "alt": 36000,
      "spd": 475,
      "ts": 1765088278,
      "hd": 339
    },
    {
      "lat": 34.985138,
      "lng": 44.342781,
      "alt": 36000,
      "spd": 476,
      "ts": 1765088245,
      "hd": 339
    },
    {
      "lat": 34.919998,
      "lng": 44.372772,
      "alt": 36000,
      "spd": 474,
      "ts": 1765088214,
      "hd": 339
    },
    {
      "lat": 34.853474,
      "lng": 44.403362,
      "alt": 36000,
      "spd": 473,
      "ts": 1765088181,
      "hd": 339
    },
    {
      "lat": 34.788673,
      "lng": 44.433174,
      "alt": 36000,
      "spd": 472,
      "ts": 1765088150,
      "hd": 339
    },
    {
      "lat": 34.724487,
      "lng": 44.462566,
      "alt": 36000,
      "spd": 473,
      "ts": 1765088118,
      "hd": 339
    },
    {
      "lat": 34.658066,
      "lng": 44.492947,
      "alt": 36000,
      "spd": 473,
      "ts": 1765088086,
      "hd": 339
    },
    {
      "lat": 34.593246,
      "lng": 44.522598,
      "alt": 36000,
      "spd": 472,
      "ts": 1765088054,
      "hd": 339
    },
    {
      "lat": 34.531128,
      "lng": 44.550907,
      "alt": 36000,
      "spd": 472,
      "ts": 1765088023,
      "hd": 339
    },
    {
      "lat": 34.466999,
      "lng": 44.580059,
      "alt": 36000,
      "spd": 472,
      "ts": 1765087993,
      "hd": 339
    },
    {
      "lat": 34.402451,
      "lng": 44.609482,
      "alt": 36000,
      "spd": 471,
      "ts": 1765087961,
      "hd": 339
    },
    {
      "lat": 34.336761,
      "lng": 44.639301,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087928,
      "hd": 339
    },
    {
      "lat": 34.273758,
      "lng": 44.667778,
      "alt": 36000,
      "spd": 471,
      "ts": 1765087897,
      "hd": 339
    },
    {
      "lat": 34.209686,
      "lng": 44.696812,
      "alt": 36000,
      "spd": 471,
      "ts": 1765087866,
      "hd": 339
    },
    {
      "lat": 34.147018,
      "lng": 44.725117,
      "alt": 36000,
      "spd": 472,
      "ts": 1765087835,
      "hd": 339
    },
    {
      "lat": 34.080612,
      "lng": 44.754925,
      "alt": 36000,
      "spd": 473,
      "ts": 1765087803,
      "hd": 339
    },
    {
      "lat": 34.014927,
      "lng": 44.784508,
      "alt": 36000,
      "spd": 471,
      "ts": 1765087771,
      "hd": 339
    },
    {
      "lat": 33.952316,
      "lng": 44.812717,
      "alt": 36000,
      "spd": 468,
      "ts": 1765087740,
      "hd": 339
    },
    {
      "lat": 33.885864,
      "lng": 44.842606,
      "alt": 36000,
      "spd": 467,
      "ts": 1765087707,
      "hd": 339
    },
    {
      "lat": 33.820038,
      "lng": 44.872032,
      "alt": 36000,
      "spd": 468,
      "ts": 1765087675,
      "hd": 339
    },
    {
      "lat": 33.755219,
      "lng": 44.901012,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087644,
      "hd": 339
    },
    {
      "lat": 33.690041,
      "lng": 44.930077,
      "alt": 36000,
      "spd": 471,
      "ts": 1765087611,
      "hd": 339
    },
    {
      "lat": 33.626907,
      "lng": 44.958183,
      "alt": 36000,
      "spd": 474,
      "ts": 1765087580,
      "hd": 339
    },
    {
      "lat": 33.559433,
      "lng": 44.988174,
      "alt": 36000,
      "spd": 473,
      "ts": 1765087548,
      "hd": 339
    },
    {
      "lat": 33.496582,
      "lng": 45.016151,
      "alt": 36000,
      "spd": 471,
      "ts": 1765087517,
      "hd": 339
    },
    {
      "lat": 33.431023,
      "lng": 45.045235,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087485,
      "hd": 339
    },
    {
      "lat": 33.367813,
      "lng": 45.07328,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087454,
      "hd": 339
    },
    {
      "lat": 33.303146,
      "lng": 45.101902,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087422,
      "hd": 339
    },
    {
      "lat": 33.239639,
      "lng": 45.12986,
      "alt": 36000,
      "spd": 470,
      "ts": 1765087391,
      "hd": 339
    },
    {
      "lat": 33.176743,
      "lng": 45.1576,
      "alt": 36000,
      "spd": 470,
      "ts": 1765087360,
      "hd": 339
    },
    {
      "lat": 33.110466,
      "lng": 45.186768,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087328,
      "hd": 339
    },
    {
      "lat": 33.048691,
      "lng": 45.213898,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087298,
      "hd": 339
    },
    {
      "lat": 32.983521,
      "lng": 45.242523,
      "alt": 36000,
      "spd": 468,
      "ts": 1765087265,
      "hd": 339
    },
    {
      "lat": 32.917786,
      "lng": 45.271294,
      "alt": 36000,
      "spd": 467,
      "ts": 1765087233,
      "hd": 339
    },
    {
      "lat": 32.850952,
      "lng": 45.300529,
      "alt": 36000,
      "spd": 467,
      "ts": 1765087200,
      "hd": 339
    },
    {
      "lat": 32.788788,
      "lng": 45.327667,
      "alt": 36000,
      "spd": 468,
      "ts": 1765087170,
      "hd": 339
    },
    {
      "lat": 32.721863,
      "lng": 45.356892,
      "alt": 36000,
      "spd": 468,
      "ts": 1765087137,
      "hd": 339
    },
    {
      "lat": 32.658443,
      "lng": 45.384521,
      "alt": 36000,
      "spd": 469,
      "ts": 1765087106,
      "hd": 339
    },
    {
      "lat": 32.593456,
      "lng": 45.412659,
      "alt": 36000,
      "spd": 468,
      "ts": 1765087074,
      "hd": 339
    },
    {
      "lat": 32.531662,
      "lng": 45.439342,
      "alt": 36000,
      "spd": 467,
      "ts": 1765087044,
      "hd": 339
    },
    {
      "lat": 32.464832,
      "lng": 45.468319,
      "alt": 36000,
      "spd": 466,
      "ts": 1765087011,
      "hd": 339
    },
    {
      "lat": 32.399239,
      "lng": 45.497299,
      "alt": 36000,
      "spd": 465,
      "ts": 1765086978,
      "hd": 339
    },
    {
      "lat": 32.335373,
      "lng": 45.524544,
      "alt": 36000,
      "spd": 469,
      "ts": 1765086947,
      "hd": 341
    },
    {
      "lat": 32.331253,
      "lng": 45.526134,
      "alt": 36000,
      "spd": 469,
      "ts": 1765086945,
      "hd": 341
    },
    {
      "lat": 32.32695,
      "lng": 45.52784,
      "alt": 36000,
      "spd": 470,
      "ts": 1765086943,
      "hd": 341
    },
    {
      "lat": 32.321136,
      "lng": 45.530037,
      "alt": 36000,
      "spd": 470,
      "ts": 1765086940,
      "hd": 342
    },
    {
      "lat": 32.317474,
      "lng": 45.53141,
      "alt": 36000,
      "spd": 472,
      "ts": 1765086938,
      "hd": 342
    },
    {
      "lat": 32.312187,
      "lng": 45.533455,
      "alt": 36000,
      "spd": 471,
      "ts": 1765086936,
      "hd": 342
    },
    {
      "lat": 32.307858,
      "lng": 45.53508,
      "alt": 36025,
      "spd": 470,
      "ts": 1765086934,
      "hd": 342
    },
    {
      "lat": 32.303238,
      "lng": 45.536846,
      "alt": 36025,
      "spd": 470,
      "ts": 1765086931,
      "hd": 341
    },
    {
      "lat": 32.29747,
      "lng": 45.539154,
      "alt": 36025,
      "spd": 469,
      "ts": 1765086929,
      "hd": 340
    },
    {
      "lat": 32.293213,
      "lng": 45.540966,
      "alt": 36000,
      "spd": 468,
      "ts": 1765086927,
      "hd": 339
    },
    {
      "lat": 32.288864,
      "lng": 45.542984,
      "alt": 36000,
      "spd": 467,
      "ts": 1765086924,
      "hd": 338
    },
    {
      "lat": 32.284069,
      "lng": 45.545338,
      "alt": 36000,
      "spd": 466,
      "ts": 1765086922,
      "hd": 336
    },
    {
      "lat": 32.279984,
      "lng": 45.547558,
      "alt": 36000,
      "spd": 463,
      "ts": 1765086920,
      "hd": 334
    },
    {
      "lat": 32.276157,
      "lng": 45.549767,
      "alt": 36000,
      "spd": 462,
      "ts": 1765086918,
      "hd": 333
    },
    {
      "lat": 32.271454,
      "lng": 45.552624,
      "alt": 36000,
      "spd": 460,
      "ts": 1765086916,
      "hd": 331
    },
    {
      "lat": 32.267029,
      "lng": 45.555634,
      "alt": 36000,
      "spd": 458,
      "ts": 1765086913,
      "hd": 329
    },
    {
      "lat": 32.25856,
      "lng": 45.561897,
      "alt": 36000,
      "spd": 456,
      "ts": 1765086909,
      "hd": 325
    },
    {
      "lat": 32.207958,
      "lng": 45.610695,
      "alt": 36000,
      "spd": 453,
      "ts": 1765086877,
      "hd": 319
    },
    {
      "lat": 32.154785,
      "lng": 45.66396,
      "alt": 36000,
      "spd": 455,
      "ts": 1765086844,
      "hd": 319
    },
    {
      "lat": 32.105392,
      "lng": 45.713341,
      "alt": 36000,
      "spd": 455,
      "ts": 1765086813,
      "hd": 319
    },
    {
      "lat": 32.051682,
      "lng": 45.767025,
      "alt": 36000,
      "spd": 454,
      "ts": 1765086780,
      "hd": 319
    },
    {
      "lat": 32.002808,
      "lng": 45.815735,
      "alt": 36000,
      "spd": 452,
      "ts": 1765086749,
      "hd": 319
    },
    {
      "lat": 31.953094,
      "lng": 45.865284,
      "alt": 36000,
      "spd": 449,
      "ts": 1765086718,
      "hd": 319
    },
    {
      "lat": 31.901505,
      "lng": 45.916573,
      "alt": 36000,
      "spd": 448,
      "ts": 1765086686,
      "hd": 319
    },
    {
      "lat": 31.85083,
      "lng": 45.967072,
      "alt": 36000,
      "spd": 446,
      "ts": 1765086653,
      "hd": 319
    },
    {
      "lat": 31.799698,
      "lng": 46.018211,
      "alt": 36000,
      "spd": 446,
      "ts": 1765086621,
      "hd": 319
    },
    {
      "lat": 31.750814,
      "lng": 46.066002,
      "alt": 36000,
      "spd": 448,
      "ts": 1765086590,
      "hd": 320
    },
    {
      "lat": 31.701553,
      "lng": 46.113441,
      "alt": 36000,
      "spd": 449,
      "ts": 1765086559,
      "hd": 320
    },
    {
      "lat": 31.648453,
      "lng": 46.164497,
      "alt": 36000,
      "spd": 451,
      "ts": 1765086526,
      "hd": 320
    },
    {
      "lat": 31.596863,
      "lng": 46.213936,
      "alt": 36000,
      "spd": 451,
      "ts": 1765086495,
      "hd": 320
    },
    {
      "lat": 31.545914,
      "lng": 46.262783,
      "alt": 36000,
      "spd": 451,
      "ts": 1765086463,
      "hd": 320
    },
    {
      "lat": 31.49515,
      "lng": 46.311382,
      "alt": 36000,
      "spd": 449,
      "ts": 1765086431,
      "hd": 320
    },
    {
      "lat": 31.443104,
      "lng": 46.361095,
      "alt": 36000,
      "spd": 450,
      "ts": 1765086399,
      "hd": 320
    },
    {
      "lat": 31.389523,
      "lng": 46.412128,
      "alt": 36000,
      "spd": 453,
      "ts": 1765086367,
      "hd": 320
    },
    {
      "lat": 31.339804,
      "lng": 46.45948,
      "alt": 36000,
      "spd": 454,
      "ts": 1765086336,
      "hd": 320
    },
    {
      "lat": 31.291214,
      "lng": 46.505718,
      "alt": 36000,
      "spd": 454,
      "ts": 1765086306,
      "hd": 320
    },
    {
      "lat": 31.239075,
      "lng": 46.555267,
      "alt": 36000,
      "spd": 453,
      "ts": 1765086274,
      "hd": 320
    },
    {
      "lat": 31.188904,
      "lng": 46.602818,
      "alt": 36000,
      "spd": 453,
      "ts": 1765086243,
      "hd": 320
    },
    {
      "lat": 31.138092,
      "lng": 46.650909,
      "alt": 36000,
      "spd": 452,
      "ts": 1765086212,
      "hd": 320
    },
    {
      "lat": 31.086979,
      "lng": 46.699257,
      "alt": 36000,
      "spd": 451,
      "ts": 1765086181,
      "hd": 320
    },
    {
      "lat": 31.035631,
      "lng": 46.747761,
      "alt": 36000,
      "spd": 449,
      "ts": 1765086148,
      "hd": 320
    },
    {
      "lat": 30.983643,
      "lng": 46.796803,
      "alt": 36000,
      "spd": 449,
      "ts": 1765086117,
      "hd": 320
    },
    {
      "lat": 30.931728,
      "lng": 46.845703,
      "alt": 36000,
      "spd": 449,
      "ts": 1765086085,
      "hd": 320
    },
    {
      "lat": 30.879913,
      "lng": 46.894386,
      "alt": 36000,
      "spd": 449,
      "ts": 1765086052,
      "hd": 321
    },
    {
      "lat": 30.827171,
      "lng": 46.94392,
      "alt": 36000,
      "spd": 450,
      "ts": 1765086020,
      "hd": 321
    },
    {
      "lat": 30.774673,
      "lng": 46.993156,
      "alt": 36000,
      "spd": 450,
      "ts": 1765085988,
      "hd": 321
    },
    {
      "lat": 30.725267,
      "lng": 47.039501,
      "alt": 36000,
      "spd": 450,
      "ts": 1765085957,
      "hd": 320
    },
    {
      "lat": 30.674387,
      "lng": 47.087566,
      "alt": 36000,
      "spd": 451,
      "ts": 1765085925,
      "hd": 320
    },
    {
      "lat": 30.622101,
      "lng": 47.135818,
      "alt": 36000,
      "spd": 452,
      "ts": 1765085894,
      "hd": 322
    },
    {
      "lat": 30.570948,
      "lng": 47.185894,
      "alt": 36000,
      "spd": 447,
      "ts": 1765085861,
      "hd": 316
    },
    {
      "lat": 30.526491,
      "lng": 47.241707,
      "alt": 36000,
      "spd": 444,
      "ts": 1765085830,
      "hd": 310
    },
    {
      "lat": 30.483011,
      "lng": 47.300484,
      "alt": 35700,
      "spd": 446,
      "ts": 1765085797,
      "hd": 310
    },
    {
      "lat": 30.441532,
      "lng": 47.356514,
      "alt": 35350,
      "spd": 448,
      "ts": 1765085766,
      "hd": 310
    },
    {
      "lat": 30.399124,
      "lng": 47.413654,
      "alt": 34975,
      "spd": 448,
      "ts": 1765085735,
      "hd": 310
    },
    {
      "lat": 30.35527,
      "lng": 47.472637,
      "alt": 34600,
      "spd": 454,
      "ts": 1765085703,
      "hd": 310
    },
    {
      "lat": 30.312723,
      "lng": 47.529877,
      "alt": 34250,
      "spd": 453,
      "ts": 1765085672,
      "hd": 310
    },
    {
      "lat": 30.27095,
      "lng": 47.58604,
      "alt": 34000,
      "spd": 449,
      "ts": 1765085641,
      "hd": 310
    },
    {
      "lat": 30.228882,
      "lng": 47.642433,
      "alt": 34000,
      "spd": 449,
      "ts": 1765085610,
      "hd": 310
    },
    {
      "lat": 30.187496,
      "lng": 47.697746,
      "alt": 34000,
      "spd": 450,
      "ts": 1765085579,
      "hd": 310
    },
    {
      "lat": 30.144436,
      "lng": 47.754768,
      "alt": 34000,
      "spd": 450,
      "ts": 1765085548,
      "hd": 310
    },
    {
      "lat": 30.102631,
      "lng": 47.810669,
      "alt": 34000,
      "spd": 449,
      "ts": 1765085517,
      "hd": 310
    },
    {
      "lat": 30.057989,
      "lng": 47.868092,
      "alt": 34000,
      "spd": 452,
      "ts": 1765085485,
      "hd": 314
    },
    {
      "lat": 30.007246,
      "lng": 47.920551,
      "alt": 34000,
      "spd": 455,
      "ts": 1765085453,
      "hd": 321
    },
    {
      "lat": 29.952362,
      "lng": 47.964497,
      "alt": 34000,
      "spd": 460,
      "ts": 1765085421,
      "hd": 329
    },
    {
      "lat": 29.893112,
      "lng": 48.004021,
      "alt": 34000,
      "spd": 461,
      "ts": 1765085389,
      "hd": 329
    },
    {
      "lat": 29.83374,
      "lng": 48.043373,
      "alt": 34000,
      "spd": 461,
      "ts": 1765085357,
      "hd": 330
    },
    {
      "lat": 29.776062,
      "lng": 48.081558,
      "alt": 34000,
      "spd": 461,
      "ts": 1765085326,
      "hd": 330
    },
    {
      "lat": 29.720066,
      "lng": 48.118557,
      "alt": 34000,
      "spd": 461,
      "ts": 1765085296,
      "hd": 330
    },
    {
      "lat": 29.659128,
      "lng": 48.15873,
      "alt": 34000,
      "spd": 460,
      "ts": 1765085263,
      "hd": 330
    },
    {
      "lat": 29.59845,
      "lng": 48.198818,
      "alt": 34000,
      "spd": 456,
      "ts": 1765085230,
      "hd": 329
    },
    {
      "lat": 29.540268,
      "lng": 48.237427,
      "alt": 34000,
      "spd": 452,
      "ts": 1765085198,
      "hd": 330
    },
    {
      "lat": 29.483871,
      "lng": 48.274086,
      "alt": 34000,
      "spd": 453,
      "ts": 1765085167,
      "hd": 330
    },
    {
      "lat": 29.426134,
      "lng": 48.313347,
      "alt": 34000,
      "spd": 449,
      "ts": 1765085135,
      "hd": 325
    },
    {
      "lat": 29.369888,
      "lng": 48.35701,
      "alt": 34000,
      "spd": 447,
      "ts": 1765085102,
      "hd": 325
    },
    {
      "lat": 29.31469,
      "lng": 48.399784,
      "alt": 34000,
      "spd": 447,
      "ts": 1765085070,
      "hd": 325
    },
    {
      "lat": 29.259758,
      "lng": 48.442276,
      "alt": 34000,
      "spd": 447,
      "ts": 1765085038,
      "hd": 325
    },
    {
      "lat": 29.207657,
      "lng": 48.482613,
      "alt": 34000,
      "spd": 449,
      "ts": 1765085008,
      "hd": 325
    },
    {
      "lat": 29.151711,
      "lng": 48.525856,
      "alt": 34025,
      "spd": 447,
      "ts": 1765084975,
      "hd": 325
    },
    {
      "lat": 29.099012,
      "lng": 48.566357,
      "alt": 34000,
      "spd": 460,
      "ts": 1765084945,
      "hd": 326
    },
    {
      "lat": 29.041008,
      "lng": 48.611,
      "alt": 34000,
      "spd": 458,
      "ts": 1765084912,
      "hd": 325
    },
    {
      "lat": 28.984493,
      "lng": 48.654461,
      "alt": 34000,
      "spd": 457,
      "ts": 1765084880,
      "hd": 325
    },
    {
      "lat": 28.92897,
      "lng": 48.697109,
      "alt": 34000,
      "spd": 457,
      "ts": 1765084848,
      "hd": 325
    },
    {
      "lat": 28.871429,
      "lng": 48.741055,
      "alt": 34000,
      "spd": 456,
      "ts": 1765084816,
      "hd": 326
    },
    {
      "lat": 28.815628,
      "lng": 48.78384,
      "alt": 34000,
      "spd": 457,
      "ts": 1765084784,
      "hd": 325
    },
    {
      "lat": 28.763031,
      "lng": 48.824509,
      "alt": 34000,
      "spd": 458,
      "ts": 1765084754,
      "hd": 325
    },
    {
      "lat": 28.704895,
      "lng": 48.869301,
      "alt": 34000,
      "spd": 459,
      "ts": 1765084721,
      "hd": 325
    },
    {
      "lat": 28.647995,
      "lng": 48.913086,
      "alt": 34000,
      "spd": 460,
      "ts": 1765084689,
      "hd": 325
    },
    {
      "lat": 28.591034,
      "lng": 48.956856,
      "alt": 34000,
      "spd": 459,
      "ts": 1765084656,
      "hd": 325
    },
    {
      "lat": 28.53241,
      "lng": 49.002087,
      "alt": 34000,
      "spd": 457,
      "ts": 1765084623,
      "hd": 325
    },
    {
      "lat": 28.479031,
      "lng": 49.04324,
      "alt": 34000,
      "spd": 455,
      "ts": 1765084592,
      "hd": 325
    },
    {
      "lat": 28.424843,
      "lng": 49.083897,
      "alt": 34000,
      "spd": 453,
      "ts": 1765084562,
      "hd": 326
    },
    {
      "lat": 28.370331,
      "lng": 49.130051,
      "alt": 34000,
      "spd": 448,
      "ts": 1765084529,
      "hd": 320
    },
    {
      "lat": 28.319448,
      "lng": 49.176796,
      "alt": 34000,
      "spd": 447,
      "ts": 1765084497,
      "hd": 320
    },
    {
      "lat": 28.269699,
      "lng": 49.222343,
      "alt": 34000,
      "spd": 445,
      "ts": 1765084466,
      "hd": 320
    },
    {
      "lat": 28.219408,
      "lng": 49.268402,
      "alt": 34000,
      "spd": 443,
      "ts": 1765084435,
      "hd": 320
    },
    {
      "lat": 28.168293,
      "lng": 49.315151,
      "alt": 34000,
      "spd": 441,
      "ts": 1765084403,
      "hd": 320
    },
    {
      "lat": 28.117126,
      "lng": 49.361996,
      "alt": 34000,
      "spd": 438,
      "ts": 1765084371,
      "hd": 320
    },
    {
      "lat": 28.067228,
      "lng": 49.40778,
      "alt": 34000,
      "spd": 437,
      "ts": 1765084339,
      "hd": 321
    },
    {
      "lat": 28.019714,
      "lng": 49.450573,
      "alt": 34000,
      "spd": 436,
      "ts": 1765084309,
      "hd": 321
    },
    {
      "lat": 27.968216,
      "lng": 49.496788,
      "alt": 34000,
      "spd": 437,
      "ts": 1765084276,
      "hd": 321
    },
    {
      "lat": 27.918137,
      "lng": 49.541603,
      "alt": 34000,
      "spd": 438,
      "ts": 1765084245,
      "hd": 321
    },
    {
      "lat": 27.868357,
      "lng": 49.586105,
      "alt": 34000,
      "spd": 438,
      "ts": 1765084214,
      "hd": 321
    },
    {
      "lat": 27.818939,
      "lng": 49.630272,
      "alt": 34000,
      "spd": 437,
      "ts": 1765084183,
      "hd": 321
    },
    {
      "lat": 27.769638,
      "lng": 49.674061,
      "alt": 34000,
      "spd": 436,
      "ts": 1765084151,
      "hd": 321
    },
    {
      "lat": 27.718739,
      "lng": 49.719105,
      "alt": 34000,
      "spd": 437,
      "ts": 1765084120,
      "hd": 321
    },
    {
      "lat": 27.668322,
      "lng": 49.763786,
      "alt": 34000,
      "spd": 437,
      "ts": 1765084088,
      "hd": 321
    },
    {
      "lat": 27.62042,
      "lng": 49.806095,
      "alt": 34000,
      "spd": 438,
      "ts": 1765084058,
      "hd": 321
    },
    {
      "lat": 27.569305,
      "lng": 49.851151,
      "alt": 34000,
      "spd": 438,
      "ts": 1765084026,
      "hd": 321
    },
    {
      "lat": 27.517818,
      "lng": 49.896576,
      "alt": 34000,
      "spd": 437,
      "ts": 1765083994,
      "hd": 321
    },
    {
      "lat": 27.468987,
      "lng": 49.939835,
      "alt": 34000,
      "spd": 436,
      "ts": 1765083963,
      "hd": 321
    },
    {
      "lat": 27.4189,
      "lng": 49.984684,
      "alt": 34000,
      "spd": 438,
      "ts": 1765083931,
      "hd": 321
    },
    {
      "lat": 27.368526,
      "lng": 50.028305,
      "alt": 34000,
      "spd": 440,
      "ts": 1765083900,
      "hd": 323
    },
    {
      "lat": 27.318623,
      "lng": 50.069664,
      "alt": 34000,
      "spd": 441,
      "ts": 1765083870,
      "hd": 323
    },
    {
      "lat": 27.265549,
      "lng": 50.113979,
      "alt": 34000,
      "spd": 441,
      "ts": 1765083837,
      "hd": 323
    },
    {
      "lat": 27.213867,
      "lng": 50.155956,
      "alt": 34000,
      "spd": 441,
      "ts": 1765083806,
      "hd": 324
    },
    {
      "lat": 27.164349,
      "lng": 50.199333,
      "alt": 34000,
      "spd": 439,
      "ts": 1765083775,
      "hd": 318
    },
    {
      "lat": 27.119099,
      "lng": 50.250462,
      "alt": 34000,
      "spd": 437,
      "ts": 1765083744,
      "hd": 312
    },
    {
      "lat": 27.076969,
      "lng": 50.30138,
      "alt": 34000,
      "spd": 437,
      "ts": 1765083713,
      "hd": 312
    },
    {
      "lat": 27.03442,
      "lng": 50.352242,
      "alt": 34000,
      "spd": 437,
      "ts": 1765083682,
      "hd": 313
    },
    {
      "lat": 26.988281,
      "lng": 50.407295,
      "alt": 34000,
      "spd": 437,
      "ts": 1765083649,
      "hd": 313
    },
    {
      "lat": 26.94639,
      "lng": 50.456612,
      "alt": 34000,
      "spd": 436,
      "ts": 1765083618,
      "hd": 313
    },
    {
      "lat": 26.904648,
      "lng": 50.509541,
      "alt": 34000,
      "spd": 434,
      "ts": 1765083588,
      "hd": 308
    },
    {
      "lat": 26.865646,
      "lng": 50.562656,
      "alt": 34000,
      "spd": 433,
      "ts": 1765083557,
      "hd": 309
    },
    {
      "lat": 26.82605,
      "lng": 50.621216,
      "alt": 34000,
      "spd": 432,
      "ts": 1765083524,
      "hd": 303
    },
    {
      "lat": 26.792862,
      "lng": 50.685265,
      "alt": 34000,
      "spd": 432,
      "ts": 1765083491,
      "hd": 296
    },
    {
      "lat": 26.769724,
      "lng": 50.747433,
      "alt": 34000,
      "spd": 432,
      "ts": 1765083461,
      "hd": 289
    },
    {
      "lat": 26.747635,
      "lng": 50.816692,
      "alt": 34000,
      "spd": 430,
      "ts": 1765083428,
      "hd": 289
    },
    {
      "lat": 26.727585,
      "lng": 50.879654,
      "alt": 34000,
      "spd": 428,
      "ts": 1765083397,
      "hd": 289
    },
    {
      "lat": 26.706207,
      "lng": 50.947128,
      "alt": 34000,
      "spd": 428,
      "ts": 1765083365,
      "hd": 289
    },
    {
      "lat": 26.68428,
      "lng": 51.014599,
      "alt": 34000,
      "spd": 429,
      "ts": 1765083333,
      "hd": 290
    },
    {
      "lat": 26.663818,
      "lng": 51.076736,
      "alt": 34000,
      "spd": 430,
      "ts": 1765083303,
      "hd": 290
    },
    {
      "lat": 26.642532,
      "lng": 51.141098,
      "alt": 34000,
      "spd": 430,
      "ts": 1765083272,
      "hd": 290
    },
    {
      "lat": 26.619827,
      "lng": 51.209816,
      "alt": 34000,
      "spd": 431,
      "ts": 1765083239,
      "hd": 290
    },
    {
      "lat": 26.598633,
      "lng": 51.273712,
      "alt": 34000,
      "spd": 432,
      "ts": 1765083208,
      "hd": 290
    },
    {
      "lat": 26.57723,
      "lng": 51.338531,
      "alt": 34000,
      "spd": 433,
      "ts": 1765083178,
      "hd": 290
    },
    {
      "lat": 26.554514,
      "lng": 51.407089,
      "alt": 34000,
      "spd": 434,
      "ts": 1765083145,
      "hd": 290
    },
    {
      "lat": 26.533035,
      "lng": 51.471828,
      "alt": 34000,
      "spd": 434,
      "ts": 1765083114,
      "hd": 290
    },
    {
      "lat": 26.511545,
      "lng": 51.536549,
      "alt": 34000,
      "spd": 434,
      "ts": 1765083083,
      "hd": 290
    },
    {
      "lat": 26.490131,
      "lng": 51.600933,
      "alt": 34000,
      "spd": 435,
      "ts": 1765083053,
      "hd": 290
    },
    {
      "lat": 26.468491,
      "lng": 51.665749,
      "alt": 34000,
      "spd": 436,
      "ts": 1765083022,
      "hd": 290
    },
    {
      "lat": 26.444883,
      "lng": 51.736153,
      "alt": 34000,
      "spd": 435,
      "ts": 1765082989,
      "hd": 290
    },
    {
      "lat": 26.423126,
      "lng": 51.800797,
      "alt": 34000,
      "spd": 434,
      "ts": 1765082958,
      "hd": 290
    },
    {
      "lat": 26.401566,
      "lng": 51.865158,
      "alt": 34000,
      "spd": 435,
      "ts": 1765082927,
      "hd": 289
    },
    {
      "lat": 26.379959,
      "lng": 51.930454,
      "alt": 34000,
      "spd": 434,
      "ts": 1765082896,
      "hd": 292
    },
    {
      "lat": 26.354141,
      "lng": 51.992485,
      "alt": 34000,
      "spd": 434,
      "ts": 1765082865,
      "hd": 295
    },
    {
      "lat": 26.327478,
      "lng": 52.054173,
      "alt": 34000,
      "spd": 432,
      "ts": 1765082835,
      "hd": 295
    },
    {
      "lat": 26.299034,
      "lng": 52.12009,
      "alt": 34000,
      "spd": 433,
      "ts": 1765082802,
      "hd": 295
    },
    {
      "lat": 26.272268,
      "lng": 52.182365,
      "alt": 34000,
      "spd": 434,
      "ts": 1765082771,
      "hd": 295
    },
    {
      "lat": 26.245733,
      "lng": 52.244427,
      "alt": 34000,
      "spd": 433,
      "ts": 1765082740,
      "hd": 295
    },
    {
      "lat": 26.217819,
      "lng": 52.307827,
      "alt": 34000,
      "spd": 432,
      "ts": 1765082708,
      "hd": 296
    },
    {
      "lat": 26.189072,
      "lng": 52.371773,
      "alt": 34000,
      "spd": 429,
      "ts": 1765082677,
      "hd": 296
    },
    {
      "lat": 26.162201,
      "lng": 52.431316,
      "alt": 34000,
      "spd": 426,
      "ts": 1765082646,
      "hd": 296
    },
    {
      "lat": 26.134186,
      "lng": 52.493454,
      "alt": 33575,
      "spd": 429,
      "ts": 1765082614,
      "hd": 296
    },
    {
      "lat": 26.106812,
      "lng": 52.554291,
      "alt": 33050,
      "spd": 434,
      "ts": 1765082583,
      "hd": 296
    },
    {
      "lat": 26.07843,
      "lng": 52.616634,
      "alt": 32325,
      "spd": 446,
      "ts": 1765082553,
      "hd": 297
    },
    {
      "lat": 26.047806,
      "lng": 52.682243,
      "alt": 31625,
      "spd": 452,
      "ts": 1765082521,
      "hd": 296
    },
    {
      "lat": 26.018692,
      "lng": 52.750389,
      "alt": 30875,
      "spd": 459,
      "ts": 1765082488,
      "hd": 294
    },
    {
      "lat": 25.991325,
      "lng": 52.818039,
      "alt": 30625,
      "spd": 454,
      "ts": 1765082457,
      "hd": 294
    },
    {
      "lat": 25.965271,
      "lng": 52.882275,
      "alt": 30000,
      "spd": 457,
      "ts": 1765082427,
      "hd": 294
    },
    {
      "lat": 25.937027,
      "lng": 52.951977,
      "alt": 29575,
      "spd": 455,
      "ts": 1765082394,
      "hd": 294
    },
    {
      "lat": 25.909998,
      "lng": 53.018856,
      "alt": 29225,
      "spd": 452,
      "ts": 1765082363,
      "hd": 294
    },
    {
      "lat": 25.88269,
      "lng": 53.086353,
      "alt": 28825,
      "spd": 448,
      "ts": 1765082331,
      "hd": 294
    },
    {
      "lat": 25.856602,
      "lng": 53.148685,
      "alt": 28425,
      "spd": 445,
      "ts": 1765082300,
      "hd": 294
    },
    {
      "lat": 25.832703,
      "lng": 53.218914,
      "alt": 27875,
      "spd": 445,
      "ts": 1765082267,
      "hd": 287
    },
    {
      "lat": 25.813797,
      "lng": 53.286591,
      "alt": 27475,
      "spd": 440,
      "ts": 1765082236,
      "hd": 287
    },
    {
      "lat": 25.794662,
      "lng": 53.355053,
      "alt": 26950,
      "spd": 438,
      "ts": 1765082204,
      "hd": 287
    },
    {
      "lat": 25.774717,
      "lng": 53.426357,
      "alt": 26375,
      "spd": 434,
      "ts": 1765082171,
      "hd": 287
    },
    {
      "lat": 25.756668,
      "lng": 53.490601,
      "alt": 25875,
      "spd": 431,
      "ts": 1765082141,
      "hd": 287
    },
    {
      "lat": 25.737762,
      "lng": 53.558094,
      "alt": 25325,
      "spd": 428,
      "ts": 1765082109,
      "hd": 287
    },
    {
      "lat": 25.718262,
      "lng": 53.627472,
      "alt": 24750,
      "spd": 422,
      "ts": 1765082076,
      "hd": 287
    },
    {
      "lat": 25.700455,
      "lng": 53.690899,
      "alt": 24375,
      "spd": 414,
      "ts": 1765082045,
      "hd": 287
    },
    {
      "lat": 25.682419,
      "lng": 53.754833,
      "alt": 23750,
      "spd": 410,
      "ts": 1765082013,
      "hd": 287
    },
    {
      "lat": 25.664795,
      "lng": 53.816986,
      "alt": 22900,
      "spd": 412,
      "ts": 1765081982,
      "hd": 287
    },
    {
      "lat": 25.646576,
      "lng": 53.880871,
      "alt": 22000,
      "spd": 414,
      "ts": 1765081950,
      "hd": 287
    },
    {
      "lat": 25.628635,
      "lng": 53.944168,
      "alt": 21175,
      "spd": 414,
      "ts": 1765081919,
      "hd": 287
    },
    {
      "lat": 25.61087,
      "lng": 54.006958,
      "alt": 20375,
      "spd": 414,
      "ts": 1765081888,
      "hd": 287
    },
    {
      "lat": 25.592377,
      "lng": 54.070892,
      "alt": 19650,
      "spd": 409,
      "ts": 1765081857,
      "hd": 287
    },
    {
      "lat": 25.57431,
      "lng": 54.132698,
      "alt": 18850,
      "spd": 404,
      "ts": 1765081826,
      "hd": 287
    },
    {
      "lat": 25.556293,
      "lng": 54.194054,
      "alt": 18050,
      "spd": 402,
      "ts": 1765081794,
      "hd": 287
    },
    {
      "lat": 25.538465,
      "lng": 54.254944,
      "alt": 17100,
      "spd": 401,
      "ts": 1765081762,
      "hd": 287
    },
    {
      "lat": 25.519913,
      "lng": 54.318035,
      "alt": 16075,
      "spd": 401,
      "ts": 1765081730,
      "hd": 287
    },
    {
      "lat": 25.502573,
      "lng": 54.377247,
      "alt": 15275,
      "spd": 396,
      "ts": 1765081700,
      "hd": 287
    },
    {
      "lat": 25.484278,
      "lng": 54.439484,
      "alt": 14375,
      "spd": 391,
      "ts": 1765081667,
      "hd": 288
    },
    {
      "lat": 25.46603,
      "lng": 54.50053,
      "alt": 13450,
      "spd": 386,
      "ts": 1765081635,
      "hd": 288
    },
    {
      "lat": 25.448572,
      "lng": 54.559296,
      "alt": 12500,
      "spd": 379,
      "ts": 1765081603,
      "hd": 287
    },
    {
      "lat": 25.447266,
      "lng": 54.563904,
      "alt": 12425,
      "spd": 379,
      "ts": 1765081601,
      "hd": 287
    },
    {
      "lat": 25.446058,
      "lng": 54.568211,
      "alt": 12350,
      "spd": 378,
      "ts": 1765081598,
      "hd": 287
    },
    {
      "lat": 25.444656,
      "lng": 54.573261,
      "alt": 12275,
      "spd": 378,
      "ts": 1765081596,
      "hd": 286
    },
    {
      "lat": 25.443964,
      "lng": 54.575775,
      "alt": 12250,
      "spd": 378,
      "ts": 1765081594,
      "hd": 286
    },
    {
      "lat": 25.442734,
      "lng": 54.580334,
      "alt": 12200,
      "spd": 376,
      "ts": 1765081592,
      "hd": 286
    },
    {
      "lat": 25.441217,
      "lng": 54.585934,
      "alt": 12175,
      "spd": 375,
      "ts": 1765081589,
      "hd": 286
    },
    {
      "lat": 25.435913,
      "lng": 54.604443,
      "alt": 12025,
      "spd": 368,
      "ts": 1765081578,
      "hd": 290
    },
    {
      "lat": 25.429276,
      "lng": 54.620411,
      "alt": 11925,
      "spd": 358,
      "ts": 1765081569,
      "hd": 298
    },
    {
      "lat": 25.416275,
      "lng": 54.643909,
      "alt": 11750,
      "spd": 345,
      "ts": 1765081554,
      "hd": 302
    },
    {
      "lat": 25.404739,
      "lng": 54.664204,
      "alt": 11325,
      "spd": 340,
      "ts": 1765081541,
      "hd": 301
    },
    {
      "lat": 25.392288,
      "lng": 54.686176,
      "alt": 10800,
      "spd": 341,
      "ts": 1765081526,
      "hd": 302
    },
    {
      "lat": 25.377869,
      "lng": 54.711304,
      "alt": 10125,
      "spd": 160,
      "ts": 1765081512,
      "hd": 302
    },
    {
      "lat": 25.367203,
      "lng": 54.729969,
      "alt": 9625,
      "spd": 339,
      "ts": 1765081495,
      "hd": 302
    },
    {
      "lat": 25.35585,
      "lng": 54.749859,
      "alt": 9275,
      "spd": 332,
      "ts": 1765081481,
      "hd": 301
    },
    {
      "lat": 25.344156,
      "lng": 54.770473,
      "alt": 9050,
      "spd": 320,
      "ts": 1765081467,
      "hd": 301
    },
    {
      "lat": 25.334053,
      "lng": 54.7883,
      "alt": 8775,
      "spd": 308,
      "ts": 1765081454,
      "hd": 301
    },
    {
      "lat": 25.321198,
      "lng": 54.811401,
      "alt": 8175,
      "spd": 302,
      "ts": 1765081437,
      "hd": 301
    },
    {
      "lat": 25.312128,
      "lng": 54.828049,
      "alt": 7625,
      "spd": 302,
      "ts": 1765081424,
      "hd": 300
    },
    {
      "lat": 25.302979,
      "lng": 54.844666,
      "alt": 7225,
      "spd": 297,
      "ts": 1765081411,
      "hd": 301
    },
    {
      "lat": 25.301514,
      "lng": 54.847324,
      "alt": 7175,
      "spd": 296,
      "ts": 1765081409,
      "hd": 301
    },
    {
      "lat": 25.300024,
      "lng": 54.850021,
      "alt": 7125,
      "spd": 295,
      "ts": 1765081407,
      "hd": 301
    },
    {
      "lat": 25.298441,
      "lng": 54.852768,
      "alt": 7100,
      "spd": 293,
      "ts": 1765081405,
      "hd": 301
    },
    {
      "lat": 25.297138,
      "lng": 54.855099,
      "alt": 7075,
      "spd": 290,
      "ts": 1765081403,
      "hd": 302
    },
    {
      "lat": 25.295242,
      "lng": 54.858398,
      "alt": 7025,
      "spd": 287,
      "ts": 1765081401,
      "hd": 302
    },
    {
      "lat": 25.293869,
      "lng": 54.86079,
      "alt": 6975,
      "spd": 286,
      "ts": 1765081398,
      "hd": 302
    },
    {
      "lat": 25.292482,
      "lng": 54.863132,
      "alt": 6950,
      "spd": 283,
      "ts": 1765081396,
      "hd": 302
    },
    {
      "lat": 25.29039,
      "lng": 54.866741,
      "alt": 6875,
      "spd": 282,
      "ts": 1765081394,
      "hd": 303
    },
    {
      "lat": 25.289337,
      "lng": 54.868469,
      "alt": 6825,
      "spd": 280,
      "ts": 1765081392,
      "hd": 303
    },
    {
      "lat": 25.287827,
      "lng": 54.871063,
      "alt": 6775,
      "spd": 278,
      "ts": 1765081390,
      "hd": 302
    },
    {
      "lat": 25.286545,
      "lng": 54.873249,
      "alt": 6700,
      "spd": 278,
      "ts": 1765081388,
      "hd": 301
    },
    {
      "lat": 25.285221,
      "lng": 54.875671,
      "alt": 6600,
      "spd": 278,
      "ts": 1765081386,
      "hd": 299
    },
    {
      "lat": 25.283798,
      "lng": 54.87859,
      "alt": 6525,
      "spd": 279,
      "ts": 1765081384,
      "hd": 297
    },
    {
      "lat": 25.282707,
      "lng": 54.881062,
      "alt": 6450,
      "spd": 279,
      "ts": 1765081382,
      "hd": 294
    },
    {
      "lat": 25.281601,
      "lng": 54.883984,
      "alt": 6350,
      "spd": 279,
      "ts": 1765081380,
      "hd": 291
    },
    {
      "lat": 25.280659,
      "lng": 54.886917,
      "alt": 6250,
      "spd": 279,
      "ts": 1765081378,
      "hd": 288
    },
    {
      "lat": 25.279861,
      "lng": 54.889729,
      "alt": 6175,
      "spd": 280,
      "ts": 1765081375,
      "hd": 283
    },
    {
      "lat": 25.279083,
      "lng": 54.893291,
      "alt": 6050,
      "spd": 279,
      "ts": 1765081373,
      "hd": 282
    },
    {
      "lat": 25.277481,
      "lng": 54.910992,
      "alt": 5575,
      "spd": 278,
      "ts": 1765081361,
      "hd": 271
    },
    {
      "lat": 25.276934,
      "lng": 54.931435,
      "alt": 5000,
      "spd": 275,
      "ts": 1765081346,
      "hd": 271
    },
    {
      "lat": 25.276655,
      "lng": 54.940865,
      "alt": 4700,
      "spd": 275,
      "ts": 1765081339,
      "hd": 271
    },
    {
      "lat": 25.276329,
      "lng": 54.951904,
      "alt": 4350,
      "spd": 275,
      "ts": 1765081332,
      "hd": 271
    },
    {
      "lat": 25.276003,
      "lng": 54.963409,
      "alt": 4075,
      "spd": 275,
      "ts": 1765081323,
      "hd": 271
    },
    {
      "lat": 25.275724,
      "lng": 54.973152,
      "alt": 3900,
      "spd": 275,
      "ts": 1765081316,
      "hd": 271
    },
    {
      "lat": 25.275444,
      "lng": 54.98315,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081310,
      "hd": 271
    },
    {
      "lat": 25.275146,
      "lng": 54.994251,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081301,
      "hd": 271
    },
    {
      "lat": 25.274839,
      "lng": 55.005695,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081293,
      "hd": 271
    },
    {
      "lat": 25.274607,
      "lng": 55.014816,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081286,
      "hd": 271
    },
    {
      "lat": 25.274281,
      "lng": 55.026581,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081278,
      "hd": 271
    },
    {
      "lat": 25.274048,
      "lng": 55.035809,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081272,
      "hd": 271
    },
    {
      "lat": 25.273956,
      "lng": 55.038605,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081269,
      "hd": 271
    },
    {
      "lat": 25.273861,
      "lng": 55.04166,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081267,
      "hd": 271
    },
    {
      "lat": 25.273773,
      "lng": 55.044708,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081265,
      "hd": 271
    },
    {
      "lat": 25.273682,
      "lng": 55.048065,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081263,
      "hd": 271
    },
    {
      "lat": 25.273628,
      "lng": 55.050987,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081261,
      "hd": 271
    },
    {
      "lat": 25.273499,
      "lng": 55.054676,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081259,
      "hd": 271
    },
    {
      "lat": 25.273443,
      "lng": 55.057259,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081257,
      "hd": 271
    },
    {
      "lat": 25.273396,
      "lng": 55.060005,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081254,
      "hd": 271
    },
    {
      "lat": 25.27327,
      "lng": 55.063934,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081252,
      "hd": 271
    },
    {
      "lat": 25.273178,
      "lng": 55.069782,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081248,
      "hd": 270
    },
    {
      "lat": 25.273178,
      "lng": 55.072124,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081246,
      "hd": 269
    },
    {
      "lat": 25.273224,
      "lng": 55.074921,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081244,
      "hd": 268
    },
    {
      "lat": 25.273361,
      "lng": 55.078533,
      "alt": 3800,
      "spd": 275,
      "ts": 1765081241,
      "hd": 265
    },
    {
      "lat": 25.273682,
      "lng": 55.082806,
      "alt": 3800,
      "spd": 275,
      "ts": 1765081238,
      "hd": 263
    },
    {
      "lat": 25.274002,
      "lng": 55.085705,
      "alt": 3800,
      "spd": 276,
      "ts": 1765081236,
      "hd": 261
    },
    {
      "lat": 25.274559,
      "lng": 55.089283,
      "alt": 3800,
      "spd": 275,
      "ts": 1765081234,
      "hd": 259
    },
    {
      "lat": 25.275118,
      "lng": 55.091927,
      "alt": 3800,
      "spd": 276,
      "ts": 1765081232,
      "hd": 256
    },
    {
      "lat": 25.278238,
      "lng": 55.103378,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081223,
      "hd": 252
    },
    {
      "lat": 25.280752,
      "lng": 55.111931,
      "alt": 3825,
      "spd": 275,
      "ts": 1765081217,
      "hd": 252
    },
    {
      "lat": 25.284149,
      "lng": 55.123383,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081208,
      "hd": 252
    },
    {
      "lat": 25.287315,
      "lng": 55.134109,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081200,
      "hd": 252
    },
    {
      "lat": 25.289932,
      "lng": 55.143127,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081194,
      "hd": 252
    },
    {
      "lat": 25.29332,
      "lng": 55.154633,
      "alt": 3825,
      "spd": 276,
      "ts": 1765081185,
      "hd": 252
    },
    {
      "lat": 25.296432,
      "lng": 55.165253,
      "alt": 3850,
      "spd": 276,
      "ts": 1765081177,
      "hd": 252
    },
    {
      "lat": 25.299885,
      "lng": 55.176914,
      "alt": 3825,
      "spd": 273,
      "ts": 1765081168,
      "hd": 251
    },
    {
      "lat": 25.303162,
      "lng": 55.187683,
      "alt": 3825,
      "spd": 268,
      "ts": 1765081160,
      "hd": 251
    },
    {
      "lat": 25.306635,
      "lng": 55.199249,
      "alt": 3775,
      "spd": 258,
      "ts": 1765081151,
      "hd": 251
    },
    {
      "lat": 25.307472,
      "lng": 55.201946,
      "alt": 3750,
      "spd": 255,
      "ts": 1765081149,
      "hd": 251
    },
    {
      "lat": 25.308125,
      "lng": 55.204227,
      "alt": 3725,
      "spd": 254,
      "ts": 1765081147,
      "hd": 251
    },
    {
      "lat": 25.308868,
      "lng": 55.206661,
      "alt": 3675,
      "spd": 249,
      "ts": 1765081145,
      "hd": 251
    },
    {
      "lat": 25.309753,
      "lng": 55.209553,
      "alt": 3625,
      "spd": 247,
      "ts": 1765081143,
      "hd": 251
    },
    {
      "lat": 25.310452,
      "lng": 55.211845,
      "alt": 3575,
      "spd": 246,
      "ts": 1765081141,
      "hd": 251
    },
    {
      "lat": 25.311243,
      "lng": 55.214592,
      "alt": 3525,
      "spd": 245,
      "ts": 1765081139,
      "hd": 251
    },
    {
      "lat": 25.311989,
      "lng": 55.217079,
      "alt": 3450,
      "spd": 244,
      "ts": 1765081136,
      "hd": 252
    },
    {
      "lat": 25.312775,
      "lng": 55.219727,
      "alt": 3375,
      "spd": 242,
      "ts": 1765081134,
      "hd": 251
    },
    {
      "lat": 25.313431,
      "lng": 55.222,
      "alt": 3325,
      "spd": 242,
      "ts": 1765081132,
      "hd": 251
    },
    {
      "lat": 25.314177,
      "lng": 55.224541,
      "alt": 3225,
      "spd": 241,
      "ts": 1765081130,
      "hd": 251
    },
    {
      "lat": 25.31492,
      "lng": 55.227131,
      "alt": 3150,
      "spd": 242,
      "ts": 1765081128,
      "hd": 252
    },
    {
      "lat": 25.315659,
      "lng": 55.229694,
      "alt": 3075,
      "spd": 241,
      "ts": 1765081126,
      "hd": 253
    },
    {
      "lat": 25.316225,
      "lng": 55.231899,
      "alt": 3000,
      "spd": 241,
      "ts": 1765081124,
      "hd": 253
    },
    {
      "lat": 25.31683,
      "lng": 55.23423,
      "alt": 2925,
      "spd": 241,
      "ts": 1765081122,
      "hd": 255
    },
    {
      "lat": 25.317398,
      "lng": 55.236713,
      "alt": 2850,
      "spd": 240,
      "ts": 1765081119,
      "hd": 257
    },
    {
      "lat": 25.317902,
      "lng": 55.239208,
      "alt": 2750,
      "spd": 240,
      "ts": 1765081117,
      "hd": 258
    },
    {
      "lat": 25.318268,
      "lng": 55.24165,
      "alt": 2675,
      "spd": 239,
      "ts": 1765081115,
      "hd": 261
    },
    {
      "lat": 25.318598,
      "lng": 55.244648,
      "alt": 2575,
      "spd": 239,
      "ts": 1765081113,
      "hd": 265
    },
    {
      "lat": 25.318726,
      "lng": 55.246735,
      "alt": 2500,
      "spd": 240,
      "ts": 1765081111,
      "hd": 268
    },
    {
      "lat": 25.31868,
      "lng": 55.249279,
      "alt": 2400,
      "spd": 240,
      "ts": 1765081109,
      "hd": 272
    },
    {
      "lat": 25.318497,
      "lng": 55.25172,
      "alt": 2325,
      "spd": 240,
      "ts": 1765081107,
      "hd": 276
    },
    {
      "lat": 25.318132,
      "lng": 55.254337,
      "alt": 2250,
      "spd": 239,
      "ts": 1765081105,
      "hd": 281
    },
    {
      "lat": 25.317528,
      "lng": 55.257034,
      "alt": 2175,
      "spd": 239,
      "ts": 1765081103,
      "hd": 285
    },
    {
      "lat": 25.316849,
      "lng": 55.259296,
      "alt": 2100,
      "spd": 238,
      "ts": 1765081101,
      "hd": 291
    },
    {
      "lat": 25.315979,
      "lng": 55.261536,
      "alt": 2050,
      "spd": 236,
      "ts": 1765081099,
      "hd": 295
    },
    {
      "lat": 25.314972,
      "lng": 55.263672,
      "alt": 1975,
      "spd": 235,
      "ts": 1765081097,
      "hd": 299
    },
    {
      "lat": 25.313644,
      "lng": 55.266064,
      "alt": 1925,
      "spd": 233,
      "ts": 1765081095,
      "hd": 303
    },
    {
      "lat": 25.312363,
      "lng": 55.268097,
      "alt": 1850,
      "spd": 232,
      "ts": 1765081092,
      "hd": 305
    },
    {
      "lat": 25.311035,
      "lng": 55.270081,
      "alt": 1825,
      "spd": 230,
      "ts": 1765081090,
      "hd": 306
    },
    {
      "lat": 25.309893,
      "lng": 55.271801,
      "alt": 1775,
      "spd": 228,
      "ts": 1765081088,
      "hd": 306
    },
    {
      "lat": 25.30838,
      "lng": 55.274048,
      "alt": 1750,
      "spd": 226,
      "ts": 1765081086,
      "hd": 306
    },
    {
      "lat": 25.30719,
      "lng": 55.275829,
      "alt": 1700,
      "spd": 223,
      "ts": 1765081084,
      "hd": 306
    },
    {
      "lat": 25.306,
      "lng": 55.277607,
      "alt": 1675,
      "spd": 222,
      "ts": 1765081082,
      "hd": 306
    },
    {
      "lat": 25.304493,
      "lng": 55.279835,
      "alt": 1650,
      "spd": 220,
      "ts": 1765081080,
      "hd": 306
    },
    {
      "lat": 25.303562,
      "lng": 55.281284,
      "alt": 1625,
      "spd": 216,
      "ts": 1765081078,
      "hd": 306
    },
    {
      "lat": 25.3022,
      "lng": 55.283356,
      "alt": 1600,
      "spd": 214,
      "ts": 1765081076,
      "hd": 306
    },
    {
      "lat": 25.301142,
      "lng": 55.284912,
      "alt": 1575,
      "spd": 211,
      "ts": 1765081074,
      "hd": 305
    },
    {
      "lat": 25.299931,
      "lng": 55.286777,
      "alt": 1550,
      "spd": 210,
      "ts": 1765081072,
      "hd": 305
    },
    {
      "lat": 25.29858,
      "lng": 55.28875,
      "alt": 1500,
      "spd": 206,
      "ts": 1765081070,
      "hd": 306
    },
    {
      "lat": 25.297577,
      "lng": 55.290325,
      "alt": 1475,
      "spd": 204,
      "ts": 1765081068,
      "hd": 306
    },
    {
      "lat": 25.296158,
      "lng": 55.292511,
      "alt": 1450,
      "spd": 202,
      "ts": 1765081065,
      "hd": 304
    },
    {
      "lat": 25.293041,
      "lng": 55.297817,
      "alt": 1350,
      "spd": 196,
      "ts": 1765081059,
      "hd": 301
    },
    {
      "lat": 25.289154,
      "lng": 55.304718,
      "alt": 1200,
      "spd": 189,
      "ts": 1765081051,
      "hd": 301
    },
    {
      "lat": 25.2855,
      "lng": 55.311237,
      "alt": 1050,
      "spd": 185,
      "ts": 1765081043,
      "hd": 301
    },
    {
      "lat": 25.281738,
      "lng": 55.318043,
      "alt": 875,
      "spd": 183,
      "ts": 1765081034,
      "hd": 301
    },
    {
      "lat": 25.278122,
      "lng": 55.324604,
      "alt": 675,
      "spd": 183,
      "ts": 1765081026,
      "hd": 300
    },
    {
      "lat": 25.274643,
      "lng": 55.331165,
      "alt": 525,
      "spd": 182,
      "ts": 1765081018,
      "hd": 300
    },
    {
      "lat": 25.271393,
      "lng": 55.337421,
      "alt": 400,
      "spd": 176,
      "ts": 1765081010,
      "hd": 299
    },
    {
      "lat": 25.267996,
      "lng": 55.343941,
      "alt": 250,
      "spd": 173,
      "ts": 1765081002,
      "hd": 300
    },
    {
      "lat": 25.264755,
      "lng": 55.350037,
      "alt": 75,
      "spd": 173,
      "ts": 1765080994,
      "hd": 300
    },
    {
      "lat": 25.245022,
      "lng": 55.382534,
      "alt": 0,
      "spd": 11,
      "ts": 1765080865,
      "hd": 329
    },
    {
      "lat": 25.244814,
      "lng": 55.382599,
      "alt": 0,
      "spd": 10,
      "ts": 1765080863,
      "hd": 309
    },
    {
      "lat": 25.24465,
      "lng": 55.38282,
      "alt": 0,
      "spd": 11,
      "ts": 1765080854,
      "hd": 300
    },
    {
      "lat": 25.239372,
      "lng": 55.38554,
      "alt": 0,
      "spd": 8,
      "ts": 1765080193,
      "hd": 87
    },
    {
      "lat": 25.239315,
      "lng": 55.385296,
      "alt": 0,
      "spd": 8,
      "ts": 1765080184,
      "hd": 115
    },
    {
      "lat": 25.239407,
      "lng": 55.385056,
      "alt": 0,
      "spd": 8,
      "ts": 1765080176,
      "hd": 120
    },
    {
      "lat": 25.23954,
      "lng": 55.384815,
      "alt": 0,
      "spd": 0,
      "ts": 1765080170,
      "hd": 120
    },
    {
      "lat": 25.241007,
      "lng": 55.382156,
      "alt": 0,
      "spd": 12,
      "ts": 1765080116,
      "hd": 120
    },
    {
      "lat": 25.24131,
      "lng": 55.381599,
      "alt": 0,
      "spd": 11,
      "ts": 1765080105,
      "hd": 120
    },
    {
      "lat": 25.241501,
      "lng": 55.381252,
      "alt": 0,
      "spd": 10,
      "ts": 1765080098,
      "hd": 120
    },
    {
      "lat": 25.241787,
      "lng": 55.38068,
      "alt": 0,
      "spd": 11,
      "ts": 1765080086,
      "hd": 120
    },
    {
      "lat": 25.241985,
      "lng": 55.380318,
      "alt": 0,
      "spd": 0,
      "ts": 1765080078,
      "hd": 120
    },
    {
      "lat": 25.242601,
      "lng": 55.379128,
      "alt": 0,
      "spd": 12,
      "ts": 1765080055,
      "hd": 123
    },
    {
      "lat": 25.242811,
      "lng": 55.378803,
      "alt": 0,
      "spd": 11,
      "ts": 1765080049,
      "hd": 115
    },
    {
      "lat": 25.242977,
      "lng": 55.378532,
      "alt": 0,
      "spd": 0,
      "ts": 1765080043,
      "hd": 92
    },
    {
      "lat": 25.242043,
      "lng": 55.3773,
      "alt": 0,
      "spd": 4,
      "ts": 1765079990,
      "hd": 30
    },
    {
      "lat": 25.241682,
      "lng": 55.377052,
      "alt": 0,
      "spd": 0,
      "ts": 1765079960,
      "hd": 30
    }
  ],
  "firstTimestamp": 1765079960,
  "s": "VuiJuTTf_bYVDfm9sbW5vEvxHbxIAvraljd05LRsr23UPHXCxWsdUJx5ES-AdrcN"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA_3d6739ac = R"(
{
  "identification": {
    "id": "3d6739ac",
    "row": 5744533406,
    "number": {
      "default": "EK35",
      "alternative": null
    },
    "callsign": "UAE35"
  },
  "status": {
    "live": true,
    "text": "Estimated- 11:06",
    "icon": "green",
    "estimated": null,
    "ambiguous": false,
    "generic": {
      "status": {
        "text": "estimated",
        "color": "green",
        "type": "arrival"
      },
      "eventTime": {
        "utc": 1765105604,
        "local": 1765105604
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "B77W",
      "text": "Boeing 777-31H(ER) "
    },
    "countryId": 234,
    "registration": "A6-EPR",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/6/1386161_1751214446_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11766284",
          "copyright": "Pawel Kierzkowski",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/1806116_1742911073_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11676625",
          "copyright": "Oskar Królak",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/544153_1719093663_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11386624",
          "copyright": "Cph spots - Den",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/531946_1712602250_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11310244",
          "copyright": "Mike H.",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/739029_1709893447_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11275873",
          "copyright": "Cph spots - Den",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/6/1386161_1751214446.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11766284",
          "copyright": "Pawel Kierzkowski",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/1806116_1742911073.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11676625",
          "copyright": "Oskar Królak",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/544153_1719093663.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11386624",
          "copyright": "Cph spots - Den",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/531946_1712602250.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11310244",
          "copyright": "Mike H.",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/739029_1709893447.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11275873",
          "copyright": "Cph spots - Den",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1386161_1751214446.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11766284",
          "copyright": "Pawel Kierzkowski",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1806116_1742911073.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11676625",
          "copyright": "Oskar Królak",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/544153_1719093663.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11386624",
          "copyright": "Cph spots - Den",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/531946_1712602250.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11310244",
          "copyright": "Mike H.",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/739029_1709893447.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11275873",
          "copyright": "Cph spots - Den",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "8963e1"
  },
  "airline": {
    "name": "Emirates",
    "short": "Emirates",
    "code": {
      "iata": "EK",
      "icao": "UAE"
    },
    "url": "emirates-uae"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Dubai International Airport",
      "code": {
        "iata": "DXB",
        "icao": "OMDB"
      },
      "position": {
        "latitude": 25.252769,
        "longitude": 55.364441,
        "altitude": 62,
        "country": {
          "id": 234,
          "name": "United Arab Emirates",
          "code": "AE",
          "codeLong": "ARE"
        },
        "region": {
          "city": "Dubai"
        }
      },
      "timezone": {
        "name": "Asia/Dubai",
        "offset": 14400,
        "offsetHours": "4:00",
        "abbr": "+04",
        "abbrName": "",
        "isDst": false
      },
      "visible": true,
      "website": "https://www.dubaiairports.ae/",
      "info": {
        "terminal": "3",
        "baggage": null,
        "gate": "A4"
      }
    },
    "destination": {
      "name": "Newcastle Airport",
      "code": {
        "iata": "NCL",
        "icao": "EGNT"
      },
      "position": {
        "latitude": 55.037498,
        "longitude": -1.69166,
        "altitude": 266,
        "country": {
          "id": 235,
          "name": "United Kingdom",
          "code": "GB",
          "codeLong": "GBR"
        },
        "region": {
          "city": "Newcastle"
        }
      },
      "timezone": {
        "name": "Europe/London",
        "offset": 0,
        "offsetHours": "0:00",
        "abbr": "GMT",
        "abbrName": "Greenwich Mean Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.newcastleairport.com/",
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": null
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d6689ec",
          "number": {
            "default": "EK615"
          }
        },
        "airport": {
          "origin": {
            "name": "Islamabad International Airport",
            "code": {
              "iata": "ISB",
              "icao": "OPIS"
            },
            "position": {
              "latitude": 33.549084,
              "longitude": 72.825653,
              "altitude": 1761,
              "country": {
                "id": 167,
                "name": "Pakistan",
                "code": "PK",
                "codeLong": "PAK"
              },
              "region": {
                "city": "Islamabad"
              }
            },
            "timezone": {
              "name": "Asia/Karachi",
              "offset": 18000,
              "offsetHours": "5:00",
              "abbr": "PKT",
              "abbrName": "Pakistan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.islamabadairport.com.pk/"
          },
          "destination": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          }
        },
        "time": {
          "real": {
            "departure": 1765060231
          }
        }
      },
      {
        "identification": {
          "id": "3d65f35f",
          "number": {
            "default": "EK614"
          }
        },
        "airport": {
          "origin": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          },
          "destination": {
            "name": "Islamabad International Airport",
            "code": {
              "iata": "ISB",
              "icao": "OPIS"
            },
            "position": {
              "latitude": 33.549084,
              "longitude": 72.825653,
              "altitude": 1761,
              "country": {
                "id": 167,
                "name": "Pakistan",
                "code": "PK",
                "codeLong": "PAK"
              },
              "region": {
                "city": "Islamabad"
              }
            },
            "timezone": {
              "name": "Asia/Karachi",
              "offset": 18000,
              "offsetHours": "5:00",
              "abbr": "PKT",
              "abbrName": "Pakistan Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.islamabadairport.com.pk/"
          }
        },
        "time": {
          "real": {
            "departure": 1765044392
          }
        }
      },
      {
        "identification": {
          "id": "3d6517ec",
          "number": {
            "default": "EK724"
          }
        },
        "airport": {
          "origin": {
            "name": "Addis Ababa Bole Airport",
            "code": {
              "iata": "ADD",
              "icao": "HAAB"
            },
            "position": {
              "latitude": 8.977889,
              "longitude": 38.799309,
              "altitude": 7656,
              "country": {
                "id": 71,
                "name": "Ethiopia",
                "code": "ET",
                "codeLong": "ETH"
              },
              "region": {
                "city": "Addis Ababa"
              }
            },
            "timezone": {
              "name": "Africa/Addis_Ababa",
              "offset": 10800,
              "offsetHours": "3:00",
              "abbr": "EAT",
              "abbrName": "East Africa Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          }
        },
        "time": {
          "real": {
            "departure": 1765024027
          }
        }
      },
      {
        "identification": {
          "id": "3d647a26",
          "number": {
            "default": "EK723"
          }
        },
        "airport": {
          "origin": {
            "name": "Dubai International Airport",
            "code": {
              "iata": "DXB",
              "icao": "OMDB"
            },
            "position": {
              "latitude": 25.252769,
              "longitude": 55.364441,
              "altitude": 62,
              "country": {
                "id": 234,
                "name": "United Arab Emirates",
                "code": "AE",
                "codeLong": "ARE"
              },
              "region": {
                "city": "Dubai"
              }
            },
            "timezone": {
              "name": "Asia/Dubai",
              "offset": 14400,
              "offsetHours": "4:00",
              "abbr": "+04",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": "https://www.dubaiairports.ae/"
          },
          "destination": {
            "name": "Addis Ababa Bole Airport",
            "code": {
              "iata": "ADD",
              "icao": "HAAB"
            },
            "position": {
              "latitude": 8.977889,
              "longitude": 38.799309,
              "altitude": 7656,
              "country": {
                "id": 71,
                "name": "Ethiopia",
                "code": "ET",
                "codeLong": "ETH"
              },
              "region": {
                "city": "Addis Ababa"
              }
            },
            "timezone": {
              "name": "Africa/Addis_Ababa",
              "offset": 10800,
              "offsetHours": "3:00",
              "abbr": "EAT",
              "abbrName": "East Africa Time",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1765000821
          }
        }
      }
    ]
  },
  "ems": null,
  "availability": [
    "AGE",
    "MSN"
  ],
  "time": {
    "scheduled": {
      "departure": 1765077900,
      "arrival": 1765106400
    },
    "real": {
      "departure": 1765079420,
      "arrival": null
    },
    "estimated": {
      "departure": null,
      "arrival": 1765105604
    },
    "other": {
      "eta": 1765105604,
      "updated": 1765092620
    },
    "historical": {
      "flighttime": "25864",
      "delay": "-798"
    }
  },
  "trail": [
    {
      "lat": 54.940487,
      "lng": -1.515198,
      "alt": 5825,
      "spd": 269,
      "ts": 1765105237,
      "hd": 31
    },
    {
      "lat": 54.926704,
      "lng": -1.529763,
      "alt": 6075,
      "spd": 270,
      "ts": 1765105225,
      "hd": 31
    },
    {
      "lat": 54.912739,
      "lng": -1.544495,
      "alt": 6300,
      "spd": 271,
      "ts": 1765105212,
      "hd": 31
    },
    {
      "lat": 54.896988,
      "lng": -1.561109,
      "alt": 6550,
      "spd": 274,
      "ts": 1765105197,
      "hd": 31
    },
    {
      "lat": 54.88385,
      "lng": -1.575003,
      "alt": 6625,
      "spd": 281,
      "ts": 1765105185,
      "hd": 31
    },
    {
      "lat": 54.869202,
      "lng": -1.590837,
      "alt": 6775,
      "spd": 285,
      "ts": 1765105172,
      "hd": 32
    },
    {
      "lat": 54.866932,
      "lng": -1.593267,
      "alt": 6825,
      "spd": 286,
      "ts": 1765105170,
      "hd": 32
    },
    {
      "lat": 54.864624,
      "lng": -1.595845,
      "alt": 6850,
      "spd": 285,
      "ts": 1765105168,
      "hd": 32
    },
    {
      "lat": 54.862278,
      "lng": -1.598344,
      "alt": 6900,
      "spd": 285,
      "ts": 1765105166,
      "hd": 32
    },
    {
      "lat": 54.859764,
      "lng": -1.601091,
      "alt": 6950,
      "spd": 285,
      "ts": 1765105163,
      "hd": 32
    },
    {
      "lat": 54.857437,
      "lng": -1.603671,
      "alt": 7000,
      "spd": 286,
      "ts": 1765105161,
      "hd": 31
    },
    {
      "lat": 54.855667,
      "lng": -1.605585,
      "alt": 7025,
      "spd": 286,
      "ts": 1765105159,
      "hd": 31
    },
    {
      "lat": 54.852921,
      "lng": -1.608498,
      "alt": 7075,
      "spd": 286,
      "ts": 1765105157,
      "hd": 31
    },
    {
      "lat": 54.850571,
      "lng": -1.611032,
      "alt": 7125,
      "spd": 286,
      "ts": 1765105155,
      "hd": 31
    },
    {
      "lat": 54.848267,
      "lng": -1.613409,
      "alt": 7150,
      "spd": 286,
      "ts": 1765105153,
      "hd": 30
    },
    {
      "lat": 54.845947,
      "lng": -1.615798,
      "alt": 7200,
      "spd": 286,
      "ts": 1765105151,
      "hd": 29
    },
    {
      "lat": 54.843193,
      "lng": -1.618569,
      "alt": 7250,
      "spd": 286,
      "ts": 1765105149,
      "hd": 27
    },
    {
      "lat": 54.840729,
      "lng": -1.620887,
      "alt": 7275,
      "spd": 286,
      "ts": 1765105147,
      "hd": 26
    },
    {
      "lat": 54.838715,
      "lng": -1.622745,
      "alt": 7325,
      "spd": 286,
      "ts": 1765105145,
      "hd": 24
    },
    {
      "lat": 54.824799,
      "lng": -1.631712,
      "alt": 7550,
      "spd": 288,
      "ts": 1765105134,
      "hd": 14
    },
    {
      "lat": 54.807903,
      "lng": -1.639293,
      "alt": 7825,
      "spd": 289,
      "ts": 1765105121,
      "hd": 14
    },
    {
      "lat": 54.78891,
      "lng": -1.647707,
      "alt": 8100,
      "spd": 290,
      "ts": 1765105106,
      "hd": 14
    },
    {
      "lat": 54.77285,
      "lng": -1.65494,
      "alt": 8350,
      "spd": 291,
      "ts": 1765105094,
      "hd": 14
    },
    {
      "lat": 54.756001,
      "lng": -1.662514,
      "alt": 8625,
      "spd": 291,
      "ts": 1765105081,
      "hd": 14
    },
    {
      "lat": 54.737286,
      "lng": -1.671087,
      "alt": 8900,
      "spd": 293,
      "ts": 1765105066,
      "hd": 15
    },
    {
      "lat": 54.720898,
      "lng": -1.678661,
      "alt": 9175,
      "spd": 294,
      "ts": 1765105053,
      "hd": 15
    },
    {
      "lat": 54.703533,
      "lng": -1.686901,
      "alt": 9425,
      "spd": 296,
      "ts": 1765105041,
      "hd": 15
    },
    {
      "lat": 54.684307,
      "lng": -1.695224,
      "alt": 9625,
      "spd": 300,
      "ts": 1765105026,
      "hd": 11
    },
    {
      "lat": 54.666992,
      "lng": -1.700883,
      "alt": 9850,
      "spd": 301,
      "ts": 1765105013,
      "hd": 10
    },
    {
      "lat": 54.649441,
      "lng": -1.706377,
      "alt": 10175,
      "spd": 304,
      "ts": 1765105001,
      "hd": 10
    },
    {
      "lat": 54.628677,
      "lng": -1.713035,
      "alt": 10150,
      "spd": 324,
      "ts": 1765104986,
      "hd": 10
    },
    {
      "lat": 54.606659,
      "lng": -1.719943,
      "alt": 10175,
      "spd": 355,
      "ts": 1765104971,
      "hd": 9
    },
    {
      "lat": 54.585758,
      "lng": -1.726352,
      "alt": 10350,
      "spd": 378,
      "ts": 1765104959,
      "hd": 10
    },
    {
      "lat": 54.559845,
      "lng": -1.734709,
      "alt": 10800,
      "spd": 393,
      "ts": 1765104944,
      "hd": 10
    },
    {
      "lat": 54.537807,
      "lng": -1.741666,
      "alt": 11300,
      "spd": 397,
      "ts": 1765104932,
      "hd": 10
    },
    {
      "lat": 54.479618,
      "lng": -1.759893,
      "alt": 12825,
      "spd": 404,
      "ts": 1765104900,
      "hd": 10
    },
    {
      "lat": 54.421009,
      "lng": -1.778204,
      "alt": 14350,
      "spd": 408,
      "ts": 1765104868,
      "hd": 10
    },
    {
      "lat": 54.362778,
      "lng": -1.797234,
      "alt": 15500,
      "spd": 417,
      "ts": 1765104837,
      "hd": 10
    },
    {
      "lat": 54.302814,
      "lng": -1.817405,
      "alt": 16550,
      "spd": 423,
      "ts": 1765104805,
      "hd": 11
    },
    {
      "lat": 54.241379,
      "lng": -1.83864,
      "alt": 17675,
      "spd": 426,
      "ts": 1765104774,
      "hd": 10
    },
    {
      "lat": 54.237717,
      "lng": -1.839818,
      "alt": 17775,
      "spd": 426,
      "ts": 1765104772,
      "hd": 10
    },
    {
      "lat": 54.234009,
      "lng": -1.840995,
      "alt": 17850,
      "spd": 426,
      "ts": 1765104770,
      "hd": 10
    },
    {
      "lat": 54.229935,
      "lng": -1.842329,
      "alt": 17925,
      "spd": 426,
      "ts": 1765104768,
      "hd": 9
    },
    {
      "lat": 54.226048,
      "lng": -1.843441,
      "alt": 18000,
      "spd": 425,
      "ts": 1765104766,
      "hd": 9
    },
    {
      "lat": 54.221603,
      "lng": -1.844761,
      "alt": 18075,
      "spd": 425,
      "ts": 1765104764,
      "hd": 9
    },
    {
      "lat": 54.217903,
      "lng": -1.845784,
      "alt": 18150,
      "spd": 426,
      "ts": 1765104761,
      "hd": 8
    },
    {
      "lat": 54.213593,
      "lng": -1.846959,
      "alt": 18225,
      "spd": 425,
      "ts": 1765104759,
      "hd": 8
    },
    {
      "lat": 54.208313,
      "lng": -1.848288,
      "alt": 18325,
      "spd": 426,
      "ts": 1765104757,
      "hd": 8
    },
    {
      "lat": 54.205193,
      "lng": -1.849096,
      "alt": 18375,
      "spd": 425,
      "ts": 1765104755,
      "hd": 7
    },
    {
      "lat": 54.20026,
      "lng": -1.850227,
      "alt": 18475,
      "spd": 426,
      "ts": 1765104753,
      "hd": 6
    },
    {
      "lat": 54.197048,
      "lng": -1.850954,
      "alt": 18525,
      "spd": 425,
      "ts": 1765104751,
      "hd": 5
    },
    {
      "lat": 54.192078,
      "lng": -1.851903,
      "alt": 18625,
      "spd": 423,
      "ts": 1765104748,
      "hd": 3
    },
    {
      "lat": 54.187271,
      "lng": -1.85257,
      "alt": 18700,
      "spd": 424,
      "ts": 1765104746,
      "hd": 1
    },
    {
      "lat": 54.183731,
      "lng": -1.852731,
      "alt": 18775,
      "spd": 422,
      "ts": 1765104744,
      "hd": 358
    },
    {
      "lat": 54.17981,
      "lng": -1.852687,
      "alt": 18850,
      "spd": 421,
      "ts": 1765104742,
      "hd": 357
    },
    {
      "lat": 54.174957,
      "lng": -1.852373,
      "alt": 18925,
      "spd": 420,
      "ts": 1765104740,
      "hd": 353
    },
    {
      "lat": 54.171444,
      "lng": -1.851843,
      "alt": 18975,
      "spd": 420,
      "ts": 1765104738,
      "hd": 351
    },
    {
      "lat": 54.167625,
      "lng": -1.850954,
      "alt": 19050,
      "spd": 420,
      "ts": 1765104736,
      "hd": 348
    },
    {
      "lat": 54.163528,
      "lng": -1.849742,
      "alt": 19100,
      "spd": 418,
      "ts": 1765104734,
      "hd": 346
    },
    {
      "lat": 54.159477,
      "lng": -1.848207,
      "alt": 19175,
      "spd": 418,
      "ts": 1765104732,
      "hd": 344
    },
    {
      "lat": 54.155869,
      "lng": -1.846566,
      "alt": 19225,
      "spd": 417,
      "ts": 1765104729,
      "hd": 341
    },
    {
      "lat": 54.152218,
      "lng": -1.844653,
      "alt": 19275,
      "spd": 416,
      "ts": 1765104727,
      "hd": 339
    },
    {
      "lat": 54.148445,
      "lng": -1.842229,
      "alt": 19350,
      "spd": 414,
      "ts": 1765104725,
      "hd": 336
    },
    {
      "lat": 54.144836,
      "lng": -1.839661,
      "alt": 19425,
      "spd": 414,
      "ts": 1765104723,
      "hd": 334
    },
    {
      "lat": 54.140625,
      "lng": -1.836413,
      "alt": 19500,
      "spd": 413,
      "ts": 1765104721,
      "hd": 332
    },
    {
      "lat": 54.137238,
      "lng": -1.833383,
      "alt": 19550,
      "spd": 412,
      "ts": 1765104719,
      "hd": 328
    },
    {
      "lat": 54.133438,
      "lng": -1.829538,
      "alt": 19600,
      "spd": 411,
      "ts": 1765104717,
      "hd": 326
    },
    {
      "lat": 54.130428,
      "lng": -1.826316,
      "alt": 19650,
      "spd": 409,
      "ts": 1765104715,
      "hd": 324
    },
    {
      "lat": 54.126984,
      "lng": -1.82224,
      "alt": 19675,
      "spd": 408,
      "ts": 1765104713,
      "hd": 322
    },
    {
      "lat": 54.123772,
      "lng": -1.818076,
      "alt": 19725,
      "spd": 407,
      "ts": 1765104711,
      "hd": 320
    },
    {
      "lat": 54.120842,
      "lng": -1.814037,
      "alt": 19750,
      "spd": 406,
      "ts": 1765104708,
      "hd": 317
    },
    {
      "lat": 54.117863,
      "lng": -1.809432,
      "alt": 19800,
      "spd": 404,
      "ts": 1765104706,
      "hd": 315
    },
    {
      "lat": 54.100216,
      "lng": -1.77308,
      "alt": 20050,
      "spd": 399,
      "ts": 1765104691,
      "hd": 305
    },
    {
      "lat": 54.066422,
      "lng": -1.693268,
      "alt": 20550,
      "spd": 401,
      "ts": 1765104660,
      "hd": 305
    },
    {
      "lat": 54.032318,
      "lng": -1.61295,
      "alt": 21075,
      "spd": 401,
      "ts": 1765104629,
      "hd": 305
    },
    {
      "lat": 53.998688,
      "lng": -1.534047,
      "alt": 21575,
      "spd": 405,
      "ts": 1765104598,
      "hd": 305
    },
    {
      "lat": 53.964478,
      "lng": -1.454198,
      "alt": 22100,
      "spd": 406,
      "ts": 1765104566,
      "hd": 305
    },
    {
      "lat": 53.929688,
      "lng": -1.372977,
      "alt": 22600,
      "spd": 406,
      "ts": 1765104535,
      "hd": 305
    },
    {
      "lat": 53.89455,
      "lng": -1.291378,
      "alt": 23125,
      "spd": 410,
      "ts": 1765104504,
      "hd": 306
    },
    {
      "lat": 53.860153,
      "lng": -1.211714,
      "alt": 23625,
      "spd": 412,
      "ts": 1765104473,
      "hd": 306
    },
    {
      "lat": 53.825233,
      "lng": -1.130946,
      "alt": 24150,
      "spd": 411,
      "ts": 1765104442,
      "hd": 306
    },
    {
      "lat": 53.790272,
      "lng": -1.050487,
      "alt": 24650,
      "spd": 412,
      "ts": 1765104411,
      "hd": 306
    },
    {
      "lat": 53.75494,
      "lng": -0.969301,
      "alt": 25175,
      "spd": 413,
      "ts": 1765104380,
      "hd": 306
    },
    {
      "lat": 53.719559,
      "lng": -0.8886,
      "alt": 25675,
      "spd": 412,
      "ts": 1765104348,
      "hd": 306
    },
    {
      "lat": 53.683853,
      "lng": -0.807414,
      "alt": 26200,
      "spd": 414,
      "ts": 1765104317,
      "hd": 306
    },
    {
      "lat": 53.648056,
      "lng": -0.725582,
      "alt": 26725,
      "spd": 414,
      "ts": 1765104285,
      "hd": 306
    },
    {
      "lat": 53.612961,
      "lng": -0.645133,
      "alt": 27275,
      "spd": 409,
      "ts": 1765104254,
      "hd": 306
    },
    {
      "lat": 53.58284,
      "lng": -0.562422,
      "alt": 27900,
      "spd": 410,
      "ts": 1765104223,
      "hd": 296
    },
    {
      "lat": 53.569656,
      "lng": -0.512826,
      "alt": 28525,
      "spd": 410,
      "ts": 1765104206,
      "hd": 291
    },
    {
      "lat": 53.552299,
      "lng": -0.41845,
      "alt": 29975,
      "spd": 410,
      "ts": 1765104175,
      "hd": 285
    },
    {
      "lat": 53.53661,
      "lng": -0.324339,
      "alt": 31900,
      "spd": 396,
      "ts": 1765104144,
      "hd": 285
    },
    {
      "lat": 53.520409,
      "lng": -0.228613,
      "alt": 34000,
      "spd": 382,
      "ts": 1765104111,
      "hd": 285
    },
    {
      "lat": 53.5047,
      "lng": -0.135917,
      "alt": 35800,
      "spd": 376,
      "ts": 1765104078,
      "hd": 285
    },
    {
      "lat": 53.489872,
      "lng": -0.049035,
      "alt": 36850,
      "spd": 378,
      "ts": 1765104047,
      "hd": 286
    },
    {
      "lat": 53.474854,
      "lng": 0.038531,
      "alt": 37000,
      "spd": 376,
      "ts": 1765104016,
      "hd": 286
    },
    {
      "lat": 53.45966,
      "lng": 0.126424,
      "alt": 37000,
      "spd": 376,
      "ts": 1765103984,
      "hd": 286
    },
    {
      "lat": 53.444622,
      "lng": 0.213183,
      "alt": 37000,
      "spd": 374,
      "ts": 1765103953,
      "hd": 286
    },
    {
      "lat": 53.429539,
      "lng": 0.299943,
      "alt": 37000,
      "spd": 374,
      "ts": 1765103922,
      "hd": 286
    },
    {
      "lat": 53.413944,
      "lng": 0.388803,
      "alt": 37000,
      "spd": 374,
      "ts": 1765103890,
      "hd": 286
    },
    {
      "lat": 53.39859,
      "lng": 0.476336,
      "alt": 37000,
      "spd": 374,
      "ts": 1765103858,
      "hd": 286
    },
    {
      "lat": 53.383125,
      "lng": 0.563534,
      "alt": 37000,
      "spd": 375,
      "ts": 1765103827,
      "hd": 286
    },
    {
      "lat": 53.367737,
      "lng": 0.650077,
      "alt": 37000,
      "spd": 374,
      "ts": 1765103796,
      "hd": 286
    },
    {
      "lat": 53.35231,
      "lng": 0.737053,
      "alt": 37000,
      "spd": 375,
      "ts": 1765103764,
      "hd": 286
    },
    {
      "lat": 53.336563,
      "lng": 0.825152,
      "alt": 37000,
      "spd": 378,
      "ts": 1765103733,
      "hd": 286
    },
    {
      "lat": 53.320839,
      "lng": 0.912269,
      "alt": 37000,
      "spd": 378,
      "ts": 1765103701,
      "hd": 286
    },
    {
      "lat": 53.304642,
      "lng": 1.001533,
      "alt": 37000,
      "spd": 376,
      "ts": 1765103669,
      "hd": 286
    },
    {
      "lat": 53.28886,
      "lng": 1.08805,
      "alt": 37000,
      "spd": 375,
      "ts": 1765103638,
      "hd": 286
    },
    {
      "lat": 53.273392,
      "lng": 1.173026,
      "alt": 37000,
      "spd": 376,
      "ts": 1765103607,
      "hd": 286
    },
    {
      "lat": 53.257298,
      "lng": 1.26052,
      "alt": 37000,
      "spd": 378,
      "ts": 1765103576,
      "hd": 287
    },
    {
      "lat": 53.241165,
      "lng": 1.347709,
      "alt": 37000,
      "spd": 378,
      "ts": 1765103544,
      "hd": 287
    },
    {
      "lat": 53.22496,
      "lng": 1.435442,
      "alt": 37000,
      "spd": 377,
      "ts": 1765103513,
      "hd": 287
    },
    {
      "lat": 53.208801,
      "lng": 1.522313,
      "alt": 37000,
      "spd": 377,
      "ts": 1765103481,
      "hd": 287
    },
    {
      "lat": 53.192368,
      "lng": 1.609968,
      "alt": 37000,
      "spd": 376,
      "ts": 1765103450,
      "hd": 287
    },
    {
      "lat": 53.174744,
      "lng": 1.70343,
      "alt": 37000,
      "spd": 376,
      "ts": 1765103416,
      "hd": 287
    },
    {
      "lat": 53.158745,
      "lng": 1.788186,
      "alt": 37000,
      "spd": 375,
      "ts": 1765103385,
      "hd": 287
    },
    {
      "lat": 53.142033,
      "lng": 1.876643,
      "alt": 37000,
      "spd": 377,
      "ts": 1765103353,
      "hd": 287
    },
    {
      "lat": 53.125275,
      "lng": 1.964291,
      "alt": 37000,
      "spd": 379,
      "ts": 1765103321,
      "hd": 287
    },
    {
      "lat": 53.108231,
      "lng": 2.053109,
      "alt": 37000,
      "spd": 381,
      "ts": 1765103289,
      "hd": 287
    },
    {
      "lat": 53.091106,
      "lng": 2.142177,
      "alt": 37000,
      "spd": 382,
      "ts": 1765103258,
      "hd": 287
    },
    {
      "lat": 53.074127,
      "lng": 2.229919,
      "alt": 37000,
      "spd": 382,
      "ts": 1765103226,
      "hd": 287
    },
    {
      "lat": 53.05698,
      "lng": 2.318115,
      "alt": 37000,
      "spd": 379,
      "ts": 1765103194,
      "hd": 287
    },
    {
      "lat": 53.040318,
      "lng": 2.403495,
      "alt": 37000,
      "spd": 378,
      "ts": 1765103163,
      "hd": 287
    },
    {
      "lat": 53.022907,
      "lng": 2.492405,
      "alt": 37000,
      "spd": 380,
      "ts": 1765103131,
      "hd": 288
    },
    {
      "lat": 53.005554,
      "lng": 2.580261,
      "alt": 37000,
      "spd": 380,
      "ts": 1765103099,
      "hd": 288
    },
    {
      "lat": 52.988037,
      "lng": 2.668972,
      "alt": 37000,
      "spd": 382,
      "ts": 1765103067,
      "hd": 288
    },
    {
      "lat": 52.97049,
      "lng": 2.756958,
      "alt": 37000,
      "spd": 384,
      "ts": 1765103035,
      "hd": 288
    },
    {
      "lat": 52.95261,
      "lng": 2.846558,
      "alt": 37000,
      "spd": 384,
      "ts": 1765103003,
      "hd": 288
    },
    {
      "lat": 52.935425,
      "lng": 2.933273,
      "alt": 37000,
      "spd": 384,
      "ts": 1765102972,
      "hd": 288
    },
    {
      "lat": 52.918118,
      "lng": 3.022104,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102940,
      "hd": 287
    },
    {
      "lat": 52.900543,
      "lng": 3.111877,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102908,
      "hd": 288
    },
    {
      "lat": 52.882965,
      "lng": 3.199539,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102876,
      "hd": 288
    },
    {
      "lat": 52.864014,
      "lng": 3.285446,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102845,
      "hd": 291
    },
    {
      "lat": 52.842361,
      "lng": 3.369904,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102813,
      "hd": 294
    },
    {
      "lat": 52.819565,
      "lng": 3.453445,
      "alt": 37000,
      "spd": 379,
      "ts": 1765102782,
      "hd": 294
    },
    {
      "lat": 52.79657,
      "lng": 3.537912,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102750,
      "hd": 294
    },
    {
      "lat": 52.773743,
      "lng": 3.62114,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102718,
      "hd": 294
    },
    {
      "lat": 52.750854,
      "lng": 3.704433,
      "alt": 37000,
      "spd": 381,
      "ts": 1765102687,
      "hd": 294
    },
    {
      "lat": 52.727646,
      "lng": 3.788528,
      "alt": 37000,
      "spd": 382,
      "ts": 1765102655,
      "hd": 294
    },
    {
      "lat": 52.704815,
      "lng": 3.870876,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102624,
      "hd": 294
    },
    {
      "lat": 52.681633,
      "lng": 3.954372,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102592,
      "hd": 294
    },
    {
      "lat": 52.658157,
      "lng": 4.038544,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102561,
      "hd": 294
    },
    {
      "lat": 52.635223,
      "lng": 4.120407,
      "alt": 37000,
      "spd": 384,
      "ts": 1765102530,
      "hd": 294
    },
    {
      "lat": 52.607483,
      "lng": 4.219131,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102492,
      "hd": 294
    },
    {
      "lat": 52.583637,
      "lng": 4.303737,
      "alt": 37000,
      "spd": 383,
      "ts": 1765102460,
      "hd": 294
    },
    {
      "lat": 52.560379,
      "lng": 4.38591,
      "alt": 37000,
      "spd": 384,
      "ts": 1765102429,
      "hd": 295
    },
    {
      "lat": 52.536667,
      "lng": 4.46916,
      "alt": 37000,
      "spd": 381,
      "ts": 1765102397,
      "hd": 295
    },
    {
      "lat": 52.513504,
      "lng": 4.550476,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102366,
      "hd": 295
    },
    {
      "lat": 52.489697,
      "lng": 4.633641,
      "alt": 37000,
      "spd": 382,
      "ts": 1765102334,
      "hd": 295
    },
    {
      "lat": 52.445271,
      "lng": 4.788473,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102275,
      "hd": 295
    },
    {
      "lat": 52.421738,
      "lng": 4.869956,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102244,
      "hd": 295
    },
    {
      "lat": 52.398521,
      "lng": 4.95013,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102213,
      "hd": 295
    },
    {
      "lat": 52.374775,
      "lng": 5.031476,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102182,
      "hd": 295
    },
    {
      "lat": 52.351196,
      "lng": 5.112125,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102150,
      "hd": 295
    },
    {
      "lat": 52.327816,
      "lng": 5.191876,
      "alt": 37000,
      "spd": 379,
      "ts": 1765102119,
      "hd": 295
    },
    {
      "lat": 52.304192,
      "lng": 5.272173,
      "alt": 37000,
      "spd": 378,
      "ts": 1765102088,
      "hd": 295
    },
    {
      "lat": 52.280758,
      "lng": 5.351861,
      "alt": 37000,
      "spd": 380,
      "ts": 1765102057,
      "hd": 295
    },
    {
      "lat": 52.257099,
      "lng": 5.43247,
      "alt": 37000,
      "spd": 378,
      "ts": 1765102026,
      "hd": 295
    },
    {
      "lat": 52.232132,
      "lng": 5.517896,
      "alt": 37000,
      "spd": 379,
      "ts": 1765101993,
      "hd": 295
    },
    {
      "lat": 52.208786,
      "lng": 5.597411,
      "alt": 37000,
      "spd": 380,
      "ts": 1765101962,
      "hd": 295
    },
    {
      "lat": 52.18454,
      "lng": 5.678207,
      "alt": 37000,
      "spd": 380,
      "ts": 1765101930,
      "hd": 296
    },
    {
      "lat": 52.158745,
      "lng": 5.758677,
      "alt": 37000,
      "spd": 378,
      "ts": 1765101899,
      "hd": 298
    },
    {
      "lat": 52.132458,
      "lng": 5.835209,
      "alt": 37000,
      "spd": 378,
      "ts": 1765101867,
      "hd": 299
    },
    {
      "lat": 52.105659,
      "lng": 5.912917,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101836,
      "hd": 299
    },
    {
      "lat": 52.079166,
      "lng": 5.989461,
      "alt": 37000,
      "spd": 377,
      "ts": 1765101805,
      "hd": 299
    },
    {
      "lat": 52.051979,
      "lng": 6.067908,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101773,
      "hd": 299
    },
    {
      "lat": 52.024765,
      "lng": 6.146174,
      "alt": 37000,
      "spd": 377,
      "ts": 1765101741,
      "hd": 299
    },
    {
      "lat": 51.998005,
      "lng": 6.222908,
      "alt": 37000,
      "spd": 378,
      "ts": 1765101710,
      "hd": 299
    },
    {
      "lat": 51.970959,
      "lng": 6.300367,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101679,
      "hd": 299
    },
    {
      "lat": 51.943897,
      "lng": 6.377282,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101647,
      "hd": 299
    },
    {
      "lat": 51.917206,
      "lng": 6.452956,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101616,
      "hd": 299
    },
    {
      "lat": 51.890205,
      "lng": 6.529341,
      "alt": 37000,
      "spd": 375,
      "ts": 1765101585,
      "hd": 299
    },
    {
      "lat": 51.863636,
      "lng": 6.60433,
      "alt": 37000,
      "spd": 374,
      "ts": 1765101554,
      "hd": 299
    },
    {
      "lat": 51.836803,
      "lng": 6.679951,
      "alt": 37000,
      "spd": 374,
      "ts": 1765101523,
      "hd": 299
    },
    {
      "lat": 51.810036,
      "lng": 6.754875,
      "alt": 37000,
      "spd": 375,
      "ts": 1765101491,
      "hd": 299
    },
    {
      "lat": 51.783234,
      "lng": 6.829904,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101460,
      "hd": 299
    },
    {
      "lat": 51.756233,
      "lng": 6.905115,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101429,
      "hd": 299
    },
    {
      "lat": 51.728962,
      "lng": 6.981194,
      "alt": 37000,
      "spd": 375,
      "ts": 1765101398,
      "hd": 300
    },
    {
      "lat": 51.70163,
      "lng": 7.056962,
      "alt": 37000,
      "spd": 375,
      "ts": 1765101367,
      "hd": 300
    },
    {
      "lat": 51.674191,
      "lng": 7.132792,
      "alt": 37000,
      "spd": 375,
      "ts": 1765101335,
      "hd": 300
    },
    {
      "lat": 51.646912,
      "lng": 7.208033,
      "alt": 37000,
      "spd": 375,
      "ts": 1765101304,
      "hd": 300
    },
    {
      "lat": 51.619446,
      "lng": 7.283316,
      "alt": 37000,
      "spd": 375,
      "ts": 1765101273,
      "hd": 300
    },
    {
      "lat": 51.592129,
      "lng": 7.358019,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101242,
      "hd": 300
    },
    {
      "lat": 51.564919,
      "lng": 7.43249,
      "alt": 37000,
      "spd": 376,
      "ts": 1765101211,
      "hd": 300
    },
    {
      "lat": 51.537121,
      "lng": 7.508335,
      "alt": 37000,
      "spd": 373,
      "ts": 1765101179,
      "hd": 300
    },
    {
      "lat": 51.509808,
      "lng": 7.582556,
      "alt": 37000,
      "spd": 374,
      "ts": 1765101148,
      "hd": 300
    },
    {
      "lat": 51.482468,
      "lng": 7.656556,
      "alt": 37000,
      "spd": 370,
      "ts": 1765101116,
      "hd": 300
    },
    {
      "lat": 51.455109,
      "lng": 7.730307,
      "alt": 37000,
      "spd": 370,
      "ts": 1765101085,
      "hd": 300
    },
    {
      "lat": 51.427853,
      "lng": 7.803563,
      "alt": 37000,
      "spd": 368,
      "ts": 1765101054,
      "hd": 300
    },
    {
      "lat": 51.400375,
      "lng": 7.877233,
      "alt": 37000,
      "spd": 368,
      "ts": 1765101022,
      "hd": 300
    },
    {
      "lat": 51.37326,
      "lng": 7.949999,
      "alt": 37000,
      "spd": 367,
      "ts": 1765100991,
      "hd": 300
    },
    {
      "lat": 51.34602,
      "lng": 8.02258,
      "alt": 37000,
      "spd": 369,
      "ts": 1765100960,
      "hd": 300
    },
    {
      "lat": 51.318802,
      "lng": 8.095062,
      "alt": 37000,
      "spd": 370,
      "ts": 1765100928,
      "hd": 300
    },
    {
      "lat": 51.290142,
      "lng": 8.17122,
      "alt": 36700,
      "spd": 382,
      "ts": 1765100897,
      "hd": 300
    },
    {
      "lat": 51.261032,
      "lng": 8.248095,
      "alt": 36000,
      "spd": 383,
      "ts": 1765100865,
      "hd": 301
    },
    {
      "lat": 51.231972,
      "lng": 8.324534,
      "alt": 36000,
      "spd": 384,
      "ts": 1765100833,
      "hd": 301
    },
    {
      "lat": 51.202831,
      "lng": 8.401093,
      "alt": 36000,
      "spd": 383,
      "ts": 1765100801,
      "hd": 301
    },
    {
      "lat": 51.173599,
      "lng": 8.478043,
      "alt": 36000,
      "spd": 385,
      "ts": 1765100770,
      "hd": 301
    },
    {
      "lat": 51.144676,
      "lng": 8.55337,
      "alt": 36000,
      "spd": 384,
      "ts": 1765100738,
      "hd": 301
    },
    {
      "lat": 51.114983,
      "lng": 8.630516,
      "alt": 36000,
      "spd": 384,
      "ts": 1765100706,
      "hd": 301
    },
    {
      "lat": 51.085472,
      "lng": 8.706968,
      "alt": 36000,
      "spd": 386,
      "ts": 1765100674,
      "hd": 301
    },
    {
      "lat": 51.056179,
      "lng": 8.782926,
      "alt": 36000,
      "spd": 386,
      "ts": 1765100643,
      "hd": 301
    },
    {
      "lat": 51.027092,
      "lng": 8.859139,
      "alt": 36000,
      "spd": 386,
      "ts": 1765100612,
      "hd": 301
    },
    {
      "lat": 50.997585,
      "lng": 8.936326,
      "alt": 36000,
      "spd": 385,
      "ts": 1765100580,
      "hd": 301
    },
    {
      "lat": 50.967262,
      "lng": 9.009988,
      "alt": 36000,
      "spd": 386,
      "ts": 1765100549,
      "hd": 303
    },
    {
      "lat": 50.936474,
      "lng": 9.08366,
      "alt": 36000,
      "spd": 387,
      "ts": 1765100517,
      "hd": 303
    },
    {
      "lat": 50.905102,
      "lng": 9.158565,
      "alt": 36000,
      "spd": 388,
      "ts": 1765100486,
      "hd": 303
    },
    {
      "lat": 50.873825,
      "lng": 9.233059,
      "alt": 36000,
      "spd": 389,
      "ts": 1765100454,
      "hd": 303
    },
    {
      "lat": 50.842182,
      "lng": 9.307961,
      "alt": 36000,
      "spd": 389,
      "ts": 1765100422,
      "hd": 303
    },
    {
      "lat": 50.810684,
      "lng": 9.382611,
      "alt": 36000,
      "spd": 390,
      "ts": 1765100391,
      "hd": 303
    },
    {
      "lat": 50.778843,
      "lng": 9.457695,
      "alt": 36000,
      "spd": 391,
      "ts": 1765100359,
      "hd": 303
    },
    {
      "lat": 50.747295,
      "lng": 9.53194,
      "alt": 36000,
      "spd": 391,
      "ts": 1765100327,
      "hd": 303
    },
    {
      "lat": 50.715309,
      "lng": 9.606991,
      "alt": 36000,
      "spd": 391,
      "ts": 1765100296,
      "hd": 303
    },
    {
      "lat": 50.683323,
      "lng": 9.681689,
      "alt": 36000,
      "spd": 391,
      "ts": 1765100264,
      "hd": 304
    },
    {
      "lat": 50.651909,
      "lng": 9.754953,
      "alt": 36000,
      "spd": 390,
      "ts": 1765100233,
      "hd": 303
    },
    {
      "lat": 50.620247,
      "lng": 9.828712,
      "alt": 36000,
      "spd": 390,
      "ts": 1765100202,
      "hd": 304
    },
    {
      "lat": 50.588169,
      "lng": 9.903398,
      "alt": 36000,
      "spd": 391,
      "ts": 1765100170,
      "hd": 304
    },
    {
      "lat": 50.556095,
      "lng": 9.977444,
      "alt": 36000,
      "spd": 393,
      "ts": 1765100138,
      "hd": 304
    },
    {
      "lat": 50.523609,
      "lng": 10.051964,
      "alt": 36025,
      "spd": 393,
      "ts": 1765100107,
      "hd": 304
    },
    {
      "lat": 50.491802,
      "lng": 10.125175,
      "alt": 36000,
      "spd": 391,
      "ts": 1765100075,
      "hd": 304
    },
    {
      "lat": 50.45982,
      "lng": 10.198535,
      "alt": 36000,
      "spd": 392,
      "ts": 1765100044,
      "hd": 304
    },
    {
      "lat": 50.427795,
      "lng": 10.272015,
      "alt": 36000,
      "spd": 393,
      "ts": 1765100013,
      "hd": 304
    },
    {
      "lat": 50.395634,
      "lng": 10.345849,
      "alt": 36000,
      "spd": 392,
      "ts": 1765099981,
      "hd": 304
    },
    {
      "lat": 50.362957,
      "lng": 10.418901,
      "alt": 36000,
      "spd": 392,
      "ts": 1765099950,
      "hd": 305
    },
    {
      "lat": 50.330021,
      "lng": 10.491284,
      "alt": 36000,
      "spd": 392,
      "ts": 1765099918,
      "hd": 305
    },
    {
      "lat": 50.296444,
      "lng": 10.565006,
      "alt": 36000,
      "spd": 392,
      "ts": 1765099886,
      "hd": 305
    },
    {
      "lat": 50.263409,
      "lng": 10.637396,
      "alt": 36000,
      "spd": 393,
      "ts": 1765099855,
      "hd": 305
    },
    {
      "lat": 50.231232,
      "lng": 10.707683,
      "alt": 36000,
      "spd": 394,
      "ts": 1765099825,
      "hd": 305
    },
    {
      "lat": 50.197361,
      "lng": 10.781538,
      "alt": 36000,
      "spd": 394,
      "ts": 1765099793,
      "hd": 305
    },
    {
      "lat": 50.163612,
      "lng": 10.854786,
      "alt": 36000,
      "spd": 394,
      "ts": 1765099761,
      "hd": 305
    },
    {
      "lat": 50.130398,
      "lng": 10.926932,
      "alt": 36000,
      "spd": 392,
      "ts": 1765099729,
      "hd": 305
    },
    {
      "lat": 50.096832,
      "lng": 10.99912,
      "alt": 36000,
      "spd": 394,
      "ts": 1765099698,
      "hd": 305
    },
    {
      "lat": 50.062893,
      "lng": 11.072406,
      "alt": 36000,
      "spd": 394,
      "ts": 1765099666,
      "hd": 305
    },
    {
      "lat": 50.028961,
      "lng": 11.145238,
      "alt": 36000,
      "spd": 397,
      "ts": 1765099634,
      "hd": 305
    },
    {
      "lat": 49.99501,
      "lng": 11.218002,
      "alt": 36000,
      "spd": 401,
      "ts": 1765099603,
      "hd": 305
    },
    {
      "lat": 49.96133,
      "lng": 11.290008,
      "alt": 36000,
      "spd": 401,
      "ts": 1765099572,
      "hd": 305
    },
    {
      "lat": 49.926708,
      "lng": 11.363807,
      "alt": 36000,
      "spd": 405,
      "ts": 1765099540,
      "hd": 306
    },
    {
      "lat": 49.891937,
      "lng": 11.437554,
      "alt": 36000,
      "spd": 409,
      "ts": 1765099509,
      "hd": 306
    },
    {
      "lat": 49.85677,
      "lng": 11.512163,
      "alt": 36000,
      "spd": 412,
      "ts": 1765099477,
      "hd": 306
    },
    {
      "lat": 49.821335,
      "lng": 11.586876,
      "alt": 36000,
      "spd": 412,
      "ts": 1765099446,
      "hd": 306
    },
    {
      "lat": 49.785778,
      "lng": 11.661757,
      "alt": 36000,
      "spd": 412,
      "ts": 1765099414,
      "hd": 306
    },
    {
      "lat": 49.750221,
      "lng": 11.73664,
      "alt": 36000,
      "spd": 414,
      "ts": 1765099383,
      "hd": 306
    },
    {
      "lat": 49.71431,
      "lng": 11.811853,
      "alt": 36000,
      "spd": 414,
      "ts": 1765099351,
      "hd": 306
    },
    {
      "lat": 49.677902,
      "lng": 11.888011,
      "alt": 36000,
      "spd": 411,
      "ts": 1765099319,
      "hd": 306
    },
    {
      "lat": 49.641251,
      "lng": 11.964284,
      "alt": 36000,
      "spd": 413,
      "ts": 1765099286,
      "hd": 306
    },
    {
      "lat": 49.604958,
      "lng": 12.039539,
      "alt": 36000,
      "spd": 412,
      "ts": 1765099254,
      "hd": 306
    },
    {
      "lat": 49.568394,
      "lng": 12.115369,
      "alt": 36000,
      "spd": 415,
      "ts": 1765099222,
      "hd": 306
    },
    {
      "lat": 49.532108,
      "lng": 12.190147,
      "alt": 36000,
      "spd": 415,
      "ts": 1765099191,
      "hd": 306
    },
    {
      "lat": 49.495525,
      "lng": 12.265542,
      "alt": 36000,
      "spd": 414,
      "ts": 1765099159,
      "hd": 306
    },
    {
      "lat": 49.458584,
      "lng": 12.34153,
      "alt": 36000,
      "spd": 413,
      "ts": 1765099126,
      "hd": 306
    },
    {
      "lat": 49.422695,
      "lng": 12.414952,
      "alt": 36000,
      "spd": 411,
      "ts": 1765099095,
      "hd": 306
    },
    {
      "lat": 49.38615,
      "lng": 12.489334,
      "alt": 36000,
      "spd": 412,
      "ts": 1765099063,
      "hd": 306
    },
    {
      "lat": 49.349422,
      "lng": 12.56437,
      "alt": 36000,
      "spd": 412,
      "ts": 1765099031,
      "hd": 306
    },
    {
      "lat": 49.312717,
      "lng": 12.6389,
      "alt": 36000,
      "spd": 414,
      "ts": 1765098999,
      "hd": 307
    },
    {
      "lat": 49.276535,
      "lng": 12.712304,
      "alt": 36000,
      "spd": 413,
      "ts": 1765098967,
      "hd": 307
    },
    {
      "lat": 49.239819,
      "lng": 12.786302,
      "alt": 36000,
      "spd": 414,
      "ts": 1765098935,
      "hd": 307
    },
    {
      "lat": 49.203331,
      "lng": 12.859692,
      "alt": 36000,
      "spd": 414,
      "ts": 1765098904,
      "hd": 307
    },
    {
      "lat": 49.168312,
      "lng": 12.929873,
      "alt": 36000,
      "spd": 414,
      "ts": 1765098874,
      "hd": 307
    },
    {
      "lat": 49.131023,
      "lng": 13.004667,
      "alt": 36000,
      "spd": 415,
      "ts": 1765098842,
      "hd": 307
    },
    {
      "lat": 49.093727,
      "lng": 13.07942,
      "alt": 36000,
      "spd": 416,
      "ts": 1765098809,
      "hd": 307
    },
    {
      "lat": 49.056641,
      "lng": 13.153388,
      "alt": 36000,
      "spd": 418,
      "ts": 1765098778,
      "hd": 307
    },
    {
      "lat": 49.018555,
      "lng": 13.228723,
      "alt": 36000,
      "spd": 420,
      "ts": 1765098745,
      "hd": 307
    },
    {
      "lat": 48.981125,
      "lng": 13.30294,
      "alt": 36000,
      "spd": 418,
      "ts": 1765098714,
      "hd": 307
    },
    {
      "lat": 48.943092,
      "lng": 13.377826,
      "alt": 36000,
      "spd": 419,
      "ts": 1765098681,
      "hd": 307
    },
    {
      "lat": 48.905582,
      "lng": 13.451757,
      "alt": 36000,
      "spd": 420,
      "ts": 1765098650,
      "hd": 307
    },
    {
      "lat": 48.868011,
      "lng": 13.525448,
      "alt": 36000,
      "spd": 419,
      "ts": 1765098618,
      "hd": 307
    },
    {
      "lat": 48.830681,
      "lng": 13.599094,
      "alt": 36000,
      "spd": 420,
      "ts": 1765098587,
      "hd": 307
    },
    {
      "lat": 48.794209,
      "lng": 13.671547,
      "alt": 36000,
      "spd": 418,
      "ts": 1765098555,
      "hd": 307
    },
    {
      "lat": 48.757168,
      "lng": 13.745252,
      "alt": 36000,
      "spd": 417,
      "ts": 1765098524,
      "hd": 305
    },
    {
      "lat": 48.724277,
      "lng": 13.822312,
      "alt": 36000,
      "spd": 419,
      "ts": 1765098492,
      "hd": 300
    },
    {
      "lat": 48.695152,
      "lng": 13.904148,
      "alt": 36000,
      "spd": 421,
      "ts": 1765098461,
      "hd": 297
    },
    {
      "lat": 48.666683,
      "lng": 13.985759,
      "alt": 36000,
      "spd": 422,
      "ts": 1765098429,
      "hd": 297
    },
    {
      "lat": 48.637817,
      "lng": 14.06825,
      "alt": 36000,
      "spd": 426,
      "ts": 1765098398,
      "hd": 297
    },
    {
      "lat": 48.608669,
      "lng": 14.151309,
      "alt": 36000,
      "spd": 429,
      "ts": 1765098366,
      "hd": 297
    },
    {
      "lat": 48.579414,
      "lng": 14.234562,
      "alt": 36000,
      "spd": 432,
      "ts": 1765098335,
      "hd": 297
    },
    {
      "lat": 48.549671,
      "lng": 14.318767,
      "alt": 36000,
      "spd": 436,
      "ts": 1765098303,
      "hd": 298
    },
    {
      "lat": 48.519318,
      "lng": 14.404756,
      "alt": 36000,
      "spd": 438,
      "ts": 1765098271,
      "hd": 298
    },
    {
      "lat": 48.488945,
      "lng": 14.489856,
      "alt": 36000,
      "spd": 438,
      "ts": 1765098239,
      "hd": 298
    },
    {
      "lat": 48.458569,
      "lng": 14.575229,
      "alt": 36000,
      "spd": 436,
      "ts": 1765098207,
      "hd": 298
    },
    {
      "lat": 48.427727,
      "lng": 14.661561,
      "alt": 36000,
      "spd": 436,
      "ts": 1765098175,
      "hd": 298
    },
    {
      "lat": 48.3974,
      "lng": 14.746062,
      "alt": 36000,
      "spd": 436,
      "ts": 1765098143,
      "hd": 298
    },
    {
      "lat": 48.366924,
      "lng": 14.830669,
      "alt": 36000,
      "spd": 437,
      "ts": 1765098112,
      "hd": 298
    },
    {
      "lat": 48.336472,
      "lng": 14.914828,
      "alt": 36000,
      "spd": 439,
      "ts": 1765098080,
      "hd": 298
    },
    {
      "lat": 48.305679,
      "lng": 15.000003,
      "alt": 36000,
      "spd": 442,
      "ts": 1765098048,
      "hd": 298
    },
    {
      "lat": 48.274773,
      "lng": 15.085097,
      "alt": 36000,
      "spd": 444,
      "ts": 1765098017,
      "hd": 298
    },
    {
      "lat": 48.243961,
      "lng": 15.169469,
      "alt": 36000,
      "spd": 444,
      "ts": 1765097985,
      "hd": 298
    },
    {
      "lat": 48.213215,
      "lng": 15.253654,
      "alt": 36000,
      "spd": 444,
      "ts": 1765097954,
      "hd": 298
    },
    {
      "lat": 48.182117,
      "lng": 15.33839,
      "alt": 36000,
      "spd": 443,
      "ts": 1765097922,
      "hd": 298
    },
    {
      "lat": 48.15118,
      "lng": 15.422302,
      "alt": 36000,
      "spd": 442,
      "ts": 1765097891,
      "hd": 298
    },
    {
      "lat": 48.120033,
      "lng": 15.50661,
      "alt": 36000,
      "spd": 439,
      "ts": 1765097860,
      "hd": 298
    },
    {
      "lat": 48.088493,
      "lng": 15.591289,
      "alt": 36000,
      "spd": 438,
      "ts": 1765097828,
      "hd": 298
    },
    {
      "lat": 48.056381,
      "lng": 15.678041,
      "alt": 36000,
      "spd": 440,
      "ts": 1765097795,
      "hd": 299
    },
    {
      "lat": 48.024719,
      "lng": 15.762803,
      "alt": 36000,
      "spd": 442,
      "ts": 1765097763,
      "hd": 299
    },
    {
      "lat": 47.993126,
      "lng": 15.84733,
      "alt": 36000,
      "spd": 444,
      "ts": 1765097731,
      "hd": 299
    },
    {
      "lat": 47.960686,
      "lng": 15.933594,
      "alt": 36000,
      "spd": 445,
      "ts": 1765097699,
      "hd": 299
    },
    {
      "lat": 47.928894,
      "lng": 16.018032,
      "alt": 36000,
      "spd": 448,
      "ts": 1765097667,
      "hd": 299
    },
    {
      "lat": 47.897125,
      "lng": 16.102392,
      "alt": 36000,
      "spd": 450,
      "ts": 1765097636,
      "hd": 299
    },
    {
      "lat": 47.864613,
      "lng": 16.1882,
      "alt": 36000,
      "spd": 454,
      "ts": 1765097604,
      "hd": 299
    },
    {
      "lat": 47.83149,
      "lng": 16.274969,
      "alt": 36000,
      "spd": 455,
      "ts": 1765097572,
      "hd": 299
    },
    {
      "lat": 47.799057,
      "lng": 16.359896,
      "alt": 36000,
      "spd": 456,
      "ts": 1765097541,
      "hd": 299
    },
    {
      "lat": 47.766266,
      "lng": 16.44574,
      "alt": 36000,
      "spd": 456,
      "ts": 1765097509,
      "hd": 299
    },
    {
      "lat": 47.733356,
      "lng": 16.531305,
      "alt": 36000,
      "spd": 455,
      "ts": 1765097478,
      "hd": 299
    },
    {
      "lat": 47.700424,
      "lng": 16.616798,
      "alt": 36000,
      "spd": 455,
      "ts": 1765097446,
      "hd": 299
    },
    {
      "lat": 47.667576,
      "lng": 16.701975,
      "alt": 36000,
      "spd": 456,
      "ts": 1765097415,
      "hd": 299
    },
    {
      "lat": 47.632996,
      "lng": 16.791117,
      "alt": 36000,
      "spd": 459,
      "ts": 1765097382,
      "hd": 299
    },
    {
      "lat": 47.600044,
      "lng": 16.875748,
      "alt": 36000,
      "spd": 461,
      "ts": 1765097351,
      "hd": 300
    },
    {
      "lat": 47.566769,
      "lng": 16.960741,
      "alt": 36000,
      "spd": 462,
      "ts": 1765097320,
      "hd": 300
    },
    {
      "lat": 47.533127,
      "lng": 17.046835,
      "alt": 36000,
      "spd": 464,
      "ts": 1765097288,
      "hd": 299
    },
    {
      "lat": 47.499393,
      "lng": 17.1329,
      "alt": 36000,
      "spd": 466,
      "ts": 1765097257,
      "hd": 300
    },
    {
      "lat": 47.464951,
      "lng": 17.220255,
      "alt": 36000,
      "spd": 465,
      "ts": 1765097225,
      "hd": 300
    },
    {
      "lat": 47.430237,
      "lng": 17.307871,
      "alt": 36000,
      "spd": 465,
      "ts": 1765097193,
      "hd": 300
    },
    {
      "lat": 47.396458,
      "lng": 17.393047,
      "alt": 36000,
      "spd": 464,
      "ts": 1765097162,
      "hd": 300
    },
    {
      "lat": 47.362293,
      "lng": 17.479216,
      "alt": 36000,
      "spd": 468,
      "ts": 1765097130,
      "hd": 300
    },
    {
      "lat": 47.327816,
      "lng": 17.565445,
      "alt": 36000,
      "spd": 468,
      "ts": 1765097099,
      "hd": 300
    },
    {
      "lat": 47.293324,
      "lng": 17.651512,
      "alt": 36000,
      "spd": 471,
      "ts": 1765097067,
      "hd": 300
    },
    {
      "lat": 47.257977,
      "lng": 17.739626,
      "alt": 36000,
      "spd": 474,
      "ts": 1765097036,
      "hd": 300
    },
    {
      "lat": 47.222652,
      "lng": 17.827105,
      "alt": 36000,
      "spd": 475,
      "ts": 1765097004,
      "hd": 300
    },
    {
      "lat": 47.187328,
      "lng": 17.91482,
      "alt": 36000,
      "spd": 474,
      "ts": 1765096972,
      "hd": 300
    },
    {
      "lat": 47.15155,
      "lng": 18.002821,
      "alt": 36000,
      "spd": 477,
      "ts": 1765096941,
      "hd": 300
    },
    {
      "lat": 47.115971,
      "lng": 18.090332,
      "alt": 36000,
      "spd": 481,
      "ts": 1765096909,
      "hd": 300
    },
    {
      "lat": 47.079823,
      "lng": 18.179028,
      "alt": 36000,
      "spd": 482,
      "ts": 1765096878,
      "hd": 300
    },
    {
      "lat": 47.043278,
      "lng": 18.26836,
      "alt": 36000,
      "spd": 480,
      "ts": 1765096846,
      "hd": 300
    },
    {
      "lat": 47.006947,
      "lng": 18.356718,
      "alt": 36000,
      "spd": 478,
      "ts": 1765096814,
      "hd": 300
    },
    {
      "lat": 46.970741,
      "lng": 18.44446,
      "alt": 36000,
      "spd": 477,
      "ts": 1765096782,
      "hd": 301
    },
    {
      "lat": 46.934772,
      "lng": 18.531498,
      "alt": 36000,
      "spd": 479,
      "ts": 1765096751,
      "hd": 301
    },
    {
      "lat": 46.897976,
      "lng": 18.620216,
      "alt": 36000,
      "spd": 483,
      "ts": 1765096718,
      "hd": 301
    },
    {
      "lat": 46.861202,
      "lng": 18.708454,
      "alt": 36000,
      "spd": 486,
      "ts": 1765096687,
      "hd": 301
    },
    {
      "lat": 46.824234,
      "lng": 18.79705,
      "alt": 36000,
      "spd": 488,
      "ts": 1765096655,
      "hd": 301
    },
    {
      "lat": 46.787209,
      "lng": 18.885509,
      "alt": 36000,
      "spd": 488,
      "ts": 1765096623,
      "hd": 301
    },
    {
      "lat": 46.749275,
      "lng": 18.976124,
      "alt": 36000,
      "spd": 488,
      "ts": 1765096591,
      "hd": 301
    },
    {
      "lat": 46.711929,
      "lng": 19.064869,
      "alt": 36000,
      "spd": 488,
      "ts": 1765096559,
      "hd": 301
    },
    {
      "lat": 46.673885,
      "lng": 19.154976,
      "alt": 36000,
      "spd": 488,
      "ts": 1765096527,
      "hd": 301
    },
    {
      "lat": 46.637787,
      "lng": 19.240179,
      "alt": 36000,
      "spd": 486,
      "ts": 1765096497,
      "hd": 301
    },
    {
      "lat": 46.600281,
      "lng": 19.328014,
      "alt": 36000,
      "spd": 486,
      "ts": 1765096465,
      "hd": 301
    },
    {
      "lat": 46.562363,
      "lng": 19.415915,
      "alt": 36000,
      "spd": 488,
      "ts": 1765096433,
      "hd": 302
    },
    {
      "lat": 46.523949,
      "lng": 19.504061,
      "alt": 36000,
      "spd": 486,
      "ts": 1765096401,
      "hd": 302
    },
    {
      "lat": 46.487553,
      "lng": 19.591,
      "alt": 36000,
      "spd": 486,
      "ts": 1765096370,
      "hd": 300
    },
    {
      "lat": 46.451553,
      "lng": 19.680515,
      "alt": 36000,
      "spd": 484,
      "ts": 1765096338,
      "hd": 300
    },
    {
      "lat": 46.41576,
      "lng": 19.769312,
      "alt": 36000,
      "spd": 482,
      "ts": 1765096306,
      "hd": 300
    },
    {
      "lat": 46.380264,
      "lng": 19.857132,
      "alt": 36000,
      "spd": 480,
      "ts": 1765096275,
      "hd": 300
    },
    {
      "lat": 46.345036,
      "lng": 19.94396,
      "alt": 36000,
      "spd": 480,
      "ts": 1765096243,
      "hd": 300
    },
    {
      "lat": 46.309464,
      "lng": 20.031439,
      "alt": 36000,
      "spd": 480,
      "ts": 1765096212,
      "hd": 300
    },
    {
      "lat": 46.27404,
      "lng": 20.118279,
      "alt": 36000,
      "spd": 479,
      "ts": 1765096180,
      "hd": 300
    },
    {
      "lat": 46.238804,
      "lng": 20.204292,
      "alt": 36000,
      "spd": 479,
      "ts": 1765096149,
      "hd": 300
    },
    {
      "lat": 46.202747,
      "lng": 20.292177,
      "alt": 36000,
      "spd": 480,
      "ts": 1765096117,
      "hd": 300
    },
    {
      "lat": 46.168991,
      "lng": 20.375526,
      "alt": 36000,
      "spd": 479,
      "ts": 1765096087,
      "hd": 299
    },
    {
      "lat": 46.135319,
      "lng": 20.464397,
      "alt": 36000,
      "spd": 480,
      "ts": 1765096055,
      "hd": 297
    },
    {
      "lat": 46.102837,
      "lng": 20.555222,
      "alt": 36000,
      "spd": 480,
      "ts": 1765096023,
      "hd": 297
    },
    {
      "lat": 46.070362,
      "lng": 20.645914,
      "alt": 36000,
      "spd": 481,
      "ts": 1765095991,
      "hd": 297
    },
    {
      "lat": 46.038216,
      "lng": 20.735106,
      "alt": 36000,
      "spd": 482,
      "ts": 1765095960,
      "hd": 297
    },
    {
      "lat": 46.005455,
      "lng": 20.825626,
      "alt": 36000,
      "spd": 481,
      "ts": 1765095928,
      "hd": 297
    },
    {
      "lat": 45.973179,
      "lng": 20.914776,
      "alt": 36000,
      "spd": 482,
      "ts": 1765095896,
      "hd": 297
    },
    {
      "lat": 45.939999,
      "lng": 21.006214,
      "alt": 36000,
      "spd": 482,
      "ts": 1765095864,
      "hd": 297
    },
    {
      "lat": 45.906994,
      "lng": 21.096804,
      "alt": 36000,
      "spd": 482,
      "ts": 1765095832,
      "hd": 297
    },
    {
      "lat": 45.873867,
      "lng": 21.187357,
      "alt": 36000,
      "spd": 482,
      "ts": 1765095800,
      "hd": 297
    },
    {
      "lat": 45.840637,
      "lng": 21.277731,
      "alt": 36000,
      "spd": 482,
      "ts": 1765095768,
      "hd": 297
    },
    {
      "lat": 45.806053,
      "lng": 21.371431,
      "alt": 36000,
      "spd": 484,
      "ts": 1765095735,
      "hd": 297
    },
    {
      "lat": 45.774792,
      "lng": 21.456078,
      "alt": 36000,
      "spd": 484,
      "ts": 1765095705,
      "hd": 297
    },
    {
      "lat": 45.74123,
      "lng": 21.546478,
      "alt": 36000,
      "spd": 484,
      "ts": 1765095673,
      "hd": 298
    },
    {
      "lat": 45.70718,
      "lng": 21.637886,
      "alt": 36000,
      "spd": 481,
      "ts": 1765095640,
      "hd": 298
    },
    {
      "lat": 45.673409,
      "lng": 21.728186,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095608,
      "hd": 298
    },
    {
      "lat": 45.641472,
      "lng": 21.813501,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095578,
      "hd": 298
    },
    {
      "lat": 45.608212,
      "lng": 21.901957,
      "alt": 36000,
      "spd": 481,
      "ts": 1765095546,
      "hd": 298
    },
    {
      "lat": 45.574783,
      "lng": 21.990557,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095514,
      "hd": 298
    },
    {
      "lat": 45.542492,
      "lng": 22.075888,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095483,
      "hd": 298
    },
    {
      "lat": 45.508862,
      "lng": 22.164268,
      "alt": 36000,
      "spd": 479,
      "ts": 1765095451,
      "hd": 298
    },
    {
      "lat": 45.474892,
      "lng": 22.253468,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095419,
      "hd": 298
    },
    {
      "lat": 45.441002,
      "lng": 22.342215,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095387,
      "hd": 298
    },
    {
      "lat": 45.406956,
      "lng": 22.431265,
      "alt": 36000,
      "spd": 479,
      "ts": 1765095355,
      "hd": 298
    },
    {
      "lat": 45.373055,
      "lng": 22.519258,
      "alt": 36000,
      "spd": 479,
      "ts": 1765095323,
      "hd": 298
    },
    {
      "lat": 45.338947,
      "lng": 22.607798,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095291,
      "hd": 298
    },
    {
      "lat": 45.304543,
      "lng": 22.696573,
      "alt": 36000,
      "spd": 480,
      "ts": 1765095259,
      "hd": 298
    },
    {
      "lat": 45.273823,
      "lng": 22.779007,
      "alt": 36000,
      "spd": 479,
      "ts": 1765095229,
      "hd": 298
    },
    {
      "lat": 45.238125,
      "lng": 22.867744,
      "alt": 36000,
      "spd": 478,
      "ts": 1765095197,
      "hd": 298
    },
    {
      "lat": 45.203812,
      "lng": 22.955084,
      "alt": 36000,
      "spd": 478,
      "ts": 1765095165,
      "hd": 299
    },
    {
      "lat": 45.169556,
      "lng": 23.042801,
      "alt": 36000,
      "spd": 475,
      "ts": 1765095133,
      "hd": 299
    },
    {
      "lat": 45.136024,
      "lng": 23.127953,
      "alt": 36000,
      "spd": 474,
      "ts": 1765095101,
      "hd": 298
    },
    {
      "lat": 45.101116,
      "lng": 23.216223,
      "alt": 36000,
      "spd": 473,
      "ts": 1765095069,
      "hd": 299
    },
    {
      "lat": 45.068684,
      "lng": 23.298077,
      "alt": 36000,
      "spd": 473,
      "ts": 1765095038,
      "hd": 299
    },
    {
      "lat": 45.036045,
      "lng": 23.380499,
      "alt": 36000,
      "spd": 475,
      "ts": 1765095008,
      "hd": 299
    },
    {
      "lat": 45.00069,
      "lng": 23.469341,
      "alt": 36000,
      "spd": 479,
      "ts": 1765094975,
      "hd": 299
    },
    {
      "lat": 44.966946,
      "lng": 23.553694,
      "alt": 36000,
      "spd": 480,
      "ts": 1765094944,
      "hd": 299
    },
    {
      "lat": 44.934032,
      "lng": 23.636156,
      "alt": 36000,
      "spd": 483,
      "ts": 1765094914,
      "hd": 299
    },
    {
      "lat": 44.898491,
      "lng": 23.724728,
      "alt": 36000,
      "spd": 487,
      "ts": 1765094882,
      "hd": 299
    },
    {
      "lat": 44.86256,
      "lng": 23.813797,
      "alt": 36000,
      "spd": 487,
      "ts": 1765094849,
      "hd": 299
    },
    {
      "lat": 44.827011,
      "lng": 23.901623,
      "alt": 36000,
      "spd": 486,
      "ts": 1765094817,
      "hd": 299
    },
    {
      "lat": 44.792427,
      "lng": 23.98826,
      "alt": 36000,
      "spd": 485,
      "ts": 1765094786,
      "hd": 299
    },
    {
      "lat": 44.757164,
      "lng": 24.074316,
      "alt": 36000,
      "spd": 486,
      "ts": 1765094754,
      "hd": 299
    },
    {
      "lat": 44.722084,
      "lng": 24.159908,
      "alt": 36000,
      "spd": 485,
      "ts": 1765094723,
      "hd": 299
    },
    {
      "lat": 44.685741,
      "lng": 24.24827,
      "alt": 36000,
      "spd": 484,
      "ts": 1765094690,
      "hd": 299
    },
    {
      "lat": 44.650726,
      "lng": 24.334635,
      "alt": 36000,
      "spd": 482,
      "ts": 1765094659,
      "hd": 299
    },
    {
      "lat": 44.615192,
      "lng": 24.421162,
      "alt": 36000,
      "spd": 481,
      "ts": 1765094627,
      "hd": 300
    },
    {
      "lat": 44.579807,
      "lng": 24.506931,
      "alt": 36000,
      "spd": 481,
      "ts": 1765094595,
      "hd": 300
    },
    {
      "lat": 44.544834,
      "lng": 24.591383,
      "alt": 36000,
      "spd": 482,
      "ts": 1765094563,
      "hd": 300
    },
    {
      "lat": 44.509426,
      "lng": 24.67709,
      "alt": 36000,
      "spd": 482,
      "ts": 1765094532,
      "hd": 300
    },
    {
      "lat": 44.473583,
      "lng": 24.762993,
      "alt": 36000,
      "spd": 484,
      "ts": 1765094500,
      "hd": 300
    },
    {
      "lat": 44.437149,
      "lng": 24.850121,
      "alt": 36000,
      "spd": 484,
      "ts": 1765094468,
      "hd": 300
    },
    {
      "lat": 44.40123,
      "lng": 24.935843,
      "alt": 36000,
      "spd": 483,
      "ts": 1765094436,
      "hd": 300
    },
    {
      "lat": 44.365936,
      "lng": 25.019636,
      "alt": 36000,
      "spd": 484,
      "ts": 1765094405,
      "hd": 300
    },
    {
      "lat": 44.329754,
      "lng": 25.1057,
      "alt": 36000,
      "spd": 480,
      "ts": 1765094373,
      "hd": 300
    },
    {
      "lat": 44.294056,
      "lng": 25.190079,
      "alt": 36000,
      "spd": 477,
      "ts": 1765094341,
      "hd": 300
    },
    {
      "lat": 44.258579,
      "lng": 25.27397,
      "alt": 36000,
      "spd": 476,
      "ts": 1765094309,
      "hd": 300
    },
    {
      "lat": 44.222832,
      "lng": 25.357735,
      "alt": 36000,
      "spd": 476,
      "ts": 1765094277,
      "hd": 300
    },
    {
      "lat": 44.187279,
      "lng": 25.440893,
      "alt": 36000,
      "spd": 477,
      "ts": 1765094246,
      "hd": 300
    },
    {
      "lat": 44.151485,
      "lng": 25.524801,
      "alt": 36000,
      "spd": 479,
      "ts": 1765094214,
      "hd": 300
    },
    {
      "lat": 44.116463,
      "lng": 25.606981,
      "alt": 36000,
      "spd": 480,
      "ts": 1765094182,
      "hd": 300
    },
    {
      "lat": 44.081318,
      "lng": 25.688246,
      "alt": 36000,
      "spd": 482,
      "ts": 1765094152,
      "hd": 300
    },
    {
      "lat": 44.044731,
      "lng": 25.772503,
      "alt": 36000,
      "spd": 482,
      "ts": 1765094120,
      "hd": 300
    },
    {
      "lat": 44.0084,
      "lng": 25.856384,
      "alt": 36000,
      "spd": 483,
      "ts": 1765094088,
      "hd": 301
    },
    {
      "lat": 43.970505,
      "lng": 25.943619,
      "alt": 36000,
      "spd": 485,
      "ts": 1765094055,
      "hd": 301
    },
    {
      "lat": 43.932858,
      "lng": 26.0292,
      "alt": 36000,
      "spd": 486,
      "ts": 1765094024,
      "hd": 301
    },
    {
      "lat": 43.895756,
      "lng": 26.114006,
      "alt": 36000,
      "spd": 485,
      "ts": 1765093992,
      "hd": 301
    },
    {
      "lat": 43.858421,
      "lng": 26.199234,
      "alt": 36000,
      "spd": 486,
      "ts": 1765093960,
      "hd": 301
    },
    {
      "lat": 43.821209,
      "lng": 26.283691,
      "alt": 36000,
      "spd": 489,
      "ts": 1765093928,
      "hd": 301
    },
    {
      "lat": 43.783775,
      "lng": 26.368563,
      "alt": 36000,
      "spd": 489,
      "ts": 1765093896,
      "hd": 301
    },
    {
      "lat": 43.747608,
      "lng": 26.450483,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093865,
      "hd": 301
    },
    {
      "lat": 43.709705,
      "lng": 26.535915,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093833,
      "hd": 301
    },
    {
      "lat": 43.672035,
      "lng": 26.620884,
      "alt": 36000,
      "spd": 487,
      "ts": 1765093801,
      "hd": 301
    },
    {
      "lat": 43.636547,
      "lng": 26.700392,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093771,
      "hd": 301
    },
    {
      "lat": 43.599987,
      "lng": 26.782667,
      "alt": 36000,
      "spd": 486,
      "ts": 1765093740,
      "hd": 301
    },
    {
      "lat": 43.563148,
      "lng": 26.865889,
      "alt": 36000,
      "spd": 484,
      "ts": 1765093708,
      "hd": 301
    },
    {
      "lat": 43.526375,
      "lng": 26.947746,
      "alt": 36000,
      "spd": 483,
      "ts": 1765093677,
      "hd": 301
    },
    {
      "lat": 43.48864,
      "lng": 27.030872,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093645,
      "hd": 301
    },
    {
      "lat": 43.486122,
      "lng": 27.036341,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093643,
      "hd": 301
    },
    {
      "lat": 43.483761,
      "lng": 27.041662,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093641,
      "hd": 301
    },
    {
      "lat": 43.481377,
      "lng": 27.047031,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093638,
      "hd": 301
    },
    {
      "lat": 43.478703,
      "lng": 27.052954,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093636,
      "hd": 302
    },
    {
      "lat": 43.476002,
      "lng": 27.058813,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093634,
      "hd": 301
    },
    {
      "lat": 43.473423,
      "lng": 27.064371,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093632,
      "hd": 301
    },
    {
      "lat": 43.471336,
      "lng": 27.068998,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093630,
      "hd": 300
    },
    {
      "lat": 43.469105,
      "lng": 27.074417,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093628,
      "hd": 302
    },
    {
      "lat": 43.466503,
      "lng": 27.080057,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093626,
      "hd": 302
    },
    {
      "lat": 43.464073,
      "lng": 27.085188,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093624,
      "hd": 301
    },
    {
      "lat": 43.461723,
      "lng": 27.090521,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093622,
      "hd": 302
    },
    {
      "lat": 43.459229,
      "lng": 27.095917,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093620,
      "hd": 301
    },
    {
      "lat": 43.456921,
      "lng": 27.101227,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093618,
      "hd": 302
    },
    {
      "lat": 43.454075,
      "lng": 27.107233,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093615,
      "hd": 301
    },
    {
      "lat": 43.451794,
      "lng": 27.112574,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093613,
      "hd": 302
    },
    {
      "lat": 43.449341,
      "lng": 27.117805,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093611,
      "hd": 301
    },
    {
      "lat": 43.446865,
      "lng": 27.123747,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093609,
      "hd": 302
    },
    {
      "lat": 43.444458,
      "lng": 27.128614,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093607,
      "hd": 301
    },
    {
      "lat": 43.441879,
      "lng": 27.134298,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093605,
      "hd": 301
    },
    {
      "lat": 43.439415,
      "lng": 27.139761,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093603,
      "hd": 301
    },
    {
      "lat": 43.437069,
      "lng": 27.144821,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093601,
      "hd": 301
    },
    {
      "lat": 43.409687,
      "lng": 27.205019,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093577,
      "hd": 301
    },
    {
      "lat": 43.372932,
      "lng": 27.28565,
      "alt": 36000,
      "spd": 476,
      "ts": 1765093546,
      "hd": 302
    },
    {
      "lat": 43.335537,
      "lng": 27.367613,
      "alt": 36000,
      "spd": 476,
      "ts": 1765093514,
      "hd": 302
    },
    {
      "lat": 43.298187,
      "lng": 27.44952,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093482,
      "hd": 302
    },
    {
      "lat": 43.261471,
      "lng": 27.529823,
      "alt": 36000,
      "spd": 478,
      "ts": 1765093451,
      "hd": 302
    },
    {
      "lat": 43.224281,
      "lng": 27.61129,
      "alt": 36000,
      "spd": 480,
      "ts": 1765093419,
      "hd": 301
    },
    {
      "lat": 43.18779,
      "lng": 27.693268,
      "alt": 35975,
      "spd": 486,
      "ts": 1765093388,
      "hd": 300
    },
    {
      "lat": 43.18531,
      "lng": 27.698837,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093385,
      "hd": 300
    },
    {
      "lat": 43.18269,
      "lng": 27.704922,
      "alt": 36025,
      "spd": 488,
      "ts": 1765093383,
      "hd": 300
    },
    {
      "lat": 43.18018,
      "lng": 27.710924,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093381,
      "hd": 300
    },
    {
      "lat": 43.177799,
      "lng": 27.716383,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093379,
      "hd": 299
    },
    {
      "lat": 43.175529,
      "lng": 27.721779,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093377,
      "hd": 299
    },
    {
      "lat": 43.173119,
      "lng": 27.727411,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093375,
      "hd": 299
    },
    {
      "lat": 43.170788,
      "lng": 27.733,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093373,
      "hd": 298
    },
    {
      "lat": 43.168461,
      "lng": 27.738729,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093371,
      "hd": 298
    },
    {
      "lat": 43.166031,
      "lng": 27.744881,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093368,
      "hd": 298
    },
    {
      "lat": 43.163658,
      "lng": 27.750746,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093366,
      "hd": 298
    },
    {
      "lat": 43.161518,
      "lng": 27.756144,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093364,
      "hd": 297
    },
    {
      "lat": 43.159634,
      "lng": 27.761089,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093362,
      "hd": 298
    },
    {
      "lat": 43.156868,
      "lng": 27.767988,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093360,
      "hd": 296
    },
    {
      "lat": 43.154839,
      "lng": 27.773607,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093358,
      "hd": 306
    },
    {
      "lat": 43.152561,
      "lng": 27.77943,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093356,
      "hd": 297
    },
    {
      "lat": 43.150581,
      "lng": 27.784672,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093354,
      "hd": 297
    },
    {
      "lat": 43.148388,
      "lng": 27.790771,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093352,
      "hd": 296
    },
    {
      "lat": 43.146229,
      "lng": 27.796543,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093350,
      "hd": 293
    },
    {
      "lat": 43.14431,
      "lng": 27.802542,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093347,
      "hd": 296
    },
    {
      "lat": 43.142281,
      "lng": 27.80842,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093345,
      "hd": 291
    },
    {
      "lat": 43.140404,
      "lng": 27.814117,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093343,
      "hd": 293
    },
    {
      "lat": 43.138226,
      "lng": 27.820778,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093341,
      "hd": 293
    },
    {
      "lat": 43.132301,
      "lng": 27.835693,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093333,
      "hd": 288
    },
    {
      "lat": 43.100407,
      "lng": 27.939753,
      "alt": 36000,
      "spd": 486,
      "ts": 1765093299,
      "hd": 293
    },
    {
      "lat": 43.071972,
      "lng": 28.028818,
      "alt": 36000,
      "spd": 486,
      "ts": 1765093267,
      "hd": 293
    },
    {
      "lat": 43.04377,
      "lng": 28.116695,
      "alt": 36000,
      "spd": 488,
      "ts": 1765093236,
      "hd": 293
    },
    {
      "lat": 43.01503,
      "lng": 28.206203,
      "alt": 36000,
      "spd": 490,
      "ts": 1765093204,
      "hd": 293
    },
    {
      "lat": 42.986576,
      "lng": 28.294432,
      "alt": 36000,
      "spd": 490,
      "ts": 1765093173,
      "hd": 293
    },
    {
      "lat": 42.957844,
      "lng": 28.383253,
      "alt": 36000,
      "spd": 492,
      "ts": 1765093141,
      "hd": 294
    },
    {
      "lat": 42.92783,
      "lng": 28.475489,
      "alt": 36000,
      "spd": 498,
      "ts": 1765093109,
      "hd": 293
    },
    {
      "lat": 42.898613,
      "lng": 28.564981,
      "alt": 36000,
      "spd": 498,
      "ts": 1765093078,
      "hd": 294
    },
    {
      "lat": 42.869133,
      "lng": 28.654871,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093046,
      "hd": 293
    },
    {
      "lat": 42.840096,
      "lng": 28.743288,
      "alt": 36000,
      "spd": 496,
      "ts": 1765093015,
      "hd": 294
    },
    {
      "lat": 42.810928,
      "lng": 28.83222,
      "alt": 36000,
      "spd": 494,
      "ts": 1765092984,
      "hd": 293
    },
    {
      "lat": 42.781471,
      "lng": 28.921953,
      "alt": 36000,
      "spd": 494,
      "ts": 1765092952,
      "hd": 294
    },
    {
      "lat": 42.750683,
      "lng": 29.015882,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092919,
      "hd": 294
    },
    {
      "lat": 42.721432,
      "lng": 29.104647,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092888,
      "hd": 294
    },
    {
      "lat": 42.691986,
      "lng": 29.193806,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092856,
      "hd": 294
    },
    {
      "lat": 42.662701,
      "lng": 29.281918,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092824,
      "hd": 294
    },
    {
      "lat": 42.632854,
      "lng": 29.371092,
      "alt": 36000,
      "spd": 488,
      "ts": 1765092793,
      "hd": 294
    },
    {
      "lat": 42.602379,
      "lng": 29.461023,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092760,
      "hd": 294
    },
    {
      "lat": 42.573597,
      "lng": 29.545681,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092730,
      "hd": 294
    },
    {
      "lat": 42.543056,
      "lng": 29.635151,
      "alt": 36000,
      "spd": 488,
      "ts": 1765092697,
      "hd": 294
    },
    {
      "lat": 42.513012,
      "lng": 29.723156,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092666,
      "hd": 294
    },
    {
      "lat": 42.483196,
      "lng": 29.810915,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092634,
      "hd": 293
    },
    {
      "lat": 42.456493,
      "lng": 29.902964,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092602,
      "hd": 287
    },
    {
      "lat": 42.435772,
      "lng": 29.99646,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092570,
      "hd": 286
    },
    {
      "lat": 42.416363,
      "lng": 30.085733,
      "alt": 36000,
      "spd": 492,
      "ts": 1765092539,
      "hd": 286
    },
    {
      "lat": 42.408119,
      "lng": 30.124022,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092526,
      "hd": 286
    },
    {
      "lat": 42.406818,
      "lng": 30.129902,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092524,
      "hd": 286
    },
    {
      "lat": 42.405266,
      "lng": 30.136553,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092522,
      "hd": 286
    },
    {
      "lat": 42.385036,
      "lng": 30.230915,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092490,
      "hd": 286
    },
    {
      "lat": 42.363953,
      "lng": 30.327038,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092457,
      "hd": 286
    },
    {
      "lat": 42.343521,
      "lng": 30.420786,
      "alt": 36000,
      "spd": 490,
      "ts": 1765092425,
      "hd": 286
    },
    {
      "lat": 42.324039,
      "lng": 30.509537,
      "alt": 36000,
      "spd": 488,
      "ts": 1765092394,
      "hd": 286
    },
    {
      "lat": 42.303108,
      "lng": 30.603655,
      "alt": 36000,
      "spd": 486,
      "ts": 1765092362,
      "hd": 286
    },
    {
      "lat": 42.2827,
      "lng": 30.696024,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092330,
      "hd": 286
    },
    {
      "lat": 42.26199,
      "lng": 30.788227,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092298,
      "hd": 286
    },
    {
      "lat": 42.240788,
      "lng": 30.881981,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092266,
      "hd": 286
    },
    {
      "lat": 42.239243,
      "lng": 30.888752,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092264,
      "hd": 286
    },
    {
      "lat": 42.237953,
      "lng": 30.894609,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092261,
      "hd": 286
    },
    {
      "lat": 42.23661,
      "lng": 30.900539,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092259,
      "hd": 286
    },
    {
      "lat": 42.235271,
      "lng": 30.906893,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092257,
      "hd": 287
    },
    {
      "lat": 42.233803,
      "lng": 30.913689,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092255,
      "hd": 287
    },
    {
      "lat": 42.232227,
      "lng": 30.919943,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092253,
      "hd": 287
    },
    {
      "lat": 42.230865,
      "lng": 30.926029,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092250,
      "hd": 287
    },
    {
      "lat": 42.229439,
      "lng": 30.93329,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092248,
      "hd": 286
    },
    {
      "lat": 42.228268,
      "lng": 30.937962,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092246,
      "hd": 287
    },
    {
      "lat": 42.226574,
      "lng": 30.945301,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092244,
      "hd": 287
    },
    {
      "lat": 42.225456,
      "lng": 30.949974,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092242,
      "hd": 286
    },
    {
      "lat": 42.223976,
      "lng": 30.956558,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092240,
      "hd": 287
    },
    {
      "lat": 42.222187,
      "lng": 30.963747,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092238,
      "hd": 281
    },
    {
      "lat": 42.222115,
      "lng": 30.967693,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092235,
      "hd": 298
    },
    {
      "lat": 42.219433,
      "lng": 30.976158,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092233,
      "hd": 286
    },
    {
      "lat": 42.218307,
      "lng": 30.982208,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092231,
      "hd": 293
    },
    {
      "lat": 42.216614,
      "lng": 30.987432,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092229,
      "hd": 276
    },
    {
      "lat": 42.215771,
      "lng": 30.993645,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092227,
      "hd": 287
    },
    {
      "lat": 42.214344,
      "lng": 31.000076,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092225,
      "hd": 294
    },
    {
      "lat": 42.212948,
      "lng": 31.006208,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092223,
      "hd": 297
    },
    {
      "lat": 42.211452,
      "lng": 31.011452,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092220,
      "hd": 284
    },
    {
      "lat": 42.210072,
      "lng": 31.018015,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092218,
      "hd": 286
    },
    {
      "lat": 42.208588,
      "lng": 31.024519,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092216,
      "hd": 285
    },
    {
      "lat": 42.207199,
      "lng": 31.030766,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092214,
      "hd": 284
    },
    {
      "lat": 42.206085,
      "lng": 31.03694,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092212,
      "hd": 289
    },
    {
      "lat": 42.204464,
      "lng": 31.042957,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092210,
      "hd": 286
    },
    {
      "lat": 42.203384,
      "lng": 31.047947,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092208,
      "hd": 286
    },
    {
      "lat": 42.20187,
      "lng": 31.054762,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092206,
      "hd": 286
    },
    {
      "lat": 42.200207,
      "lng": 31.062111,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092203,
      "hd": 286
    },
    {
      "lat": 42.198914,
      "lng": 31.067986,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092201,
      "hd": 287
    },
    {
      "lat": 42.197609,
      "lng": 31.073763,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092199,
      "hd": 287
    },
    {
      "lat": 42.19598,
      "lng": 31.080484,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092197,
      "hd": 286
    },
    {
      "lat": 42.194668,
      "lng": 31.086071,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092195,
      "hd": 285
    },
    {
      "lat": 42.177544,
      "lng": 31.160816,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092169,
      "hd": 287
    },
    {
      "lat": 42.156643,
      "lng": 31.251707,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092137,
      "hd": 287
    },
    {
      "lat": 42.15517,
      "lng": 31.257832,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092135,
      "hd": 287
    },
    {
      "lat": 42.153664,
      "lng": 31.264412,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092133,
      "hd": 287
    },
    {
      "lat": 42.152504,
      "lng": 31.269156,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092131,
      "hd": 287
    },
    {
      "lat": 42.150757,
      "lng": 31.276423,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092128,
      "hd": 287
    },
    {
      "lat": 42.149605,
      "lng": 31.281239,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092126,
      "hd": 286
    },
    {
      "lat": 42.148212,
      "lng": 31.287504,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092124,
      "hd": 287
    },
    {
      "lat": 42.146523,
      "lng": 31.294689,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092122,
      "hd": 286
    },
    {
      "lat": 42.145149,
      "lng": 31.300797,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092120,
      "hd": 286
    },
    {
      "lat": 42.14381,
      "lng": 31.306993,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092118,
      "hd": 286
    },
    {
      "lat": 42.142456,
      "lng": 31.312891,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092116,
      "hd": 286
    },
    {
      "lat": 42.141094,
      "lng": 31.319309,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092114,
      "hd": 287
    },
    {
      "lat": 42.139908,
      "lng": 31.325209,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092111,
      "hd": 288
    },
    {
      "lat": 42.13855,
      "lng": 31.330715,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092109,
      "hd": 289
    },
    {
      "lat": 42.136868,
      "lng": 31.337002,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092107,
      "hd": 328
    },
    {
      "lat": 42.135437,
      "lng": 31.343668,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092105,
      "hd": 351
    },
    {
      "lat": 42.128613,
      "lng": 31.373098,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092094,
      "hd": 286
    },
    {
      "lat": 42.126949,
      "lng": 31.380453,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092092,
      "hd": 287
    },
    {
      "lat": 42.125702,
      "lng": 31.385822,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092090,
      "hd": 286
    },
    {
      "lat": 42.124695,
      "lng": 31.39015,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092088,
      "hd": 286
    },
    {
      "lat": 42.123123,
      "lng": 31.397274,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092086,
      "hd": 287
    },
    {
      "lat": 42.121666,
      "lng": 31.403811,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092084,
      "hd": 287
    },
    {
      "lat": 42.120186,
      "lng": 31.410242,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092082,
      "hd": 287
    },
    {
      "lat": 42.118793,
      "lng": 31.416132,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092080,
      "hd": 287
    },
    {
      "lat": 42.117428,
      "lng": 31.421949,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092078,
      "hd": 287
    },
    {
      "lat": 42.116035,
      "lng": 31.427822,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092076,
      "hd": 287
    },
    {
      "lat": 42.114479,
      "lng": 31.434374,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092073,
      "hd": 286
    },
    {
      "lat": 42.113205,
      "lng": 31.439808,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092071,
      "hd": 286
    },
    {
      "lat": 42.111782,
      "lng": 31.446415,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092069,
      "hd": 286
    },
    {
      "lat": 42.110268,
      "lng": 31.45318,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092067,
      "hd": 286
    },
    {
      "lat": 42.109909,
      "lng": 31.459591,
      "alt": 36000,
      "spd": 484,
      "ts": 1765092065,
      "hd": 321
    },
    {
      "lat": 42.096157,
      "lng": 31.514624,
      "alt": 36000,
      "spd": 482,
      "ts": 1765092045,
      "hd": 287
    },
    {
      "lat": 42.075417,
      "lng": 31.604374,
      "alt": 36000,
      "spd": 482,
      "ts": 1765092014,
      "hd": 287
    },
    {
      "lat": 42.054321,
      "lng": 31.695492,
      "alt": 36000,
      "spd": 484,
      "ts": 1765091982,
      "hd": 287
    },
    {
      "lat": 42.034683,
      "lng": 31.781895,
      "alt": 36000,
      "spd": 484,
      "ts": 1765091952,
      "hd": 286
    },
    {
      "lat": 42.033329,
      "lng": 31.787802,
      "alt": 36000,
      "spd": 484,
      "ts": 1765091950,
      "hd": 286
    },
    {
      "lat": 42.032127,
      "lng": 31.793306,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091948,
      "hd": 287
    },
    {
      "lat": 42.031143,
      "lng": 31.797762,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091946,
      "hd": 287
    },
    {
      "lat": 42.029346,
      "lng": 31.806395,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091943,
      "hd": 287
    },
    {
      "lat": 42.027935,
      "lng": 31.812832,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091941,
      "hd": 288
    },
    {
      "lat": 42.026485,
      "lng": 31.818546,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091939,
      "hd": 288
    },
    {
      "lat": 42.024994,
      "lng": 31.825155,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091937,
      "hd": 288
    },
    {
      "lat": 42.023518,
      "lng": 31.830797,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091935,
      "hd": 288
    },
    {
      "lat": 42.022472,
      "lng": 31.835535,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091933,
      "hd": 288
    },
    {
      "lat": 42.021221,
      "lng": 31.839581,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091931,
      "hd": 287
    },
    {
      "lat": 42.01947,
      "lng": 31.848816,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091929,
      "hd": 289
    },
    {
      "lat": 42.018047,
      "lng": 31.853405,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091927,
      "hd": 290
    },
    {
      "lat": 42.016075,
      "lng": 31.860754,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091925,
      "hd": 287
    },
    {
      "lat": 42.01474,
      "lng": 31.866951,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091922,
      "hd": 288
    },
    {
      "lat": 42.013767,
      "lng": 31.870073,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091920,
      "hd": 287
    },
    {
      "lat": 42.01178,
      "lng": 31.879486,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091918,
      "hd": 288
    },
    {
      "lat": 42.01112,
      "lng": 31.883276,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091916,
      "hd": 291
    },
    {
      "lat": 42.009354,
      "lng": 31.891308,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091914,
      "hd": 299
    },
    {
      "lat": 42.007217,
      "lng": 31.897268,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091912,
      "hd": 287
    },
    {
      "lat": 42.00565,
      "lng": 31.903612,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091910,
      "hd": 285
    },
    {
      "lat": 42.004505,
      "lng": 31.909184,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091907,
      "hd": 287
    },
    {
      "lat": 42.003571,
      "lng": 31.913929,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091905,
      "hd": 287
    },
    {
      "lat": 42.001659,
      "lng": 31.921743,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091903,
      "hd": 287
    },
    {
      "lat": 42.000305,
      "lng": 31.927151,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091901,
      "hd": 287
    },
    {
      "lat": 41.998642,
      "lng": 31.933838,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091899,
      "hd": 287
    },
    {
      "lat": 41.997272,
      "lng": 31.939833,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091897,
      "hd": 287
    },
    {
      "lat": 41.995953,
      "lng": 31.945673,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091895,
      "hd": 287
    },
    {
      "lat": 41.994541,
      "lng": 31.951979,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091893,
      "hd": 287
    },
    {
      "lat": 41.993317,
      "lng": 31.957838,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091890,
      "hd": 288
    },
    {
      "lat": 41.99152,
      "lng": 31.96542,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091888,
      "hd": 289
    },
    {
      "lat": 41.990234,
      "lng": 31.970356,
      "alt": 36000,
      "spd": 486,
      "ts": 1765091886,
      "hd": 288
    },
    {
      "lat": 41.988434,
      "lng": 31.97588,
      "alt": 36000,
      "spd": 488,
      "ts": 1765091884,
      "hd": 278
    },
    {
      "lat": 41.986145,
      "lng": 31.986498,
      "alt": 36000,
      "spd": 488,
      "ts": 1765091881,
      "hd": 271
    },
    {
      "lat": 41.984409,
      "lng": 31.995495,
      "alt": 36000,
      "spd": 488,
      "ts": 1765091877,
      "hd": 288
    },
    {
      "lat": 41.982506,
      "lng": 32.003208,
      "alt": 36000,
      "spd": 488,
      "ts": 1765091874,
      "hd": 281
    },
    {
      "lat": 41.980305,
      "lng": 32.012085,
      "alt": 36000,
      "spd": 488,
      "ts": 1765091872,
      "hd": 287
    },
    {
      "lat": 41.980324,
      "lng": 32.016819,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091870,
      "hd": 304
    },
    {
      "lat": 41.977844,
      "lng": 32.023689,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091868,
      "hd": 283
    },
    {
      "lat": 41.97736,
      "lng": 32.031654,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091866,
      "hd": 296
    },
    {
      "lat": 41.975624,
      "lng": 32.036289,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091863,
      "hd": 296
    },
    {
      "lat": 41.975067,
      "lng": 32.04406,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091861,
      "hd": 296
    },
    {
      "lat": 41.973145,
      "lng": 32.049023,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091859,
      "hd": 312
    },
    {
      "lat": 41.970436,
      "lng": 32.054367,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091857,
      "hd": 287
    },
    {
      "lat": 41.969063,
      "lng": 32.059624,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091855,
      "hd": 287
    },
    {
      "lat": 41.967045,
      "lng": 32.067856,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091853,
      "hd": 286
    },
    {
      "lat": 41.965538,
      "lng": 32.07383,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091851,
      "hd": 285
    },
    {
      "lat": 41.964424,
      "lng": 32.079769,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091848,
      "hd": 287
    },
    {
      "lat": 41.963604,
      "lng": 32.08609,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091846,
      "hd": 273
    },
    {
      "lat": 41.961876,
      "lng": 32.092636,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091844,
      "hd": 226
    },
    {
      "lat": 41.963272,
      "lng": 32.09877,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091842,
      "hd": 327
    },
    {
      "lat": 41.958969,
      "lng": 32.103115,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091840,
      "hd": 256
    },
    {
      "lat": 41.95837,
      "lng": 32.114113,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091837,
      "hd": 261
    },
    {
      "lat": 41.957287,
      "lng": 32.12278,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091834,
      "hd": 290
    },
    {
      "lat": 41.954659,
      "lng": 32.127247,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091832,
      "hd": 283
    },
    {
      "lat": 41.953358,
      "lng": 32.134666,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091830,
      "hd": 279
    },
    {
      "lat": 41.952042,
      "lng": 32.138096,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091828,
      "hd": 274
    },
    {
      "lat": 41.950325,
      "lng": 32.14711,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091826,
      "hd": 232
    },
    {
      "lat": 41.950241,
      "lng": 32.151741,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091824,
      "hd": 284
    },
    {
      "lat": 41.947994,
      "lng": 32.16341,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091821,
      "hd": 278
    },
    {
      "lat": 41.946068,
      "lng": 32.181686,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091815,
      "hd": 324
    },
    {
      "lat": 41.943695,
      "lng": 32.185436,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091813,
      "hd": 302
    },
    {
      "lat": 41.937023,
      "lng": 32.196793,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091807,
      "hd": 268
    },
    {
      "lat": 41.934429,
      "lng": 32.214626,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091803,
      "hd": 288
    },
    {
      "lat": 41.933125,
      "lng": 32.219257,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091801,
      "hd": 288
    },
    {
      "lat": 41.931389,
      "lng": 32.224892,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091799,
      "hd": 285
    },
    {
      "lat": 41.930271,
      "lng": 32.231663,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091797,
      "hd": 288
    },
    {
      "lat": 41.929153,
      "lng": 32.236992,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091795,
      "hd": 290
    },
    {
      "lat": 41.927677,
      "lng": 32.243462,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091793,
      "hd": 290
    },
    {
      "lat": 41.925793,
      "lng": 32.250351,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091790,
      "hd": 286
    },
    {
      "lat": 41.92205,
      "lng": 32.262306,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091786,
      "hd": 259
    },
    {
      "lat": 41.923855,
      "lng": 32.272476,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091784,
      "hd": 290
    },
    {
      "lat": 41.910484,
      "lng": 32.267818,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091781,
      "hd": 277
    },
    {
      "lat": 41.908092,
      "lng": 32.277409,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091777,
      "hd": 236
    },
    {
      "lat": 41.904625,
      "lng": 32.285934,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091774,
      "hd": 247
    },
    {
      "lat": 41.908192,
      "lng": 32.297722,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091772,
      "hd": 255
    },
    {
      "lat": 41.911381,
      "lng": 32.31427,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091769,
      "hd": 282
    },
    {
      "lat": 41.907688,
      "lng": 32.31778,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091767,
      "hd": 238
    },
    {
      "lat": 41.908669,
      "lng": 32.326672,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091764,
      "hd": 294
    },
    {
      "lat": 41.906883,
      "lng": 32.336079,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091761,
      "hd": 17
    },
    {
      "lat": 41.90509,
      "lng": 32.342243,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091759,
      "hd": 13
    },
    {
      "lat": 41.906116,
      "lng": 32.350941,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091757,
      "hd": 353
    },
    {
      "lat": 41.900604,
      "lng": 32.355896,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091754,
      "hd": 259
    },
    {
      "lat": 41.897011,
      "lng": 32.361038,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091752,
      "hd": 243
    },
    {
      "lat": 41.895435,
      "lng": 32.370956,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091748,
      "hd": 296
    },
    {
      "lat": 41.892868,
      "lng": 32.380291,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091745,
      "hd": 264
    },
    {
      "lat": 41.893772,
      "lng": 32.393456,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091743,
      "hd": 218
    },
    {
      "lat": 41.890488,
      "lng": 32.391045,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091741,
      "hd": 239
    },
    {
      "lat": 41.888367,
      "lng": 32.39917,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091739,
      "hd": 281
    },
    {
      "lat": 41.885761,
      "lng": 32.4072,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091735,
      "hd": 249
    },
    {
      "lat": 41.883652,
      "lng": 32.416504,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091732,
      "hd": 220
    },
    {
      "lat": 41.884285,
      "lng": 32.429783,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091728,
      "hd": 236
    },
    {
      "lat": 41.886559,
      "lng": 32.429863,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091726,
      "hd": 352
    },
    {
      "lat": 41.882755,
      "lng": 32.439758,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091724,
      "hd": 319
    },
    {
      "lat": 41.876225,
      "lng": 32.450264,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091721,
      "hd": 293
    },
    {
      "lat": 41.874355,
      "lng": 32.457325,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091718,
      "hd": 287
    },
    {
      "lat": 41.87714,
      "lng": 32.464935,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091715,
      "hd": 328
    },
    {
      "lat": 41.875206,
      "lng": 32.471363,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091713,
      "hd": 289
    },
    {
      "lat": 41.873722,
      "lng": 32.476994,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091711,
      "hd": 269
    },
    {
      "lat": 41.868004,
      "lng": 32.484089,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091709,
      "hd": 290
    },
    {
      "lat": 41.866219,
      "lng": 32.491375,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091707,
      "hd": 249
    },
    {
      "lat": 41.8634,
      "lng": 32.502987,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091703,
      "hd": 285
    },
    {
      "lat": 41.862007,
      "lng": 32.508785,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091700,
      "hd": 247
    },
    {
      "lat": 41.859425,
      "lng": 32.520367,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091697,
      "hd": 288
    },
    {
      "lat": 41.857952,
      "lng": 32.526257,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091695,
      "hd": 287
    },
    {
      "lat": 41.857029,
      "lng": 32.530975,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091692,
      "hd": 290
    },
    {
      "lat": 41.854652,
      "lng": 32.537994,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091690,
      "hd": 246
    },
    {
      "lat": 41.852566,
      "lng": 32.548717,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091687,
      "hd": 288
    },
    {
      "lat": 41.851078,
      "lng": 32.554859,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091685,
      "hd": 288
    },
    {
      "lat": 41.84948,
      "lng": 32.561275,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091683,
      "hd": 288
    },
    {
      "lat": 41.848072,
      "lng": 32.566971,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091681,
      "hd": 288
    },
    {
      "lat": 41.846348,
      "lng": 32.57375,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091678,
      "hd": 288
    },
    {
      "lat": 41.844738,
      "lng": 32.58036,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091676,
      "hd": 287
    },
    {
      "lat": 41.843315,
      "lng": 32.586239,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091674,
      "hd": 287
    },
    {
      "lat": 41.841637,
      "lng": 32.592907,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091672,
      "hd": 287
    },
    {
      "lat": 41.840126,
      "lng": 32.598995,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091670,
      "hd": 285
    },
    {
      "lat": 41.839409,
      "lng": 32.604931,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091668,
      "hd": 280
    },
    {
      "lat": 41.835873,
      "lng": 32.615772,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091663,
      "hd": 282
    },
    {
      "lat": 41.813232,
      "lng": 32.710888,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091631,
      "hd": 288
    },
    {
      "lat": 41.79018,
      "lng": 32.804398,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091599,
      "hd": 287
    },
    {
      "lat": 41.766891,
      "lng": 32.89986,
      "alt": 36000,
      "spd": 502,
      "ts": 1765091567,
      "hd": 288
    },
    {
      "lat": 41.743656,
      "lng": 32.995029,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091534,
      "hd": 287
    },
    {
      "lat": 41.721619,
      "lng": 33.084373,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091504,
      "hd": 288
    },
    {
      "lat": 41.697903,
      "lng": 33.180241,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091471,
      "hd": 288
    },
    {
      "lat": 41.696381,
      "lng": 33.186386,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091469,
      "hd": 288
    },
    {
      "lat": 41.694771,
      "lng": 33.19276,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091466,
      "hd": 288
    },
    {
      "lat": 41.693134,
      "lng": 33.199306,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091464,
      "hd": 288
    },
    {
      "lat": 41.691734,
      "lng": 33.204845,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091462,
      "hd": 288
    },
    {
      "lat": 41.690102,
      "lng": 33.211681,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091460,
      "hd": 288
    },
    {
      "lat": 41.688442,
      "lng": 33.218204,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091458,
      "hd": 288
    },
    {
      "lat": 41.686909,
      "lng": 33.224186,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091455,
      "hd": 288
    },
    {
      "lat": 41.685234,
      "lng": 33.230999,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091453,
      "hd": 288
    },
    {
      "lat": 41.683704,
      "lng": 33.237595,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091451,
      "hd": 289
    },
    {
      "lat": 41.68222,
      "lng": 33.243034,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091449,
      "hd": 290
    },
    {
      "lat": 41.679024,
      "lng": 33.255817,
      "alt": 36000,
      "spd": 490,
      "ts": 1765091444,
      "hd": 288
    },
    {
      "lat": 41.655533,
      "lng": 33.349644,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091412,
      "hd": 288
    },
    {
      "lat": 41.633698,
      "lng": 33.437103,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091381,
      "hd": 288
    },
    {
      "lat": 41.631981,
      "lng": 33.443779,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091379,
      "hd": 288
    },
    {
      "lat": 41.630432,
      "lng": 33.449932,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091377,
      "hd": 288
    },
    {
      "lat": 41.62891,
      "lng": 33.45591,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091375,
      "hd": 288
    },
    {
      "lat": 41.627365,
      "lng": 33.462109,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091372,
      "hd": 288
    },
    {
      "lat": 41.625713,
      "lng": 33.468864,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091370,
      "hd": 288
    },
    {
      "lat": 41.624046,
      "lng": 33.475391,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091368,
      "hd": 289
    },
    {
      "lat": 41.622475,
      "lng": 33.481266,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091366,
      "hd": 288
    },
    {
      "lat": 41.620628,
      "lng": 33.488552,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091363,
      "hd": 288
    },
    {
      "lat": 41.619167,
      "lng": 33.494308,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091361,
      "hd": 288
    },
    {
      "lat": 41.617508,
      "lng": 33.501041,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091359,
      "hd": 288
    },
    {
      "lat": 41.616314,
      "lng": 33.505882,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091357,
      "hd": 288
    },
    {
      "lat": 41.614948,
      "lng": 33.511269,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091355,
      "hd": 288
    },
    {
      "lat": 41.612801,
      "lng": 33.519718,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091353,
      "hd": 278
    },
    {
      "lat": 41.605183,
      "lng": 33.550003,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091342,
      "hd": 288
    },
    {
      "lat": 41.583004,
      "lng": 33.637142,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091312,
      "hd": 288
    },
    {
      "lat": 41.559177,
      "lng": 33.731224,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091279,
      "hd": 290
    },
    {
      "lat": 41.53611,
      "lng": 33.821167,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091248,
      "hd": 289
    },
    {
      "lat": 41.5121,
      "lng": 33.913582,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091216,
      "hd": 289
    },
    {
      "lat": 41.510921,
      "lng": 33.918125,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091214,
      "hd": 289
    },
    {
      "lat": 41.50898,
      "lng": 33.925457,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091212,
      "hd": 289
    },
    {
      "lat": 41.507305,
      "lng": 33.931717,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091210,
      "hd": 288
    },
    {
      "lat": 41.505733,
      "lng": 33.93795,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091208,
      "hd": 289
    },
    {
      "lat": 41.504086,
      "lng": 33.944183,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091206,
      "hd": 289
    },
    {
      "lat": 41.502213,
      "lng": 33.951298,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091204,
      "hd": 289
    },
    {
      "lat": 41.500805,
      "lng": 33.956795,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091201,
      "hd": 289
    },
    {
      "lat": 41.499073,
      "lng": 33.963348,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091199,
      "hd": 288
    },
    {
      "lat": 41.497501,
      "lng": 33.969376,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091197,
      "hd": 288
    },
    {
      "lat": 41.495926,
      "lng": 33.975647,
      "alt": 36000,
      "spd": 498,
      "ts": 1765091195,
      "hd": 289
    },
    {
      "lat": 41.494286,
      "lng": 33.981979,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091193,
      "hd": 289
    },
    {
      "lat": 41.49268,
      "lng": 33.988049,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091191,
      "hd": 288
    },
    {
      "lat": 41.491066,
      "lng": 33.994247,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091189,
      "hd": 289
    },
    {
      "lat": 41.489559,
      "lng": 34.001118,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091186,
      "hd": 294
    },
    {
      "lat": 41.488056,
      "lng": 34.005871,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091184,
      "hd": 289
    },
    {
      "lat": 41.486584,
      "lng": 34.011433,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091182,
      "hd": 289
    },
    {
      "lat": 41.484451,
      "lng": 34.019588,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091180,
      "hd": 289
    },
    {
      "lat": 41.482979,
      "lng": 34.025047,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091177,
      "hd": 288
    },
    {
      "lat": 41.481159,
      "lng": 34.032112,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091175,
      "hd": 288
    },
    {
      "lat": 41.479626,
      "lng": 34.037971,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091173,
      "hd": 288
    },
    {
      "lat": 41.47802,
      "lng": 34.044205,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091171,
      "hd": 288
    },
    {
      "lat": 41.476982,
      "lng": 34.049629,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091169,
      "hd": 297
    },
    {
      "lat": 41.474937,
      "lng": 34.056034,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091167,
      "hd": 291
    },
    {
      "lat": 41.473324,
      "lng": 34.06258,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091165,
      "hd": 289
    },
    {
      "lat": 41.471844,
      "lng": 34.068176,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091163,
      "hd": 289
    },
    {
      "lat": 41.469597,
      "lng": 34.076656,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091160,
      "hd": 289
    },
    {
      "lat": 41.468082,
      "lng": 34.082085,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091158,
      "hd": 288
    },
    {
      "lat": 41.466724,
      "lng": 34.087856,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091156,
      "hd": 289
    },
    {
      "lat": 41.465031,
      "lng": 34.094368,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091154,
      "hd": 289
    },
    {
      "lat": 41.463356,
      "lng": 34.1008,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091151,
      "hd": 287
    },
    {
      "lat": 41.461597,
      "lng": 34.107857,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091149,
      "hd": 290
    },
    {
      "lat": 41.460335,
      "lng": 34.111893,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091147,
      "hd": 288
    },
    {
      "lat": 41.457493,
      "lng": 34.123207,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091143,
      "hd": 289
    },
    {
      "lat": 41.455898,
      "lng": 34.129311,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091141,
      "hd": 289
    },
    {
      "lat": 41.45406,
      "lng": 34.136276,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091139,
      "hd": 289
    },
    {
      "lat": 41.452396,
      "lng": 34.142487,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091137,
      "hd": 289
    },
    {
      "lat": 41.450722,
      "lng": 34.148964,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091135,
      "hd": 289
    },
    {
      "lat": 41.449081,
      "lng": 34.155029,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091133,
      "hd": 289
    },
    {
      "lat": 41.447906,
      "lng": 34.159935,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091130,
      "hd": 290
    },
    {
      "lat": 41.446167,
      "lng": 34.166466,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091128,
      "hd": 292
    },
    {
      "lat": 41.444817,
      "lng": 34.171001,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091126,
      "hd": 288
    },
    {
      "lat": 41.442642,
      "lng": 34.179535,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091124,
      "hd": 288
    },
    {
      "lat": 41.441078,
      "lng": 34.185879,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091122,
      "hd": 289
    },
    {
      "lat": 41.43977,
      "lng": 34.19138,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091120,
      "hd": 285
    },
    {
      "lat": 41.437946,
      "lng": 34.198372,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091118,
      "hd": 294
    },
    {
      "lat": 41.436138,
      "lng": 34.205078,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091115,
      "hd": 288
    },
    {
      "lat": 41.434746,
      "lng": 34.210941,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091113,
      "hd": 293
    },
    {
      "lat": 41.432899,
      "lng": 34.217201,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091111,
      "hd": 287
    },
    {
      "lat": 41.431389,
      "lng": 34.223675,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091108,
      "hd": 289
    },
    {
      "lat": 41.428837,
      "lng": 34.233257,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091105,
      "hd": 289
    },
    {
      "lat": 41.427902,
      "lng": 34.236515,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091103,
      "hd": 288
    },
    {
      "lat": 41.425648,
      "lng": 34.245712,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091101,
      "hd": 291
    },
    {
      "lat": 41.410912,
      "lng": 34.302029,
      "alt": 36000,
      "spd": 492,
      "ts": 1765091081,
      "hd": 288
    },
    {
      "lat": 41.38686,
      "lng": 34.39378,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091049,
      "hd": 289
    },
    {
      "lat": 41.38076,
      "lng": 34.417179,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091041,
      "hd": 289
    },
    {
      "lat": 41.379322,
      "lng": 34.422665,
      "alt": 36000,
      "spd": 496,
      "ts": 1765091039,
      "hd": 290
    },
    {
      "lat": 41.365604,
      "lng": 34.474361,
      "alt": 36000,
      "spd": 494,
      "ts": 1765091021,
      "hd": 290
    },
    {
      "lat": 41.342491,
      "lng": 34.56155,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090990,
      "hd": 289
    },
    {
      "lat": 41.340443,
      "lng": 34.568901,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090988,
      "hd": 289
    },
    {
      "lat": 41.338566,
      "lng": 34.575905,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090986,
      "hd": 289
    },
    {
      "lat": 41.337147,
      "lng": 34.58099,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090984,
      "hd": 288
    },
    {
      "lat": 41.331814,
      "lng": 34.601254,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090977,
      "hd": 286
    },
    {
      "lat": 41.330452,
      "lng": 34.607174,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090975,
      "hd": 289
    },
    {
      "lat": 41.329319,
      "lng": 34.611752,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090972,
      "hd": 289
    },
    {
      "lat": 41.32618,
      "lng": 34.623165,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090969,
      "hd": 290
    },
    {
      "lat": 41.324299,
      "lng": 34.629562,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090967,
      "hd": 289
    },
    {
      "lat": 41.318939,
      "lng": 34.649624,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090960,
      "hd": 291
    },
    {
      "lat": 41.317673,
      "lng": 34.654705,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090958,
      "hd": 288
    },
    {
      "lat": 41.314941,
      "lng": 34.665142,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090955,
      "hd": 289
    },
    {
      "lat": 41.313084,
      "lng": 34.67234,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090952,
      "hd": 292
    },
    {
      "lat": 41.311172,
      "lng": 34.678612,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090950,
      "hd": 287
    },
    {
      "lat": 41.309647,
      "lng": 34.684334,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090948,
      "hd": 285
    },
    {
      "lat": 41.308109,
      "lng": 34.690117,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090946,
      "hd": 287
    },
    {
      "lat": 41.303005,
      "lng": 34.697102,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090942,
      "hd": 241
    },
    {
      "lat": 41.304028,
      "lng": 34.705402,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090940,
      "hd": 289
    },
    {
      "lat": 41.302784,
      "lng": 34.710171,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090938,
      "hd": 289
    },
    {
      "lat": 41.300125,
      "lng": 34.718697,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090936,
      "hd": 288
    },
    {
      "lat": 41.297981,
      "lng": 34.728081,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090933,
      "hd": 288
    },
    {
      "lat": 41.296516,
      "lng": 34.733788,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090930,
      "hd": 290
    },
    {
      "lat": 41.29285,
      "lng": 34.747314,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090926,
      "hd": 286
    },
    {
      "lat": 41.291767,
      "lng": 34.752068,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090924,
      "hd": 291
    },
    {
      "lat": 41.289829,
      "lng": 34.75869,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090922,
      "hd": 290
    },
    {
      "lat": 41.287819,
      "lng": 34.766003,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090919,
      "hd": 291
    },
    {
      "lat": 41.286686,
      "lng": 34.770164,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090917,
      "hd": 289
    },
    {
      "lat": 41.284374,
      "lng": 34.778793,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090915,
      "hd": 289
    },
    {
      "lat": 41.282658,
      "lng": 34.785355,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090913,
      "hd": 289
    },
    {
      "lat": 41.281002,
      "lng": 34.791737,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090910,
      "hd": 289
    },
    {
      "lat": 41.279114,
      "lng": 34.798721,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090908,
      "hd": 289
    },
    {
      "lat": 41.277493,
      "lng": 34.804554,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090906,
      "hd": 289
    },
    {
      "lat": 41.276024,
      "lng": 34.810295,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090904,
      "hd": 289
    },
    {
      "lat": 41.274563,
      "lng": 34.81601,
      "alt": 36025,
      "spd": 496,
      "ts": 1765090902,
      "hd": 290
    },
    {
      "lat": 41.272942,
      "lng": 34.821423,
      "alt": 36025,
      "spd": 496,
      "ts": 1765090900,
      "hd": 286
    },
    {
      "lat": 41.271748,
      "lng": 34.826687,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090897,
      "hd": 286
    },
    {
      "lat": 41.27037,
      "lng": 34.833271,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090895,
      "hd": 288
    },
    {
      "lat": 41.269085,
      "lng": 34.837208,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090893,
      "hd": 291
    },
    {
      "lat": 41.265251,
      "lng": 34.850681,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090890,
      "hd": 289
    },
    {
      "lat": 41.263882,
      "lng": 34.855656,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090888,
      "hd": 289
    },
    {
      "lat": 41.261967,
      "lng": 34.862728,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090886,
      "hd": 289
    },
    {
      "lat": 41.260323,
      "lng": 34.86898,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090883,
      "hd": 280
    },
    {
      "lat": 41.25848,
      "lng": 34.876141,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090881,
      "hd": 289
    },
    {
      "lat": 41.256233,
      "lng": 34.884369,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090878,
      "hd": 289
    },
    {
      "lat": 41.254807,
      "lng": 34.889599,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090876,
      "hd": 289
    },
    {
      "lat": 41.252373,
      "lng": 34.898567,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090873,
      "hd": 288
    },
    {
      "lat": 41.250763,
      "lng": 34.904503,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090871,
      "hd": 289
    },
    {
      "lat": 41.24921,
      "lng": 34.910294,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090869,
      "hd": 289
    },
    {
      "lat": 41.24754,
      "lng": 34.916782,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090867,
      "hd": 262
    },
    {
      "lat": 41.24704,
      "lng": 34.921215,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090864,
      "hd": 298
    },
    {
      "lat": 41.244656,
      "lng": 34.928543,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090862,
      "hd": 287
    },
    {
      "lat": 41.243378,
      "lng": 34.934334,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090860,
      "hd": 290
    },
    {
      "lat": 41.241051,
      "lng": 34.941055,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090858,
      "hd": 290
    },
    {
      "lat": 41.239025,
      "lng": 34.948334,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090856,
      "hd": 289
    },
    {
      "lat": 41.237549,
      "lng": 34.95435,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090854,
      "hd": 262
    },
    {
      "lat": 41.235542,
      "lng": 34.961494,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090851,
      "hd": 290
    },
    {
      "lat": 41.233963,
      "lng": 34.967159,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090849,
      "hd": 291
    },
    {
      "lat": 41.233612,
      "lng": 34.970161,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090847,
      "hd": 289
    },
    {
      "lat": 41.23148,
      "lng": 34.977966,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090845,
      "hd": 289
    },
    {
      "lat": 41.229664,
      "lng": 34.984245,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090843,
      "hd": 288
    },
    {
      "lat": 41.228188,
      "lng": 34.990059,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090841,
      "hd": 288
    },
    {
      "lat": 41.226536,
      "lng": 34.996414,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090839,
      "hd": 286
    },
    {
      "lat": 41.224049,
      "lng": 35.003239,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090836,
      "hd": 287
    },
    {
      "lat": 41.222431,
      "lng": 35.00993,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090834,
      "hd": 280
    },
    {
      "lat": 41.22073,
      "lng": 35.015781,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090832,
      "hd": 287
    },
    {
      "lat": 41.219692,
      "lng": 35.021431,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090830,
      "hd": 288
    },
    {
      "lat": 41.217972,
      "lng": 35.027966,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090828,
      "hd": 289
    },
    {
      "lat": 41.216518,
      "lng": 35.033772,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090826,
      "hd": 291
    },
    {
      "lat": 41.214508,
      "lng": 35.040466,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090823,
      "hd": 286
    },
    {
      "lat": 41.21283,
      "lng": 35.046509,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090821,
      "hd": 289
    },
    {
      "lat": 41.199612,
      "lng": 35.094273,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090805,
      "hd": 287
    },
    {
      "lat": 41.176571,
      "lng": 35.180138,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090774,
      "hd": 289
    },
    {
      "lat": 41.151207,
      "lng": 35.273796,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090742,
      "hd": 289
    },
    {
      "lat": 41.149509,
      "lng": 35.280025,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090740,
      "hd": 289
    },
    {
      "lat": 41.147678,
      "lng": 35.286724,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090737,
      "hd": 289
    },
    {
      "lat": 41.146416,
      "lng": 35.291599,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090735,
      "hd": 290
    },
    {
      "lat": 41.14447,
      "lng": 35.298428,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090733,
      "hd": 289
    },
    {
      "lat": 41.142887,
      "lng": 35.303993,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090731,
      "hd": 289
    },
    {
      "lat": 41.141098,
      "lng": 35.310619,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090729,
      "hd": 289
    },
    {
      "lat": 41.139011,
      "lng": 35.318146,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090727,
      "hd": 289
    },
    {
      "lat": 41.137405,
      "lng": 35.324329,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090724,
      "hd": 289
    },
    {
      "lat": 41.135738,
      "lng": 35.330528,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090722,
      "hd": 289
    },
    {
      "lat": 41.133995,
      "lng": 35.337139,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090720,
      "hd": 288
    },
    {
      "lat": 41.132618,
      "lng": 35.34248,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090718,
      "hd": 288
    },
    {
      "lat": 41.131031,
      "lng": 35.348701,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090716,
      "hd": 293
    },
    {
      "lat": 41.129101,
      "lng": 35.355228,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090713,
      "hd": 289
    },
    {
      "lat": 41.127491,
      "lng": 35.361279,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090711,
      "hd": 289
    },
    {
      "lat": 41.125778,
      "lng": 35.367691,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090709,
      "hd": 289
    },
    {
      "lat": 41.124039,
      "lng": 35.374058,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090707,
      "hd": 289
    },
    {
      "lat": 41.12236,
      "lng": 35.38047,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090704,
      "hd": 289
    },
    {
      "lat": 41.120758,
      "lng": 35.386444,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090702,
      "hd": 289
    },
    {
      "lat": 41.119019,
      "lng": 35.392803,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090700,
      "hd": 289
    },
    {
      "lat": 41.117077,
      "lng": 35.40033,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090698,
      "hd": 293
    },
    {
      "lat": 41.115337,
      "lng": 35.406155,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090695,
      "hd": 288
    },
    {
      "lat": 41.113712,
      "lng": 35.412346,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090693,
      "hd": 289
    },
    {
      "lat": 41.111988,
      "lng": 35.418434,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090691,
      "hd": 288
    },
    {
      "lat": 41.110348,
      "lng": 35.424706,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090689,
      "hd": 288
    },
    {
      "lat": 41.108944,
      "lng": 35.43042,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090687,
      "hd": 289
    },
    {
      "lat": 41.107246,
      "lng": 35.436237,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090685,
      "hd": 287
    },
    {
      "lat": 41.100281,
      "lng": 35.462215,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090676,
      "hd": 290
    },
    {
      "lat": 41.09837,
      "lng": 35.469101,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090673,
      "hd": 290
    },
    {
      "lat": 41.095108,
      "lng": 35.481304,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090669,
      "hd": 289
    },
    {
      "lat": 41.094021,
      "lng": 35.48539,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090667,
      "hd": 289
    },
    {
      "lat": 41.091873,
      "lng": 35.493374,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090665,
      "hd": 289
    },
    {
      "lat": 41.090328,
      "lng": 35.499111,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090662,
      "hd": 289
    },
    {
      "lat": 41.08876,
      "lng": 35.505016,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090660,
      "hd": 289
    },
    {
      "lat": 41.087109,
      "lng": 35.511131,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090658,
      "hd": 289
    },
    {
      "lat": 41.085312,
      "lng": 35.517639,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090656,
      "hd": 289
    },
    {
      "lat": 41.083714,
      "lng": 35.523556,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090654,
      "hd": 289
    },
    {
      "lat": 41.082062,
      "lng": 35.529827,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090652,
      "hd": 289
    },
    {
      "lat": 41.080368,
      "lng": 35.536407,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090649,
      "hd": 290
    },
    {
      "lat": 41.078911,
      "lng": 35.541374,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090647,
      "hd": 287
    },
    {
      "lat": 41.077244,
      "lng": 35.548058,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090645,
      "hd": 290
    },
    {
      "lat": 41.07523,
      "lng": 35.555283,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090643,
      "hd": 289
    },
    {
      "lat": 41.073658,
      "lng": 35.560905,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090641,
      "hd": 287
    },
    {
      "lat": 41.071819,
      "lng": 35.567493,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090639,
      "hd": 290
    },
    {
      "lat": 41.070618,
      "lng": 35.572411,
      "alt": 36000,
      "spd": 492,
      "ts": 1765090636,
      "hd": 292
    },
    {
      "lat": 41.051628,
      "lng": 35.641518,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090612,
      "hd": 289
    },
    {
      "lat": 41.049915,
      "lng": 35.64764,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090610,
      "hd": 289
    },
    {
      "lat": 41.048393,
      "lng": 35.653168,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090608,
      "hd": 289
    },
    {
      "lat": 41.046616,
      "lng": 35.65987,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090606,
      "hd": 289
    },
    {
      "lat": 41.044815,
      "lng": 35.666576,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090603,
      "hd": 290
    },
    {
      "lat": 41.043209,
      "lng": 35.672508,
      "alt": 36000,
      "spd": 494,
      "ts": 1765090601,
      "hd": 290
    },
    {
      "lat": 41.041458,
      "lng": 35.678658,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090599,
      "hd": 290
    },
    {
      "lat": 41.039635,
      "lng": 35.68523,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090597,
      "hd": 290
    },
    {
      "lat": 41.038052,
      "lng": 35.691063,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090595,
      "hd": 290
    },
    {
      "lat": 41.036209,
      "lng": 35.697575,
      "alt": 36000,
      "spd": 496,
      "ts": 1765090593,
      "hd": 289
    },
    {
      "lat": 41.034771,
      "lng": 35.703026,
      "alt": 36000,
      "spd": 498,
      "ts": 1765090591,
      "hd": 291
    },
    {
      "lat": 41.032738,
      "lng": 35.710094,
      "alt": 35975,
      "spd": 498,
      "ts": 1765090588,
      "hd": 290
    },
    {
      "lat": 41.030174,
      "lng": 35.718952,
      "alt": 35975,
      "spd": 498,
      "ts": 1765090585,
      "hd": 287
    },
    {
      "lat": 41.028469,
      "lng": 35.725735,
      "alt": 35950,
      "spd": 498,
      "ts": 1765090583,
      "hd": 291
    },
    {
      "lat": 41.026669,
      "lng": 35.731937,
      "alt": 35925,
      "spd": 498,
      "ts": 1765090581,
      "hd": 287
    },
    {
      "lat": 41.024982,
      "lng": 35.737801,
      "alt": 35900,
      "spd": 498,
      "ts": 1765090578,
      "hd": 290
    },
    {
      "lat": 41.024017,
      "lng": 35.74152,
      "alt": 35875,
      "spd": 498,
      "ts": 1765090576,
      "hd": 291
    },
    {
      "lat": 41.022045,
      "lng": 35.748699,
      "alt": 35825,
      "spd": 498,
      "ts": 1765090574,
      "hd": 290
    },
    {
      "lat": 41.019951,
      "lng": 35.756084,
      "alt": 35800,
      "spd": 498,
      "ts": 1765090572,
      "hd": 289
    },
    {
      "lat": 41.018402,
      "lng": 35.761879,
      "alt": 35725,
      "spd": 498,
      "ts": 1765090570,
      "hd": 288
    },
    {
      "lat": 41.016483,
      "lng": 35.768307,
      "alt": 35675,
      "spd": 498,
      "ts": 1765090568,
      "hd": 287
    },
    {
      "lat": 41.015064,
      "lng": 35.773769,
      "alt": 35600,
      "spd": 498,
      "ts": 1765090566,
      "hd": 290
    },
    {
      "lat": 41.013214,
      "lng": 35.780373,
      "alt": 35550,
      "spd": 498,
      "ts": 1765090564,
      "hd": 290
    },
    {
      "lat": 41.011738,
      "lng": 35.785755,
      "alt": 35500,
      "spd": 500,
      "ts": 1765090561,
      "hd": 290
    },
    {
      "lat": 41.009975,
      "lng": 35.792122,
      "alt": 35425,
      "spd": 500,
      "ts": 1765090559,
      "hd": 290
    },
    {
      "lat": 41.008228,
      "lng": 35.79871,
      "alt": 35350,
      "spd": 500,
      "ts": 1765090557,
      "hd": 291
    },
    {
      "lat": 41.006531,
      "lng": 35.804863,
      "alt": 35300,
      "spd": 502,
      "ts": 1765090555,
      "hd": 291
    },
    {
      "lat": 41.004425,
      "lng": 35.811161,
      "alt": 35225,
      "spd": 502,
      "ts": 1765090553,
      "hd": 283
    },
    {
      "lat": 41.003265,
      "lng": 35.816254,
      "alt": 35125,
      "spd": 504,
      "ts": 1765090551,
      "hd": 286
    },
    {
      "lat": 41.001366,
      "lng": 35.823536,
      "alt": 35050,
      "spd": 504,
      "ts": 1765090549,
      "hd": 290
    },
    {
      "lat": 41.000004,
      "lng": 35.828934,
      "alt": 34975,
      "spd": 504,
      "ts": 1765090546,
      "hd": 291
    },
    {
      "lat": 40.998024,
      "lng": 35.835644,
      "alt": 34875,
      "spd": 506,
      "ts": 1765090544,
      "hd": 292
    },
    {
      "lat": 40.996311,
      "lng": 35.841629,
      "alt": 34750,
      "spd": 508,
      "ts": 1765090542,
      "hd": 289
    },
    {
      "lat": 40.994392,
      "lng": 35.849026,
      "alt": 34625,
      "spd": 508,
      "ts": 1765090540,
      "hd": 290
    },
    {
      "lat": 40.993114,
      "lng": 35.853691,
      "alt": 34550,
      "spd": 510,
      "ts": 1765090538,
      "hd": 293
    },
    {
      "lat": 40.991104,
      "lng": 35.860626,
      "alt": 34475,
      "spd": 512,
      "ts": 1765090536,
      "hd": 290
    },
    {
      "lat": 40.989223,
      "lng": 35.867363,
      "alt": 34400,
      "spd": 512,
      "ts": 1765090534,
      "hd": 288
    },
    {
      "lat": 40.987457,
      "lng": 35.873924,
      "alt": 34325,
      "spd": 512,
      "ts": 1765090531,
      "hd": 291
    },
    {
      "lat": 40.98584,
      "lng": 35.879288,
      "alt": 34250,
      "spd": 512,
      "ts": 1765090529,
      "hd": 290
    },
    {
      "lat": 40.983742,
      "lng": 35.886806,
      "alt": 34200,
      "spd": 514,
      "ts": 1765090527,
      "hd": 289
    },
    {
      "lat": 40.981998,
      "lng": 35.893005,
      "alt": 34150,
      "spd": 514,
      "ts": 1765090525,
      "hd": 288
    },
    {
      "lat": 40.980328,
      "lng": 35.899433,
      "alt": 34100,
      "spd": 514,
      "ts": 1765090523,
      "hd": 293
    },
    {
      "lat": 40.97834,
      "lng": 35.906559,
      "alt": 34050,
      "spd": 514,
      "ts": 1765090520,
      "hd": 294
    },
    {
      "lat": 40.976078,
      "lng": 35.914013,
      "alt": 34025,
      "spd": 514,
      "ts": 1765090518,
      "hd": 285
    },
    {
      "lat": 40.97451,
      "lng": 35.920208,
      "alt": 34025,
      "spd": 514,
      "ts": 1765090515,
      "hd": 292
    },
    {
      "lat": 40.972771,
      "lng": 35.925808,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090513,
      "hd": 288
    },
    {
      "lat": 40.961716,
      "lng": 35.965527,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090500,
      "hd": 289
    },
    {
      "lat": 40.936523,
      "lng": 36.05555,
      "alt": 33975,
      "spd": 516,
      "ts": 1765090470,
      "hd": 290
    },
    {
      "lat": 40.934555,
      "lng": 36.062111,
      "alt": 33975,
      "spd": 516,
      "ts": 1765090467,
      "hd": 290
    },
    {
      "lat": 40.933311,
      "lng": 36.066551,
      "alt": 33975,
      "spd": 516,
      "ts": 1765090465,
      "hd": 290
    },
    {
      "lat": 40.930965,
      "lng": 36.074741,
      "alt": 34000,
      "spd": 516,
      "ts": 1765090463,
      "hd": 290
    },
    {
      "lat": 40.929173,
      "lng": 36.08115,
      "alt": 34000,
      "spd": 516,
      "ts": 1765090461,
      "hd": 290
    },
    {
      "lat": 40.927612,
      "lng": 36.086868,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090459,
      "hd": 290
    },
    {
      "lat": 40.92601,
      "lng": 36.092674,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090457,
      "hd": 290
    },
    {
      "lat": 40.923748,
      "lng": 36.100475,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090455,
      "hd": 290
    },
    {
      "lat": 40.921906,
      "lng": 36.106998,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090452,
      "hd": 289
    },
    {
      "lat": 40.921112,
      "lng": 36.109943,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090450,
      "hd": 290
    },
    {
      "lat": 40.914951,
      "lng": 36.131958,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090444,
      "hd": 291
    },
    {
      "lat": 40.913948,
      "lng": 36.135872,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090441,
      "hd": 294
    },
    {
      "lat": 40.911182,
      "lng": 36.144974,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090439,
      "hd": 290
    },
    {
      "lat": 40.909485,
      "lng": 36.151192,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090437,
      "hd": 290
    },
    {
      "lat": 40.90802,
      "lng": 36.156265,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090435,
      "hd": 290
    },
    {
      "lat": 40.906464,
      "lng": 36.161667,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090433,
      "hd": 291
    },
    {
      "lat": 40.904255,
      "lng": 36.170204,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090431,
      "hd": 294
    },
    {
      "lat": 40.902584,
      "lng": 36.175762,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090429,
      "hd": 290
    },
    {
      "lat": 40.900799,
      "lng": 36.182171,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090426,
      "hd": 284
    },
    {
      "lat": 40.898937,
      "lng": 36.188534,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090424,
      "hd": 288
    },
    {
      "lat": 40.897461,
      "lng": 36.194138,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090422,
      "hd": 290
    },
    {
      "lat": 40.89537,
      "lng": 36.201431,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090420,
      "hd": 290
    },
    {
      "lat": 40.893681,
      "lng": 36.207664,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090418,
      "hd": 290
    },
    {
      "lat": 40.891891,
      "lng": 36.213905,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090415,
      "hd": 292
    },
    {
      "lat": 40.889973,
      "lng": 36.220829,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090413,
      "hd": 290
    },
    {
      "lat": 40.888355,
      "lng": 36.226719,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090411,
      "hd": 291
    },
    {
      "lat": 40.886879,
      "lng": 36.231529,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090409,
      "hd": 289
    },
    {
      "lat": 40.884586,
      "lng": 36.239872,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090407,
      "hd": 290
    },
    {
      "lat": 40.883003,
      "lng": 36.245316,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090405,
      "hd": 290
    },
    {
      "lat": 40.881359,
      "lng": 36.251476,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090403,
      "hd": 294
    },
    {
      "lat": 40.878925,
      "lng": 36.259792,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090400,
      "hd": 290
    },
    {
      "lat": 40.877506,
      "lng": 36.264851,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090398,
      "hd": 290
    },
    {
      "lat": 40.875496,
      "lng": 36.271595,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090396,
      "hd": 288
    },
    {
      "lat": 40.873985,
      "lng": 36.277287,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090394,
      "hd": 290
    },
    {
      "lat": 40.872269,
      "lng": 36.283207,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090391,
      "hd": 289
    },
    {
      "lat": 40.870186,
      "lng": 36.291,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090389,
      "hd": 290
    },
    {
      "lat": 40.868462,
      "lng": 36.297195,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090387,
      "hd": 290
    },
    {
      "lat": 40.866798,
      "lng": 36.303101,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090385,
      "hd": 290
    },
    {
      "lat": 40.865108,
      "lng": 36.309093,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090383,
      "hd": 290
    },
    {
      "lat": 40.863369,
      "lng": 36.315304,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090381,
      "hd": 290
    },
    {
      "lat": 40.861351,
      "lng": 36.321953,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090378,
      "hd": 290
    },
    {
      "lat": 40.859192,
      "lng": 36.329422,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090376,
      "hd": 289
    },
    {
      "lat": 40.857693,
      "lng": 36.334919,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090374,
      "hd": 288
    },
    {
      "lat": 40.856014,
      "lng": 36.341034,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090372,
      "hd": 286
    },
    {
      "lat": 40.854733,
      "lng": 36.346863,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090370,
      "hd": 293
    },
    {
      "lat": 40.852119,
      "lng": 36.355469,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090367,
      "hd": 290
    },
    {
      "lat": 40.850296,
      "lng": 36.362255,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090365,
      "hd": 290
    },
    {
      "lat": 40.848339,
      "lng": 36.369102,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090362,
      "hd": 291
    },
    {
      "lat": 40.846565,
      "lng": 36.375027,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090360,
      "hd": 284
    },
    {
      "lat": 40.844959,
      "lng": 36.381222,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090358,
      "hd": 291
    },
    {
      "lat": 40.842697,
      "lng": 36.38921,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090355,
      "hd": 290
    },
    {
      "lat": 40.839325,
      "lng": 36.400963,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090351,
      "hd": 290
    },
    {
      "lat": 40.837624,
      "lng": 36.406963,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090349,
      "hd": 290
    },
    {
      "lat": 40.836021,
      "lng": 36.412987,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090347,
      "hd": 290
    },
    {
      "lat": 40.834118,
      "lng": 36.419601,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090345,
      "hd": 290
    },
    {
      "lat": 40.832275,
      "lng": 36.426212,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090343,
      "hd": 290
    },
    {
      "lat": 40.83062,
      "lng": 36.43224,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090341,
      "hd": 288
    },
    {
      "lat": 40.828907,
      "lng": 36.438534,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090339,
      "hd": 291
    },
    {
      "lat": 40.827564,
      "lng": 36.443375,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090336,
      "hd": 292
    },
    {
      "lat": 40.826237,
      "lng": 36.447876,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090334,
      "hd": 292
    },
    {
      "lat": 40.823879,
      "lng": 36.455891,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090332,
      "hd": 289
    },
    {
      "lat": 40.822842,
      "lng": 36.45998,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090330,
      "hd": 289
    },
    {
      "lat": 40.818844,
      "lng": 36.474854,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090326,
      "hd": 290
    },
    {
      "lat": 40.816898,
      "lng": 36.481548,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090323,
      "hd": 290
    },
    {
      "lat": 40.815441,
      "lng": 36.487156,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090321,
      "hd": 291
    },
    {
      "lat": 40.813023,
      "lng": 36.495403,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090319,
      "hd": 292
    },
    {
      "lat": 40.811298,
      "lng": 36.501484,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090317,
      "hd": 297
    },
    {
      "lat": 40.809277,
      "lng": 36.508327,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090314,
      "hd": 284
    },
    {
      "lat": 40.807549,
      "lng": 36.514736,
      "alt": 34025,
      "spd": 514,
      "ts": 1765090312,
      "hd": 291
    },
    {
      "lat": 40.805546,
      "lng": 36.521053,
      "alt": 34000,
      "spd": 514,
      "ts": 1765090310,
      "hd": 285
    },
    {
      "lat": 40.788906,
      "lng": 36.581337,
      "alt": 33975,
      "spd": 512,
      "ts": 1765090290,
      "hd": 290
    },
    {
      "lat": 40.786835,
      "lng": 36.588612,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090287,
      "hd": 290
    },
    {
      "lat": 40.784714,
      "lng": 36.595844,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090285,
      "hd": 290
    },
    {
      "lat": 40.782852,
      "lng": 36.602325,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090283,
      "hd": 290
    },
    {
      "lat": 40.780857,
      "lng": 36.609234,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090280,
      "hd": 290
    },
    {
      "lat": 40.779026,
      "lng": 36.615463,
      "alt": 34000,
      "spd": 512,
      "ts": 1765090278,
      "hd": 290
    },
    {
      "lat": 40.777027,
      "lng": 36.62252,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090276,
      "hd": 290
    },
    {
      "lat": 40.775352,
      "lng": 36.628605,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090273,
      "hd": 290
    },
    {
      "lat": 40.773788,
      "lng": 36.634357,
      "alt": 34000,
      "spd": 510,
      "ts": 1765090271,
      "hd": 291
    },
    {
      "lat": 40.772034,
      "lng": 36.640228,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090269,
      "hd": 290
    },
    {
      "lat": 40.770123,
      "lng": 36.646671,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090267,
      "hd": 290
    },
    {
      "lat": 40.768127,
      "lng": 36.653702,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090265,
      "hd": 290
    },
    {
      "lat": 40.766323,
      "lng": 36.659672,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090263,
      "hd": 289
    },
    {
      "lat": 40.764721,
      "lng": 36.665363,
      "alt": 34000,
      "spd": 508,
      "ts": 1765090261,
      "hd": 282
    },
    {
      "lat": 40.755348,
      "lng": 36.698971,
      "alt": 34000,
      "spd": 506,
      "ts": 1765090249,
      "hd": 290
    },
    {
      "lat": 40.753452,
      "lng": 36.705441,
      "alt": 34000,
      "spd": 506,
      "ts": 1765090247,
      "hd": 290
    },
    {
      "lat": 40.752075,
      "lng": 36.710339,
      "alt": 34000,
      "spd": 506,
      "ts": 1765090245,
      "hd": 290
    },
    {
      "lat": 40.750111,
      "lng": 36.717274,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090243,
      "hd": 291
    },
    {
      "lat": 40.747936,
      "lng": 36.724556,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090240,
      "hd": 291
    },
    {
      "lat": 40.746265,
      "lng": 36.730049,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090238,
      "hd": 290
    },
    {
      "lat": 40.744137,
      "lng": 36.737438,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090236,
      "hd": 289
    },
    {
      "lat": 40.742523,
      "lng": 36.743694,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090234,
      "hd": 291
    },
    {
      "lat": 40.74086,
      "lng": 36.749466,
      "alt": 34025,
      "spd": 504,
      "ts": 1765090231,
      "hd": 291
    },
    {
      "lat": 40.738701,
      "lng": 36.756489,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090229,
      "hd": 290
    },
    {
      "lat": 40.737122,
      "lng": 36.762276,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090227,
      "hd": 291
    },
    {
      "lat": 40.735313,
      "lng": 36.768532,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090225,
      "hd": 291
    },
    {
      "lat": 40.733437,
      "lng": 36.774868,
      "alt": 34000,
      "spd": 504,
      "ts": 1765090223,
      "hd": 291
    },
    {
      "lat": 40.731846,
      "lng": 36.779499,
      "alt": 34000,
      "spd": 502,
      "ts": 1765090221,
      "hd": 288
    },
    {
      "lat": 40.730511,
      "lng": 36.785297,
      "alt": 34000,
      "spd": 502,
      "ts": 1765090218,
      "hd": 292
    },
    {
      "lat": 40.728077,
      "lng": 36.792843,
      "alt": 34000,
      "spd": 502,
      "ts": 1765090216,
      "hd": 280
    },
    {
      "lat": 40.715698,
      "lng": 36.836971,
      "alt": 34000,
      "spd": 502,
      "ts": 1765090200,
      "hd": 290
    },
    {
      "lat": 40.689926,
      "lng": 36.92625,
      "alt": 34000,
      "spd": 498,
      "ts": 1765090169,
      "hd": 290
    },
    {
      "lat": 40.664639,
      "lng": 37.012939,
      "alt": 34000,
      "spd": 495,
      "ts": 1765090138,
      "hd": 290
    },
    {
      "lat": 40.638153,
      "lng": 37.104187,
      "alt": 34000,
      "spd": 493,
      "ts": 1765090105,
      "hd": 290
    },
    {
      "lat": 40.611923,
      "lng": 37.194214,
      "alt": 34000,
      "spd": 489,
      "ts": 1765090073,
      "hd": 290
    },
    {
      "lat": 40.586102,
      "lng": 37.282604,
      "alt": 34000,
      "spd": 489,
      "ts": 1765090041,
      "hd": 291
    },
    {
      "lat": 40.561111,
      "lng": 37.36792,
      "alt": 34000,
      "spd": 486,
      "ts": 1765090010,
      "hd": 291
    },
    {
      "lat": 40.536667,
      "lng": 37.451294,
      "alt": 34000,
      "spd": 484,
      "ts": 1765089980,
      "hd": 291
    },
    {
      "lat": 40.510967,
      "lng": 37.538662,
      "alt": 34000,
      "spd": 486,
      "ts": 1765089948,
      "hd": 291
    },
    {
      "lat": 40.484108,
      "lng": 37.626301,
      "alt": 33975,
      "spd": 489,
      "ts": 1765089916,
      "hd": 294
    },
    {
      "lat": 40.482151,
      "lng": 37.631981,
      "alt": 34000,
      "spd": 490,
      "ts": 1765089914,
      "hd": 295
    },
    {
      "lat": 40.477917,
      "lng": 37.64328,
      "alt": 34000,
      "spd": 492,
      "ts": 1765089910,
      "hd": 297
    },
    {
      "lat": 40.476147,
      "lng": 37.6479,
      "alt": 34000,
      "spd": 492,
      "ts": 1765089908,
      "hd": 297
    },
    {
      "lat": 40.471306,
      "lng": 37.659946,
      "alt": 34000,
      "spd": 492,
      "ts": 1765089903,
      "hd": 298
    },
    {
      "lat": 40.466995,
      "lng": 37.670105,
      "alt": 34000,
      "spd": 492,
      "ts": 1765089899,
      "hd": 300
    },
    {
      "lat": 40.425751,
      "lng": 37.747925,
      "alt": 34000,
      "spd": 502,
      "ts": 1765089868,
      "hd": 308
    },
    {
      "lat": 40.378246,
      "lng": 37.826176,
      "alt": 34000,
      "spd": 500,
      "ts": 1765089835,
      "hd": 308
    },
    {
      "lat": 40.331543,
      "lng": 37.902344,
      "alt": 34000,
      "spd": 500,
      "ts": 1765089802,
      "hd": 308
    },
    {
      "lat": 40.287006,
      "lng": 37.974743,
      "alt": 34000,
      "spd": 500,
      "ts": 1765089772,
      "hd": 308
    },
    {
      "lat": 40.240036,
      "lng": 38.051208,
      "alt": 34000,
      "spd": 497,
      "ts": 1765089739,
      "hd": 308
    },
    {
      "lat": 40.192978,
      "lng": 38.12738,
      "alt": 34000,
      "spd": 494,
      "ts": 1765089707,
      "hd": 308
    },
    {
      "lat": 40.149673,
      "lng": 38.197388,
      "alt": 34000,
      "spd": 495,
      "ts": 1765089676,
      "hd": 308
    },
    {
      "lat": 40.103897,
      "lng": 38.271423,
      "alt": 34000,
      "spd": 492,
      "ts": 1765089645,
      "hd": 308
    },
    {
      "lat": 40.058075,
      "lng": 38.345093,
      "alt": 34000,
      "spd": 491,
      "ts": 1765089612,
      "hd": 309
    },
    {
      "lat": 40.011509,
      "lng": 38.420002,
      "alt": 34000,
      "spd": 490,
      "ts": 1765089580,
      "hd": 308
    },
    {
      "lat": 39.967392,
      "lng": 38.490723,
      "alt": 34000,
      "spd": 490,
      "ts": 1765089549,
      "hd": 309
    },
    {
      "lat": 39.920975,
      "lng": 38.564461,
      "alt": 34000,
      "spd": 489,
      "ts": 1765089517,
      "hd": 309
    },
    {
      "lat": 39.877159,
      "lng": 38.634033,
      "alt": 34000,
      "spd": 489,
      "ts": 1765089486,
      "hd": 309
    },
    {
      "lat": 39.83289,
      "lng": 38.704041,
      "alt": 34000,
      "spd": 490,
      "ts": 1765089456,
      "hd": 309
    },
    {
      "lat": 39.787033,
      "lng": 38.776794,
      "alt": 34000,
      "spd": 488,
      "ts": 1765089423,
      "hd": 309
    },
    {
      "lat": 39.740524,
      "lng": 38.8507,
      "alt": 34000,
      "spd": 488,
      "ts": 1765089391,
      "hd": 309
    },
    {
      "lat": 39.656479,
      "lng": 38.983791,
      "alt": 33050,
      "spd": 494,
      "ts": 1765089334,
      "hd": 309
    },
    {
      "lat": 39.63113,
      "lng": 39.023865,
      "alt": 32975,
      "spd": 490,
      "ts": 1765089315,
      "hd": 309
    },
    {
      "lat": 39.584015,
      "lng": 39.098194,
      "alt": 33025,
      "spd": 483,
      "ts": 1765089282,
      "hd": 309
    },
    {
      "lat": 39.538025,
      "lng": 39.170288,
      "alt": 33000,
      "spd": 480,
      "ts": 1765089249,
      "hd": 309
    },
    {
      "lat": 39.494175,
      "lng": 39.238586,
      "alt": 33000,
      "spd": 483,
      "ts": 1765089218,
      "hd": 309
    },
    {
      "lat": 39.449524,
      "lng": 39.30777,
      "alt": 33000,
      "spd": 491,
      "ts": 1765089187,
      "hd": 309
    },
    {
      "lat": 39.401859,
      "lng": 39.38092,
      "alt": 33000,
      "spd": 493,
      "ts": 1765089155,
      "hd": 309
    },
    {
      "lat": 39.354584,
      "lng": 39.453754,
      "alt": 33000,
      "spd": 494,
      "ts": 1765089123,
      "hd": 309
    },
    {
      "lat": 38.752903,
      "lng": 40.373196,
      "alt": 33000,
      "spd": 470,
      "ts": 1765088708,
      "hd": 311
    },
    {
      "lat": 37.087399,
      "lng": 42.702782,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087579,
      "hd": 317
    },
    {
      "lat": 37.08181,
      "lng": 42.709263,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087575,
      "hd": 314
    },
    {
      "lat": 37.078682,
      "lng": 42.712475,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087573,
      "hd": 321
    },
    {
      "lat": 37.074089,
      "lng": 42.716564,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087571,
      "hd": 307
    },
    {
      "lat": 37.070396,
      "lng": 42.720387,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087569,
      "hd": 334
    },
    {
      "lat": 37.066807,
      "lng": 42.723625,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087567,
      "hd": 335
    },
    {
      "lat": 37.063305,
      "lng": 42.727306,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087564,
      "hd": 331
    },
    {
      "lat": 37.058907,
      "lng": 42.731632,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087562,
      "hd": 320
    },
    {
      "lat": 37.054611,
      "lng": 42.735634,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087560,
      "hd": 311
    },
    {
      "lat": 37.05172,
      "lng": 42.73954,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087558,
      "hd": 314
    },
    {
      "lat": 37.047585,
      "lng": 42.742592,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087555,
      "hd": 316
    },
    {
      "lat": 37.044769,
      "lng": 42.745838,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087553,
      "hd": 325
    },
    {
      "lat": 37.039547,
      "lng": 42.750408,
      "alt": 32000,
      "spd": 474,
      "ts": 1765087551,
      "hd": 319
    },
    {
      "lat": 37.036633,
      "lng": 42.75399,
      "alt": 32000,
      "spd": 476,
      "ts": 1765087549,
      "hd": 320
    },
    {
      "lat": 37.030186,
      "lng": 42.75967,
      "alt": 32000,
      "spd": 476,
      "ts": 1765087545,
      "hd": 316
    },
    {
      "lat": 36.99868,
      "lng": 42.786232,
      "alt": 32000,
      "spd": 480,
      "ts": 1765087528,
      "hd": 328
    },
    {
      "lat": 36.949032,
      "lng": 42.8246,
      "alt": 32000,
      "spd": 484,
      "ts": 1765087502,
      "hd": 338
    },
    {
      "lat": 36.94326,
      "lng": 42.827229,
      "alt": 32000,
      "spd": 486,
      "ts": 1765087500,
      "hd": 331
    },
    {
      "lat": 36.926498,
      "lng": 42.838722,
      "alt": 32000,
      "spd": 486,
      "ts": 1765087491,
      "hd": 334
    },
    {
      "lat": 36.923363,
      "lng": 42.840096,
      "alt": 32000,
      "spd": 486,
      "ts": 1765087489,
      "hd": 323
    },
    {
      "lat": 36.919033,
      "lng": 42.842964,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087487,
      "hd": 335
    },
    {
      "lat": 36.898827,
      "lng": 42.854679,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087477,
      "hd": 336
    },
    {
      "lat": 36.885448,
      "lng": 42.862003,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087471,
      "hd": 336
    },
    {
      "lat": 36.881268,
      "lng": 42.864204,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087469,
      "hd": 340
    },
    {
      "lat": 36.876957,
      "lng": 42.866692,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087467,
      "hd": 327
    },
    {
      "lat": 36.840462,
      "lng": 42.888344,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087448,
      "hd": 337
    },
    {
      "lat": 36.812485,
      "lng": 42.904816,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087435,
      "hd": 337
    },
    {
      "lat": 36.800629,
      "lng": 42.910961,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087429,
      "hd": 337
    },
    {
      "lat": 36.788025,
      "lng": 42.917351,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087424,
      "hd": 329
    },
    {
      "lat": 36.783539,
      "lng": 42.919762,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087422,
      "hd": 317
    },
    {
      "lat": 36.780113,
      "lng": 42.922306,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087420,
      "hd": 332
    },
    {
      "lat": 36.773621,
      "lng": 42.926353,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087417,
      "hd": 347
    },
    {
      "lat": 36.769062,
      "lng": 42.92894,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087414,
      "hd": 343
    },
    {
      "lat": 36.762653,
      "lng": 42.932114,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087412,
      "hd": 337
    },
    {
      "lat": 36.758591,
      "lng": 42.934498,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087410,
      "hd": 336
    },
    {
      "lat": 36.754154,
      "lng": 42.937176,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087407,
      "hd": 338
    },
    {
      "lat": 36.749641,
      "lng": 42.939617,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087405,
      "hd": 335
    },
    {
      "lat": 36.745014,
      "lng": 42.942318,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087403,
      "hd": 337
    },
    {
      "lat": 36.740459,
      "lng": 42.94458,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087401,
      "hd": 328
    },
    {
      "lat": 36.73584,
      "lng": 42.947838,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087399,
      "hd": 335
    },
    {
      "lat": 36.731308,
      "lng": 42.950443,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087397,
      "hd": 336
    },
    {
      "lat": 36.727314,
      "lng": 42.9533,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087394,
      "hd": 334
    },
    {
      "lat": 36.721531,
      "lng": 42.955502,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087392,
      "hd": 335
    },
    {
      "lat": 36.71693,
      "lng": 42.958035,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087390,
      "hd": 335
    },
    {
      "lat": 36.712765,
      "lng": 42.960346,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087388,
      "hd": 337
    },
    {
      "lat": 36.70842,
      "lng": 42.963139,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087386,
      "hd": 330
    },
    {
      "lat": 36.704651,
      "lng": 42.966213,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087383,
      "hd": 336
    },
    {
      "lat": 36.700161,
      "lng": 42.968727,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087381,
      "hd": 336
    },
    {
      "lat": 36.696079,
      "lng": 42.971088,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087379,
      "hd": 336
    },
    {
      "lat": 36.691505,
      "lng": 42.973873,
      "alt": 31975,
      "spd": 494,
      "ts": 1765087377,
      "hd": 340
    },
    {
      "lat": 36.685806,
      "lng": 42.976311,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087375,
      "hd": 308
    },
    {
      "lat": 36.681755,
      "lng": 42.978043,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087372,
      "hd": 329
    },
    {
      "lat": 36.675934,
      "lng": 42.981842,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087370,
      "hd": 331
    },
    {
      "lat": 36.671867,
      "lng": 42.984039,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087368,
      "hd": 335
    },
    {
      "lat": 36.666656,
      "lng": 42.98682,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087366,
      "hd": 338
    },
    {
      "lat": 36.662922,
      "lng": 42.988724,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087363,
      "hd": 330
    },
    {
      "lat": 36.659214,
      "lng": 42.991352,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087361,
      "hd": 335
    },
    {
      "lat": 36.654392,
      "lng": 42.994423,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087359,
      "hd": 336
    },
    {
      "lat": 36.649269,
      "lng": 42.996731,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087357,
      "hd": 336
    },
    {
      "lat": 36.644196,
      "lng": 42.999596,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087355,
      "hd": 327
    },
    {
      "lat": 36.63969,
      "lng": 43.002228,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087352,
      "hd": 335
    },
    {
      "lat": 36.635387,
      "lng": 43.004635,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087350,
      "hd": 334
    },
    {
      "lat": 36.631359,
      "lng": 43.007122,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087348,
      "hd": 335
    },
    {
      "lat": 36.626442,
      "lng": 43.00993,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087346,
      "hd": 335
    },
    {
      "lat": 36.622345,
      "lng": 43.012344,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087344,
      "hd": 335
    },
    {
      "lat": 36.617531,
      "lng": 43.01516,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087341,
      "hd": 335
    },
    {
      "lat": 36.612038,
      "lng": 43.018269,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087339,
      "hd": 335
    },
    {
      "lat": 36.607815,
      "lng": 43.020741,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087337,
      "hd": 336
    },
    {
      "lat": 36.602783,
      "lng": 43.023346,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087334,
      "hd": 331
    },
    {
      "lat": 36.59724,
      "lng": 43.026878,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087331,
      "hd": 341
    },
    {
      "lat": 36.592312,
      "lng": 43.028996,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087329,
      "hd": 335
    },
    {
      "lat": 36.586933,
      "lng": 43.031975,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087327,
      "hd": 333
    },
    {
      "lat": 36.580383,
      "lng": 43.035904,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087324,
      "hd": 333
    },
    {
      "lat": 36.576183,
      "lng": 43.038692,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087322,
      "hd": 329
    },
    {
      "lat": 36.572098,
      "lng": 43.041649,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087319,
      "hd": 338
    },
    {
      "lat": 36.564899,
      "lng": 43.046074,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087316,
      "hd": 9
    },
    {
      "lat": 36.560577,
      "lng": 43.046913,
      "alt": 31975,
      "spd": 492,
      "ts": 1765087314,
      "hd": 331
    },
    {
      "lat": 36.555763,
      "lng": 43.050098,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087311,
      "hd": 334
    },
    {
      "lat": 36.546616,
      "lng": 43.055149,
      "alt": 32025,
      "spd": 492,
      "ts": 1765087307,
      "hd": 331
    },
    {
      "lat": 36.542995,
      "lng": 43.058044,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087305,
      "hd": 338
    },
    {
      "lat": 36.535015,
      "lng": 43.062344,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087302,
      "hd": 339
    },
    {
      "lat": 36.529827,
      "lng": 43.065315,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087299,
      "hd": 336
    },
    {
      "lat": 36.525406,
      "lng": 43.067924,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087297,
      "hd": 337
    },
    {
      "lat": 36.520775,
      "lng": 43.070419,
      "alt": 31975,
      "spd": 492,
      "ts": 1765087294,
      "hd": 337
    },
    {
      "lat": 36.5158,
      "lng": 43.072968,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087292,
      "hd": 337
    },
    {
      "lat": 36.511528,
      "lng": 43.075043,
      "alt": 32025,
      "spd": 492,
      "ts": 1765087290,
      "hd": 334
    },
    {
      "lat": 36.50798,
      "lng": 43.077309,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087288,
      "hd": 335
    },
    {
      "lat": 36.500614,
      "lng": 43.081432,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087285,
      "hd": 335
    },
    {
      "lat": 36.496895,
      "lng": 43.083782,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087283,
      "hd": 341
    },
    {
      "lat": 36.492279,
      "lng": 43.08601,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087281,
      "hd": 335
    },
    {
      "lat": 36.486324,
      "lng": 43.089195,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087278,
      "hd": 334
    },
    {
      "lat": 36.482433,
      "lng": 43.091049,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087276,
      "hd": 318
    },
    {
      "lat": 36.455551,
      "lng": 43.107414,
      "alt": 32025,
      "spd": 494,
      "ts": 1765087263,
      "hd": 335
    },
    {
      "lat": 36.388134,
      "lng": 43.145607,
      "alt": 32000,
      "spd": 496,
      "ts": 1765087231,
      "hd": 335
    },
    {
      "lat": 36.383335,
      "lng": 43.148281,
      "alt": 32000,
      "spd": 496,
      "ts": 1765087229,
      "hd": 335
    },
    {
      "lat": 36.379234,
      "lng": 43.1507,
      "alt": 32000,
      "spd": 496,
      "ts": 1765087227,
      "hd": 335
    },
    {
      "lat": 36.338383,
      "lng": 43.173817,
      "alt": 32000,
      "spd": 496,
      "ts": 1765087207,
      "hd": 336
    },
    {
      "lat": 36.334003,
      "lng": 43.17622,
      "alt": 32000,
      "spd": 496,
      "ts": 1765087205,
      "hd": 336
    },
    {
      "lat": 36.328804,
      "lng": 43.179028,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087203,
      "hd": 335
    },
    {
      "lat": 36.324093,
      "lng": 43.181568,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087200,
      "hd": 335
    },
    {
      "lat": 36.319439,
      "lng": 43.184181,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087198,
      "hd": 335
    },
    {
      "lat": 36.314941,
      "lng": 43.186714,
      "alt": 32000,
      "spd": 494,
      "ts": 1765087196,
      "hd": 335
    },
    {
      "lat": 36.310421,
      "lng": 43.189243,
      "alt": 31975,
      "spd": 494,
      "ts": 1765087194,
      "hd": 335
    },
    {
      "lat": 36.306042,
      "lng": 43.191708,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087192,
      "hd": 335
    },
    {
      "lat": 36.301117,
      "lng": 43.19445,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087189,
      "hd": 335
    },
    {
      "lat": 36.296707,
      "lng": 43.196884,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087187,
      "hd": 335
    },
    {
      "lat": 36.292709,
      "lng": 43.199215,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087185,
      "hd": 336
    },
    {
      "lat": 36.287716,
      "lng": 43.201904,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087183,
      "hd": 336
    },
    {
      "lat": 36.283554,
      "lng": 43.204109,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087181,
      "hd": 336
    },
    {
      "lat": 36.278248,
      "lng": 43.206776,
      "alt": 32000,
      "spd": 492,
      "ts": 1765087179,
      "hd": 324
    },
    {
      "lat": 36.274639,
      "lng": 43.209042,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087176,
      "hd": 342
    },
    {
      "lat": 36.269501,
      "lng": 43.211735,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087174,
      "hd": 333
    },
    {
      "lat": 36.265347,
      "lng": 43.214241,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087172,
      "hd": 335
    },
    {
      "lat": 36.262077,
      "lng": 43.216145,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087170,
      "hd": 335
    },
    {
      "lat": 36.256935,
      "lng": 43.219036,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087168,
      "hd": 335
    },
    {
      "lat": 36.251614,
      "lng": 43.222031,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087166,
      "hd": 335
    },
    {
      "lat": 36.247364,
      "lng": 43.2244,
      "alt": 32025,
      "spd": 490,
      "ts": 1765087163,
      "hd": 335
    },
    {
      "lat": 36.24332,
      "lng": 43.226456,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087161,
      "hd": 334
    },
    {
      "lat": 36.238319,
      "lng": 43.229248,
      "alt": 32025,
      "spd": 488,
      "ts": 1765087159,
      "hd": 333
    },
    {
      "lat": 36.23354,
      "lng": 43.232147,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087157,
      "hd": 332
    },
    {
      "lat": 36.229473,
      "lng": 43.234741,
      "alt": 32025,
      "spd": 488,
      "ts": 1765087155,
      "hd": 337
    },
    {
      "lat": 36.224819,
      "lng": 43.237156,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087152,
      "hd": 336
    },
    {
      "lat": 36.221004,
      "lng": 43.239162,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087150,
      "hd": 335
    },
    {
      "lat": 36.21619,
      "lng": 43.241764,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087148,
      "hd": 335
    },
    {
      "lat": 36.211102,
      "lng": 43.244766,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087146,
      "hd": 341
    },
    {
      "lat": 36.206051,
      "lng": 43.247284,
      "alt": 32000,
      "spd": 486,
      "ts": 1765087144,
      "hd": 332
    },
    {
      "lat": 36.202335,
      "lng": 43.249725,
      "alt": 32000,
      "spd": 486,
      "ts": 1765087141,
      "hd": 335
    },
    {
      "lat": 36.195175,
      "lng": 43.253719,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087138,
      "hd": 335
    },
    {
      "lat": 36.189732,
      "lng": 43.256718,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087136,
      "hd": 335
    },
    {
      "lat": 36.185547,
      "lng": 43.259064,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087134,
      "hd": 335
    },
    {
      "lat": 36.181492,
      "lng": 43.26136,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087131,
      "hd": 335
    },
    {
      "lat": 36.176395,
      "lng": 43.264206,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087129,
      "hd": 336
    },
    {
      "lat": 36.172234,
      "lng": 43.266541,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087127,
      "hd": 327
    },
    {
      "lat": 36.167473,
      "lng": 43.269222,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087125,
      "hd": 337
    },
    {
      "lat": 36.16272,
      "lng": 43.271774,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087122,
      "hd": 335
    },
    {
      "lat": 36.158363,
      "lng": 43.274258,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087120,
      "hd": 335
    },
    {
      "lat": 36.153557,
      "lng": 43.276985,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087118,
      "hd": 335
    },
    {
      "lat": 36.149818,
      "lng": 43.279076,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087116,
      "hd": 335
    },
    {
      "lat": 36.143951,
      "lng": 43.282387,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087114,
      "hd": 335
    },
    {
      "lat": 36.140152,
      "lng": 43.284416,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087111,
      "hd": 335
    },
    {
      "lat": 36.135246,
      "lng": 43.287159,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087109,
      "hd": 335
    },
    {
      "lat": 36.130947,
      "lng": 43.289589,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087107,
      "hd": 335
    },
    {
      "lat": 36.125828,
      "lng": 43.292397,
      "alt": 32000,
      "spd": 488,
      "ts": 1765087105,
      "hd": 334
    },
    {
      "lat": 36.121922,
      "lng": 43.29472,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087102,
      "hd": 334
    },
    {
      "lat": 36.117485,
      "lng": 43.297329,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087100,
      "hd": 335
    },
    {
      "lat": 36.112942,
      "lng": 43.299603,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087098,
      "hd": 332
    },
    {
      "lat": 36.109306,
      "lng": 43.301807,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087096,
      "hd": 326
    },
    {
      "lat": 36.099304,
      "lng": 43.307606,
      "alt": 32000,
      "spd": 490,
      "ts": 1765087092,
      "hd": 335
    },
    {
      "lat": 36.033276,
      "lng": 43.344364,
      "alt": 31975,
      "spd": 486,
      "ts": 1765087060,
      "hd": 335
    },
    {
      "lat": 36.028248,
      "lng": 43.347141,
      "alt": 31975,
      "spd": 486,
      "ts": 1765087057,
      "hd": 335
    },
    {
      "lat": 36.023537,
      "lng": 43.349712,
      "alt": 31975,
      "spd": 486,
      "ts": 1765087055,
      "hd": 335
    },
    {
      "lat": 36.019123,
      "lng": 43.35218,
      "alt": 31975,
      "spd": 486,
      "ts": 1765087053,
      "hd": 335
    },
    {
      "lat": 36.015633,
      "lng": 43.354107,
      "alt": 32025,
      "spd": 486,
      "ts": 1765087051,
      "hd": 335
    },
    {
      "lat": 36.011547,
      "lng": 43.3564,
      "alt": 32000,
      "spd": 486,
      "ts": 1765087049,
      "hd": 335
    },
    {
      "lat": 36.006149,
      "lng": 43.359436,
      "alt": 32000,
      "spd": 486,
      "ts": 1765087046,
      "hd": 335
    },
    {
      "lat": 36.002403,
      "lng": 43.361515,
      "alt": 32000,
      "spd": 484,
      "ts": 1765087044,
      "hd": 335
    },
    {
      "lat": 35.997093,
      "lng": 43.364471,
      "alt": 32000,
      "spd": 484,
      "ts": 1765087042,
      "hd": 335
    },
    {
      "lat": 35.992783,
      "lng": 43.366825,
      "alt": 31975,
      "spd": 484,
      "ts": 1765087040,
      "hd": 335
    },
    {
      "lat": 35.989548,
      "lng": 43.368595,
      "alt": 32000,
      "spd": 484,
      "ts": 1765087038,
      "hd": 335
    },
    {
      "lat": 35.98539,
      "lng": 43.370842,
      "alt": 32000,
      "spd": 482,
      "ts": 1765087036,
      "hd": 334
    },
    {
      "lat": 35.979797,
      "lng": 43.37426,
      "alt": 32000,
      "spd": 482,
      "ts": 1765087033,
      "hd": 336
    },
    {
      "lat": 35.975262,
      "lng": 43.376575,
      "alt": 32000,
      "spd": 482,
      "ts": 1765087031,
      "hd": 342
    },
    {
      "lat": 35.971287,
      "lng": 43.378723,
      "alt": 32000,
      "spd": 482,
      "ts": 1765087029,
      "hd": 333
    },
    {
      "lat": 35.953354,
      "lng": 43.389008,
      "alt": 32000,
      "spd": 478,
      "ts": 1765087020,
      "hd": 335
    },
    {
      "lat": 35.891445,
      "lng": 43.423145,
      "alt": 32000,
      "spd": 476,
      "ts": 1765086990,
      "hd": 335
    },
    {
      "lat": 35.825665,
      "lng": 43.460014,
      "alt": 32000,
      "spd": 476,
      "ts": 1765086957,
      "hd": 335
    },
    {
      "lat": 35.762928,
      "lng": 43.49469,
      "alt": 32000,
      "spd": 474,
      "ts": 1765086926,
      "hd": 335
    },
    {
      "lat": 35.703278,
      "lng": 43.527466,
      "alt": 32000,
      "spd": 472,
      "ts": 1765086896,
      "hd": 333
    },
    {
      "lat": 35.698387,
      "lng": 43.530319,
      "alt": 32000,
      "spd": 472,
      "ts": 1765086894,
      "hd": 333
    },
    {
      "lat": 35.660469,
      "lng": 43.551811,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086874,
      "hd": 336
    },
    {
      "lat": 35.65601,
      "lng": 43.554253,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086872,
      "hd": 336
    },
    {
      "lat": 35.650692,
      "lng": 43.557079,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086869,
      "hd": 335
    },
    {
      "lat": 35.646774,
      "lng": 43.55928,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086867,
      "hd": 336
    },
    {
      "lat": 35.641945,
      "lng": 43.561802,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086865,
      "hd": 335
    },
    {
      "lat": 35.638054,
      "lng": 43.563892,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086863,
      "hd": 335
    },
    {
      "lat": 35.633186,
      "lng": 43.566574,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086861,
      "hd": 335
    },
    {
      "lat": 35.629086,
      "lng": 43.568798,
      "alt": 32000,
      "spd": 470,
      "ts": 1765086858,
      "hd": 335
    },
    {
      "lat": 35.625332,
      "lng": 43.570911,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086856,
      "hd": 335
    },
    {
      "lat": 35.620686,
      "lng": 43.573479,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086854,
      "hd": 335
    },
    {
      "lat": 35.616554,
      "lng": 43.575756,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086852,
      "hd": 335
    },
    {
      "lat": 35.612747,
      "lng": 43.577942,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086850,
      "hd": 335
    },
    {
      "lat": 35.607979,
      "lng": 43.580441,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086848,
      "hd": 333
    },
    {
      "lat": 35.604061,
      "lng": 43.583046,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086846,
      "hd": 336
    },
    {
      "lat": 35.601974,
      "lng": 43.579483,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086844,
      "hd": 316
    },
    {
      "lat": 35.556225,
      "lng": 43.609241,
      "alt": 32000,
      "spd": 468,
      "ts": 1765086822,
      "hd": 335
    },
    {
      "lat": 35.491913,
      "lng": 43.64463,
      "alt": 32000,
      "spd": 466,
      "ts": 1765086789,
      "hd": 335
    },
    {
      "lat": 35.430359,
      "lng": 43.678547,
      "alt": 32000,
      "spd": 469,
      "ts": 1765086758,
      "hd": 335
    },
    {
      "lat": 35.366062,
      "lng": 43.713768,
      "alt": 32000,
      "spd": 472,
      "ts": 1765086725,
      "hd": 335
    },
    {
      "lat": 35.30582,
      "lng": 43.74715,
      "alt": 32000,
      "spd": 473,
      "ts": 1765086695,
      "hd": 335
    },
    {
      "lat": 35.240479,
      "lng": 43.782978,
      "alt": 32000,
      "spd": 474,
      "ts": 1765086662,
      "hd": 335
    },
    {
      "lat": 35.174686,
      "lng": 43.819084,
      "alt": 32000,
      "spd": 474,
      "ts": 1765086629,
      "hd": 335
    },
    {
      "lat": 35.110489,
      "lng": 43.854275,
      "alt": 32000,
      "spd": 472,
      "ts": 1765086597,
      "hd": 335
    },
    {
      "lat": 35.046982,
      "lng": 43.889034,
      "alt": 32000,
      "spd": 472,
      "ts": 1765086565,
      "hd": 335
    },
    {
      "lat": 34.985321,
      "lng": 43.922611,
      "alt": 32000,
      "spd": 472,
      "ts": 1765086534,
      "hd": 335
    },
    {
      "lat": 34.923256,
      "lng": 43.956413,
      "alt": 32000,
      "spd": 473,
      "ts": 1765086503,
      "hd": 335
    },
    {
      "lat": 34.859711,
      "lng": 43.990974,
      "alt": 32000,
      "spd": 475,
      "ts": 1765086472,
      "hd": 335
    },
    {
      "lat": 34.797333,
      "lng": 44.024792,
      "alt": 32000,
      "spd": 478,
      "ts": 1765086440,
      "hd": 336
    },
    {
      "lat": 34.7323,
      "lng": 44.059982,
      "alt": 32000,
      "spd": 479,
      "ts": 1765086409,
      "hd": 335
    },
    {
      "lat": 34.667999,
      "lng": 44.094749,
      "alt": 32000,
      "spd": 479,
      "ts": 1765086377,
      "hd": 336
    },
    {
      "lat": 34.605911,
      "lng": 44.128304,
      "alt": 32000,
      "spd": 479,
      "ts": 1765086346,
      "hd": 335
    },
    {
      "lat": 34.543121,
      "lng": 44.162125,
      "alt": 32000,
      "spd": 478,
      "ts": 1765086315,
      "hd": 336
    },
    {
      "lat": 34.475006,
      "lng": 44.198784,
      "alt": 32000,
      "spd": 479,
      "ts": 1765086282,
      "hd": 335
    },
    {
      "lat": 34.412205,
      "lng": 44.232559,
      "alt": 32000,
      "spd": 481,
      "ts": 1765086250,
      "hd": 336
    },
    {
      "lat": 34.345688,
      "lng": 44.268177,
      "alt": 32000,
      "spd": 480,
      "ts": 1765086218,
      "hd": 336
    },
    {
      "lat": 34.283443,
      "lng": 44.301453,
      "alt": 32000,
      "spd": 480,
      "ts": 1765086187,
      "hd": 336
    },
    {
      "lat": 34.219807,
      "lng": 44.335442,
      "alt": 32000,
      "spd": 481,
      "ts": 1765086156,
      "hd": 336
    },
    {
      "lat": 34.157471,
      "lng": 44.368687,
      "alt": 32000,
      "spd": 478,
      "ts": 1765086125,
      "hd": 336
    },
    {
      "lat": 34.095245,
      "lng": 44.401863,
      "alt": 32000,
      "spd": 475,
      "ts": 1765086095,
      "hd": 336
    },
    {
      "lat": 34.029732,
      "lng": 44.436665,
      "alt": 32000,
      "spd": 474,
      "ts": 1765086062,
      "hd": 336
    },
    {
      "lat": 33.968285,
      "lng": 44.469337,
      "alt": 32000,
      "spd": 473,
      "ts": 1765086031,
      "hd": 336
    },
    {
      "lat": 33.905903,
      "lng": 44.502411,
      "alt": 32000,
      "spd": 473,
      "ts": 1765086000,
      "hd": 336
    },
    {
      "lat": 33.843292,
      "lng": 44.535542,
      "alt": 32000,
      "spd": 473,
      "ts": 1765085969,
      "hd": 336
    },
    {
      "lat": 33.776321,
      "lng": 44.570915,
      "alt": 32000,
      "spd": 471,
      "ts": 1765085936,
      "hd": 336
    },
    {
      "lat": 33.714714,
      "lng": 44.603348,
      "alt": 32000,
      "spd": 470,
      "ts": 1765085905,
      "hd": 336
    },
    {
      "lat": 33.65089,
      "lng": 44.637051,
      "alt": 32000,
      "spd": 469,
      "ts": 1765085873,
      "hd": 336
    },
    {
      "lat": 33.587219,
      "lng": 44.670467,
      "alt": 32000,
      "spd": 469,
      "ts": 1765085841,
      "hd": 336
    },
    {
      "lat": 33.522499,
      "lng": 44.704376,
      "alt": 32000,
      "spd": 468,
      "ts": 1765085808,
      "hd": 336
    },
    {
      "lat": 33.462067,
      "lng": 44.736053,
      "alt": 32000,
      "spd": 467,
      "ts": 1765085778,
      "hd": 336
    },
    {
      "lat": 33.398163,
      "lng": 44.769562,
      "alt": 32000,
      "spd": 466,
      "ts": 1765085745,
      "hd": 336
    },
    {
      "lat": 33.332703,
      "lng": 44.803783,
      "alt": 32000,
      "spd": 466,
      "ts": 1765085713,
      "hd": 336
    },
    {
      "lat": 33.268341,
      "lng": 44.837238,
      "alt": 32000,
      "spd": 467,
      "ts": 1765085680,
      "hd": 336
    },
    {
      "lat": 33.203056,
      "lng": 44.871246,
      "alt": 32000,
      "spd": 467,
      "ts": 1765085647,
      "hd": 336
    },
    {
      "lat": 33.141769,
      "lng": 44.903156,
      "alt": 32000,
      "spd": 468,
      "ts": 1765085616,
      "hd": 336
    },
    {
      "lat": 33.076126,
      "lng": 44.937214,
      "alt": 32000,
      "spd": 468,
      "ts": 1765085583,
      "hd": 336
    },
    {
      "lat": 33.011444,
      "lng": 44.970612,
      "alt": 32000,
      "spd": 467,
      "ts": 1765085550,
      "hd": 336
    },
    {
      "lat": 32.950188,
      "lng": 45.002018,
      "alt": 32000,
      "spd": 468,
      "ts": 1765085519,
      "hd": 336
    },
    {
      "lat": 32.888226,
      "lng": 45.033688,
      "alt": 32000,
      "spd": 469,
      "ts": 1765085489,
      "hd": 336
    },
    {
      "lat": 32.82193,
      "lng": 45.067566,
      "alt": 32000,
      "spd": 468,
      "ts": 1765085456,
      "hd": 336
    },
    {
      "lat": 32.762348,
      "lng": 45.101902,
      "alt": 32000,
      "spd": 464,
      "ts": 1765085425,
      "hd": 331
    },
    {
      "lat": 32.703461,
      "lng": 45.143867,
      "alt": 32000,
      "spd": 463,
      "ts": 1765085393,
      "hd": 326
    },
    {
      "lat": 32.644775,
      "lng": 45.190338,
      "alt": 32000,
      "spd": 465,
      "ts": 1765085360,
      "hd": 326
    },
    {
      "lat": 32.590805,
      "lng": 45.233238,
      "alt": 32000,
      "spd": 464,
      "ts": 1765085329,
      "hd": 325
    },
    {
      "lat": 32.535126,
      "lng": 45.281666,
      "alt": 32000,
      "spd": 459,
      "ts": 1765085297,
      "hd": 321
    },
    {
      "lat": 32.486023,
      "lng": 45.330688,
      "alt": 32000,
      "spd": 456,
      "ts": 1765085267,
      "hd": 319
    },
    {
      "lat": 32.43338,
      "lng": 45.383972,
      "alt": 32000,
      "spd": 458,
      "ts": 1765085234,
      "hd": 319
    },
    {
      "lat": 32.380463,
      "lng": 45.437256,
      "alt": 32000,
      "spd": 460,
      "ts": 1765085201,
      "hd": 319
    },
    {
      "lat": 32.328552,
      "lng": 45.489552,
      "alt": 32000,
      "spd": 461,
      "ts": 1765085169,
      "hd": 319
    },
    {
      "lat": 32.277599,
      "lng": 45.540684,
      "alt": 32000,
      "spd": 461,
      "ts": 1765085138,
      "hd": 319
    },
    {
      "lat": 32.224529,
      "lng": 45.594048,
      "alt": 32000,
      "spd": 460,
      "ts": 1765085106,
      "hd": 319
    },
    {
      "lat": 32.173927,
      "lng": 45.644718,
      "alt": 32000,
      "spd": 458,
      "ts": 1765085075,
      "hd": 319
    },
    {
      "lat": 32.120682,
      "lng": 45.69796,
      "alt": 32000,
      "spd": 458,
      "ts": 1765085042,
      "hd": 319
    },
    {
      "lat": 32.068268,
      "lng": 45.750313,
      "alt": 32000,
      "spd": 457,
      "ts": 1765085009,
      "hd": 319
    },
    {
      "lat": 32.015579,
      "lng": 45.802773,
      "alt": 32000,
      "spd": 459,
      "ts": 1765084977,
      "hd": 319
    },
    {
      "lat": 31.961472,
      "lng": 45.856606,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084944,
      "hd": 319
    },
    {
      "lat": 31.913132,
      "lng": 45.904724,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084913,
      "hd": 319
    },
    {
      "lat": 31.862074,
      "lng": 45.955643,
      "alt": 32000,
      "spd": 459,
      "ts": 1765084882,
      "hd": 319
    },
    {
      "lat": 31.80798,
      "lng": 46.009621,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084849,
      "hd": 319
    },
    {
      "lat": 31.757378,
      "lng": 46.059631,
      "alt": 32000,
      "spd": 461,
      "ts": 1765084818,
      "hd": 320
    },
    {
      "lat": 31.704208,
      "lng": 46.110748,
      "alt": 32000,
      "spd": 461,
      "ts": 1765084785,
      "hd": 320
    },
    {
      "lat": 31.652681,
      "lng": 46.16021,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084754,
      "hd": 320
    },
    {
      "lat": 31.602638,
      "lng": 46.208221,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084723,
      "hd": 320
    },
    {
      "lat": 31.549438,
      "lng": 46.259228,
      "alt": 32000,
      "spd": 459,
      "ts": 1765084691,
      "hd": 320
    },
    {
      "lat": 31.498734,
      "lng": 46.307758,
      "alt": 32000,
      "spd": 459,
      "ts": 1765084660,
      "hd": 320
    },
    {
      "lat": 31.446503,
      "lng": 46.357689,
      "alt": 32000,
      "spd": 457,
      "ts": 1765084629,
      "hd": 320
    },
    {
      "lat": 31.395294,
      "lng": 46.406471,
      "alt": 32000,
      "spd": 457,
      "ts": 1765084597,
      "hd": 320
    },
    {
      "lat": 31.343668,
      "lng": 46.455635,
      "alt": 32000,
      "spd": 456,
      "ts": 1765084566,
      "hd": 320
    },
    {
      "lat": 31.289249,
      "lng": 46.507435,
      "alt": 32000,
      "spd": 456,
      "ts": 1765084533,
      "hd": 320
    },
    {
      "lat": 31.238134,
      "lng": 46.555939,
      "alt": 32000,
      "spd": 458,
      "ts": 1765084502,
      "hd": 320
    },
    {
      "lat": 31.185019,
      "lng": 46.606365,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084469,
      "hd": 320
    },
    {
      "lat": 31.130692,
      "lng": 46.657726,
      "alt": 32000,
      "spd": 461,
      "ts": 1765084437,
      "hd": 320
    },
    {
      "lat": 31.079086,
      "lng": 46.706543,
      "alt": 32000,
      "spd": 462,
      "ts": 1765084406,
      "hd": 320
    },
    {
      "lat": 31.025436,
      "lng": 46.757221,
      "alt": 32000,
      "spd": 461,
      "ts": 1765084373,
      "hd": 320
    },
    {
      "lat": 30.973114,
      "lng": 46.806496,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084341,
      "hd": 320
    },
    {
      "lat": 30.919624,
      "lng": 46.8568,
      "alt": 32000,
      "spd": 462,
      "ts": 1765084309,
      "hd": 320
    },
    {
      "lat": 30.866043,
      "lng": 46.907204,
      "alt": 32000,
      "spd": 462,
      "ts": 1765084277,
      "hd": 320
    },
    {
      "lat": 30.811432,
      "lng": 46.958527,
      "alt": 32000,
      "spd": 462,
      "ts": 1765084245,
      "hd": 320
    },
    {
      "lat": 30.758057,
      "lng": 47.00856,
      "alt": 32000,
      "spd": 462,
      "ts": 1765084212,
      "hd": 321
    },
    {
      "lat": 30.704453,
      "lng": 47.05859,
      "alt": 32000,
      "spd": 465,
      "ts": 1765084180,
      "hd": 321
    },
    {
      "lat": 30.649384,
      "lng": 47.11002,
      "alt": 32000,
      "spd": 466,
      "ts": 1765084147,
      "hd": 320
    },
    {
      "lat": 30.596329,
      "lng": 47.159889,
      "alt": 32000,
      "spd": 465,
      "ts": 1765084116,
      "hd": 319
    },
    {
      "lat": 30.548231,
      "lng": 47.212868,
      "alt": 32000,
      "spd": 460,
      "ts": 1765084085,
      "hd": 312
    },
    {
      "lat": 30.504099,
      "lng": 47.271809,
      "alt": 32000,
      "spd": 458,
      "ts": 1765084053,
      "hd": 310
    },
    {
      "lat": 30.45871,
      "lng": 47.333,
      "alt": 32000,
      "spd": 458,
      "ts": 1765084021,
      "hd": 310
    },
    {
      "lat": 30.414413,
      "lng": 47.392811,
      "alt": 32000,
      "spd": 458,
      "ts": 1765083988,
      "hd": 310
    },
    {
      "lat": 30.369703,
      "lng": 47.453026,
      "alt": 32000,
      "spd": 456,
      "ts": 1765083956,
      "hd": 310
    },
    {
      "lat": 30.328363,
      "lng": 47.508675,
      "alt": 32000,
      "spd": 455,
      "ts": 1765083926,
      "hd": 310
    },
    {
      "lat": 30.284,
      "lng": 47.568275,
      "alt": 32000,
      "spd": 455,
      "ts": 1765083893,
      "hd": 310
    },
    {
      "lat": 30.240463,
      "lng": 47.626488,
      "alt": 32000,
      "spd": 455,
      "ts": 1765083862,
      "hd": 310
    },
    {
      "lat": 30.196838,
      "lng": 47.684917,
      "alt": 32000,
      "spd": 455,
      "ts": 1765083830,
      "hd": 310
    },
    {
      "lat": 30.152115,
      "lng": 47.744858,
      "alt": 32000,
      "spd": 455,
      "ts": 1765083798,
      "hd": 310
    },
    {
      "lat": 30.110733,
      "lng": 47.800304,
      "alt": 32000,
      "spd": 458,
      "ts": 1765083768,
      "hd": 310
    },
    {
      "lat": 30.065598,
      "lng": 47.860161,
      "alt": 32000,
      "spd": 458,
      "ts": 1765083735,
      "hd": 310
    },
    {
      "lat": 30.06283,
      "lng": 47.863861,
      "alt": 32000,
      "spd": 458,
      "ts": 1765083733,
      "hd": 310
    },
    {
      "lat": 30.059509,
      "lng": 47.868294,
      "alt": 32000,
      "spd": 457,
      "ts": 1765083731,
      "hd": 310
    },
    {
      "lat": 30.05658,
      "lng": 47.872223,
      "alt": 32000,
      "spd": 459,
      "ts": 1765083729,
      "hd": 311
    },
    {
      "lat": 30.053696,
      "lng": 47.875942,
      "alt": 32000,
      "spd": 459,
      "ts": 1765083727,
      "hd": 312
    },
    {
      "lat": 30.050583,
      "lng": 47.879925,
      "alt": 32000,
      "spd": 459,
      "ts": 1765083725,
      "hd": 313
    },
    {
      "lat": 30.047607,
      "lng": 47.883587,
      "alt": 32000,
      "spd": 459,
      "ts": 1765083722,
      "hd": 314
    },
    {
      "lat": 30.044628,
      "lng": 47.887154,
      "alt": 32000,
      "spd": 459,
      "ts": 1765083720,
      "hd": 314
    },
    {
      "lat": 30.040997,
      "lng": 47.89138,
      "alt": 32000,
      "spd": 460,
      "ts": 1765083718,
      "hd": 315
    },
    {
      "lat": 30.037857,
      "lng": 47.894951,
      "alt": 32000,
      "spd": 460,
      "ts": 1765083716,
      "hd": 316
    },
    {
      "lat": 30.03476,
      "lng": 47.898415,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083714,
      "hd": 317
    },
    {
      "lat": 30.031082,
      "lng": 47.902275,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083712,
      "hd": 318
    },
    {
      "lat": 30.028061,
      "lng": 47.905453,
      "alt": 32000,
      "spd": 462,
      "ts": 1765083710,
      "hd": 319
    },
    {
      "lat": 30.02504,
      "lng": 47.90847,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083708,
      "hd": 319
    },
    {
      "lat": 30.018585,
      "lng": 47.914768,
      "alt": 32000,
      "spd": 462,
      "ts": 1765083704,
      "hd": 321
    },
    {
      "lat": 29.959949,
      "lng": 47.959442,
      "alt": 32000,
      "spd": 465,
      "ts": 1765083671,
      "hd": 329
    },
    {
      "lat": 29.902679,
      "lng": 47.997471,
      "alt": 32000,
      "spd": 463,
      "ts": 1765083640,
      "hd": 329
    },
    {
      "lat": 29.845505,
      "lng": 48.0355,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083610,
      "hd": 329
    },
    {
      "lat": 29.785891,
      "lng": 48.074932,
      "alt": 32000,
      "spd": 460,
      "ts": 1765083577,
      "hd": 330
    },
    {
      "lat": 29.728912,
      "lng": 48.112511,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083547,
      "hd": 330
    },
    {
      "lat": 29.669464,
      "lng": 48.151783,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083514,
      "hd": 329
    },
    {
      "lat": 29.609318,
      "lng": 48.191368,
      "alt": 32000,
      "spd": 462,
      "ts": 1765083482,
      "hd": 330
    },
    {
      "lat": 29.550337,
      "lng": 48.230194,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083450,
      "hd": 330
    },
    {
      "lat": 29.492891,
      "lng": 48.268108,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083419,
      "hd": 329
    },
    {
      "lat": 29.437447,
      "lng": 48.305862,
      "alt": 32000,
      "spd": 462,
      "ts": 1765083389,
      "hd": 327
    },
    {
      "lat": 29.378815,
      "lng": 48.349934,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083356,
      "hd": 325
    },
    {
      "lat": 29.323334,
      "lng": 48.392925,
      "alt": 32000,
      "spd": 460,
      "ts": 1765083325,
      "hd": 325
    },
    {
      "lat": 29.267019,
      "lng": 48.436565,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083293,
      "hd": 325
    },
    {
      "lat": 29.213837,
      "lng": 48.47765,
      "alt": 32000,
      "spd": 461,
      "ts": 1765083263,
      "hd": 325
    },
    {
      "lat": 29.157669,
      "lng": 48.521011,
      "alt": 32000,
      "spd": 462,
      "ts": 1765083231,
      "hd": 325
    },
    {
      "lat": 29.102692,
      "lng": 48.563374,
      "alt": 32000,
      "spd": 463,
      "ts": 1765083200,
      "hd": 325
    },
    {
      "lat": 29.045151,
      "lng": 48.607689,
      "alt": 32000,
      "spd": 465,
      "ts": 1765083168,
      "hd": 325
    },
    {
      "lat": 28.986328,
      "lng": 48.652901,
      "alt": 32000,
      "spd": 465,
      "ts": 1765083135,
      "hd": 325
    },
    {
      "lat": 28.927643,
      "lng": 48.697956,
      "alt": 32000,
      "spd": 465,
      "ts": 1765083102,
      "hd": 325
    },
    {
      "lat": 28.869827,
      "lng": 48.742271,
      "alt": 32000,
      "spd": 464,
      "ts": 1765083070,
      "hd": 326
    },
    {
      "lat": 28.812195,
      "lng": 48.786324,
      "alt": 32000,
      "spd": 464,
      "ts": 1765083038,
      "hd": 325
    },
    {
      "lat": 28.756714,
      "lng": 48.829105,
      "alt": 32000,
      "spd": 464,
      "ts": 1765083007,
      "hd": 325
    },
    {
      "lat": 28.699677,
      "lng": 48.873051,
      "alt": 32000,
      "spd": 464,
      "ts": 1765082975,
      "hd": 325
    },
    {
      "lat": 28.64653,
      "lng": 48.91404,
      "alt": 32000,
      "spd": 466,
      "ts": 1765082945,
      "hd": 325
    },
    {
      "lat": 28.589638,
      "lng": 48.957825,
      "alt": 32000,
      "spd": 465,
      "ts": 1765082913,
      "hd": 325
    },
    {
      "lat": 28.531448,
      "lng": 49.002361,
      "alt": 32000,
      "spd": 464,
      "ts": 1765082880,
      "hd": 325
    },
    {
      "lat": 28.477028,
      "lng": 49.044098,
      "alt": 32000,
      "spd": 464,
      "ts": 1765082850,
      "hd": 325
    },
    {
      "lat": 28.419395,
      "lng": 49.088852,
      "alt": 32000,
      "spd": 463,
      "ts": 1765082817,
      "hd": 324
    },
    {
      "lat": 28.361904,
      "lng": 49.137592,
      "alt": 32000,
      "spd": 462,
      "ts": 1765082784,
      "hd": 321
    },
    {
      "lat": 28.308369,
      "lng": 49.186707,
      "alt": 32000,
      "spd": 461,
      "ts": 1765082751,
      "hd": 320
    },
    {
      "lat": 28.255253,
      "lng": 49.235336,
      "alt": 32000,
      "spd": 462,
      "ts": 1765082719,
      "hd": 321
    },
    {
      "lat": 28.201447,
      "lng": 49.284615,
      "alt": 32000,
      "spd": 462,
      "ts": 1765082687,
      "hd": 320
    },
    {
      "lat": 28.146103,
      "lng": 49.33527,
      "alt": 32000,
      "spd": 463,
      "ts": 1765082654,
      "hd": 321
    },
    {
      "lat": 28.093019,
      "lng": 49.383923,
      "alt": 32000,
      "spd": 463,
      "ts": 1765082623,
      "hd": 321
    },
    {
      "lat": 28.040955,
      "lng": 49.431347,
      "alt": 32000,
      "spd": 462,
      "ts": 1765082591,
      "hd": 321
    },
    {
      "lat": 27.989206,
      "lng": 49.477684,
      "alt": 32000,
      "spd": 461,
      "ts": 1765082560,
      "hd": 321
    },
    {
      "lat": 27.936493,
      "lng": 49.524967,
      "alt": 32000,
      "spd": 459,
      "ts": 1765082528,
      "hd": 321
    },
    {
      "lat": 27.884399,
      "lng": 49.571556,
      "alt": 32000,
      "spd": 458,
      "ts": 1765082497,
      "hd": 321
    },
    {
      "lat": 27.832672,
      "lng": 49.617832,
      "alt": 32000,
      "spd": 458,
      "ts": 1765082466,
      "hd": 321
    },
    {
      "lat": 27.781212,
      "lng": 49.663696,
      "alt": 32000,
      "spd": 457,
      "ts": 1765082435,
      "hd": 321
    },
    {
      "lat": 27.727249,
      "lng": 49.711426,
      "alt": 32000,
      "spd": 457,
      "ts": 1765082403,
      "hd": 321
    },
    {
      "lat": 27.67662,
      "lng": 49.756096,
      "alt": 32000,
      "spd": 456,
      "ts": 1765082373,
      "hd": 321
    },
    {
      "lat": 27.622971,
      "lng": 49.803459,
      "alt": 32000,
      "spd": 455,
      "ts": 1765082340,
      "hd": 321
    },
    {
      "lat": 27.572239,
      "lng": 49.848141,
      "alt": 32000,
      "spd": 455,
      "ts": 1765082310,
      "hd": 321
    },
    {
      "lat": 27.519699,
      "lng": 49.894512,
      "alt": 32000,
      "spd": 454,
      "ts": 1765082278,
      "hd": 321
    },
    {
      "lat": 27.469528,
      "lng": 49.93903,
      "alt": 32000,
      "spd": 454,
      "ts": 1765082247,
      "hd": 321
    },
    {
      "lat": 27.416475,
      "lng": 49.986366,
      "alt": 32000,
      "spd": 453,
      "ts": 1765082215,
      "hd": 321
    },
    {
      "lat": 27.362986,
      "lng": 50.032742,
      "alt": 32000,
      "spd": 453,
      "ts": 1765082183,
      "hd": 323
    },
    {
      "lat": 27.307617,
      "lng": 50.07843,
      "alt": 32000,
      "spd": 452,
      "ts": 1765082151,
      "hd": 323
    },
    {
      "lat": 27.256289,
      "lng": 50.120739,
      "alt": 32000,
      "spd": 454,
      "ts": 1765082120,
      "hd": 323
    },
    {
      "lat": 27.203613,
      "lng": 50.164352,
      "alt": 32000,
      "spd": 456,
      "ts": 1765082089,
      "hd": 323
    },
    {
      "lat": 27.153763,
      "lng": 50.210472,
      "alt": 32000,
      "spd": 452,
      "ts": 1765082058,
      "hd": 316
    },
    {
      "lat": 27.108582,
      "lng": 50.26297,
      "alt": 32000,
      "spd": 451,
      "ts": 1765082027,
      "hd": 312
    },
    {
      "lat": 27.063675,
      "lng": 50.317226,
      "alt": 32000,
      "spd": 452,
      "ts": 1765081995,
      "hd": 312
    },
    {
      "lat": 27.018906,
      "lng": 50.370502,
      "alt": 32000,
      "spd": 452,
      "ts": 1765081964,
      "hd": 313
    },
    {
      "lat": 26.974461,
      "lng": 50.423389,
      "alt": 32000,
      "spd": 452,
      "ts": 1765081933,
      "hd": 313
    },
    {
      "lat": 26.930466,
      "lng": 50.476372,
      "alt": 32000,
      "spd": 453,
      "ts": 1765081903,
      "hd": 311
    },
    {
      "lat": 26.887827,
      "lng": 50.531616,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081872,
      "hd": 309
    },
    {
      "lat": 26.847107,
      "lng": 50.587738,
      "alt": 32000,
      "spd": 453,
      "ts": 1765081841,
      "hd": 308
    },
    {
      "lat": 26.844301,
      "lng": 50.591618,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081839,
      "hd": 308
    },
    {
      "lat": 26.841461,
      "lng": 50.595581,
      "alt": 32000,
      "spd": 453,
      "ts": 1765081837,
      "hd": 309
    },
    {
      "lat": 26.839367,
      "lng": 50.598431,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081835,
      "hd": 309
    },
    {
      "lat": 26.836666,
      "lng": 50.602131,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081832,
      "hd": 309
    },
    {
      "lat": 26.834061,
      "lng": 50.605721,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081830,
      "hd": 308
    },
    {
      "lat": 26.831081,
      "lng": 50.609894,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081828,
      "hd": 308
    },
    {
      "lat": 26.828381,
      "lng": 50.613697,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081826,
      "hd": 307
    },
    {
      "lat": 26.826193,
      "lng": 50.616867,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081824,
      "hd": 306
    },
    {
      "lat": 26.823349,
      "lng": 50.621063,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081822,
      "hd": 305
    },
    {
      "lat": 26.820236,
      "lng": 50.625881,
      "alt": 32000,
      "spd": 455,
      "ts": 1765081820,
      "hd": 305
    },
    {
      "lat": 26.818512,
      "lng": 50.628696,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081818,
      "hd": 304
    },
    {
      "lat": 26.815979,
      "lng": 50.632824,
      "alt": 32000,
      "spd": 455,
      "ts": 1765081816,
      "hd": 302
    },
    {
      "lat": 26.813187,
      "lng": 50.637489,
      "alt": 32000,
      "spd": 456,
      "ts": 1765081814,
      "hd": 302
    },
    {
      "lat": 26.810898,
      "lng": 50.641533,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081812,
      "hd": 301
    },
    {
      "lat": 26.808783,
      "lng": 50.645336,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081810,
      "hd": 300
    },
    {
      "lat": 26.806454,
      "lng": 50.649719,
      "alt": 32000,
      "spd": 454,
      "ts": 1765081808,
      "hd": 299
    },
    {
      "lat": 26.804453,
      "lng": 50.653469,
      "alt": 32000,
      "spd": 453,
      "ts": 1765081806,
      "hd": 299
    },
    {
      "lat": 26.776978,
      "lng": 50.724342,
      "alt": 32000,
      "spd": 453,
      "ts": 1765081773,
      "hd": 289
    },
    {
      "lat": 26.753897,
      "lng": 50.796715,
      "alt": 32000,
      "spd": 452,
      "ts": 1765081740,
      "hd": 289
    },
    {
      "lat": 26.732117,
      "lng": 50.86504,
      "alt": 32000,
      "spd": 451,
      "ts": 1765081709,
      "hd": 289
    },
    {
      "lat": 26.710922,
      "lng": 50.931736,
      "alt": 32000,
      "spd": 452,
      "ts": 1765081678,
      "hd": 289
    },
    {
      "lat": 26.687559,
      "lng": 51.004398,
      "alt": 32000,
      "spd": 451,
      "ts": 1765081646,
      "hd": 290
    },
    {
      "lat": 26.664001,
      "lng": 51.076164,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081613,
      "hd": 290
    },
    {
      "lat": 26.642258,
      "lng": 51.141823,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081582,
      "hd": 290
    },
    {
      "lat": 26.619501,
      "lng": 51.210655,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081551,
      "hd": 290
    },
    {
      "lat": 26.597397,
      "lng": 51.27734,
      "alt": 32000,
      "spd": 452,
      "ts": 1765081521,
      "hd": 290
    },
    {
      "lat": 26.573959,
      "lng": 51.348286,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081488,
      "hd": 290
    },
    {
      "lat": 26.551987,
      "lng": 51.414719,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081457,
      "hd": 290
    },
    {
      "lat": 26.529739,
      "lng": 51.481674,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081427,
      "hd": 290
    },
    {
      "lat": 26.5061,
      "lng": 51.552765,
      "alt": 32000,
      "spd": 451,
      "ts": 1765081394,
      "hd": 290
    },
    {
      "lat": 26.484009,
      "lng": 51.619003,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081364,
      "hd": 290
    },
    {
      "lat": 26.460384,
      "lng": 51.689617,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081331,
      "hd": 290
    },
    {
      "lat": 26.437946,
      "lng": 51.756699,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081301,
      "hd": 290
    },
    {
      "lat": 26.414841,
      "lng": 51.825722,
      "alt": 32000,
      "spd": 450,
      "ts": 1765081269,
      "hd": 290
    },
    {
      "lat": 26.39209,
      "lng": 51.893246,
      "alt": 32000,
      "spd": 448,
      "ts": 1765081238,
      "hd": 290
    },
    {
      "lat": 26.366535,
      "lng": 51.962532,
      "alt": 32000,
      "spd": 448,
      "ts": 1765081205,
      "hd": 294
    },
    {
      "lat": 26.339401,
      "lng": 52.026325,
      "alt": 32000,
      "spd": 446,
      "ts": 1765081174,
      "hd": 295
    },
    {
      "lat": 26.311157,
      "lng": 52.091675,
      "alt": 32000,
      "spd": 446,
      "ts": 1765081143,
      "hd": 295
    },
    {
      "lat": 26.282974,
      "lng": 52.157169,
      "alt": 32000,
      "spd": 446,
      "ts": 1765081111,
      "hd": 295
    },
    {
      "lat": 26.254578,
      "lng": 52.223457,
      "alt": 32000,
      "spd": 447,
      "ts": 1765081080,
      "hd": 295
    },
    {
      "lat": 26.225143,
      "lng": 52.291397,
      "alt": 32000,
      "spd": 447,
      "ts": 1765081047,
      "hd": 296
    },
    {
      "lat": 26.197178,
      "lng": 52.353973,
      "alt": 32000,
      "spd": 447,
      "ts": 1765081016,
      "hd": 296
    },
    {
      "lat": 26.168747,
      "lng": 52.417328,
      "alt": 32000,
      "spd": 446,
      "ts": 1765080986,
      "hd": 296
    },
    {
      "lat": 26.138756,
      "lng": 52.484119,
      "alt": 32000,
      "spd": 447,
      "ts": 1765080953,
      "hd": 296
    },
    {
      "lat": 26.108826,
      "lng": 52.550354,
      "alt": 32000,
      "spd": 448,
      "ts": 1765080921,
      "hd": 296
    },
    {
      "lat": 26.079025,
      "lng": 52.615807,
      "alt": 32000,
      "spd": 447,
      "ts": 1765080889,
      "hd": 297
    },
    {
      "lat": 26.050074,
      "lng": 52.67844,
      "alt": 32000,
      "spd": 447,
      "ts": 1765080858,
      "hd": 297
    },
    {
      "lat": 26.022446,
      "lng": 52.740852,
      "alt": 32000,
      "spd": 447,
      "ts": 1765080828,
      "hd": 294
    },
    {
      "lat": 25.99584,
      "lng": 52.806633,
      "alt": 32000,
      "spd": 448,
      "ts": 1765080797,
      "hd": 294
    },
    {
      "lat": 25.968613,
      "lng": 52.873932,
      "alt": 32000,
      "spd": 447,
      "ts": 1765080764,
      "hd": 294
    },
    {
      "lat": 25.941101,
      "lng": 52.941872,
      "alt": 32000,
      "spd": 446,
      "ts": 1765080732,
      "hd": 294
    },
    {
      "lat": 25.914328,
      "lng": 53.007713,
      "alt": 32000,
      "spd": 448,
      "ts": 1765080701,
      "hd": 294
    },
    {
      "lat": 25.886629,
      "lng": 53.075691,
      "alt": 32000,
      "spd": 447,
      "ts": 1765080668,
      "hd": 294
    },
    {
      "lat": 25.858976,
      "lng": 53.143986,
      "alt": 32000,
      "spd": 448,
      "ts": 1765080635,
      "hd": 293
    },
    {
      "lat": 25.833344,
      "lng": 53.217255,
      "alt": 32000,
      "spd": 448,
      "ts": 1765080601,
      "hd": 288
    },
    {
      "lat": 25.813309,
      "lng": 53.288406,
      "alt": 32000,
      "spd": 448,
      "ts": 1765080569,
      "hd": 287
    },
    {
      "lat": 25.794205,
      "lng": 53.356579,
      "alt": 32000,
      "spd": 448,
      "ts": 1765080538,
      "hd": 287
    },
    {
      "lat": 25.775183,
      "lng": 53.424492,
      "alt": 32000,
      "spd": 450,
      "ts": 1765080507,
      "hd": 287
    },
    {
      "lat": 25.75605,
      "lng": 53.492275,
      "alt": 32000,
      "spd": 449,
      "ts": 1765080475,
      "hd": 287
    },
    {
      "lat": 25.736637,
      "lng": 53.561409,
      "alt": 31900,
      "spd": 454,
      "ts": 1765080444,
      "hd": 287
    },
    {
      "lat": 25.717712,
      "lng": 53.6292,
      "alt": 31225,
      "spd": 453,
      "ts": 1765080413,
      "hd": 287
    },
    {
      "lat": 25.697433,
      "lng": 53.701679,
      "alt": 30875,
      "spd": 442,
      "ts": 1765080381,
      "hd": 287
    },
    {
      "lat": 25.678307,
      "lng": 53.769161,
      "alt": 30400,
      "spd": 434,
      "ts": 1765080349,
      "hd": 287
    },
    {
      "lat": 25.659988,
      "lng": 53.833618,
      "alt": 29675,
      "spd": 429,
      "ts": 1765080319,
      "hd": 287
    },
    {
      "lat": 25.641495,
      "lng": 53.898518,
      "alt": 28975,
      "spd": 426,
      "ts": 1765080287,
      "hd": 287
    },
    {
      "lat": 25.622864,
      "lng": 53.96413,
      "alt": 28175,
      "spd": 420,
      "ts": 1765080255,
      "hd": 287
    },
    {
      "lat": 25.603867,
      "lng": 54.03117,
      "alt": 27275,
      "spd": 417,
      "ts": 1765080223,
      "hd": 287
    },
    {
      "lat": 25.585714,
      "lng": 54.09362,
      "alt": 26450,
      "spd": 412,
      "ts": 1765080192,
      "hd": 287
    },
    {
      "lat": 25.567513,
      "lng": 54.155602,
      "alt": 25675,
      "spd": 404,
      "ts": 1765080160,
      "hd": 287
    },
    {
      "lat": 25.549963,
      "lng": 54.215717,
      "alt": 25050,
      "spd": 393,
      "ts": 1765080130,
      "hd": 287
    },
    {
      "lat": 25.532639,
      "lng": 54.274902,
      "alt": 23775,
      "spd": 396,
      "ts": 1765080099,
      "hd": 288
    },
    {
      "lat": 25.514257,
      "lng": 54.337032,
      "alt": 22375,
      "spd": 400,
      "ts": 1765080067,
      "hd": 287
    },
    {
      "lat": 25.496149,
      "lng": 54.398647,
      "alt": 21175,
      "spd": 397,
      "ts": 1765080036,
      "hd": 288
    },
    {
      "lat": 25.478365,
      "lng": 54.459126,
      "alt": 20350,
      "spd": 382,
      "ts": 1765080003,
      "hd": 288
    },
    {
      "lat": 25.461142,
      "lng": 54.517063,
      "alt": 19125,
      "spd": 378,
      "ts": 1765079972,
      "hd": 288
    },
    {
      "lat": 25.443777,
      "lng": 54.575413,
      "alt": 17675,
      "spd": 378,
      "ts": 1765079941,
      "hd": 288
    },
    {
      "lat": 25.424599,
      "lng": 54.641693,
      "alt": 16150,
      "spd": 374,
      "ts": 1765079904,
      "hd": 287
    },
    {
      "lat": 25.408443,
      "lng": 54.698856,
      "alt": 14875,
      "spd": 366,
      "ts": 1765079873,
      "hd": 287
    },
    {
      "lat": 25.392803,
      "lng": 54.75301,
      "alt": 13600,
      "spd": 359,
      "ts": 1765079842,
      "hd": 287
    },
    {
      "lat": 25.37709,
      "lng": 54.807434,
      "alt": 12350,
      "spd": 348,
      "ts": 1765079811,
      "hd": 287
    },
    {
      "lat": 25.370361,
      "lng": 54.830578,
      "alt": 11825,
      "spd": 342,
      "ts": 1765079796,
      "hd": 287
    },
    {
      "lat": 25.3638,
      "lng": 54.854218,
      "alt": 11250,
      "spd": 338,
      "ts": 1765079783,
      "hd": 286
    },
    {
      "lat": 25.363102,
      "lng": 54.856655,
      "alt": 11200,
      "spd": 338,
      "ts": 1765079781,
      "hd": 286
    },
    {
      "lat": 25.362213,
      "lng": 54.859974,
      "alt": 11125,
      "spd": 338,
      "ts": 1765079779,
      "hd": 287
    },
    {
      "lat": 25.36124,
      "lng": 54.863392,
      "alt": 11025,
      "spd": 338,
      "ts": 1765079777,
      "hd": 287
    },
    {
      "lat": 25.360291,
      "lng": 54.866791,
      "alt": 10950,
      "spd": 338,
      "ts": 1765079775,
      "hd": 287
    },
    {
      "lat": 25.359146,
      "lng": 54.870758,
      "alt": 10825,
      "spd": 338,
      "ts": 1765079773,
      "hd": 287
    },
    {
      "lat": 25.358185,
      "lng": 54.874218,
      "alt": 10750,
      "spd": 338,
      "ts": 1765079771,
      "hd": 287
    },
    {
      "lat": 25.357283,
      "lng": 54.877434,
      "alt": 10675,
      "spd": 338,
      "ts": 1765079768,
      "hd": 286
    },
    {
      "lat": 25.356033,
      "lng": 54.881794,
      "alt": 10550,
      "spd": 338,
      "ts": 1765079766,
      "hd": 285
    },
    {
      "lat": 25.355392,
      "lng": 54.884388,
      "alt": 10475,
      "spd": 336,
      "ts": 1765079764,
      "hd": 284
    },
    {
      "lat": 25.354523,
      "lng": 54.88805,
      "alt": 10400,
      "spd": 338,
      "ts": 1765079762,
      "hd": 283
    },
    {
      "lat": 25.353561,
      "lng": 54.892475,
      "alt": 10275,
      "spd": 337,
      "ts": 1765079760,
      "hd": 281
    },
    {
      "lat": 25.352737,
      "lng": 54.896648,
      "alt": 10175,
      "spd": 338,
      "ts": 1765079757,
      "hd": 280
    },
    {
      "lat": 25.352142,
      "lng": 54.900005,
      "alt": 10075,
      "spd": 337,
      "ts": 1765079755,
      "hd": 279
    },
    {
      "lat": 25.351547,
      "lng": 54.903515,
      "alt": 9975,
      "spd": 338,
      "ts": 1765079753,
      "hd": 278
    },
    {
      "lat": 25.351139,
      "lng": 54.906765,
      "alt": 9900,
      "spd": 338,
      "ts": 1765079751,
      "hd": 277
    },
    {
      "lat": 25.349487,
      "lng": 54.924519,
      "alt": 9425,
      "spd": 340,
      "ts": 1765079741,
      "hd": 271
    },
    {
      "lat": 25.349602,
      "lng": 54.946514,
      "alt": 8850,
      "spd": 344,
      "ts": 1765079728,
      "hd": 267
    },
    {
      "lat": 25.35054,
      "lng": 54.972839,
      "alt": 8250,
      "spd": 344,
      "ts": 1765079713,
      "hd": 267
    },
    {
      "lat": 25.351511,
      "lng": 54.999165,
      "alt": 7625,
      "spd": 342,
      "ts": 1765079698,
      "hd": 267
    },
    {
      "lat": 25.352417,
      "lng": 55.025738,
      "alt": 7050,
      "spd": 340,
      "ts": 1765079683,
      "hd": 267
    },
    {
      "lat": 25.353287,
      "lng": 55.047253,
      "alt": 6575,
      "spd": 338,
      "ts": 1765079670,
      "hd": 267
    },
    {
      "lat": 25.354202,
      "lng": 55.069122,
      "alt": 6200,
      "spd": 332,
      "ts": 1765079658,
      "hd": 267
    },
    {
      "lat": 25.355282,
      "lng": 55.094624,
      "alt": 5925,
      "spd": 320,
      "ts": 1765079643,
      "hd": 267
    },
    {
      "lat": 25.356079,
      "lng": 55.114185,
      "alt": 5700,
      "spd": 309,
      "ts": 1765079630,
      "hd": 267
    },
    {
      "lat": 25.356857,
      "lng": 55.134327,
      "alt": 5450,
      "spd": 298,
      "ts": 1765079617,
      "hd": 267
    },
    {
      "lat": 25.35705,
      "lng": 55.141209,
      "alt": 5350,
      "spd": 294,
      "ts": 1765079613,
      "hd": 268
    },
    {
      "lat": 25.357143,
      "lng": 55.144215,
      "alt": 5300,
      "spd": 292,
      "ts": 1765079611,
      "hd": 268
    },
    {
      "lat": 25.357269,
      "lng": 55.147602,
      "alt": 5275,
      "spd": 290,
      "ts": 1765079609,
      "hd": 268
    },
    {
      "lat": 25.357361,
      "lng": 55.151062,
      "alt": 5200,
      "spd": 288,
      "ts": 1765079606,
      "hd": 268
    },
    {
      "lat": 25.357424,
      "lng": 55.154114,
      "alt": 5150,
      "spd": 287,
      "ts": 1765079604,
      "hd": 268
    },
    {
      "lat": 25.357515,
      "lng": 55.157173,
      "alt": 5100,
      "spd": 285,
      "ts": 1765079602,
      "hd": 267
    },
    {
      "lat": 25.357635,
      "lng": 55.160217,
      "alt": 5050,
      "spd": 284,
      "ts": 1765079600,
      "hd": 267
    },
    {
      "lat": 25.357727,
      "lng": 55.163727,
      "alt": 4975,
      "spd": 283,
      "ts": 1765079598,
      "hd": 267
    },
    {
      "lat": 25.357841,
      "lng": 55.166759,
      "alt": 4925,
      "spd": 282,
      "ts": 1765079596,
      "hd": 267
    },
    {
      "lat": 25.357956,
      "lng": 55.16988,
      "alt": 4875,
      "spd": 281,
      "ts": 1765079593,
      "hd": 268
    },
    {
      "lat": 25.358047,
      "lng": 55.172779,
      "alt": 4800,
      "spd": 280,
      "ts": 1765079591,
      "hd": 269
    },
    {
      "lat": 25.358093,
      "lng": 55.176037,
      "alt": 4750,
      "spd": 280,
      "ts": 1765079589,
      "hd": 272
    },
    {
      "lat": 25.358028,
      "lng": 55.17873,
      "alt": 4675,
      "spd": 280,
      "ts": 1765079587,
      "hd": 275
    },
    {
      "lat": 25.357841,
      "lng": 55.182148,
      "alt": 4625,
      "spd": 279,
      "ts": 1765079585,
      "hd": 277
    },
    {
      "lat": 25.357515,
      "lng": 55.185516,
      "alt": 4550,
      "spd": 280,
      "ts": 1765079583,
      "hd": 279
    },
    {
      "lat": 25.357086,
      "lng": 55.188343,
      "alt": 4475,
      "spd": 278,
      "ts": 1765079581,
      "hd": 282
    },
    {
      "lat": 25.356539,
      "lng": 55.191269,
      "alt": 4425,
      "spd": 278,
      "ts": 1765079578,
      "hd": 284
    },
    {
      "lat": 25.355886,
      "lng": 55.194122,
      "alt": 4350,
      "spd": 278,
      "ts": 1765079576,
      "hd": 287
    },
    {
      "lat": 25.355301,
      "lng": 55.196381,
      "alt": 4275,
      "spd": 276,
      "ts": 1765079574,
      "hd": 290
    },
    {
      "lat": 25.354164,
      "lng": 55.199871,
      "alt": 4200,
      "spd": 275,
      "ts": 1765079572,
      "hd": 294
    },
    {
      "lat": 25.353279,
      "lng": 55.202152,
      "alt": 4125,
      "spd": 274,
      "ts": 1765079570,
      "hd": 297
    },
    {
      "lat": 25.352142,
      "lng": 55.204723,
      "alt": 4075,
      "spd": 273,
      "ts": 1765079568,
      "hd": 298
    },
    {
      "lat": 25.349396,
      "lng": 55.210011,
      "alt": 3925,
      "spd": 271,
      "ts": 1765079564,
      "hd": 303
    },
    {
      "lat": 25.345272,
      "lng": 55.216717,
      "alt": 3725,
      "spd": 270,
      "ts": 1765079558,
      "hd": 304
    },
    {
      "lat": 25.339128,
      "lng": 55.226303,
      "alt": 3425,
      "spd": 266,
      "ts": 1765079549,
      "hd": 305
    },
    {
      "lat": 25.333122,
      "lng": 55.23563,
      "alt": 3175,
      "spd": 262,
      "ts": 1765079541,
      "hd": 305
    },
    {
      "lat": 25.328701,
      "lng": 55.24242,
      "alt": 3000,
      "spd": 258,
      "ts": 1765079534,
      "hd": 305
    },
    {
      "lat": 25.322708,
      "lng": 55.25172,
      "alt": 2850,
      "spd": 249,
      "ts": 1765079526,
      "hd": 305
    },
    {
      "lat": 25.317247,
      "lng": 55.260193,
      "alt": 2725,
      "spd": 241,
      "ts": 1765079518,
      "hd": 305
    },
    {
      "lat": 25.311859,
      "lng": 55.268604,
      "alt": 2550,
      "spd": 235,
      "ts": 1765079509,
      "hd": 305
    },
    {
      "lat": 25.306641,
      "lng": 55.276745,
      "alt": 2275,
      "spd": 233,
      "ts": 1765079501,
      "hd": 305
    },
    {
      "lat": 25.301559,
      "lng": 55.284706,
      "alt": 2025,
      "spd": 232,
      "ts": 1765079492,
      "hd": 304
    },
    {
      "lat": 25.296341,
      "lng": 55.293224,
      "alt": 1775,
      "spd": 228,
      "ts": 1765079484,
      "hd": 302
    },
    {
      "lat": 25.291552,
      "lng": 55.301445,
      "alt": 1625,
      "spd": 222,
      "ts": 1765079476,
      "hd": 301
    },
    {
      "lat": 25.286989,
      "lng": 55.309582,
      "alt": 1525,
      "spd": 211,
      "ts": 1765079468,
      "hd": 301
    },
    {
      "lat": 25.283249,
      "lng": 55.316517,
      "alt": 1450,
      "spd": 202,
      "ts": 1765079459,
      "hd": 300
    },
    {
      "lat": 25.279221,
      "lng": 55.323944,
      "alt": 1225,
      "spd": 198,
      "ts": 1765079451,
      "hd": 300
    },
    {
      "lat": 25.275259,
      "lng": 55.331192,
      "alt": 850,
      "spd": 202,
      "ts": 1765079443,
      "hd": 301
    },
    {
      "lat": 25.272139,
      "lng": 55.336838,
      "alt": 600,
      "spd": 201,
      "ts": 1765079437,
      "hd": 301
    },
    {
      "lat": 25.268051,
      "lng": 55.344189,
      "alt": 300,
      "spd": 198,
      "ts": 1765079428,
      "hd": 301
    },
    {
      "lat": 25.26511,
      "lng": 55.349483,
      "alt": 125,
      "spd": 193,
      "ts": 1765079422,
      "hd": 301
    },
    {
      "lat": 25.244762,
      "lng": 55.382614,
      "alt": 0,
      "spd": 0,
      "ts": 1765079249,
      "hd": 300
    },
    {
      "lat": 25.242638,
      "lng": 55.386486,
      "alt": 0,
      "spd": 9,
      "ts": 1765079189,
      "hd": 303
    },
    {
      "lat": 25.242496,
      "lng": 55.386745,
      "alt": 0,
      "spd": 8,
      "ts": 1765079181,
      "hd": 312
    }
  ],
  "firstTimestamp": 1765079181,
  "s": "IJEaOV6rjDWgSU_AEIFqLPDV7vLUEF8j5XRXuLbN1zBmKbRJ3gtuyL8_-qTM04Oy"
}
)";

#endif // MEMORY_H