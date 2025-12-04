#ifndef MEMORY_H
#define MEMORY_H

const char* const JSON_FLIGHT_DATA = R"(
{
  "data": [
    {
      "callsign": "CMT455",
      "clicks": 341,
      "flight": null,
      "flight_id": "3d5f1d2a",
      "from_city": "Brize Norton",
      "from_iata": "BZZ",
      "model": "A400",
      "squawk": "7001",
      "to_city": null,
      "to_iata": null,
      "type": "Airbus A400M Atlas"
    },
    {
      "callsign": "AAL2703",
      "clicks": 335,
      "flight": "AA2703",
      "flight_id": "3d5ec1d6",
      "from_city": "Miami",
      "from_iata": "MIA",
      "model": "B38M",
      "squawk": "7043",
      "to_city": "Port of Spain",
      "to_iata": "POS",
      "type": "Boeing 737 MAX 8"
    },
    {
      "callsign": "HLE81",
      "clicks": 316,
      "flight": null,
      "flight_id": "3d5f5da7",
      "from_city": "Glasgow",
      "from_iata": "GLA",
      "model": "A169",
      "squawk": "20",
      "to_city": null,
      "to_iata": null,
      "type": "Leonardo AW169"
    },
    {
      "callsign": "UAE19",
      "clicks": 315,
      "flight": "EK19",
      "flight_id": "3d5e1791",
      "from_city": "Dubai",
      "from_iata": "DXB",
      "model": "A388",
      "squawk": "3241",
      "to_city": "Manchester",
      "to_iata": "MAN",
      "type": "Airbus A380-842"
    },
    {
      "callsign": "EZR677",
      "clicks": 298,
      "flight": "7Z677",
      "flight_id": "3d5f607b",
      "from_city": "Oranjestad",
      "from_iata": "AUA",
      "model": "SF34",
      "squawk": "2163",
      "to_city": "Willemstad",
      "to_iata": "CUR",
      "type": "Saab 340B"
    },
    {
      "callsign": "HPJ358",
      "clicks": 278,
      "flight": "HPJ358",
      "flight_id": "3d5eec30",
      "from_city": "St. Petersburg",
      "from_iata": "PIE",
      "model": "LJ60",
      "squawk": "635",
      "to_city": "Oranjestad",
      "to_iata": "AUA",
      "type": "Learjet 60"
    },
    {
      "callsign": "RYR3323",
      "clicks": 277,
      "flight": "FR3323",
      "flight_id": "3d5f54d8",
      "from_city": "Warsaw",
      "from_iata": "WMI",
      "model": "B738",
      "squawk": "2660",
      "to_city": "Athens",
      "to_iata": "ATH",
      "type": "Boeing 737-8AS"
    },
    {
      "clicks": 276,
      "flight_id": "3d5db144",
      "model": "B744",
      "squawk": "207",
      "type": "Boeing 747-412(BCF) "
    },
    {
      "callsign": "RYR7AL",
      "clicks": 273,
      "flight": "FR4165",
      "flight_id": "3d5f3bf2",
      "from_city": "Sarajevo",
      "from_iata": "SJJ",
      "model": "B738",
      "squawk": "6022",
      "to_city": "Stockholm",
      "to_iata": "ARN",
      "type": "Boeing 737-8AS"
    },
    {
      "callsign": "BOX513",
      "clicks": 271,
      "flight": "3S513",
      "flight_id": "3d5f5d00",
      "from_city": "Nottingham",
      "from_iata": "EMA",
      "model": "B77L",
      "squawk": "526",
      "to_city": "Leipzig",
      "to_iata": "LEJ",
      "type": "Boeing 777-FZN"
    }
  ],
  "update_time": 1764874140,
  "version": "0.4.0"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA = R"(
{
  "identification": {
    "id": "3d5ec1d6",
    "row": 5746754346,
    "number": {
      "default": "AA2703",
      "alternative": null
    },
    "callsign": "AAL2703"
  },
  "status": {
    "live": true,
    "text": "Estimated- 15:31",
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
        "utc": 1764876672,
        "local": 1764862272
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
    "countryId": 236,
    "registration": "N335SN",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/5/704038_1743285877_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11681560",
          "copyright": "FOKKER AIRCRAFT",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/1660168_1731272861_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11543724",
          "copyright": "Joshua Bully | DOMINICA AVIATION",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/713194_1722397420_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11429790",
          "copyright": "Victor Machado",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/931286_1748947998_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11742704",
          "copyright": "Andrew Compolo",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/1469850_1708732051_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11259302",
          "copyright": "Guilherme Amancio Moreno",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/5/704038_1743285877.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11681560",
          "copyright": "FOKKER AIRCRAFT",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/1660168_1731272861.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11543724",
          "copyright": "Joshua Bully | DOMINICA AVIATION",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/713194_1722397420.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11429790",
          "copyright": "Victor Machado",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/931286_1748947998.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11742704",
          "copyright": "Andrew Compolo",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/1469850_1708732051.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11259302",
          "copyright": "Guilherme Amancio Moreno",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/5/704038_1743285877.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11681560",
          "copyright": "FOKKER AIRCRAFT",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1660168_1731272861.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11543724",
          "copyright": "Joshua Bully | DOMINICA AVIATION",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/713194_1722397420.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11429790",
          "copyright": "Victor Machado",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/931286_1748947998.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11742704",
          "copyright": "Andrew Compolo",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/1469850_1708732051.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11259302",
          "copyright": "Guilherme Amancio Moreno",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "a3a9ff"
  },
  "airline": {
    "name": "American Airlines",
    "short": "American Airlines",
    "code": {
      "iata": "AA",
      "icao": "AAL"
    },
    "url": "american-airlines-aal"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Miami International Airport",
      "code": {
        "iata": "MIA",
        "icao": "KMIA"
      },
      "position": {
        "latitude": 25.793249,
        "longitude": -80.290497,
        "altitude": 8,
        "country": {
          "id": 236,
          "name": "United States",
          "code": "US",
          "codeLong": "USA"
        },
        "region": {
          "city": "Miami"
        }
      },
      "timezone": {
        "name": "America/New_York",
        "offset": -18000,
        "offsetHours": "-5:00",
        "abbr": "EST",
        "abbrName": "Eastern Standard Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.miami-airport.com/",
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": "D6"
      }
    },
    "destination": {
      "name": "Port of Spain Piarco International Airport",
      "code": {
        "iata": "POS",
        "icao": "TTPP"
      },
      "position": {
        "latitude": 10.59536,
        "longitude": -61.3372,
        "altitude": 58,
        "country": {
          "id": 226,
          "name": "Trinidad And Tobago",
          "code": "TT",
          "codeLong": "TTO"
        },
        "region": {
          "city": "Port of Spain"
        }
      },
      "timezone": {
        "name": "America/Port_of_Spain",
        "offset": -14400,
        "offsetHours": "-4:00",
        "abbr": "AST",
        "abbrName": "Atlantic Standard Time",
        "isDst": false
      },
      "visible": true,
      "website": null,
      "info": {
        "terminal": null,
        "baggage": null,
        "gate": "5"
      }
    },
    "real": null
  },
  "flightHistory": {
    "aircraft": [
      {
        "identification": {
          "id": "3d59a2cc",
          "number": {
            "default": "AA313"
          }
        },
        "airport": {
          "origin": {
            "name": "Miami International Airport",
            "code": {
              "iata": "MIA",
              "icao": "KMIA"
            },
            "position": {
              "latitude": 25.793249,
              "longitude": -80.290497,
              "altitude": 8,
              "country": {
                "id": 236,
                "name": "United States",
                "code": "US",
                "codeLong": "USA"
              },
              "region": {
                "city": "Miami"
              }
            },
            "timezone": {
              "name": "America/New_York",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "EST",
              "abbrName": "Eastern Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.miami-airport.com/"
          },
          "destination": null
        },
        "time": {
          "real": {
            "departure": 1764733902
          }
        }
      },
      {
        "identification": {
          "id": "3d586842",
          "number": {
            "default": "AA1124"
          }
        },
        "airport": {
          "origin": {
            "name": "Barranquilla Ernesto Cortissoz International Airport",
            "code": {
              "iata": "BAQ",
              "icao": "SKBQ"
            },
            "position": {
              "latitude": 10.88946,
              "longitude": -74.780602,
              "altitude": 98,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Barranquilla"
              }
            },
            "timezone": {
              "name": "America/Bogota",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "-05",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": null
          },
          "destination": {
            "name": "Miami International Airport",
            "code": {
              "iata": "MIA",
              "icao": "KMIA"
            },
            "position": {
              "latitude": 25.793249,
              "longitude": -80.290497,
              "altitude": 8,
              "country": {
                "id": 236,
                "name": "United States",
                "code": "US",
                "codeLong": "USA"
              },
              "region": {
                "city": "Miami"
              }
            },
            "timezone": {
              "name": "America/New_York",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "EST",
              "abbrName": "Eastern Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.miami-airport.com/"
          }
        },
        "time": {
          "real": {
            "departure": 1764707072
          }
        }
      },
      {
        "identification": {
          "id": "3d57be64",
          "number": {
            "default": "AA1139"
          }
        },
        "airport": {
          "origin": {
            "name": "Miami International Airport",
            "code": {
              "iata": "MIA",
              "icao": "KMIA"
            },
            "position": {
              "latitude": 25.793249,
              "longitude": -80.290497,
              "altitude": 8,
              "country": {
                "id": 236,
                "name": "United States",
                "code": "US",
                "codeLong": "USA"
              },
              "region": {
                "city": "Miami"
              }
            },
            "timezone": {
              "name": "America/New_York",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "EST",
              "abbrName": "Eastern Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.miami-airport.com/"
          },
          "destination": {
            "name": "Barranquilla Ernesto Cortissoz International Airport",
            "code": {
              "iata": "BAQ",
              "icao": "SKBQ"
            },
            "position": {
              "latitude": 10.88946,
              "longitude": -74.780602,
              "altitude": 98,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Barranquilla"
              }
            },
            "timezone": {
              "name": "America/Bogota",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "-05",
              "abbrName": "",
              "isDst": false
            },
            "visible": true,
            "website": null
          }
        },
        "time": {
          "real": {
            "departure": 1764690524
          }
        }
      },
      {
        "identification": {
          "id": "3d57263d",
          "number": {
            "default": "AA1604"
          }
        },
        "airport": {
          "origin": {
            "name": "San Antonio International Airport",
            "code": {
              "iata": "SAT",
              "icao": "KSAT"
            },
            "position": {
              "latitude": 29.533689,
              "longitude": -98.469704,
              "altitude": 809,
              "country": {
                "id": 236,
                "name": "United States",
                "code": "US",
                "codeLong": "USA"
              },
              "region": {
                "city": "San Antonio"
              }
            },
            "timezone": {
              "name": "America/Chicago",
              "offset": -21600,
              "offsetHours": "-6:00",
              "abbr": "CST",
              "abbrName": "Central Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.sanantonio.gov/SAT"
          },
          "destination": {
            "name": "Miami International Airport",
            "code": {
              "iata": "MIA",
              "icao": "KMIA"
            },
            "position": {
              "latitude": 25.793249,
              "longitude": -80.290497,
              "altitude": 8,
              "country": {
                "id": 236,
                "name": "United States",
                "code": "US",
                "codeLong": "USA"
              },
              "region": {
                "city": "Miami"
              }
            },
            "timezone": {
              "name": "America/New_York",
              "offset": -18000,
              "offsetHours": "-5:00",
              "abbr": "EST",
              "abbrName": "Eastern Standard Time",
              "isDst": false
            },
            "visible": true,
            "website": "http://www.miami-airport.com/"
          }
        },
        "time": {
          "real": {
            "departure": 1764675102
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
      "departure": 1764862200,
      "arrival": 1764876780
    },
    "real": {
      "departure": 1764865028,
      "arrival": null
    },
    "estimated": {
      "departure": null,
      "arrival": 1764876672
    },
    "other": {
      "eta": 1764876672,
      "updated": 1764873588
    },
    "historical": {
      "flighttime": "11559",
      "delay": "-1024"
    }
  },
  "trail": [
    {
      "lat": 14.124756,
      "lng": -63.607811,
      "alt": 37000,
      "spd": 468,
      "ts": 1764874202,
      "hd": 151
    },
    {
      "lat": 14.184513,
      "lng": -63.642063,
      "alt": 37000,
      "spd": 466,
      "ts": 1764874170,
      "hd": 149
    },
    {
      "lat": 14.241486,
      "lng": -63.67709,
      "alt": 37000,
      "spd": 465,
      "ts": 1764874139,
      "hd": 149
    },
    {
      "lat": 14.299347,
      "lng": -63.712654,
      "alt": 37000,
      "spd": 466,
      "ts": 1764874108,
      "hd": 148
    },
    {
      "lat": 14.358719,
      "lng": -63.74926,
      "alt": 37000,
      "spd": 466,
      "ts": 1764874076,
      "hd": 148
    },
    {
      "lat": 14.417228,
      "lng": -63.78537,
      "alt": 37000,
      "spd": 467,
      "ts": 1764874045,
      "hd": 148
    },
    {
      "lat": 14.474208,
      "lng": -63.820545,
      "alt": 37000,
      "spd": 469,
      "ts": 1764874014,
      "hd": 148
    },
    {
      "lat": 14.53244,
      "lng": -63.856564,
      "alt": 37000,
      "spd": 470,
      "ts": 1764873983,
      "hd": 148
    },
    {
      "lat": 14.589752,
      "lng": -63.892033,
      "alt": 37000,
      "spd": 471,
      "ts": 1764873952,
      "hd": 148
    },
    {
      "lat": 14.648575,
      "lng": -63.928402,
      "alt": 37000,
      "spd": 471,
      "ts": 1764873921,
      "hd": 148
    },
    {
      "lat": 14.711243,
      "lng": -63.967232,
      "alt": 37000,
      "spd": 471,
      "ts": 1764873888,
      "hd": 148
    },
    {
      "lat": 14.771988,
      "lng": -64.004929,
      "alt": 37000,
      "spd": 472,
      "ts": 1764873855,
      "hd": 148
    },
    {
      "lat": 14.832847,
      "lng": -64.04274,
      "alt": 37000,
      "spd": 473,
      "ts": 1764873823,
      "hd": 148
    },
    {
      "lat": 14.892838,
      "lng": -64.08007,
      "alt": 37000,
      "spd": 473,
      "ts": 1764873791,
      "hd": 148
    },
    {
      "lat": 14.952621,
      "lng": -64.117317,
      "alt": 37000,
      "spd": 474,
      "ts": 1764873759,
      "hd": 148
    },
    {
      "lat": 15.01149,
      "lng": -64.156204,
      "alt": 37000,
      "spd": 474,
      "ts": 1764873727,
      "hd": 142
    },
    {
      "lat": 15.065282,
      "lng": -64.200424,
      "alt": 37000,
      "spd": 474,
      "ts": 1764873696,
      "hd": 141
    },
    {
      "lat": 15.11998,
      "lng": -64.245636,
      "alt": 37000,
      "spd": 473,
      "ts": 1764873664,
      "hd": 141
    },
    {
      "lat": 15.175657,
      "lng": -64.291695,
      "alt": 37000,
      "spd": 473,
      "ts": 1764873632,
      "hd": 141
    },
    {
      "lat": 15.229111,
      "lng": -64.336128,
      "alt": 37000,
      "spd": 472,
      "ts": 1764873601,
      "hd": 141
    },
    {
      "lat": 15.282349,
      "lng": -64.380363,
      "alt": 37000,
      "spd": 472,
      "ts": 1764873570,
      "hd": 141
    },
    {
      "lat": 15.333143,
      "lng": -64.422501,
      "alt": 37000,
      "spd": 471,
      "ts": 1764873539,
      "hd": 141
    },
    {
      "lat": 15.387268,
      "lng": -64.467484,
      "alt": 37000,
      "spd": 470,
      "ts": 1764873508,
      "hd": 141
    },
    {
      "lat": 15.440679,
      "lng": -64.511765,
      "alt": 37000,
      "spd": 470,
      "ts": 1764873476,
      "hd": 141
    },
    {
      "lat": 15.495483,
      "lng": -64.557304,
      "alt": 37000,
      "spd": 468,
      "ts": 1764873444,
      "hd": 141
    },
    {
      "lat": 15.54854,
      "lng": -64.601372,
      "alt": 37000,
      "spd": 468,
      "ts": 1764873413,
      "hd": 141
    },
    {
      "lat": 15.599515,
      "lng": -64.643852,
      "alt": 37000,
      "spd": 469,
      "ts": 1764873382,
      "hd": 141
    },
    {
      "lat": 15.651933,
      "lng": -64.687546,
      "alt": 37000,
      "spd": 470,
      "ts": 1764873351,
      "hd": 141
    },
    {
      "lat": 15.711659,
      "lng": -64.737381,
      "alt": 37000,
      "spd": 470,
      "ts": 1764873320,
      "hd": 141
    },
    {
      "lat": 15.759004,
      "lng": -64.776962,
      "alt": 37000,
      "spd": 470,
      "ts": 1764873288,
      "hd": 141
    },
    {
      "lat": 15.812724,
      "lng": -64.821785,
      "alt": 37000,
      "spd": 472,
      "ts": 1764873257,
      "hd": 141
    },
    {
      "lat": 15.867645,
      "lng": -64.867668,
      "alt": 37000,
      "spd": 472,
      "ts": 1764873225,
      "hd": 141
    },
    {
      "lat": 15.922309,
      "lng": -64.913361,
      "alt": 37000,
      "spd": 472,
      "ts": 1764873192,
      "hd": 141
    },
    {
      "lat": 15.975861,
      "lng": -64.958107,
      "alt": 37000,
      "spd": 472,
      "ts": 1764873161,
      "hd": 140
    },
    {
      "lat": 16.0284,
      "lng": -65.002129,
      "alt": 37000,
      "spd": 473,
      "ts": 1764873130,
      "hd": 140
    },
    {
      "lat": 16.080679,
      "lng": -65.045929,
      "alt": 37000,
      "spd": 474,
      "ts": 1764873100,
      "hd": 140
    },
    {
      "lat": 16.136627,
      "lng": -65.092934,
      "alt": 37000,
      "spd": 475,
      "ts": 1764873067,
      "hd": 140
    },
    {
      "lat": 16.189774,
      "lng": -65.137604,
      "alt": 37000,
      "spd": 476,
      "ts": 1764873036,
      "hd": 140
    },
    {
      "lat": 16.243612,
      "lng": -65.18277,
      "alt": 37000,
      "spd": 477,
      "ts": 1764873005,
      "hd": 140
    },
    {
      "lat": 16.296799,
      "lng": -65.227516,
      "alt": 37000,
      "spd": 478,
      "ts": 1764872974,
      "hd": 140
    },
    {
      "lat": 16.351776,
      "lng": -65.273827,
      "alt": 37000,
      "spd": 479,
      "ts": 1764872942,
      "hd": 140
    },
    {
      "lat": 16.405792,
      "lng": -65.319359,
      "alt": 37000,
      "spd": 479,
      "ts": 1764872911,
      "hd": 140
    },
    {
      "lat": 16.459568,
      "lng": -65.364632,
      "alt": 37000,
      "spd": 480,
      "ts": 1764872879,
      "hd": 141
    },
    {
      "lat": 16.512863,
      "lng": -65.409515,
      "alt": 37000,
      "spd": 480,
      "ts": 1764872849,
      "hd": 141
    },
    {
      "lat": 16.567709,
      "lng": -65.455711,
      "alt": 37000,
      "spd": 479,
      "ts": 1764872817,
      "hd": 141
    },
    {
      "lat": 16.620895,
      "lng": -65.500488,
      "alt": 37000,
      "spd": 478,
      "ts": 1764872786,
      "hd": 140
    },
    {
      "lat": 16.673676,
      "lng": -65.545204,
      "alt": 37000,
      "spd": 477,
      "ts": 1764872755,
      "hd": 140
    },
    {
      "lat": 16.729385,
      "lng": -65.592453,
      "alt": 37000,
      "spd": 476,
      "ts": 1764872723,
      "hd": 140
    },
    {
      "lat": 16.78129,
      "lng": -65.636398,
      "alt": 37000,
      "spd": 475,
      "ts": 1764872693,
      "hd": 140
    },
    {
      "lat": 16.83728,
      "lng": -65.683784,
      "alt": 37000,
      "spd": 474,
      "ts": 1764872660,
      "hd": 140
    },
    {
      "lat": 16.890747,
      "lng": -65.729126,
      "alt": 37000,
      "spd": 474,
      "ts": 1764872628,
      "hd": 140
    },
    {
      "lat": 16.943991,
      "lng": -65.774315,
      "alt": 37000,
      "spd": 471,
      "ts": 1764872597,
      "hd": 140
    },
    {
      "lat": 16.995758,
      "lng": -65.818222,
      "alt": 37000,
      "spd": 469,
      "ts": 1764872566,
      "hd": 140
    },
    {
      "lat": 17.050594,
      "lng": -65.864754,
      "alt": 37000,
      "spd": 470,
      "ts": 1764872534,
      "hd": 140
    },
    {
      "lat": 17.102129,
      "lng": -65.9086,
      "alt": 37000,
      "spd": 469,
      "ts": 1764872503,
      "hd": 140
    },
    {
      "lat": 17.154593,
      "lng": -65.953232,
      "alt": 37000,
      "spd": 467,
      "ts": 1764872472,
      "hd": 140
    },
    {
      "lat": 17.207336,
      "lng": -65.9981,
      "alt": 37000,
      "spd": 467,
      "ts": 1764872441,
      "hd": 140
    },
    {
      "lat": 17.259888,
      "lng": -66.042816,
      "alt": 37000,
      "spd": 466,
      "ts": 1764872409,
      "hd": 140
    },
    {
      "lat": 17.311939,
      "lng": -66.087326,
      "alt": 37000,
      "spd": 466,
      "ts": 1764872378,
      "hd": 140
    },
    {
      "lat": 17.364496,
      "lng": -66.132202,
      "alt": 37000,
      "spd": 466,
      "ts": 1764872347,
      "hd": 140
    },
    {
      "lat": 17.41901,
      "lng": -66.17865,
      "alt": 37000,
      "spd": 465,
      "ts": 1764872314,
      "hd": 140
    },
    {
      "lat": 17.471706,
      "lng": -66.223724,
      "alt": 37000,
      "spd": 464,
      "ts": 1764872283,
      "hd": 140
    },
    {
      "lat": 17.523006,
      "lng": -66.26757,
      "alt": 37000,
      "spd": 464,
      "ts": 1764872252,
      "hd": 140
    },
    {
      "lat": 17.575565,
      "lng": -66.312592,
      "alt": 37000,
      "spd": 464,
      "ts": 1764872221,
      "hd": 140
    },
    {
      "lat": 17.627144,
      "lng": -66.356735,
      "alt": 37000,
      "spd": 464,
      "ts": 1764872189,
      "hd": 140
    },
    {
      "lat": 17.680679,
      "lng": -66.402695,
      "alt": 37000,
      "spd": 464,
      "ts": 1764872157,
      "hd": 140
    },
    {
      "lat": 17.732492,
      "lng": -66.447128,
      "alt": 37000,
      "spd": 464,
      "ts": 1764872126,
      "hd": 140
    },
    {
      "lat": 17.787964,
      "lng": -66.494751,
      "alt": 37000,
      "spd": 465,
      "ts": 1764872093,
      "hd": 140
    },
    {
      "lat": 17.837933,
      "lng": -66.537766,
      "alt": 37000,
      "spd": 465,
      "ts": 1764872063,
      "hd": 140
    },
    {
      "lat": 17.892838,
      "lng": -66.585052,
      "alt": 37000,
      "spd": 466,
      "ts": 1764872030,
      "hd": 140
    },
    {
      "lat": 17.945375,
      "lng": -66.630318,
      "alt": 37000,
      "spd": 466,
      "ts": 1764871998,
      "hd": 140
    },
    {
      "lat": 18,
      "lng": -66.677277,
      "alt": 37000,
      "spd": 466,
      "ts": 1764871966,
      "hd": 140
    },
    {
      "lat": 18.052073,
      "lng": -66.722229,
      "alt": 37000,
      "spd": 466,
      "ts": 1764871934,
      "hd": 140
    },
    {
      "lat": 18.10437,
      "lng": -66.767288,
      "alt": 37000,
      "spd": 466,
      "ts": 1764871903,
      "hd": 140
    },
    {
      "lat": 18.158678,
      "lng": -66.814186,
      "alt": 37000,
      "spd": 467,
      "ts": 1764871871,
      "hd": 140
    },
    {
      "lat": 18.209885,
      "lng": -66.858345,
      "alt": 37000,
      "spd": 468,
      "ts": 1764871840,
      "hd": 140
    },
    {
      "lat": 18.261419,
      "lng": -66.902946,
      "alt": 37000,
      "spd": 468,
      "ts": 1764871809,
      "hd": 140
    },
    {
      "lat": 18.315001,
      "lng": -66.949287,
      "alt": 37000,
      "spd": 468,
      "ts": 1764871777,
      "hd": 140
    },
    {
      "lat": 18.366394,
      "lng": -66.993828,
      "alt": 37000,
      "spd": 467,
      "ts": 1764871747,
      "hd": 140
    },
    {
      "lat": 18.419632,
      "lng": -67.040192,
      "alt": 37000,
      "spd": 468,
      "ts": 1764871715,
      "hd": 140
    },
    {
      "lat": 18.474302,
      "lng": -67.087959,
      "alt": 37000,
      "spd": 467,
      "ts": 1764871682,
      "hd": 139
    },
    {
      "lat": 18.513731,
      "lng": -67.129311,
      "alt": 37000,
      "spd": 465,
      "ts": 1764871656,
      "hd": 130
    },
    {
      "lat": 18.55521,
      "lng": -67.183746,
      "alt": 37000,
      "spd": 465,
      "ts": 1764871626,
      "hd": 128
    },
    {
      "lat": 18.597618,
      "lng": -67.239876,
      "alt": 37000,
      "spd": 466,
      "ts": 1764871594,
      "hd": 128
    },
    {
      "lat": 18.639097,
      "lng": -67.294907,
      "alt": 37000,
      "spd": 467,
      "ts": 1764871563,
      "hd": 128
    },
    {
      "lat": 18.681366,
      "lng": -67.351135,
      "alt": 37000,
      "spd": 468,
      "ts": 1764871532,
      "hd": 128
    },
    {
      "lat": 18.722351,
      "lng": -67.405685,
      "alt": 37000,
      "spd": 468,
      "ts": 1764871501,
      "hd": 128
    },
    {
      "lat": 18.764881,
      "lng": -67.462349,
      "alt": 37000,
      "spd": 468,
      "ts": 1764871469,
      "hd": 128
    },
    {
      "lat": 18.807861,
      "lng": -67.519569,
      "alt": 37000,
      "spd": 469,
      "ts": 1764871437,
      "hd": 128
    },
    {
      "lat": 18.849514,
      "lng": -67.575058,
      "alt": 37000,
      "spd": 469,
      "ts": 1764871406,
      "hd": 128
    },
    {
      "lat": 18.892109,
      "lng": -67.631889,
      "alt": 37000,
      "spd": 469,
      "ts": 1764871375,
      "hd": 128
    },
    {
      "lat": 18.933746,
      "lng": -67.687454,
      "alt": 37000,
      "spd": 469,
      "ts": 1764871344,
      "hd": 128
    },
    {
      "lat": 18.974833,
      "lng": -67.742348,
      "alt": 37000,
      "spd": 470,
      "ts": 1764871314,
      "hd": 128
    },
    {
      "lat": 19.018204,
      "lng": -67.800606,
      "alt": 37000,
      "spd": 469,
      "ts": 1764871281,
      "hd": 128
    },
    {
      "lat": 19.061325,
      "lng": -67.858551,
      "alt": 37000,
      "spd": 470,
      "ts": 1764871249,
      "hd": 128
    },
    {
      "lat": 19.103828,
      "lng": -67.915436,
      "alt": 36825,
      "spd": 470,
      "ts": 1764871218,
      "hd": 128
    },
    {
      "lat": 19.147913,
      "lng": -67.97451,
      "alt": 36500,
      "spd": 468,
      "ts": 1764871184,
      "hd": 128
    },
    {
      "lat": 19.188675,
      "lng": -68.029259,
      "alt": 36150,
      "spd": 469,
      "ts": 1764871154,
      "hd": 128
    },
    {
      "lat": 19.229828,
      "lng": -68.084534,
      "alt": 35725,
      "spd": 472,
      "ts": 1764871123,
      "hd": 128
    },
    {
      "lat": 19.272161,
      "lng": -68.14135,
      "alt": 35300,
      "spd": 472,
      "ts": 1764871092,
      "hd": 128
    },
    {
      "lat": 19.313593,
      "lng": -68.197182,
      "alt": 35025,
      "spd": 469,
      "ts": 1764871061,
      "hd": 127
    },
    {
      "lat": 19.355392,
      "lng": -68.253448,
      "alt": 35000,
      "spd": 466,
      "ts": 1764871030,
      "hd": 128
    },
    {
      "lat": 19.398876,
      "lng": -68.311989,
      "alt": 35000,
      "spd": 467,
      "ts": 1764870997,
      "hd": 127
    },
    {
      "lat": 19.442402,
      "lng": -68.370667,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870965,
      "hd": 127
    },
    {
      "lat": 19.482971,
      "lng": -68.425453,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870935,
      "hd": 127
    },
    {
      "lat": 19.52494,
      "lng": -68.482277,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870903,
      "hd": 127
    },
    {
      "lat": 19.566046,
      "lng": -68.538055,
      "alt": 35000,
      "spd": 467,
      "ts": 1764870872,
      "hd": 127
    },
    {
      "lat": 19.610363,
      "lng": -68.598236,
      "alt": 35000,
      "spd": 467,
      "ts": 1764870839,
      "hd": 127
    },
    {
      "lat": 19.651016,
      "lng": -68.65361,
      "alt": 35000,
      "spd": 467,
      "ts": 1764870809,
      "hd": 127
    },
    {
      "lat": 19.693954,
      "lng": -68.711884,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870776,
      "hd": 127
    },
    {
      "lat": 19.737442,
      "lng": -68.770882,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870744,
      "hd": 127
    },
    {
      "lat": 19.778044,
      "lng": -68.825897,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870713,
      "hd": 127
    },
    {
      "lat": 19.819756,
      "lng": -68.882233,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870682,
      "hd": 128
    },
    {
      "lat": 19.859985,
      "lng": -68.937492,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870652,
      "hd": 126
    },
    {
      "lat": 19.901917,
      "lng": -68.997429,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870619,
      "hd": 126
    },
    {
      "lat": 19.941513,
      "lng": -69.053833,
      "alt": 35000,
      "spd": 470,
      "ts": 1764870589,
      "hd": 126
    },
    {
      "lat": 19.982025,
      "lng": -69.111557,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870557,
      "hd": 126
    },
    {
      "lat": 20.024185,
      "lng": -69.171982,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870525,
      "hd": 126
    },
    {
      "lat": 20.066071,
      "lng": -69.232018,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870493,
      "hd": 126
    },
    {
      "lat": 20.107498,
      "lng": -69.291504,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870461,
      "hd": 126
    },
    {
      "lat": 20.148926,
      "lng": -69.350945,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870428,
      "hd": 126
    },
    {
      "lat": 20.188477,
      "lng": -69.407745,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870398,
      "hd": 126
    },
    {
      "lat": 20.230299,
      "lng": -69.467949,
      "alt": 35000,
      "spd": 467,
      "ts": 1764870365,
      "hd": 126
    },
    {
      "lat": 20.271498,
      "lng": -69.527328,
      "alt": 35000,
      "spd": 468,
      "ts": 1764870333,
      "hd": 126
    },
    {
      "lat": 20.314362,
      "lng": -69.589264,
      "alt": 35000,
      "spd": 469,
      "ts": 1764870300,
      "hd": 126
    },
    {
      "lat": 20.352951,
      "lng": -69.644981,
      "alt": 35000,
      "spd": 470,
      "ts": 1764870270,
      "hd": 126
    },
    {
      "lat": 20.39566,
      "lng": -69.706581,
      "alt": 35000,
      "spd": 471,
      "ts": 1764870237,
      "hd": 126
    },
    {
      "lat": 20.438852,
      "lng": -69.768974,
      "alt": 35000,
      "spd": 472,
      "ts": 1764870204,
      "hd": 126
    },
    {
      "lat": 20.47966,
      "lng": -69.827972,
      "alt": 35000,
      "spd": 475,
      "ts": 1764870172,
      "hd": 126
    },
    {
      "lat": 20.521317,
      "lng": -69.888351,
      "alt": 35000,
      "spd": 475,
      "ts": 1764870140,
      "hd": 126
    },
    {
      "lat": 20.562124,
      "lng": -69.947701,
      "alt": 35000,
      "spd": 477,
      "ts": 1764870109,
      "hd": 126
    },
    {
      "lat": 20.60174,
      "lng": -70.005379,
      "alt": 35000,
      "spd": 479,
      "ts": 1764870078,
      "hd": 126
    },
    {
      "lat": 20.642426,
      "lng": -70.064606,
      "alt": 35000,
      "spd": 481,
      "ts": 1764870047,
      "hd": 126
    },
    {
      "lat": 20.686138,
      "lng": -70.128281,
      "alt": 35000,
      "spd": 482,
      "ts": 1764870015,
      "hd": 126
    },
    {
      "lat": 20.728729,
      "lng": -70.190231,
      "alt": 35000,
      "spd": 483,
      "ts": 1764869983,
      "hd": 126
    },
    {
      "lat": 20.771255,
      "lng": -70.25222,
      "alt": 35000,
      "spd": 483,
      "ts": 1764869950,
      "hd": 126
    },
    {
      "lat": 20.811039,
      "lng": -70.310455,
      "alt": 35000,
      "spd": 484,
      "ts": 1764869920,
      "hd": 126
    },
    {
      "lat": 20.854065,
      "lng": -70.373611,
      "alt": 35000,
      "spd": 483,
      "ts": 1764869887,
      "hd": 126
    },
    {
      "lat": 20.897346,
      "lng": -70.436798,
      "alt": 35000,
      "spd": 483,
      "ts": 1764869855,
      "hd": 126
    },
    {
      "lat": 20.940125,
      "lng": -70.499466,
      "alt": 35000,
      "spd": 483,
      "ts": 1764869822,
      "hd": 126
    },
    {
      "lat": 20.980179,
      "lng": -70.558121,
      "alt": 35000,
      "spd": 483,
      "ts": 1764869792,
      "hd": 126
    },
    {
      "lat": 21.022247,
      "lng": -70.61982,
      "alt": 35000,
      "spd": 482,
      "ts": 1764869759,
      "hd": 125
    },
    {
      "lat": 21.064749,
      "lng": -70.68222,
      "alt": 35000,
      "spd": 483,
      "ts": 1764869727,
      "hd": 126
    },
    {
      "lat": 21.105652,
      "lng": -70.742218,
      "alt": 35000,
      "spd": 484,
      "ts": 1764869696,
      "hd": 126
    },
    {
      "lat": 21.146307,
      "lng": -70.802002,
      "alt": 35000,
      "spd": 485,
      "ts": 1764869666,
      "hd": 125
    },
    {
      "lat": 21.186855,
      "lng": -70.861816,
      "alt": 35000,
      "spd": 486,
      "ts": 1764869635,
      "hd": 125
    },
    {
      "lat": 21.227728,
      "lng": -70.922447,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869604,
      "hd": 125
    },
    {
      "lat": 21.270767,
      "lng": -70.986259,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869571,
      "hd": 125
    },
    {
      "lat": 21.314484,
      "lng": -71.050934,
      "alt": 35000,
      "spd": 488,
      "ts": 1764869538,
      "hd": 125
    },
    {
      "lat": 21.355513,
      "lng": -71.111755,
      "alt": 35000,
      "spd": 488,
      "ts": 1764869507,
      "hd": 125
    },
    {
      "lat": 21.396433,
      "lng": -71.172691,
      "alt": 35000,
      "spd": 488,
      "ts": 1764869476,
      "hd": 125
    },
    {
      "lat": 21.437485,
      "lng": -71.233604,
      "alt": 35000,
      "spd": 488,
      "ts": 1764869445,
      "hd": 125
    },
    {
      "lat": 21.479828,
      "lng": -71.296478,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869413,
      "hd": 125
    },
    {
      "lat": 21.522869,
      "lng": -71.360474,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869381,
      "hd": 125
    },
    {
      "lat": 21.564789,
      "lng": -71.422966,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869349,
      "hd": 125
    },
    {
      "lat": 21.607178,
      "lng": -71.486237,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869316,
      "hd": 125
    },
    {
      "lat": 21.647955,
      "lng": -71.547142,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869286,
      "hd": 125
    },
    {
      "lat": 21.690811,
      "lng": -71.611183,
      "alt": 35000,
      "spd": 486,
      "ts": 1764869253,
      "hd": 125
    },
    {
      "lat": 21.731329,
      "lng": -71.6716,
      "alt": 35000,
      "spd": 486,
      "ts": 1764869222,
      "hd": 125
    },
    {
      "lat": 21.771332,
      "lng": -71.731537,
      "alt": 35000,
      "spd": 486,
      "ts": 1764869191,
      "hd": 125
    },
    {
      "lat": 21.812851,
      "lng": -71.793755,
      "alt": 35000,
      "spd": 487,
      "ts": 1764869160,
      "hd": 125
    },
    {
      "lat": 21.854786,
      "lng": -71.856743,
      "alt": 35000,
      "spd": 488,
      "ts": 1764869128,
      "hd": 125
    },
    {
      "lat": 21.895332,
      "lng": -71.917625,
      "alt": 35000,
      "spd": 488,
      "ts": 1764869097,
      "hd": 125
    },
    {
      "lat": 21.93782,
      "lng": -71.981575,
      "alt": 35000,
      "spd": 489,
      "ts": 1764869065,
      "hd": 125
    },
    {
      "lat": 21.978745,
      "lng": -72.043243,
      "alt": 35000,
      "spd": 489,
      "ts": 1764869034,
      "hd": 125
    },
    {
      "lat": 22.020279,
      "lng": -72.105865,
      "alt": 35000,
      "spd": 491,
      "ts": 1764869002,
      "hd": 125
    },
    {
      "lat": 22.06064,
      "lng": -72.166748,
      "alt": 35000,
      "spd": 490,
      "ts": 1764868972,
      "hd": 125
    },
    {
      "lat": 22.101425,
      "lng": -72.228516,
      "alt": 35000,
      "spd": 490,
      "ts": 1764868941,
      "hd": 125
    },
    {
      "lat": 22.143494,
      "lng": -72.292236,
      "alt": 35000,
      "spd": 490,
      "ts": 1764868909,
      "hd": 125
    },
    {
      "lat": 22.184692,
      "lng": -72.354706,
      "alt": 35000,
      "spd": 489,
      "ts": 1764868877,
      "hd": 125
    },
    {
      "lat": 22.226831,
      "lng": -72.418617,
      "alt": 35000,
      "spd": 487,
      "ts": 1764868846,
      "hd": 125
    },
    {
      "lat": 22.26696,
      "lng": -72.479553,
      "alt": 35000,
      "spd": 487,
      "ts": 1764868815,
      "hd": 125
    },
    {
      "lat": 22.309135,
      "lng": -72.543587,
      "alt": 35000,
      "spd": 486,
      "ts": 1764868782,
      "hd": 125
    },
    {
      "lat": 22.350266,
      "lng": -72.606049,
      "alt": 35000,
      "spd": 485,
      "ts": 1764868750,
      "hd": 125
    },
    {
      "lat": 22.391859,
      "lng": -72.669472,
      "alt": 35000,
      "spd": 484,
      "ts": 1764868719,
      "hd": 125
    },
    {
      "lat": 22.430218,
      "lng": -72.730965,
      "alt": 35000,
      "spd": 483,
      "ts": 1764868688,
      "hd": 119
    },
    {
      "lat": 22.46283,
      "lng": -72.79686,
      "alt": 35000,
      "spd": 484,
      "ts": 1764868657,
      "hd": 117
    },
    {
      "lat": 22.495903,
      "lng": -72.864075,
      "alt": 35000,
      "spd": 483,
      "ts": 1764868626,
      "hd": 117
    },
    {
      "lat": 22.528584,
      "lng": -72.930603,
      "alt": 35000,
      "spd": 483,
      "ts": 1764868594,
      "hd": 117
    },
    {
      "lat": 22.562347,
      "lng": -72.999405,
      "alt": 35000,
      "spd": 483,
      "ts": 1764868562,
      "hd": 117
    },
    {
      "lat": 22.594666,
      "lng": -73.065224,
      "alt": 35000,
      "spd": 481,
      "ts": 1764868531,
      "hd": 117
    },
    {
      "lat": 22.626572,
      "lng": -73.13044,
      "alt": 35000,
      "spd": 482,
      "ts": 1764868500,
      "hd": 117
    },
    {
      "lat": 22.658386,
      "lng": -73.195412,
      "alt": 35000,
      "spd": 482,
      "ts": 1764868470,
      "hd": 117
    },
    {
      "lat": 22.691608,
      "lng": -73.263451,
      "alt": 35000,
      "spd": 482,
      "ts": 1764868438,
      "hd": 117
    },
    {
      "lat": 22.725723,
      "lng": -73.33329,
      "alt": 35000,
      "spd": 483,
      "ts": 1764868405,
      "hd": 117
    },
    {
      "lat": 22.758408,
      "lng": -73.400558,
      "alt": 35000,
      "spd": 484,
      "ts": 1764868374,
      "hd": 117
    },
    {
      "lat": 22.791046,
      "lng": -73.467575,
      "alt": 35000,
      "spd": 485,
      "ts": 1764868343,
      "hd": 117
    },
    {
      "lat": 22.824469,
      "lng": -73.536278,
      "alt": 35000,
      "spd": 486,
      "ts": 1764868311,
      "hd": 117
    },
    {
      "lat": 22.858795,
      "lng": -73.607002,
      "alt": 35000,
      "spd": 488,
      "ts": 1764868278,
      "hd": 117
    },
    {
      "lat": 22.891159,
      "lng": -73.673668,
      "alt": 35000,
      "spd": 491,
      "ts": 1764868248,
      "hd": 117
    },
    {
      "lat": 22.924603,
      "lng": -73.742775,
      "alt": 35000,
      "spd": 492,
      "ts": 1764868216,
      "hd": 117
    },
    {
      "lat": 22.957214,
      "lng": -73.810249,
      "alt": 35000,
      "spd": 494,
      "ts": 1764868185,
      "hd": 117
    },
    {
      "lat": 22.990448,
      "lng": -73.879158,
      "alt": 35000,
      "spd": 495,
      "ts": 1764868153,
      "hd": 117
    },
    {
      "lat": 23.023727,
      "lng": -73.948227,
      "alt": 35000,
      "spd": 495,
      "ts": 1764868122,
      "hd": 117
    },
    {
      "lat": 23.056671,
      "lng": -74.016777,
      "alt": 35000,
      "spd": 495,
      "ts": 1764868091,
      "hd": 117
    },
    {
      "lat": 23.089071,
      "lng": -74.084267,
      "alt": 35000,
      "spd": 496,
      "ts": 1764868060,
      "hd": 117
    },
    {
      "lat": 23.12422,
      "lng": -74.157616,
      "alt": 35000,
      "spd": 496,
      "ts": 1764868027,
      "hd": 117
    },
    {
      "lat": 23.156898,
      "lng": -74.225716,
      "alt": 35000,
      "spd": 496,
      "ts": 1764867996,
      "hd": 117
    },
    {
      "lat": 23.191254,
      "lng": -74.297432,
      "alt": 35000,
      "spd": 496,
      "ts": 1764867964,
      "hd": 117
    },
    {
      "lat": 23.224073,
      "lng": -74.365944,
      "alt": 35000,
      "spd": 496,
      "ts": 1764867933,
      "hd": 117
    },
    {
      "lat": 23.257452,
      "lng": -74.435829,
      "alt": 35000,
      "spd": 495,
      "ts": 1764867902,
      "hd": 117
    },
    {
      "lat": 23.290375,
      "lng": -74.505035,
      "alt": 35000,
      "spd": 495,
      "ts": 1764867870,
      "hd": 117
    },
    {
      "lat": 23.323696,
      "lng": -74.574989,
      "alt": 35000,
      "spd": 493,
      "ts": 1764867839,
      "hd": 117
    },
    {
      "lat": 23.357391,
      "lng": -74.645958,
      "alt": 35000,
      "spd": 493,
      "ts": 1764867806,
      "hd": 117
    },
    {
      "lat": 23.390717,
      "lng": -74.71637,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867774,
      "hd": 117
    },
    {
      "lat": 23.424295,
      "lng": -74.78714,
      "alt": 35000,
      "spd": 490,
      "ts": 1764867742,
      "hd": 117
    },
    {
      "lat": 23.455765,
      "lng": -74.853699,
      "alt": 35000,
      "spd": 488,
      "ts": 1764867711,
      "hd": 117
    },
    {
      "lat": 23.488037,
      "lng": -74.921967,
      "alt": 35000,
      "spd": 488,
      "ts": 1764867680,
      "hd": 117
    },
    {
      "lat": 23.524754,
      "lng": -74.999901,
      "alt": 35000,
      "spd": 488,
      "ts": 1764867645,
      "hd": 117
    },
    {
      "lat": 23.552261,
      "lng": -75.058388,
      "alt": 35000,
      "spd": 488,
      "ts": 1764867618,
      "hd": 117
    },
    {
      "lat": 23.584202,
      "lng": -75.126328,
      "alt": 35000,
      "spd": 489,
      "ts": 1764867587,
      "hd": 117
    },
    {
      "lat": 23.61772,
      "lng": -75.197891,
      "alt": 35000,
      "spd": 489,
      "ts": 1764867554,
      "hd": 117
    },
    {
      "lat": 23.650307,
      "lng": -75.267281,
      "alt": 35000,
      "spd": 490,
      "ts": 1764867523,
      "hd": 117
    },
    {
      "lat": 23.683357,
      "lng": -75.337654,
      "alt": 35000,
      "spd": 490,
      "ts": 1764867491,
      "hd": 117
    },
    {
      "lat": 23.71756,
      "lng": -75.410614,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867458,
      "hd": 116
    },
    {
      "lat": 23.749512,
      "lng": -75.479126,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867427,
      "hd": 116
    },
    {
      "lat": 23.781876,
      "lng": -75.548607,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867395,
      "hd": 116
    },
    {
      "lat": 23.813612,
      "lng": -75.616776,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867364,
      "hd": 116
    },
    {
      "lat": 23.847128,
      "lng": -75.688957,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867332,
      "hd": 116
    },
    {
      "lat": 23.878691,
      "lng": -75.757156,
      "alt": 35000,
      "spd": 492,
      "ts": 1764867301,
      "hd": 116
    },
    {
      "lat": 23.91058,
      "lng": -75.82608,
      "alt": 35000,
      "spd": 492,
      "ts": 1764867270,
      "hd": 116
    },
    {
      "lat": 23.943375,
      "lng": -75.897118,
      "alt": 35000,
      "spd": 492,
      "ts": 1764867238,
      "hd": 116
    },
    {
      "lat": 23.975418,
      "lng": -75.966393,
      "alt": 35000,
      "spd": 492,
      "ts": 1764867207,
      "hd": 116
    },
    {
      "lat": 24.007082,
      "lng": -76.034821,
      "alt": 35000,
      "spd": 492,
      "ts": 1764867176,
      "hd": 116
    },
    {
      "lat": 24.038691,
      "lng": -76.103226,
      "alt": 35000,
      "spd": 492,
      "ts": 1764867145,
      "hd": 116
    },
    {
      "lat": 24.070038,
      "lng": -76.171318,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867115,
      "hd": 116
    },
    {
      "lat": 24.101624,
      "lng": -76.240082,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867084,
      "hd": 116
    },
    {
      "lat": 24.132889,
      "lng": -76.308136,
      "alt": 35000,
      "spd": 490,
      "ts": 1764867053,
      "hd": 116
    },
    {
      "lat": 24.16564,
      "lng": -76.379906,
      "alt": 35000,
      "spd": 491,
      "ts": 1764867020,
      "hd": 116
    },
    {
      "lat": 24.19804,
      "lng": -76.450592,
      "alt": 35000,
      "spd": 491,
      "ts": 1764866989,
      "hd": 116
    },
    {
      "lat": 24.231995,
      "lng": -76.524757,
      "alt": 35000,
      "spd": 492,
      "ts": 1764866956,
      "hd": 116
    },
    {
      "lat": 24.264359,
      "lng": -76.595512,
      "alt": 35000,
      "spd": 493,
      "ts": 1764866924,
      "hd": 116
    },
    {
      "lat": 24.297335,
      "lng": -76.667679,
      "alt": 35000,
      "spd": 494,
      "ts": 1764866892,
      "hd": 116
    },
    {
      "lat": 24.329407,
      "lng": -76.737877,
      "alt": 35000,
      "spd": 494,
      "ts": 1764866860,
      "hd": 116
    },
    {
      "lat": 24.362503,
      "lng": -76.809998,
      "alt": 35000,
      "spd": 493,
      "ts": 1764866827,
      "hd": 116
    },
    {
      "lat": 24.395645,
      "lng": -76.882935,
      "alt": 35000,
      "spd": 493,
      "ts": 1764866795,
      "hd": 116
    },
    {
      "lat": 24.42691,
      "lng": -76.95343,
      "alt": 35000,
      "spd": 494,
      "ts": 1764866764,
      "hd": 115
    },
    {
      "lat": 24.457428,
      "lng": -77.021988,
      "alt": 35000,
      "spd": 495,
      "ts": 1764866733,
      "hd": 116
    },
    {
      "lat": 24.490219,
      "lng": -77.09417,
      "alt": 35000,
      "spd": 496,
      "ts": 1764866701,
      "hd": 116
    },
    {
      "lat": 24.521622,
      "lng": -77.163948,
      "alt": 35000,
      "spd": 496,
      "ts": 1764866670,
      "hd": 116
    },
    {
      "lat": 24.553757,
      "lng": -77.235619,
      "alt": 35000,
      "spd": 496,
      "ts": 1764866639,
      "hd": 116
    },
    {
      "lat": 24.58526,
      "lng": -77.305763,
      "alt": 35000,
      "spd": 498,
      "ts": 1764866607,
      "hd": 116
    },
    {
      "lat": 24.617386,
      "lng": -77.377319,
      "alt": 35000,
      "spd": 499,
      "ts": 1764866576,
      "hd": 116
    },
    {
      "lat": 24.649887,
      "lng": -77.45005,
      "alt": 34625,
      "spd": 498,
      "ts": 1764866544,
      "hd": 116
    },
    {
      "lat": 24.683811,
      "lng": -77.526215,
      "alt": 34325,
      "spd": 495,
      "ts": 1764866511,
      "hd": 116
    },
    {
      "lat": 24.714661,
      "lng": -77.595619,
      "alt": 34075,
      "spd": 491,
      "ts": 1764866480,
      "hd": 115
    },
    {
      "lat": 24.747253,
      "lng": -77.669121,
      "alt": 33675,
      "spd": 490,
      "ts": 1764866447,
      "hd": 115
    },
    {
      "lat": 24.780212,
      "lng": -77.743584,
      "alt": 33250,
      "spd": 487,
      "ts": 1764866414,
      "hd": 115
    },
    {
      "lat": 24.811831,
      "lng": -77.814659,
      "alt": 32700,
      "spd": 491,
      "ts": 1764866382,
      "hd": 116
    },
    {
      "lat": 24.842463,
      "lng": -77.883011,
      "alt": 32100,
      "spd": 492,
      "ts": 1764866351,
      "hd": 116
    },
    {
      "lat": 24.8741,
      "lng": -77.95359,
      "alt": 31550,
      "spd": 495,
      "ts": 1764866320,
      "hd": 115
    },
    {
      "lat": 24.906097,
      "lng": -78.02607,
      "alt": 31100,
      "spd": 491,
      "ts": 1764866288,
      "hd": 115
    },
    {
      "lat": 24.936729,
      "lng": -78.095688,
      "alt": 30700,
      "spd": 488,
      "ts": 1764866257,
      "hd": 115
    },
    {
      "lat": 24.969084,
      "lng": -78.169334,
      "alt": 30250,
      "spd": 485,
      "ts": 1764866224,
      "hd": 115
    },
    {
      "lat": 24.998737,
      "lng": -78.236755,
      "alt": 29875,
      "spd": 479,
      "ts": 1764866194,
      "hd": 115
    },
    {
      "lat": 25.028732,
      "lng": -78.305107,
      "alt": 29425,
      "spd": 475,
      "ts": 1764866162,
      "hd": 115
    },
    {
      "lat": 25.058977,
      "lng": -78.374237,
      "alt": 28975,
      "spd": 471,
      "ts": 1764866130,
      "hd": 115
    },
    {
      "lat": 25.090027,
      "lng": -78.445076,
      "alt": 28450,
      "spd": 468,
      "ts": 1764866098,
      "hd": 115
    },
    {
      "lat": 25.119049,
      "lng": -78.511452,
      "alt": 27925,
      "spd": 464,
      "ts": 1764866067,
      "hd": 115
    },
    {
      "lat": 25.149101,
      "lng": -78.58049,
      "alt": 27400,
      "spd": 461,
      "ts": 1764866034,
      "hd": 115
    },
    {
      "lat": 25.179153,
      "lng": -78.649544,
      "alt": 26850,
      "spd": 456,
      "ts": 1764866001,
      "hd": 115
    },
    {
      "lat": 25.207897,
      "lng": -78.715485,
      "alt": 26375,
      "spd": 451,
      "ts": 1764865970,
      "hd": 115
    },
    {
      "lat": 25.23674,
      "lng": -78.781891,
      "alt": 25825,
      "spd": 445,
      "ts": 1764865938,
      "hd": 115
    },
    {
      "lat": 25.265203,
      "lng": -78.84758,
      "alt": 25200,
      "spd": 441,
      "ts": 1764865905,
      "hd": 115
    },
    {
      "lat": 25.293461,
      "lng": -78.912926,
      "alt": 24550,
      "spd": 437,
      "ts": 1764865873,
      "hd": 115
    },
    {
      "lat": 25.320833,
      "lng": -78.976517,
      "alt": 23850,
      "spd": 433,
      "ts": 1764865841,
      "hd": 115
    },
    {
      "lat": 25.347565,
      "lng": -79.038338,
      "alt": 23075,
      "spd": 432,
      "ts": 1764865810,
      "hd": 115
    },
    {
      "lat": 25.375351,
      "lng": -79.102631,
      "alt": 22325,
      "spd": 428,
      "ts": 1764865778,
      "hd": 115
    },
    {
      "lat": 25.402725,
      "lng": -79.166359,
      "alt": 21625,
      "spd": 423,
      "ts": 1764865745,
      "hd": 115
    },
    {
      "lat": 25.429733,
      "lng": -79.229332,
      "alt": 20925,
      "spd": 417,
      "ts": 1764865713,
      "hd": 115
    },
    {
      "lat": 25.456068,
      "lng": -79.290558,
      "alt": 20275,
      "spd": 412,
      "ts": 1764865681,
      "hd": 115
    },
    {
      "lat": 25.482147,
      "lng": -79.35125,
      "alt": 19600,
      "spd": 403,
      "ts": 1764865649,
      "hd": 115
    },
    {
      "lat": 25.506762,
      "lng": -79.408974,
      "alt": 18875,
      "spd": 398,
      "ts": 1764865618,
      "hd": 115
    },
    {
      "lat": 25.532227,
      "lng": -79.468536,
      "alt": 18075,
      "spd": 392,
      "ts": 1764865585,
      "hd": 115
    },
    {
      "lat": 25.556442,
      "lng": -79.525352,
      "alt": 17200,
      "spd": 389,
      "ts": 1764865554,
      "hd": 115
    },
    {
      "lat": 25.579897,
      "lng": -79.580299,
      "alt": 16275,
      "spd": 386,
      "ts": 1764865523,
      "hd": 115
    },
    {
      "lat": 25.604383,
      "lng": -79.637611,
      "alt": 15300,
      "spd": 385,
      "ts": 1764865491,
      "hd": 115
    },
    {
      "lat": 25.627625,
      "lng": -79.692284,
      "alt": 14425,
      "spd": 378,
      "ts": 1764865461,
      "hd": 115
    },
    {
      "lat": 25.651308,
      "lng": -79.747787,
      "alt": 13550,
      "spd": 370,
      "ts": 1764865429,
      "hd": 115
    },
    {
      "lat": 25.673676,
      "lng": -79.798737,
      "alt": 12750,
      "spd": 359,
      "ts": 1764865398,
      "hd": 115
    },
    {
      "lat": 25.675049,
      "lng": -79.801888,
      "alt": 12675,
      "spd": 359,
      "ts": 1764865396,
      "hd": 115
    },
    {
      "lat": 25.677017,
      "lng": -79.806572,
      "alt": 12550,
      "spd": 360,
      "ts": 1764865394,
      "hd": 114
    },
    {
      "lat": 25.678299,
      "lng": -79.809776,
      "alt": 12475,
      "spd": 360,
      "ts": 1764865392,
      "hd": 113
    },
    {
      "lat": 25.679901,
      "lng": -79.813843,
      "alt": 12400,
      "spd": 360,
      "ts": 1764865390,
      "hd": 113
    },
    {
      "lat": 25.681412,
      "lng": -79.817711,
      "alt": 12300,
      "spd": 360,
      "ts": 1764865387,
      "hd": 112
    },
    {
      "lat": 25.68273,
      "lng": -79.82132,
      "alt": 12225,
      "spd": 360,
      "ts": 1764865385,
      "hd": 112
    },
    {
      "lat": 25.684158,
      "lng": -79.825081,
      "alt": 12175,
      "spd": 360,
      "ts": 1764865383,
      "hd": 112
    },
    {
      "lat": 25.685394,
      "lng": -79.828491,
      "alt": 12100,
      "spd": 358,
      "ts": 1764865381,
      "hd": 113
    },
    {
      "lat": 25.686594,
      "lng": -79.831528,
      "alt": 12050,
      "spd": 358,
      "ts": 1764865379,
      "hd": 114
    },
    {
      "lat": 25.688324,
      "lng": -79.835716,
      "alt": 12000,
      "spd": 356,
      "ts": 1764865376,
      "hd": 115
    },
    {
      "lat": 25.689899,
      "lng": -79.839355,
      "alt": 11950,
      "spd": 355,
      "ts": 1764865374,
      "hd": 116
    },
    {
      "lat": 25.698441,
      "lng": -79.85601,
      "alt": 11675,
      "spd": 349,
      "ts": 1764865364,
      "hd": 123
    },
    {
      "lat": 25.711899,
      "lng": -79.877167,
      "alt": 11325,
      "spd": 341,
      "ts": 1764865349,
      "hd": 126
    },
    {
      "lat": 25.724487,
      "lng": -79.896202,
      "alt": 10925,
      "spd": 335,
      "ts": 1764865336,
      "hd": 126
    },
    {
      "lat": 25.736311,
      "lng": -79.914291,
      "alt": 10575,
      "spd": 328,
      "ts": 1764865322,
      "hd": 125
    },
    {
      "lat": 25.747696,
      "lng": -79.931541,
      "alt": 10350,
      "spd": 316,
      "ts": 1764865309,
      "hd": 126
    },
    {
      "lat": 25.759123,
      "lng": -79.948387,
      "alt": 9975,
      "spd": 307,
      "ts": 1764865296,
      "hd": 127
    },
    {
      "lat": 25.769735,
      "lng": -79.96373,
      "alt": 9500,
      "spd": 305,
      "ts": 1764865284,
      "hd": 127
    },
    {
      "lat": 25.780884,
      "lng": -79.979858,
      "alt": 9075,
      "spd": 299,
      "ts": 1764865271,
      "hd": 126
    },
    {
      "lat": 25.792873,
      "lng": -79.997986,
      "alt": 8550,
      "spd": 292,
      "ts": 1764865256,
      "hd": 126
    },
    {
      "lat": 25.794342,
      "lng": -80.000153,
      "alt": 8500,
      "spd": 291,
      "ts": 1764865254,
      "hd": 126
    },
    {
      "lat": 25.795853,
      "lng": -80.002441,
      "alt": 8425,
      "spd": 290,
      "ts": 1764865252,
      "hd": 126
    },
    {
      "lat": 25.797958,
      "lng": -80.005547,
      "alt": 8325,
      "spd": 289,
      "ts": 1764865250,
      "hd": 126
    },
    {
      "lat": 25.799606,
      "lng": -80.008034,
      "alt": 8250,
      "spd": 288,
      "ts": 1764865248,
      "hd": 126
    },
    {
      "lat": 25.801159,
      "lng": -80.010269,
      "alt": 8175,
      "spd": 288,
      "ts": 1764865246,
      "hd": 126
    },
    {
      "lat": 25.802902,
      "lng": -80.012871,
      "alt": 8075,
      "spd": 288,
      "ts": 1764865244,
      "hd": 126
    },
    {
      "lat": 25.804417,
      "lng": -80.015137,
      "alt": 8000,
      "spd": 287,
      "ts": 1764865242,
      "hd": 126
    },
    {
      "lat": 25.806152,
      "lng": -80.0177,
      "alt": 7900,
      "spd": 287,
      "ts": 1764865240,
      "hd": 126
    },
    {
      "lat": 25.807755,
      "lng": -80.020088,
      "alt": 7800,
      "spd": 287,
      "ts": 1764865237,
      "hd": 125
    },
    {
      "lat": 25.809166,
      "lng": -80.02224,
      "alt": 7725,
      "spd": 287,
      "ts": 1764865235,
      "hd": 124
    },
    {
      "lat": 25.810913,
      "lng": -80.025024,
      "alt": 7625,
      "spd": 286,
      "ts": 1764865233,
      "hd": 123
    },
    {
      "lat": 25.812286,
      "lng": -80.027367,
      "alt": 7550,
      "spd": 286,
      "ts": 1764865231,
      "hd": 120
    },
    {
      "lat": 25.81366,
      "lng": -80.03006,
      "alt": 7475,
      "spd": 286,
      "ts": 1764865229,
      "hd": 118
    },
    {
      "lat": 25.814941,
      "lng": -80.032654,
      "alt": 7400,
      "spd": 285,
      "ts": 1764865227,
      "hd": 115
    },
    {
      "lat": 25.816055,
      "lng": -80.035294,
      "alt": 7325,
      "spd": 284,
      "ts": 1764865225,
      "hd": 113
    },
    {
      "lat": 25.81723,
      "lng": -80.038353,
      "alt": 7250,
      "spd": 284,
      "ts": 1764865223,
      "hd": 111
    },
    {
      "lat": 25.81815,
      "lng": -80.0411,
      "alt": 7175,
      "spd": 283,
      "ts": 1764865221,
      "hd": 108
    },
    {
      "lat": 25.818924,
      "lng": -80.043739,
      "alt": 7100,
      "spd": 282,
      "ts": 1764865219,
      "hd": 106
    },
    {
      "lat": 25.819687,
      "lng": -80.046799,
      "alt": 7025,
      "spd": 281,
      "ts": 1764865217,
      "hd": 103
    },
    {
      "lat": 25.820292,
      "lng": -80.049599,
      "alt": 6975,
      "spd": 281,
      "ts": 1764865215,
      "hd": 101
    },
    {
      "lat": 25.820757,
      "lng": -80.052292,
      "alt": 6900,
      "spd": 279,
      "ts": 1764865213,
      "hd": 99
    },
    {
      "lat": 25.82127,
      "lng": -80.055817,
      "alt": 6825,
      "spd": 277,
      "ts": 1764865211,
      "hd": 96
    },
    {
      "lat": 25.821579,
      "lng": -80.0588,
      "alt": 6750,
      "spd": 277,
      "ts": 1764865209,
      "hd": 94
    },
    {
      "lat": 25.821781,
      "lng": -80.061623,
      "alt": 6675,
      "spd": 276,
      "ts": 1764865207,
      "hd": 93
    },
    {
      "lat": 25.82192,
      "lng": -80.064476,
      "alt": 6575,
      "spd": 275,
      "ts": 1764865205,
      "hd": 91
    },
    {
      "lat": 25.821968,
      "lng": -80.069809,
      "alt": 6400,
      "spd": 275,
      "ts": 1764865200,
      "hd": 88
    },
    {
      "lat": 25.820343,
      "lng": -80.088402,
      "alt": 5825,
      "spd": 274,
      "ts": 1764865187,
      "hd": 82
    },
    {
      "lat": 25.818329,
      "lng": -80.10849,
      "alt": 5225,
      "spd": 268,
      "ts": 1764865173,
      "hd": 83
    },
    {
      "lat": 25.817266,
      "lng": -80.119247,
      "alt": 4900,
      "spd": 265,
      "ts": 1764865165,
      "hd": 83
    },
    {
      "lat": 25.816103,
      "lng": -80.131218,
      "alt": 4575,
      "spd": 261,
      "ts": 1764865156,
      "hd": 83
    },
    {
      "lat": 25.815031,
      "lng": -80.142052,
      "alt": 4300,
      "spd": 255,
      "ts": 1764865148,
      "hd": 83
    },
    {
      "lat": 25.814255,
      "lng": -80.1502,
      "alt": 4025,
      "spd": 252,
      "ts": 1764865142,
      "hd": 83
    },
    {
      "lat": 25.813156,
      "lng": -80.161034,
      "alt": 3550,
      "spd": 253,
      "ts": 1764865133,
      "hd": 83
    },
    {
      "lat": 25.812052,
      "lng": -80.171593,
      "alt": 3200,
      "spd": 252,
      "ts": 1764865125,
      "hd": 82
    },
    {
      "lat": 25.810888,
      "lng": -80.182266,
      "alt": 2950,
      "spd": 244,
      "ts": 1764865117,
      "hd": 83
    },
    {
      "lat": 25.81019,
      "lng": -80.189415,
      "alt": 2825,
      "spd": 235,
      "ts": 1764865111,
      "hd": 83
    },
    {
      "lat": 25.809166,
      "lng": -80.199471,
      "alt": 2600,
      "spd": 226,
      "ts": 1764865102,
      "hd": 83
    },
    {
      "lat": 25.808187,
      "lng": -80.20916,
      "alt": 2350,
      "spd": 218,
      "ts": 1764865094,
      "hd": 83
    },
    {
      "lat": 25.807159,
      "lng": -80.218254,
      "alt": 2075,
      "spd": 211,
      "ts": 1764865086,
      "hd": 82
    },
    {
      "lat": 25.806513,
      "lng": -80.224396,
      "alt": 1900,
      "spd": 207,
      "ts": 1764865080,
      "hd": 83
    },
    {
      "lat": 25.805557,
      "lng": -80.233253,
      "alt": 1675,
      "spd": 201,
      "ts": 1764865071,
      "hd": 83
    },
    {
      "lat": 25.804697,
      "lng": -80.241081,
      "alt": 1550,
      "spd": 190,
      "ts": 1764865063,
      "hd": 83
    },
    {
      "lat": 25.803955,
      "lng": -80.248817,
      "alt": 1325,
      "spd": 183,
      "ts": 1764865055,
      "hd": 83
    },
    {
      "lat": 25.803726,
      "lng": -80.250954,
      "alt": 1225,
      "spd": 182,
      "ts": 1764865053,
      "hd": 83
    },
    {
      "lat": 25.80304,
      "lng": -80.258331,
      "alt": 825,
      "spd": 182,
      "ts": 1764865045,
      "hd": 84
    },
    {
      "lat": 25.802811,
      "lng": -80.260826,
      "alt": 700,
      "spd": 182,
      "ts": 1764865043,
      "hd": 84
    },
    {
      "lat": 25.802673,
      "lng": -80.262146,
      "alt": 625,
      "spd": 182,
      "ts": 1764865041,
      "hd": 84
    },
    {
      "lat": 25.80249,
      "lng": -80.26413,
      "alt": 525,
      "spd": 182,
      "ts": 1764865039,
      "hd": 84
    },
    {
      "lat": 25.80217,
      "lng": -80.268097,
      "alt": 325,
      "spd": 181,
      "ts": 1764865035,
      "hd": 85
    },
    {
      "lat": 25.801861,
      "lng": -80.273659,
      "alt": 0,
      "spd": 185,
      "ts": 1764865029,
      "hd": 87
    },
    {
      "lat": 25.80167,
      "lng": -80.278343,
      "alt": 0,
      "spd": 178,
      "ts": 1764865024,
      "hd": 86
    },
    {
      "lat": 25.80151,
      "lng": -80.28109,
      "alt": 0,
      "spd": 168,
      "ts": 1764865021,
      "hd": 87
    },
    {
      "lat": 25.801208,
      "lng": -80.289253,
      "alt": 0,
      "spd": 123,
      "ts": 1764865011,
      "hd": 87
    },
    {
      "lat": 25.801065,
      "lng": -80.291611,
      "alt": 0,
      "spd": 123,
      "ts": 1764865008,
      "hd": 87
    },
    {
      "lat": 25.801065,
      "lng": -80.292801,
      "alt": 0,
      "spd": 115,
      "ts": 1764865006,
      "hd": 88
    },
    {
      "lat": 25.80094,
      "lng": -80.294762,
      "alt": 0,
      "spd": 95,
      "ts": 1764865002,
      "hd": 88
    },
    {
      "lat": 25.800949,
      "lng": -80.295776,
      "alt": 0,
      "spd": 85,
      "ts": 1764865000,
      "hd": 86
    },
    {
      "lat": 25.80092,
      "lng": -80.296181,
      "alt": 0,
      "spd": 85,
      "ts": 1764864998,
      "hd": 86
    },
    {
      "lat": 25.80081,
      "lng": -80.298531,
      "alt": 0,
      "spd": 56,
      "ts": 1764864992,
      "hd": 87
    },
    {
      "lat": 25.800787,
      "lng": -80.299133,
      "alt": 0,
      "spd": 46,
      "ts": 1764864990,
      "hd": 87
    },
    {
      "lat": 25.800776,
      "lng": -80.299606,
      "alt": 0,
      "spd": 36,
      "ts": 1764864988,
      "hd": 87
    },
    {
      "lat": 25.800751,
      "lng": -80.30024,
      "alt": 0,
      "spd": 18,
      "ts": 1764864985,
      "hd": 87
    },
    {
      "lat": 25.800739,
      "lng": -80.300499,
      "alt": 0,
      "spd": 16,
      "ts": 1764864982,
      "hd": 90
    },
    {
      "lat": 25.800728,
      "lng": -80.300865,
      "alt": 0,
      "spd": 12,
      "ts": 1764864977,
      "hd": 78
    },
    {
      "lat": 25.80051,
      "lng": -80.301208,
      "alt": 0,
      "spd": 10,
      "ts": 1764864969,
      "hd": 354
    },
    {
      "lat": 25.80024,
      "lng": -80.301117,
      "alt": 0,
      "spd": 14,
      "ts": 1764864964,
      "hd": 309
    },
    {
      "lat": 25.8001,
      "lng": -80.300903,
      "alt": 0,
      "spd": 15,
      "ts": 1764864960,
      "hd": 290
    },
    {
      "lat": 25.800007,
      "lng": -80.300552,
      "alt": 0,
      "spd": 15,
      "ts": 1764864955,
      "hd": 286
    },
    {
      "lat": 25.799927,
      "lng": -80.300255,
      "alt": 0,
      "spd": 15,
      "ts": 1764864951,
      "hd": 286
    },
    {
      "lat": 25.799856,
      "lng": -80.299965,
      "alt": 0,
      "spd": 12,
      "ts": 1764864947,
      "hd": 284
    },
    {
      "lat": 25.799761,
      "lng": -80.299606,
      "alt": 0,
      "spd": 4,
      "ts": 1764864940,
      "hd": 265
    },
    {
      "lat": 25.799715,
      "lng": -80.299309,
      "alt": 0,
      "spd": 5,
      "ts": 1764864894,
      "hd": 272
    },
    {
      "lat": 25.799709,
      "lng": -80.299088,
      "alt": 0,
      "spd": 5,
      "ts": 1764864884,
      "hd": 267
    },
    {
      "lat": 25.799715,
      "lng": -80.298882,
      "alt": 0,
      "spd": 5,
      "ts": 1764864876,
      "hd": 267
    },
    {
      "lat": 25.799721,
      "lng": -80.298653,
      "alt": 0,
      "spd": 6,
      "ts": 1764864867,
      "hd": 267
    },
    {
      "lat": 25.79974,
      "lng": -80.298424,
      "alt": 0,
      "spd": 8,
      "ts": 1764864861,
      "hd": 264
    },
    {
      "lat": 25.799751,
      "lng": -80.298141,
      "alt": 0,
      "spd": 7,
      "ts": 1764864853,
      "hd": 267
    },
    {
      "lat": 25.799763,
      "lng": -80.297852,
      "alt": 0,
      "spd": 7,
      "ts": 1764864846,
      "hd": 267
    },
    {
      "lat": 25.799767,
      "lng": -80.297646,
      "alt": 0,
      "spd": 2,
      "ts": 1764864801,
      "hd": 267
    },
    {
      "lat": 25.799774,
      "lng": -80.297379,
      "alt": 0,
      "spd": 4,
      "ts": 1764864781,
      "hd": 267
    },
    {
      "lat": 25.799786,
      "lng": -80.297142,
      "alt": 0,
      "spd": 5,
      "ts": 1764864771,
      "hd": 267
    },
    {
      "lat": 25.799789,
      "lng": -80.296936,
      "alt": 0,
      "spd": 6,
      "ts": 1764864764,
      "hd": 267
    },
    {
      "lat": 25.799809,
      "lng": -80.296715,
      "alt": 0,
      "spd": 5,
      "ts": 1764864756,
      "hd": 267
    },
    {
      "lat": 25.799812,
      "lng": -80.296494,
      "alt": 0,
      "spd": 5,
      "ts": 1764864748,
      "hd": 267
    },
    {
      "lat": 25.799829,
      "lng": -80.29628,
      "alt": 0,
      "spd": 0,
      "ts": 1764864710,
      "hd": 271
    },
    {
      "lat": 25.799831,
      "lng": -80.296066,
      "alt": 0,
      "spd": 5,
      "ts": 1764864694,
      "hd": 267
    },
    {
      "lat": 25.79982,
      "lng": -80.29586,
      "alt": 0,
      "spd": 5,
      "ts": 1764864682,
      "hd": 263
    },
    {
      "lat": 25.79985,
      "lng": -80.295639,
      "alt": 0,
      "spd": 4,
      "ts": 1764864675,
      "hd": 264
    },
    {
      "lat": 25.799856,
      "lng": -80.295326,
      "alt": 0,
      "spd": 3,
      "ts": 1764864587,
      "hd": 267
    },
    {
      "lat": 25.79987,
      "lng": -80.295105,
      "alt": 0,
      "spd": 6,
      "ts": 1764864576,
      "hd": 267
    },
    {
      "lat": 25.799881,
      "lng": -80.294815,
      "alt": 0,
      "spd": 7,
      "ts": 1764864568,
      "hd": 267
    },
    {
      "lat": 25.799891,
      "lng": -80.294601,
      "alt": 0,
      "spd": 5,
      "ts": 1764864561,
      "hd": 263
    },
    {
      "lat": 25.79991,
      "lng": -80.294388,
      "alt": 0,
      "spd": 1,
      "ts": 1764864555,
      "hd": 271
    },
    {
      "lat": 25.799904,
      "lng": -80.294167,
      "alt": 0,
      "spd": 6,
      "ts": 1764864475,
      "hd": 267
    },
    {
      "lat": 25.799915,
      "lng": -80.293884,
      "alt": 0,
      "spd": 8,
      "ts": 1764864467,
      "hd": 267
    },
    {
      "lat": 25.799938,
      "lng": -80.293503,
      "alt": 0,
      "spd": 11,
      "ts": 1764864460,
      "hd": 267
    },
    {
      "lat": 25.79995,
      "lng": -80.293121,
      "alt": 0,
      "spd": 0,
      "ts": 1764864452,
      "hd": 267
    },
    {
      "lat": 25.79995,
      "lng": -80.292824,
      "alt": 0,
      "spd": 3,
      "ts": 1764864445,
      "hd": 269
    },
    {
      "lat": 25.799971,
      "lng": -80.292526,
      "alt": 0,
      "spd": 7,
      "ts": 1764864380,
      "hd": 269
    },
    {
      "lat": 25.799971,
      "lng": -80.292183,
      "alt": 0,
      "spd": 8,
      "ts": 1764864370,
      "hd": 265
    },
    {
      "lat": 25.799999,
      "lng": -80.291893,
      "alt": 0,
      "spd": 8,
      "ts": 1764864363,
      "hd": 269
    },
    {
      "lat": 25.799999,
      "lng": -80.291557,
      "alt": 0,
      "spd": 1,
      "ts": 1764864355,
      "hd": 271
    },
    {
      "lat": 25.800018,
      "lng": -80.291344,
      "alt": 0,
      "spd": 4,
      "ts": 1764864265,
      "hd": 267
    },
    {
      "lat": 25.800039,
      "lng": -80.291054,
      "alt": 0,
      "spd": 8,
      "ts": 1764864255,
      "hd": 267
    },
    {
      "lat": 25.800053,
      "lng": -80.290779,
      "alt": 0,
      "spd": 9,
      "ts": 1764864248,
      "hd": 267
    },
    {
      "lat": 25.800079,
      "lng": -80.290413,
      "alt": 0,
      "spd": 12,
      "ts": 1764864241,
      "hd": 267
    },
    {
      "lat": 25.800091,
      "lng": -80.290039,
      "alt": 0,
      "spd": 12,
      "ts": 1764864235,
      "hd": 267
    },
    {
      "lat": 25.8001,
      "lng": -80.289642,
      "alt": 0,
      "spd": 12,
      "ts": 1764864228,
      "hd": 267
    },
    {
      "lat": 25.80011,
      "lng": -80.289223,
      "alt": 0,
      "spd": 12,
      "ts": 1764864221,
      "hd": 267
    },
    {
      "lat": 25.800119,
      "lng": -80.289001,
      "alt": 0,
      "spd": 12,
      "ts": 1764864217,
      "hd": 267
    },
    {
      "lat": 25.800131,
      "lng": -80.288757,
      "alt": 0,
      "spd": 11,
      "ts": 1764864213,
      "hd": 267
    },
    {
      "lat": 25.80015,
      "lng": -80.288513,
      "alt": 0,
      "spd": 9,
      "ts": 1764864207,
      "hd": 268
    },
    {
      "lat": 25.80014,
      "lng": -80.288177,
      "alt": 0,
      "spd": 5,
      "ts": 1764864200,
      "hd": 267
    },
    {
      "lat": 25.800171,
      "lng": -80.28788,
      "alt": 0,
      "spd": 8,
      "ts": 1764864137,
      "hd": 267
    },
    {
      "lat": 25.800159,
      "lng": -80.287651,
      "alt": 0,
      "spd": 9,
      "ts": 1764864131,
      "hd": 263
    },
    {
      "lat": 25.80019,
      "lng": -80.287331,
      "alt": 0,
      "spd": 9,
      "ts": 1764864124,
      "hd": 267
    },
    {
      "lat": 25.800211,
      "lng": -80.286797,
      "alt": 0,
      "spd": 12,
      "ts": 1764864114,
      "hd": 267
    },
    {
      "lat": 25.800236,
      "lng": -80.28627,
      "alt": 0,
      "spd": 13,
      "ts": 1764864104,
      "hd": 267
    },
    {
      "lat": 25.80024,
      "lng": -80.286011,
      "alt": 0,
      "spd": 12,
      "ts": 1764864100,
      "hd": 267
    },
    {
      "lat": 25.800259,
      "lng": -80.285744,
      "alt": 0,
      "spd": 11,
      "ts": 1764864096,
      "hd": 267
    },
    {
      "lat": 25.800274,
      "lng": -80.285522,
      "alt": 0,
      "spd": 12,
      "ts": 1764864092,
      "hd": 267
    },
    {
      "lat": 25.800289,
      "lng": -80.285309,
      "alt": 0,
      "spd": 11,
      "ts": 1764864089,
      "hd": 268
    },
    {
      "lat": 25.800289,
      "lng": -80.285019,
      "alt": 0,
      "spd": 11,
      "ts": 1764864084,
      "hd": 266
    },
    {
      "lat": 25.800301,
      "lng": -80.284782,
      "alt": 0,
      "spd": 12,
      "ts": 1764864080,
      "hd": 267
    },
    {
      "lat": 25.80032,
      "lng": -80.284576,
      "alt": 0,
      "spd": 11,
      "ts": 1764864077,
      "hd": 268
    },
    {
      "lat": 25.80031,
      "lng": -80.284218,
      "alt": 0,
      "spd": 12,
      "ts": 1764864071,
      "hd": 266
    },
    {
      "lat": 25.80035,
      "lng": -80.2836,
      "alt": 0,
      "spd": 12,
      "ts": 1764864061,
      "hd": 267
    },
    {
      "lat": 25.800369,
      "lng": -80.283257,
      "alt": 0,
      "spd": 12,
      "ts": 1764864055,
      "hd": 267
    },
    {
      "lat": 25.800381,
      "lng": -80.282837,
      "alt": 0,
      "spd": 10,
      "ts": 1764864048,
      "hd": 267
    },
    {
      "lat": 25.80039,
      "lng": -80.282501,
      "alt": 0,
      "spd": 7,
      "ts": 1764864040,
      "hd": 267
    },
    {
      "lat": 25.800409,
      "lng": -80.282227,
      "alt": 0,
      "spd": 8,
      "ts": 1764864032,
      "hd": 267
    },
    {
      "lat": 25.800421,
      "lng": -80.281982,
      "alt": 0,
      "spd": 9,
      "ts": 1764864026,
      "hd": 267
    },
    {
      "lat": 25.80043,
      "lng": -80.281754,
      "alt": 0,
      "spd": 4,
      "ts": 1764864020,
      "hd": 269
    },
    {
      "lat": 25.800449,
      "lng": -80.281502,
      "alt": 0,
      "spd": 4,
      "ts": 1764864005,
      "hd": 270
    },
    {
      "lat": 25.800449,
      "lng": -80.28125,
      "alt": 0,
      "spd": 2,
      "ts": 1764863724,
      "hd": 267
    },
    {
      "lat": 25.800461,
      "lng": -80.281036,
      "alt": 0,
      "spd": 5,
      "ts": 1764863705,
      "hd": 267
    },
    {
      "lat": 25.800461,
      "lng": -80.280739,
      "alt": 0,
      "spd": 14,
      "ts": 1764863697,
      "hd": 267
    },
    {
      "lat": 25.800489,
      "lng": -80.280243,
      "alt": 0,
      "spd": 14,
      "ts": 1764863691,
      "hd": 267
    },
    {
      "lat": 25.80051,
      "lng": -80.279747,
      "alt": 0,
      "spd": 13,
      "ts": 1764863683,
      "hd": 267
    },
    {
      "lat": 25.800529,
      "lng": -80.279297,
      "alt": 0,
      "spd": 16,
      "ts": 1764863677,
      "hd": 268
    },
    {
      "lat": 25.800541,
      "lng": -80.279083,
      "alt": 0,
      "spd": 17,
      "ts": 1764863674,
      "hd": 269
    },
    {
      "lat": 25.80055,
      "lng": -80.27874,
      "alt": 0,
      "spd": 19,
      "ts": 1764863670,
      "hd": 269
    },
    {
      "lat": 25.80055,
      "lng": -80.278442,
      "alt": 0,
      "spd": 19,
      "ts": 1764863667,
      "hd": 266
    },
    {
      "lat": 25.80056,
      "lng": -80.278061,
      "alt": 0,
      "spd": 18,
      "ts": 1764863662,
      "hd": 266
    },
    {
      "lat": 25.8006,
      "lng": -80.277687,
      "alt": 0,
      "spd": 19,
      "ts": 1764863659,
      "hd": 269
    },
    {
      "lat": 25.800591,
      "lng": -80.277382,
      "alt": 0,
      "spd": 17,
      "ts": 1764863656,
      "hd": 267
    },
    {
      "lat": 25.8006,
      "lng": -80.277122,
      "alt": 0,
      "spd": 18,
      "ts": 1764863653,
      "hd": 267
    },
    {
      "lat": 25.80061,
      "lng": -80.276543,
      "alt": 0,
      "spd": 17,
      "ts": 1764863646,
      "hd": 264
    },
    {
      "lat": 25.800646,
      "lng": -80.276093,
      "alt": 0,
      "spd": 16,
      "ts": 1764863641,
      "hd": 267
    },
    {
      "lat": 25.800659,
      "lng": -80.275551,
      "alt": 0,
      "spd": 16,
      "ts": 1764863634,
      "hd": 284
    },
    {
      "lat": 25.800591,
      "lng": -80.27523,
      "alt": 0,
      "spd": 13,
      "ts": 1764863631,
      "hd": 318
    },
    {
      "lat": 25.800381,
      "lng": -80.275002,
      "alt": 0,
      "spd": 13,
      "ts": 1764863626,
      "hd": 322
    },
    {
      "lat": 25.800121,
      "lng": -80.274796,
      "alt": 0,
      "spd": 11,
      "ts": 1764863620,
      "hd": 312
    },
    {
      "lat": 25.799948,
      "lng": -80.274544,
      "alt": 0,
      "spd": 11,
      "ts": 1764863615,
      "hd": 286
    },
    {
      "lat": 25.799891,
      "lng": -80.274323,
      "alt": 0,
      "spd": 12,
      "ts": 1764863611,
      "hd": 273
    },
    {
      "lat": 25.799915,
      "lng": -80.273796,
      "alt": 0,
      "spd": 13,
      "ts": 1764863602,
      "hd": 267
    },
    {
      "lat": 25.799938,
      "lng": -80.273262,
      "alt": 0,
      "spd": 10,
      "ts": 1764863595,
      "hd": 267
    },
    {
      "lat": 25.799948,
      "lng": -80.272995,
      "alt": 0,
      "spd": 8,
      "ts": 1764863587,
      "hd": 267
    },
    {
      "lat": 25.799959,
      "lng": -80.272774,
      "alt": 0,
      "spd": 5,
      "ts": 1764863580,
      "hd": 267
    },
    {
      "lat": 25.799973,
      "lng": -80.272423,
      "alt": 0,
      "spd": 2,
      "ts": 1764863164,
      "hd": 272
    },
    {
      "lat": 25.799891,
      "lng": -80.272217,
      "alt": 0,
      "spd": 3,
      "ts": 1764863088,
      "hd": 225
    },
    {
      "lat": 25.799675,
      "lng": -80.27224,
      "alt": 0,
      "spd": 3,
      "ts": 1764863071,
      "hd": 185
    },
    {
      "lat": 25.799469,
      "lng": -80.27227,
      "alt": 0,
      "spd": 3,
      "ts": 1764863056,
      "hd": 185
    },
    {
      "lat": 25.799263,
      "lng": -80.272255,
      "alt": 0,
      "spd": 0,
      "ts": 1764863032,
      "hd": 177
    },
    {
      "lat": 25.799053,
      "lng": -80.27227,
      "alt": 0,
      "spd": 0,
      "ts": 1764860627,
      "hd": 180
    }
  ],
  "firstTimestamp": 1764860627,
  "s": "tDkJKf_1isgrd8eklnvUUUocALCH2bdA0ozOIOT8PSEUFEiEeVFo6XIfc1d1jcLZ"
}
)";

#endif // MEMORY_H