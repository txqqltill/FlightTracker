#ifndef MEMORY_H
#define MEMORY_H

const char* const JSON_FLIGHT_DATA = R"(
{
  "data": [
    {
      "callsign": "JBU1966",
      "clicks": 190,
      "flight": "B61966",
      "flight_id": "3d59ac1a",
      "from_city": "Georgetown",
      "from_iata": "GEO",
      "model": "A21N",
      "squawk": "6063",
      "to_city": "New York",
      "to_iata": "JFK",
      "type": "Airbus A321-271NX"
    },
    {
      "callsign": "BAW32",
      "clicks": 182,
      "flight": "BA32",
      "flight_id": "3d57b46b",
      "from_city": "Hong Kong",
      "from_iata": "HKG",
      "model": "A35K",
      "squawk": "3272",
      "to_city": "London",
      "to_iata": "LHR",
      "type": "Airbus A350-1041"
    },
    {
      "callsign": "BLKCAT5",
      "clicks": 178,
      "flight": null,
      "flight_id": "3d599153",
      "from_city": "Jacksonville",
      "from_iata": "CRG",
      "model": "Q4",
      "squawk": "7361",
      "to_city": null,
      "to_iata": null,
      "type": "Northrop Grumman MQ-4C Triton"
    },
    {
      "callsign": "EVE858",
      "clicks": 169,
      "flight": "E9858",
      "flight_id": "3d59b55e",
      "from_city": "San Jose",
      "from_iata": "SJO",
      "model": "A359",
      "squawk": "4606",
      "to_city": "Madrid",
      "to_iata": "MAD",
      "type": "Airbus A350-941"
    },
    {
      "callsign": "AMD1",
      "clicks": 168,
      "flight": "AMD1",
      "flight_id": "3d598cbc",
      "from_city": "Christchurch",
      "from_iata": "CHC",
      "model": "EC45",
      "squawk": "3032",
      "to_city": "Christchurch",
      "to_iata": "CHC",
      "type": "Airbus Helicopters H145"
    },
    {
      "callsign": "AVA8458",
      "clicks": 164,
      "flight": "AV8458",
      "flight_id": "3d59b1b4",
      "from_city": "Bogota",
      "from_iata": "BOG",
      "model": "B788",
      "squawk": "2125",
      "to_city": "Medellin",
      "to_iata": "MDE",
      "type": "Boeing 787-8 Dreamliner"
    },
    {
      "callsign": "ANZ141M",
      "clicks": 163,
      "flight": "NZ5141",
      "flight_id": "3d59afc5",
      "from_city": "Auckland",
      "from_iata": "AKL",
      "model": "AT76",
      "squawk": "5014",
      "to_city": "Tauranga",
      "to_iata": "TRG",
      "type": "ATR 72-600"
    },
    {
      "callsign": "UAE67M",
      "clicks": 156,
      "flight": "EK409",
      "flight_id": "3d586d4e",
      "from_city": "Melbourne",
      "from_iata": "MEL",
      "model": "A388",
      "squawk": "1524",
      "to_city": "Dubai",
      "to_iata": "DXB",
      "type": "Airbus A380-842"
    },
    {
      "callsign": "VUDBB",
      "clicks": 155,
      "flight": null,
      "flight_id": "3d599b8a",
      "from_city": "Siliguri",
      "from_iata": "IXB",
      "model": "AN32",
      "squawk": "1477",
      "to_city": null,
      "to_iata": null,
      "type": "Antonov An-32RE"
    },
    {
      "callsign": "GIA184",
      "clicks": 148,
      "flight": "GA184",
      "flight_id": "3d59370c",
      "from_city": "Jakarta",
      "from_iata": "CGK",
      "model": "B738",
      "squawk": null,
      "to_city": "Medan",
      "to_iata": "KNO",
      "type": "Boeing 737-86N"
    }
  ],
  "update_time": 1764737720,
  "version": "0.4.0"
}
)";

const char* const JSON_SPECIFIC_FLIGHT_DATA = R"(
{
  "identification": {
    "id": "3d5af634",
    "row": 5743447996,
    "number": {
      "default": "P57026",
      "alternative": null
    },
    "callsign": "RPB7026"
  },
  "status": {
    "live": true,
    "text": "Estimated- 12:57",
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
        "utc": 1764781056,
        "local": 1764766656
      }
    }
  },
  "level": "limited",
  "promote": false,
  "aircraft": {
    "model": {
      "code": "B738",
      "text": "Boeing 737-8V3"
    },
    "countryId": 170,
    "registration": "HP-1535CMP",
    "age": null,
    "msn": null,
    "images": {
      "thumbnails": [
        {
          "src": "https://cdn.jetphotos.com/200/5/723606_1744651420_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11698706",
          "copyright": "MarkosVicioso - SKSM",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/637147_1750798559_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11761684",
          "copyright": "Luciano Turner",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/6/1131621_1742850383_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11675899",
          "copyright": "Alex Rivera",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/1231888_1712107359_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11302983",
          "copyright": "MarkosVicioso - SKSM",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/200/5/1281267_1708015239_tb.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11246389",
          "copyright": "Pablo Merel - EtopsPTY",
          "source": "Jetphotos"
        }
      ],
      "medium": [
        {
          "src": "https://cdn.jetphotos.com/400/5/723606_1744651420.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11698706",
          "copyright": "MarkosVicioso - SKSM",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/637147_1750798559.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11761684",
          "copyright": "Luciano Turner",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/6/1131621_1742850383.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11675899",
          "copyright": "Alex Rivera",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/1231888_1712107359.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11302983",
          "copyright": "MarkosVicioso - SKSM",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/400/5/1281267_1708015239.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11246389",
          "copyright": "Pablo Merel - EtopsPTY",
          "source": "Jetphotos"
        }
      ],
      "large": [
        {
          "src": "https://cdn.jetphotos.com/640cb/5/723606_1744651420.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11698706",
          "copyright": "MarkosVicioso - SKSM",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/637147_1750798559.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11761684",
          "copyright": "Luciano Turner",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/6/1131621_1742850383.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11675899",
          "copyright": "Alex Rivera",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/1231888_1712107359.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11302983",
          "copyright": "MarkosVicioso - SKSM",
          "source": "Jetphotos"
        },
        {
          "src": "https://cdn.jetphotos.com/640cb/5/1281267_1708015239.jpg?v=0",
          "link": "https://www.jetphotos.com/photo/11246389",
          "copyright": "Pablo Merel - EtopsPTY",
          "source": "Jetphotos"
        }
      ]
    },
    "hex": "0c203b"
  },
  "airline": {
    "name": "Wingo",
    "short": "Wingo",
    "code": {
      "iata": "P5",
      "icao": "RPB"
    },
    "url": "wingo-rpb"
  },
  "owner": null,
  "airspace": null,
  "airport": {
    "origin": {
      "name": "Bogota El Dorado International Airport",
      "code": {
        "iata": "BOG",
        "icao": "SKBO"
      },
      "position": {
        "latitude": 4.703056,
        "longitude": -74.138298,
        "altitude": 8361,
        "country": {
          "id": 49,
          "name": "Colombia",
          "code": "CO",
          "codeLong": "COL"
        },
        "region": {
          "city": "Bogota"
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
      "website": null,
      "info": {
        "terminal": "1",
        "baggage": null,
        "gate": "A4"
      }
    },
    "destination": {
      "name": "Punta Cana International Airport",
      "code": {
        "iata": "PUJ",
        "icao": "MDPC"
      },
      "position": {
        "latitude": 18.56736,
        "longitude": -68.363403,
        "altitude": 47,
        "country": {
          "id": null,
          "name": "Dominican Republic",
          "code": "DOM"
        },
        "region": {
          "city": "Punta Cana"
        }
      },
      "timezone": {
        "name": "America/Santo_Domingo",
        "offset": -14400,
        "offsetHours": "-4:00",
        "abbr": "AST",
        "abbrName": "Atlantic Standard Time",
        "isDst": false
      },
      "visible": true,
      "website": "http://www.puntacanainternationalairport.com/",
      "info": {
        "terminal": "A",
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
          "id": "3d5a8e8d",
          "number": {
            "default": "P57269"
          }
        },
        "airport": {
          "origin": {
            "name": "Medellin Jose Maria Cordova International Airport",
            "code": {
              "iata": "MDE",
              "icao": "SKRG"
            },
            "position": {
              "latitude": 6.164444,
              "longitude": -75.422997,
              "altitude": 7025,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Medellin"
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
            "name": "Bogota El Dorado International Airport",
            "code": {
              "iata": "BOG",
              "icao": "SKBO"
            },
            "position": {
              "latitude": 4.703056,
              "longitude": -74.138298,
              "altitude": 8361,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Bogota"
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
            "departure": 1764763944
          }
        }
      },
      {
        "identification": {
          "id": "3d5a53df",
          "number": {
            "default": "P57268"
          }
        },
        "airport": {
          "origin": {
            "name": "Bogota El Dorado International Airport",
            "code": {
              "iata": "BOG",
              "icao": "SKBO"
            },
            "position": {
              "latitude": 4.703056,
              "longitude": -74.138298,
              "altitude": 8361,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Bogota"
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
            "name": "Medellin Jose Maria Cordova International Airport",
            "code": {
              "iata": "MDE",
              "icao": "SKRG"
            },
            "position": {
              "latitude": 6.164444,
              "longitude": -75.422997,
              "altitude": 7025,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Medellin"
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
            "departure": 1764757543
          }
        }
      },
      {
        "identification": {
          "id": "3d598451",
          "number": {
            "default": "P57219"
          }
        },
        "airport": {
          "origin": {
            "name": "Cartagena Rafael Nunez International Airport",
            "code": {
              "iata": "CTG",
              "icao": "SKCG"
            },
            "position": {
              "latitude": 10.4425,
              "longitude": -75.512703,
              "altitude": 4,
              "country": {
                "id": null,
                "name": "Colombia",
                "code": "COL"
              },
              "region": {
                "city": "Cartagena"
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
            "website": "http://www.sacsa.com.co/eng/"
          },
          "destination": {
            "name": "Bogota El Dorado International Airport",
            "code": {
              "iata": "BOG",
              "icao": "SKBO"
            },
            "position": {
              "latitude": 4.703056,
              "longitude": -74.138298,
              "altitude": 8361,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Bogota"
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
            "departure": 1764730721
          }
        }
      },
      {
        "identification": {
          "id": "3d593e0c",
          "number": {
            "default": "P57218"
          }
        },
        "airport": {
          "origin": {
            "name": "Bogota El Dorado International Airport",
            "code": {
              "iata": "BOG",
              "icao": "SKBO"
            },
            "position": {
              "latitude": 4.703056,
              "longitude": -74.138298,
              "altitude": 8361,
              "country": {
                "id": 49,
                "name": "Colombia",
                "code": "CO",
                "codeLong": "COL"
              },
              "region": {
                "city": "Bogota"
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
            "name": "Cartagena Rafael Nunez International Airport",
            "code": {
              "iata": "CTG",
              "icao": "SKCG"
            },
            "position": {
              "latitude": 10.4425,
              "longitude": -75.512703,
              "altitude": 4,
              "country": {
                "id": null,
                "name": "Colombia",
                "code": "COL"
              },
              "region": {
                "city": "Cartagena"
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
            "website": "http://www.sacsa.com.co/eng/"
          }
        },
        "time": {
          "real": {
            "departure": 1764723743
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
      "departure": 1764770700,
      "arrival": 1764780720
    },
    "real": {
      "departure": 1764772877,
      "arrival": null
    },
    "estimated": {
      "departure": null,
      "arrival": 1764781056
    },
    "other": {
      "eta": 1764781056,
      "updated": 1764772911
    },
    "historical": {
      "flighttime": "7981",
      "delay": "-566"
    }
  },
  "trail": [
    {
      "lat": 16.062664,
      "lng": -70.032646,
      "alt": 37000,
      "spd": 440,
      "ts": 1764779094,
      "hd": 27
    },
    {
      "lat": 16.007538,
      "lng": -70.062462,
      "alt": 37000,
      "spd": 439,
      "ts": 1764779063,
      "hd": 28
    },
    {
      "lat": 15.949355,
      "lng": -70.09552,
      "alt": 37000,
      "spd": 438,
      "ts": 1764779031,
      "hd": 28
    },
    {
      "lat": 15.894196,
      "lng": -70.126938,
      "alt": 37000,
      "spd": 437,
      "ts": 1764779000,
      "hd": 28
    },
    {
      "lat": 15.839166,
      "lng": -70.158348,
      "alt": 37000,
      "spd": 436,
      "ts": 1764778969,
      "hd": 28
    },
    {
      "lat": 15.783371,
      "lng": -70.190063,
      "alt": 37000,
      "spd": 435,
      "ts": 1764778937,
      "hd": 28
    },
    {
      "lat": 15.725372,
      "lng": -70.222969,
      "alt": 37000,
      "spd": 434,
      "ts": 1764778905,
      "hd": 28
    },
    {
      "lat": 15.670944,
      "lng": -70.253807,
      "alt": 37000,
      "spd": 433,
      "ts": 1764778874,
      "hd": 28
    },
    {
      "lat": 15.617392,
      "lng": -70.284203,
      "alt": 37000,
      "spd": 432,
      "ts": 1764778843,
      "hd": 28
    },
    {
      "lat": 15.560715,
      "lng": -70.316353,
      "alt": 37000,
      "spd": 432,
      "ts": 1764778811,
      "hd": 28
    },
    {
      "lat": 15.503586,
      "lng": -70.348732,
      "alt": 37000,
      "spd": 432,
      "ts": 1764778779,
      "hd": 28
    },
    {
      "lat": 15.447661,
      "lng": -70.380379,
      "alt": 37000,
      "spd": 431,
      "ts": 1764778747,
      "hd": 28
    },
    {
      "lat": 15.389877,
      "lng": -70.413109,
      "alt": 37000,
      "spd": 428,
      "ts": 1764778714,
      "hd": 28
    },
    {
      "lat": 15.327231,
      "lng": -70.448555,
      "alt": 37000,
      "spd": 427,
      "ts": 1764778678,
      "hd": 28
    },
    {
      "lat": 15.270126,
      "lng": -70.480858,
      "alt": 37000,
      "spd": 428,
      "ts": 1764778645,
      "hd": 28
    },
    {
      "lat": 15.21373,
      "lng": -70.512665,
      "alt": 37000,
      "spd": 429,
      "ts": 1764778613,
      "hd": 28
    },
    {
      "lat": 15.155872,
      "lng": -70.545319,
      "alt": 37000,
      "spd": 430,
      "ts": 1764778580,
      "hd": 28
    },
    {
      "lat": 15.098419,
      "lng": -70.577713,
      "alt": 37000,
      "spd": 430,
      "ts": 1764778547,
      "hd": 28
    },
    {
      "lat": 15.044266,
      "lng": -70.60836,
      "alt": 37000,
      "spd": 434,
      "ts": 1764778516,
      "hd": 28
    },
    {
      "lat": 14.988098,
      "lng": -70.64003,
      "alt": 37000,
      "spd": 436,
      "ts": 1764778484,
      "hd": 28
    },
    {
      "lat": 14.932297,
      "lng": -70.671532,
      "alt": 37000,
      "spd": 437,
      "ts": 1764778453,
      "hd": 28
    },
    {
      "lat": 14.877955,
      "lng": -70.702126,
      "alt": 37000,
      "spd": 438,
      "ts": 1764778423,
      "hd": 28
    },
    {
      "lat": 14.820648,
      "lng": -70.734428,
      "alt": 37000,
      "spd": 438,
      "ts": 1764778390,
      "hd": 28
    },
    {
      "lat": 14.762552,
      "lng": -70.767181,
      "alt": 37000,
      "spd": 438,
      "ts": 1764778358,
      "hd": 28
    },
    {
      "lat": 14.705666,
      "lng": -70.799171,
      "alt": 37000,
      "spd": 438,
      "ts": 1764778326,
      "hd": 28
    },
    {
      "lat": 14.647615,
      "lng": -70.831604,
      "alt": 37000,
      "spd": 438,
      "ts": 1764778294,
      "hd": 28
    },
    {
      "lat": 14.591054,
      "lng": -70.863258,
      "alt": 37000,
      "spd": 438,
      "ts": 1764778262,
      "hd": 28
    },
    {
      "lat": 14.537521,
      "lng": -70.893311,
      "alt": 37000,
      "spd": 437,
      "ts": 1764778232,
      "hd": 28
    },
    {
      "lat": 14.480819,
      "lng": -70.925133,
      "alt": 37000,
      "spd": 438,
      "ts": 1764778200,
      "hd": 28
    },
    {
      "lat": 14.422721,
      "lng": -70.957611,
      "alt": 37000,
      "spd": 439,
      "ts": 1764778167,
      "hd": 28
    },
    {
      "lat": 14.367233,
      "lng": -70.988586,
      "alt": 37000,
      "spd": 439,
      "ts": 1764778136,
      "hd": 28
    },
    {
      "lat": 14.310837,
      "lng": -71.020172,
      "alt": 37000,
      "spd": 439,
      "ts": 1764778105,
      "hd": 28
    },
    {
      "lat": 14.257368,
      "lng": -71.050125,
      "alt": 37000,
      "spd": 439,
      "ts": 1764778075,
      "hd": 28
    },
    {
      "lat": 14.200104,
      "lng": -71.082298,
      "alt": 37000,
      "spd": 437,
      "ts": 1764778043,
      "hd": 28
    },
    {
      "lat": 14.14271,
      "lng": -71.114357,
      "alt": 37000,
      "spd": 437,
      "ts": 1764778011,
      "hd": 28
    },
    {
      "lat": 14.084659,
      "lng": -71.146591,
      "alt": 37000,
      "spd": 435,
      "ts": 1764777978,
      "hd": 28
    },
    {
      "lat": 14.030273,
      "lng": -71.176865,
      "alt": 37000,
      "spd": 436,
      "ts": 1764777947,
      "hd": 28
    },
    {
      "lat": 13.974014,
      "lng": -71.208214,
      "alt": 37000,
      "spd": 437,
      "ts": 1764777916,
      "hd": 28
    },
    {
      "lat": 13.91684,
      "lng": -71.240227,
      "alt": 37000,
      "spd": 438,
      "ts": 1764777884,
      "hd": 28
    },
    {
      "lat": 13.860123,
      "lng": -71.271812,
      "alt": 37000,
      "spd": 440,
      "ts": 1764777852,
      "hd": 28
    },
    {
      "lat": 13.800842,
      "lng": -71.304825,
      "alt": 37000,
      "spd": 443,
      "ts": 1764777820,
      "hd": 28
    },
    {
      "lat": 13.743617,
      "lng": -71.336639,
      "alt": 37000,
      "spd": 444,
      "ts": 1764777787,
      "hd": 28
    },
    {
      "lat": 13.685623,
      "lng": -71.368843,
      "alt": 37000,
      "spd": 445,
      "ts": 1764777755,
      "hd": 28
    },
    {
      "lat": 13.626678,
      "lng": -71.401688,
      "alt": 37000,
      "spd": 448,
      "ts": 1764777723,
      "hd": 28
    },
    {
      "lat": 13.565462,
      "lng": -71.435753,
      "alt": 37000,
      "spd": 454,
      "ts": 1764777690,
      "hd": 28
    },
    {
      "lat": 13.506248,
      "lng": -71.46862,
      "alt": 37000,
      "spd": 455,
      "ts": 1764777658,
      "hd": 28
    },
    {
      "lat": 13.446568,
      "lng": -71.501724,
      "alt": 37000,
      "spd": 456,
      "ts": 1764777626,
      "hd": 28
    },
    {
      "lat": 13.389029,
      "lng": -71.533524,
      "alt": 37000,
      "spd": 455,
      "ts": 1764777595,
      "hd": 28
    },
    {
      "lat": 13.329302,
      "lng": -71.566483,
      "alt": 37000,
      "spd": 455,
      "ts": 1764777563,
      "hd": 28
    },
    {
      "lat": 13.27153,
      "lng": -71.598465,
      "alt": 37000,
      "spd": 455,
      "ts": 1764777532,
      "hd": 28
    },
    {
      "lat": 13.211386,
      "lng": -71.63192,
      "alt": 37000,
      "spd": 455,
      "ts": 1764777499,
      "hd": 28
    },
    {
      "lat": 13.154265,
      "lng": -71.663719,
      "alt": 37000,
      "spd": 454,
      "ts": 1764777469,
      "hd": 28
    },
    {
      "lat": 13.09412,
      "lng": -71.697067,
      "alt": 37000,
      "spd": 452,
      "ts": 1764777436,
      "hd": 28
    },
    {
      "lat": 13.037979,
      "lng": -71.728035,
      "alt": 37000,
      "spd": 451,
      "ts": 1764777406,
      "hd": 28
    },
    {
      "lat": 12.977692,
      "lng": -71.76123,
      "alt": 37000,
      "spd": 451,
      "ts": 1764777373,
      "hd": 28
    },
    {
      "lat": 12.91671,
      "lng": -71.794548,
      "alt": 37000,
      "spd": 452,
      "ts": 1764777340,
      "hd": 28
    },
    {
      "lat": 12.859772,
      "lng": -71.825722,
      "alt": 37000,
      "spd": 452,
      "ts": 1764777309,
      "hd": 28
    },
    {
      "lat": 12.802796,
      "lng": -71.857765,
      "alt": 37000,
      "spd": 452,
      "ts": 1764777278,
      "hd": 29
    },
    {
      "lat": 12.746608,
      "lng": -71.889999,
      "alt": 37000,
      "spd": 453,
      "ts": 1764777247,
      "hd": 29
    },
    {
      "lat": 12.69104,
      "lng": -71.921806,
      "alt": 37000,
      "spd": 453,
      "ts": 1764777217,
      "hd": 29
    },
    {
      "lat": 12.63209,
      "lng": -71.955536,
      "alt": 37000,
      "spd": 454,
      "ts": 1764777185,
      "hd": 29
    },
    {
      "lat": 12.571665,
      "lng": -71.990181,
      "alt": 37000,
      "spd": 454,
      "ts": 1764777152,
      "hd": 29
    },
    {
      "lat": 12.511826,
      "lng": -72.024475,
      "alt": 37000,
      "spd": 456,
      "ts": 1764777120,
      "hd": 29
    },
    {
      "lat": 12.452316,
      "lng": -72.05838,
      "alt": 37000,
      "spd": 458,
      "ts": 1764777087,
      "hd": 29
    },
    {
      "lat": 12.392944,
      "lng": -72.092194,
      "alt": 37000,
      "spd": 458,
      "ts": 1764777055,
      "hd": 29
    },
    {
      "lat": 12.333801,
      "lng": -72.125954,
      "alt": 37000,
      "spd": 457,
      "ts": 1764777023,
      "hd": 29
    },
    {
      "lat": 12.274338,
      "lng": -72.159904,
      "alt": 37000,
      "spd": 457,
      "ts": 1764776991,
      "hd": 29
    },
    {
      "lat": 12.214417,
      "lng": -72.194099,
      "alt": 37000,
      "spd": 456,
      "ts": 1764776959,
      "hd": 29
    },
    {
      "lat": 12.155301,
      "lng": -72.227684,
      "alt": 37000,
      "spd": 456,
      "ts": 1764776927,
      "hd": 29
    },
    {
      "lat": 12.096268,
      "lng": -72.261292,
      "alt": 37000,
      "spd": 454,
      "ts": 1764776895,
      "hd": 29
    },
    {
      "lat": 12.035706,
      "lng": -72.295677,
      "alt": 37000,
      "spd": 453,
      "ts": 1764776862,
      "hd": 29
    },
    {
      "lat": 11.976913,
      "lng": -72.329018,
      "alt": 37000,
      "spd": 450,
      "ts": 1764776830,
      "hd": 29
    },
    {
      "lat": 11.92131,
      "lng": -72.360641,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776799,
      "hd": 29
    },
    {
      "lat": 11.863512,
      "lng": -72.393639,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776767,
      "hd": 29
    },
    {
      "lat": 11.805694,
      "lng": -72.426552,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776735,
      "hd": 29
    },
    {
      "lat": 11.746713,
      "lng": -72.460037,
      "alt": 37000,
      "spd": 442,
      "ts": 1764776702,
      "hd": 29
    },
    {
      "lat": 11.691455,
      "lng": -72.491356,
      "alt": 37000,
      "spd": 440,
      "ts": 1764776671,
      "hd": 29
    },
    {
      "lat": 11.634428,
      "lng": -72.523544,
      "alt": 37000,
      "spd": 440,
      "ts": 1764776639,
      "hd": 29
    },
    {
      "lat": 11.576005,
      "lng": -72.556648,
      "alt": 37000,
      "spd": 440,
      "ts": 1764776606,
      "hd": 29
    },
    {
      "lat": 11.518478,
      "lng": -72.589272,
      "alt": 37000,
      "spd": 441,
      "ts": 1764776574,
      "hd": 29
    },
    {
      "lat": 11.461161,
      "lng": -72.621704,
      "alt": 37000,
      "spd": 442,
      "ts": 1764776542,
      "hd": 29
    },
    {
      "lat": 11.404129,
      "lng": -72.65387,
      "alt": 37000,
      "spd": 441,
      "ts": 1764776511,
      "hd": 29
    },
    {
      "lat": 11.345712,
      "lng": -72.686897,
      "alt": 37000,
      "spd": 441,
      "ts": 1764776478,
      "hd": 29
    },
    {
      "lat": 11.291059,
      "lng": -72.717834,
      "alt": 37000,
      "spd": 442,
      "ts": 1764776447,
      "hd": 29
    },
    {
      "lat": 11.23259,
      "lng": -72.750885,
      "alt": 37000,
      "spd": 441,
      "ts": 1764776415,
      "hd": 29
    },
    {
      "lat": 11.174469,
      "lng": -72.783714,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776383,
      "hd": 29
    },
    {
      "lat": 11.120316,
      "lng": -72.814308,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776352,
      "hd": 29
    },
    {
      "lat": 11.061905,
      "lng": -72.847267,
      "alt": 37000,
      "spd": 444,
      "ts": 1764776320,
      "hd": 29
    },
    {
      "lat": 11.00616,
      "lng": -72.878723,
      "alt": 37000,
      "spd": 444,
      "ts": 1764776289,
      "hd": 29
    },
    {
      "lat": 10.94769,
      "lng": -72.911682,
      "alt": 37000,
      "spd": 444,
      "ts": 1764776256,
      "hd": 29
    },
    {
      "lat": 10.890884,
      "lng": -72.943771,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776225,
      "hd": 29
    },
    {
      "lat": 10.836756,
      "lng": -72.974228,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776194,
      "hd": 29
    },
    {
      "lat": 10.781219,
      "lng": -73.005501,
      "alt": 37000,
      "spd": 442,
      "ts": 1764776163,
      "hd": 29
    },
    {
      "lat": 10.72261,
      "lng": -73.038506,
      "alt": 37000,
      "spd": 443,
      "ts": 1764776131,
      "hd": 29
    },
    {
      "lat": 10.667445,
      "lng": -73.069542,
      "alt": 37000,
      "spd": 442,
      "ts": 1764776101,
      "hd": 29
    },
    {
      "lat": 10.611862,
      "lng": -73.100716,
      "alt": 37000,
      "spd": 442,
      "ts": 1764776070,
      "hd": 29
    },
    {
      "lat": 10.553206,
      "lng": -73.133675,
      "alt": 37000,
      "spd": 441,
      "ts": 1764776037,
      "hd": 29
    },
    {
      "lat": 10.499451,
      "lng": -73.163879,
      "alt": 37000,
      "spd": 441,
      "ts": 1764776007,
      "hd": 29
    },
    {
      "lat": 10.440689,
      "lng": -73.19693,
      "alt": 37000,
      "spd": 441,
      "ts": 1764775974,
      "hd": 29
    },
    {
      "lat": 10.382401,
      "lng": -73.229698,
      "alt": 37000,
      "spd": 440,
      "ts": 1764775941,
      "hd": 29
    },
    {
      "lat": 10.326264,
      "lng": -73.261101,
      "alt": 37000,
      "spd": 439,
      "ts": 1764775910,
      "hd": 29
    },
    {
      "lat": 10.269656,
      "lng": -73.292824,
      "alt": 37000,
      "spd": 440,
      "ts": 1764775878,
      "hd": 29
    },
    {
      "lat": 10.213028,
      "lng": -73.324615,
      "alt": 37000,
      "spd": 440,
      "ts": 1764775846,
      "hd": 29
    },
    {
      "lat": 10.155304,
      "lng": -73.356972,
      "alt": 37000,
      "spd": 440,
      "ts": 1764775814,
      "hd": 29
    },
    {
      "lat": 10.096939,
      "lng": -73.389603,
      "alt": 37000,
      "spd": 441,
      "ts": 1764775782,
      "hd": 28
    },
    {
      "lat": 10.041504,
      "lng": -73.420494,
      "alt": 37000,
      "spd": 442,
      "ts": 1764775751,
      "hd": 29
    },
    {
      "lat": 9.986199,
      "lng": -73.451462,
      "alt": 37000,
      "spd": 443,
      "ts": 1764775720,
      "hd": 29
    },
    {
      "lat": 9.926697,
      "lng": -73.484848,
      "alt": 37000,
      "spd": 444,
      "ts": 1764775687,
      "hd": 29
    },
    {
      "lat": 9.86911,
      "lng": -73.517059,
      "alt": 37000,
      "spd": 445,
      "ts": 1764775655,
      "hd": 28
    },
    {
      "lat": 9.813034,
      "lng": -73.548347,
      "alt": 37000,
      "spd": 448,
      "ts": 1764775624,
      "hd": 28
    },
    {
      "lat": 9.809395,
      "lng": -73.550392,
      "alt": 37000,
      "spd": 449,
      "ts": 1764775622,
      "hd": 29
    },
    {
      "lat": 9.805763,
      "lng": -73.552422,
      "alt": 37000,
      "spd": 449,
      "ts": 1764775620,
      "hd": 29
    },
    {
      "lat": 9.801155,
      "lng": -73.554985,
      "alt": 37000,
      "spd": 449,
      "ts": 1764775618,
      "hd": 29
    },
    {
      "lat": 9.797338,
      "lng": -73.557114,
      "alt": 37000,
      "spd": 449,
      "ts": 1764775615,
      "hd": 29
    },
    {
      "lat": 9.793706,
      "lng": -73.559196,
      "alt": 37000,
      "spd": 450,
      "ts": 1764775613,
      "hd": 29
    },
    {
      "lat": 9.789145,
      "lng": -73.561752,
      "alt": 37000,
      "spd": 450,
      "ts": 1764775611,
      "hd": 29
    },
    {
      "lat": 9.78528,
      "lng": -73.563934,
      "alt": 37000,
      "spd": 451,
      "ts": 1764775609,
      "hd": 28
    },
    {
      "lat": 9.780899,
      "lng": -73.566406,
      "alt": 37000,
      "spd": 452,
      "ts": 1764775607,
      "hd": 28
    },
    {
      "lat": 9.777603,
      "lng": -73.568222,
      "alt": 37000,
      "spd": 452,
      "ts": 1764775605,
      "hd": 26
    },
    {
      "lat": 9.77313,
      "lng": -73.570564,
      "alt": 37000,
      "spd": 453,
      "ts": 1764775602,
      "hd": 25
    },
    {
      "lat": 9.769592,
      "lng": -73.572319,
      "alt": 37000,
      "spd": 452,
      "ts": 1764775600,
      "hd": 24
    },
    {
      "lat": 9.764611,
      "lng": -73.574631,
      "alt": 37000,
      "spd": 453,
      "ts": 1764775598,
      "hd": 22
    },
    {
      "lat": 9.761536,
      "lng": -73.575951,
      "alt": 37000,
      "spd": 452,
      "ts": 1764775596,
      "hd": 21
    },
    {
      "lat": 9.757442,
      "lng": -73.577621,
      "alt": 37000,
      "spd": 452,
      "ts": 1764775594,
      "hd": 19
    },
    {
      "lat": 9.752335,
      "lng": -73.579582,
      "alt": 37000,
      "spd": 452,
      "ts": 1764775592,
      "hd": 18
    },
    {
      "lat": 9.748581,
      "lng": -73.580887,
      "alt": 37000,
      "spd": 454,
      "ts": 1764775590,
      "hd": 17
    },
    {
      "lat": 9.744598,
      "lng": -73.582191,
      "alt": 37000,
      "spd": 453,
      "ts": 1764775587,
      "hd": 15
    },
    {
      "lat": 9.739753,
      "lng": -73.583588,
      "alt": 37000,
      "spd": 454,
      "ts": 1764775585,
      "hd": 14
    },
    {
      "lat": 9.735283,
      "lng": -73.584816,
      "alt": 37000,
      "spd": 453,
      "ts": 1764775583,
      "hd": 13
    },
    {
      "lat": 9.730163,
      "lng": -73.586044,
      "alt": 37000,
      "spd": 454,
      "ts": 1764775581,
      "hd": 11
    },
    {
      "lat": 9.726066,
      "lng": -73.586945,
      "alt": 37000,
      "spd": 453,
      "ts": 1764775579,
      "hd": 10
    },
    {
      "lat": 9.702576,
      "lng": -73.590103,
      "alt": 37000,
      "spd": 452,
      "ts": 1764775567,
      "hd": 3
    },
    {
      "lat": 9.635661,
      "lng": -73.590454,
      "alt": 37000,
      "spd": 454,
      "ts": 1764775535,
      "hd": 359
    },
    {
      "lat": 9.566951,
      "lng": -73.590355,
      "alt": 37000,
      "spd": 454,
      "ts": 1764775503,
      "hd": 359
    },
    {
      "lat": 9.503128,
      "lng": -73.59024,
      "alt": 37000,
      "spd": 454,
      "ts": 1764775472,
      "hd": 359
    },
    {
      "lat": 9.434555,
      "lng": -73.590149,
      "alt": 37000,
      "spd": 453,
      "ts": 1764775440,
      "hd": 359
    },
    {
      "lat": 9.365751,
      "lng": -73.590027,
      "alt": 37000,
      "spd": 451,
      "ts": 1764775407,
      "hd": 359
    },
    {
      "lat": 9.302347,
      "lng": -73.589981,
      "alt": 36975,
      "spd": 449,
      "ts": 1764775377,
      "hd": 359
    },
    {
      "lat": 9.234055,
      "lng": -73.58992,
      "alt": 36625,
      "spd": 448,
      "ts": 1764775344,
      "hd": 359
    },
    {
      "lat": 9.170744,
      "lng": -73.589836,
      "alt": 36275,
      "spd": 446,
      "ts": 1764775313,
      "hd": 359
    },
    {
      "lat": 9.104141,
      "lng": -73.589775,
      "alt": 36000,
      "spd": 444,
      "ts": 1764775281,
      "hd": 359
    },
    {
      "lat": 9.040192,
      "lng": -73.589684,
      "alt": 36000,
      "spd": 444,
      "ts": 1764775250,
      "hd": 359
    },
    {
      "lat": 8.974247,
      "lng": -73.5896,
      "alt": 36000,
      "spd": 446,
      "ts": 1764775218,
      "hd": 359
    },
    {
      "lat": 8.907678,
      "lng": -73.589554,
      "alt": 36000,
      "spd": 447,
      "ts": 1764775187,
      "hd": 359
    },
    {
      "lat": 8.841946,
      "lng": -73.589455,
      "alt": 36000,
      "spd": 446,
      "ts": 1764775155,
      "hd": 1
    },
    {
      "lat": 8.77654,
      "lng": -73.589363,
      "alt": 36000,
      "spd": 446,
      "ts": 1764775123,
      "hd": 359
    },
    {
      "lat": 8.709,
      "lng": -73.58931,
      "alt": 36000,
      "spd": 446,
      "ts": 1764775090,
      "hd": 359
    },
    {
      "lat": 8.642899,
      "lng": -73.58931,
      "alt": 36000,
      "spd": 447,
      "ts": 1764775059,
      "hd": 359
    },
    {
      "lat": 8.578812,
      "lng": -73.589264,
      "alt": 36000,
      "spd": 447,
      "ts": 1764775027,
      "hd": 359
    },
    {
      "lat": 8.511378,
      "lng": -73.589218,
      "alt": 36000,
      "spd": 447,
      "ts": 1764774995,
      "hd": 359
    },
    {
      "lat": 8.444092,
      "lng": -73.588989,
      "alt": 36000,
      "spd": 448,
      "ts": 1764774963,
      "hd": 359
    },
    {
      "lat": 8.37931,
      "lng": -73.588654,
      "alt": 36000,
      "spd": 449,
      "ts": 1764774932,
      "hd": 359
    },
    {
      "lat": 8.313531,
      "lng": -73.588554,
      "alt": 36000,
      "spd": 451,
      "ts": 1764774900,
      "hd": 359
    },
    {
      "lat": 8.249817,
      "lng": -73.588661,
      "alt": 36000,
      "spd": 452,
      "ts": 1764774870,
      "hd": 359
    },
    {
      "lat": 8.184209,
      "lng": -73.588608,
      "alt": 36000,
      "spd": 454,
      "ts": 1764774838,
      "hd": 359
    },
    {
      "lat": 8.115875,
      "lng": -73.588615,
      "alt": 36000,
      "spd": 455,
      "ts": 1764774806,
      "hd": 359
    },
    {
      "lat": 8.048126,
      "lng": -73.588524,
      "alt": 36000,
      "spd": 455,
      "ts": 1764774774,
      "hd": 359
    },
    {
      "lat": 7.977657,
      "lng": -73.588226,
      "alt": 36000,
      "spd": 456,
      "ts": 1764774741,
      "hd": 359
    },
    {
      "lat": 7.908829,
      "lng": -73.588005,
      "alt": 36000,
      "spd": 456,
      "ts": 1764774708,
      "hd": 359
    },
    {
      "lat": 7.840393,
      "lng": -73.587685,
      "alt": 36000,
      "spd": 457,
      "ts": 1764774676,
      "hd": 359
    },
    {
      "lat": 7.775711,
      "lng": -73.587448,
      "alt": 36000,
      "spd": 457,
      "ts": 1764774645,
      "hd": 359
    },
    {
      "lat": 7.708557,
      "lng": -73.587776,
      "alt": 36000,
      "spd": 458,
      "ts": 1764774614,
      "hd": 359
    },
    {
      "lat": 7.643831,
      "lng": -73.588554,
      "alt": 36000,
      "spd": 460,
      "ts": 1764774583,
      "hd": 359
    },
    {
      "lat": 7.574514,
      "lng": -73.588654,
      "alt": 36000,
      "spd": 460,
      "ts": 1764774551,
      "hd": 358
    },
    {
      "lat": 7.506546,
      "lng": -73.585724,
      "alt": 36000,
      "spd": 461,
      "ts": 1764774519,
      "hd": 357
    },
    {
      "lat": 7.437977,
      "lng": -73.582634,
      "alt": 36000,
      "spd": 462,
      "ts": 1764774487,
      "hd": 357
    },
    {
      "lat": 7.368893,
      "lng": -73.579369,
      "alt": 36000,
      "spd": 463,
      "ts": 1764774455,
      "hd": 357
    },
    {
      "lat": 7.299042,
      "lng": -73.575996,
      "alt": 36000,
      "spd": 463,
      "ts": 1764774422,
      "hd": 357
    },
    {
      "lat": 7.230168,
      "lng": -73.572601,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774390,
      "hd": 357
    },
    {
      "lat": 7.163635,
      "lng": -73.569344,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774359,
      "hd": 357
    },
    {
      "lat": 7.095291,
      "lng": -73.566132,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774328,
      "hd": 357
    },
    {
      "lat": 7.030645,
      "lng": -73.563126,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774298,
      "hd": 357
    },
    {
      "lat": 7.020721,
      "lng": -73.562683,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774293,
      "hd": 358
    },
    {
      "lat": 7.01532,
      "lng": -73.562546,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774291,
      "hd": 359
    },
    {
      "lat": 7.006943,
      "lng": -73.562454,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774287,
      "hd": 1
    },
    {
      "lat": 7.00262,
      "lng": -73.562462,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774285,
      "hd": 1
    },
    {
      "lat": 6.935989,
      "lng": -73.569435,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774254,
      "hd": 11
    },
    {
      "lat": 6.867386,
      "lng": -73.583725,
      "alt": 36000,
      "spd": 464,
      "ts": 1764774222,
      "hd": 11
    },
    {
      "lat": 6.802446,
      "lng": -73.59713,
      "alt": 36000,
      "spd": 465,
      "ts": 1764774191,
      "hd": 11
    },
    {
      "lat": 6.7332,
      "lng": -73.611473,
      "alt": 36000,
      "spd": 466,
      "ts": 1764774158,
      "hd": 11
    },
    {
      "lat": 6.66642,
      "lng": -73.62516,
      "alt": 35850,
      "spd": 464,
      "ts": 1764774126,
      "hd": 11
    },
    {
      "lat": 6.598454,
      "lng": -73.638893,
      "alt": 35425,
      "spd": 461,
      "ts": 1764774094,
      "hd": 11
    },
    {
      "lat": 6.533932,
      "lng": -73.652016,
      "alt": 35050,
      "spd": 457,
      "ts": 1764774063,
      "hd": 11
    },
    {
      "lat": 6.465919,
      "lng": -73.66584,
      "alt": 34600,
      "spd": 454,
      "ts": 1764774030,
      "hd": 11
    },
    {
      "lat": 6.398884,
      "lng": -73.679619,
      "alt": 34150,
      "spd": 451,
      "ts": 1764773998,
      "hd": 11
    },
    {
      "lat": 6.332748,
      "lng": -73.693359,
      "alt": 33975,
      "spd": 451,
      "ts": 1764773965,
      "hd": 11
    },
    {
      "lat": 6.265915,
      "lng": -73.707321,
      "alt": 33525,
      "spd": 447,
      "ts": 1764773933,
      "hd": 11
    },
    {
      "lat": 6.204296,
      "lng": -73.720062,
      "alt": 32975,
      "spd": 445,
      "ts": 1764773902,
      "hd": 11
    },
    {
      "lat": 6.141264,
      "lng": -73.733276,
      "alt": 32275,
      "spd": 446,
      "ts": 1764773871,
      "hd": 11
    },
    {
      "lat": 6.074741,
      "lng": -73.747101,
      "alt": 31400,
      "spd": 451,
      "ts": 1764773839,
      "hd": 11
    },
    {
      "lat": 6.008972,
      "lng": -73.760674,
      "alt": 30750,
      "spd": 449,
      "ts": 1764773807,
      "hd": 11
    },
    {
      "lat": 5.943464,
      "lng": -73.774094,
      "alt": 30125,
      "spd": 445,
      "ts": 1764773774,
      "hd": 11
    },
    {
      "lat": 5.877593,
      "lng": -73.787636,
      "alt": 29525,
      "spd": 440,
      "ts": 1764773742,
      "hd": 11
    },
    {
      "lat": 5.812419,
      "lng": -73.800987,
      "alt": 28875,
      "spd": 434,
      "ts": 1764773709,
      "hd": 11
    },
    {
      "lat": 5.75029,
      "lng": -73.813789,
      "alt": 28175,
      "spd": 431,
      "ts": 1764773678,
      "hd": 11
    },
    {
      "lat": 5.68752,
      "lng": -73.826706,
      "alt": 27500,
      "spd": 426,
      "ts": 1764773646,
      "hd": 11
    },
    {
      "lat": 5.628771,
      "lng": -73.838829,
      "alt": 26850,
      "spd": 419,
      "ts": 1764773615,
      "hd": 11
    },
    {
      "lat": 5.569336,
      "lng": -73.850983,
      "alt": 26150,
      "spd": 413,
      "ts": 1764773584,
      "hd": 11
    },
    {
      "lat": 5.565041,
      "lng": -73.851852,
      "alt": 26100,
      "spd": 413,
      "ts": 1764773581,
      "hd": 11
    },
    {
      "lat": 5.561279,
      "lng": -73.852661,
      "alt": 26050,
      "spd": 412,
      "ts": 1764773579,
      "hd": 10
    },
    {
      "lat": 5.556941,
      "lng": -73.853462,
      "alt": 26000,
      "spd": 412,
      "ts": 1764773577,
      "hd": 10
    },
    {
      "lat": 5.552239,
      "lng": -73.854362,
      "alt": 25925,
      "spd": 411,
      "ts": 1764773575,
      "hd": 9
    },
    {
      "lat": 5.516144,
      "lng": -73.858383,
      "alt": 25425,
      "spd": 408,
      "ts": 1764773555,
      "hd": 2
    },
    {
      "lat": 5.455627,
      "lng": -73.858894,
      "alt": 24425,
      "spd": 407,
      "ts": 1764773523,
      "hd": 359
    },
    {
      "lat": 5.395294,
      "lng": -73.859268,
      "alt": 24000,
      "spd": 402,
      "ts": 1764773491,
      "hd": 359
    },
    {
      "lat": 5.334654,
      "lng": -73.859802,
      "alt": 23875,
      "spd": 402,
      "ts": 1764773459,
      "hd": 359
    },
    {
      "lat": 5.277374,
      "lng": -73.860245,
      "alt": 23500,
      "spd": 404,
      "ts": 1764773428,
      "hd": 359
    },
    {
      "lat": 5.217156,
      "lng": -73.860466,
      "alt": 22850,
      "spd": 397,
      "ts": 1764773396,
      "hd": 359
    },
    {
      "lat": 5.162224,
      "lng": -73.860466,
      "alt": 22175,
      "spd": 386,
      "ts": 1764773366,
      "hd": 359
    },
    {
      "lat": 5.105384,
      "lng": -73.860519,
      "alt": 21750,
      "spd": 361,
      "ts": 1764773333,
      "hd": 1
    },
    {
      "lat": 5.053339,
      "lng": -73.86132,
      "alt": 21000,
      "spd": 348,
      "ts": 1764773301,
      "hd": 1
    },
    {
      "lat": 5.001572,
      "lng": -73.861969,
      "alt": 19925,
      "spd": 341,
      "ts": 1764773269,
      "hd": 358
    },
    {
      "lat": 4.998407,
      "lng": -73.861984,
      "alt": 19850,
      "spd": 340,
      "ts": 1764773267,
      "hd": 358
    },
    {
      "lat": 4.99445,
      "lng": -73.861984,
      "alt": 19775,
      "spd": 339,
      "ts": 1764773264,
      "hd": 358
    },
    {
      "lat": 4.991318,
      "lng": -73.862015,
      "alt": 19700,
      "spd": 339,
      "ts": 1764773262,
      "hd": 358
    },
    {
      "lat": 4.987839,
      "lng": -73.862015,
      "alt": 19625,
      "spd": 338,
      "ts": 1764773260,
      "hd": 358
    },
    {
      "lat": 4.984543,
      "lng": -73.862015,
      "alt": 19550,
      "spd": 338,
      "ts": 1764773258,
      "hd": 359
    },
    {
      "lat": 4.98111,
      "lng": -73.862015,
      "alt": 19475,
      "spd": 338,
      "ts": 1764773256,
      "hd": 359
    },
    {
      "lat": 4.977768,
      "lng": -73.861969,
      "alt": 19400,
      "spd": 337,
      "ts": 1764773254,
      "hd": 359
    },
    {
      "lat": 4.974838,
      "lng": -73.861969,
      "alt": 19350,
      "spd": 336,
      "ts": 1764773252,
      "hd": 359
    },
    {
      "lat": 4.971034,
      "lng": -73.861938,
      "alt": 19275,
      "spd": 336,
      "ts": 1764773250,
      "hd": 358
    },
    {
      "lat": 4.968063,
      "lng": -73.861877,
      "alt": 19200,
      "spd": 335,
      "ts": 1764773247,
      "hd": 358
    },
    {
      "lat": 4.964813,
      "lng": -73.861786,
      "alt": 19150,
      "spd": 334,
      "ts": 1764773245,
      "hd": 359
    },
    {
      "lat": 4.961105,
      "lng": -73.861732,
      "alt": 19050,
      "spd": 334,
      "ts": 1764773243,
      "hd": 1
    },
    {
      "lat": 4.957489,
      "lng": -73.861732,
      "alt": 19000,
      "spd": 332,
      "ts": 1764773241,
      "hd": 3
    },
    {
      "lat": 4.953964,
      "lng": -73.861877,
      "alt": 18925,
      "spd": 332,
      "ts": 1764773239,
      "hd": 6
    },
    {
      "lat": 4.950551,
      "lng": -73.862175,
      "alt": 18850,
      "spd": 331,
      "ts": 1764773237,
      "hd": 8
    },
    {
      "lat": 4.947479,
      "lng": -73.862648,
      "alt": 18775,
      "spd": 330,
      "ts": 1764773235,
      "hd": 11
    },
    {
      "lat": 4.944443,
      "lng": -73.863182,
      "alt": 18725,
      "spd": 330,
      "ts": 1764773232,
      "hd": 14
    },
    {
      "lat": 4.941148,
      "lng": -73.864021,
      "alt": 18650,
      "spd": 329,
      "ts": 1764773230,
      "hd": 17
    },
    {
      "lat": 4.937935,
      "lng": -73.865013,
      "alt": 18600,
      "spd": 329,
      "ts": 1764773228,
      "hd": 20
    },
    {
      "lat": 4.934692,
      "lng": -73.866112,
      "alt": 18525,
      "spd": 328,
      "ts": 1764773226,
      "hd": 24
    },
    {
      "lat": 4.931884,
      "lng": -73.867287,
      "alt": 18450,
      "spd": 328,
      "ts": 1764773224,
      "hd": 26
    },
    {
      "lat": 4.92897,
      "lng": -73.868675,
      "alt": 18375,
      "spd": 328,
      "ts": 1764773222,
      "hd": 29
    },
    {
      "lat": 4.926484,
      "lng": -73.869942,
      "alt": 18325,
      "spd": 328,
      "ts": 1764773220,
      "hd": 34
    },
    {
      "lat": 4.922745,
      "lng": -73.872353,
      "alt": 18225,
      "spd": 328,
      "ts": 1764773217,
      "hd": 35
    },
    {
      "lat": 4.920246,
      "lng": -73.874107,
      "alt": 18150,
      "spd": 329,
      "ts": 1764773215,
      "hd": 39
    },
    {
      "lat": 4.917452,
      "lng": -73.876282,
      "alt": 18075,
      "spd": 328,
      "ts": 1764773213,
      "hd": 44
    },
    {
      "lat": 4.89061,
      "lng": -73.911407,
      "alt": 17075,
      "spd": 323,
      "ts": 1764773184,
      "hd": 54
    },
    {
      "lat": 4.86438,
      "lng": -73.948509,
      "alt": 15650,
      "spd": 328,
      "ts": 1764773154,
      "hd": 55
    },
    {
      "lat": 4.83715,
      "lng": -73.988754,
      "alt": 14275,
      "spd": 324,
      "ts": 1764773121,
      "hd": 56
    },
    {
      "lat": 4.811646,
      "lng": -74.026855,
      "alt": 13550,
      "spd": 296,
      "ts": 1764773090,
      "hd": 56
    },
    {
      "lat": 4.810043,
      "lng": -74.029274,
      "alt": 13525,
      "spd": 292,
      "ts": 1764773088,
      "hd": 56
    },
    {
      "lat": 4.808241,
      "lng": -74.03199,
      "alt": 13500,
      "spd": 290,
      "ts": 1764773086,
      "hd": 56
    },
    {
      "lat": 4.806891,
      "lng": -74.034027,
      "alt": 13475,
      "spd": 286,
      "ts": 1764773083,
      "hd": 56
    },
    {
      "lat": 4.805076,
      "lng": -74.036774,
      "alt": 13450,
      "spd": 283,
      "ts": 1764773081,
      "hd": 56
    },
    {
      "lat": 4.80368,
      "lng": -74.038864,
      "alt": 13425,
      "spd": 279,
      "ts": 1764773079,
      "hd": 56
    },
    {
      "lat": 4.801817,
      "lng": -74.041695,
      "alt": 13375,
      "spd": 276,
      "ts": 1764773077,
      "hd": 56
    },
    {
      "lat": 4.800327,
      "lng": -74.043968,
      "alt": 13350,
      "spd": 273,
      "ts": 1764773074,
      "hd": 56
    },
    {
      "lat": 4.798874,
      "lng": -74.046082,
      "alt": 13300,
      "spd": 272,
      "ts": 1764773072,
      "hd": 55
    },
    {
      "lat": 4.79718,
      "lng": -74.048553,
      "alt": 13250,
      "spd": 270,
      "ts": 1764773070,
      "hd": 54
    },
    {
      "lat": 4.795765,
      "lng": -74.050598,
      "alt": 13225,
      "spd": 266,
      "ts": 1764773068,
      "hd": 53
    },
    {
      "lat": 4.794275,
      "lng": -74.052589,
      "alt": 13175,
      "spd": 263,
      "ts": 1764773066,
      "hd": 50
    },
    {
      "lat": 4.792374,
      "lng": -74.055023,
      "alt": 13125,
      "spd": 261,
      "ts": 1764773064,
      "hd": 47
    },
    {
      "lat": 4.790634,
      "lng": -74.056976,
      "alt": 13100,
      "spd": 258,
      "ts": 1764773061,
      "hd": 43
    },
    {
      "lat": 4.788735,
      "lng": -74.058838,
      "alt": 13075,
      "spd": 255,
      "ts": 1764773059,
      "hd": 40
    },
    {
      "lat": 4.786606,
      "lng": -74.060699,
      "alt": 13025,
      "spd": 251,
      "ts": 1764773057,
      "hd": 34
    },
    {
      "lat": 4.784912,
      "lng": -74.061958,
      "alt": 13000,
      "spd": 247,
      "ts": 1764773055,
      "hd": 30
    },
    {
      "lat": 4.782898,
      "lng": -74.063263,
      "alt": 12975,
      "spd": 244,
      "ts": 1764773053,
      "hd": 26
    },
    {
      "lat": 4.78038,
      "lng": -74.064568,
      "alt": 12950,
      "spd": 240,
      "ts": 1764773051,
      "hd": 23
    },
    {
      "lat": 4.778448,
      "lng": -74.065468,
      "alt": 12900,
      "spd": 238,
      "ts": 1764773048,
      "hd": 19
    },
    {
      "lat": 4.762527,
      "lng": -74.069122,
      "alt": 12350,
      "spd": 235,
      "ts": 1764773033,
      "hd": 9
    },
    {
      "lat": 4.747467,
      "lng": -74.071312,
      "alt": 11850,
      "spd": 230,
      "ts": 1764773020,
      "hd": 5
    },
    {
      "lat": 4.733525,
      "lng": -74.072525,
      "alt": 11375,
      "spd": 226,
      "ts": 1764773006,
      "hd": 4
    },
    {
      "lat": 4.7314,
      "lng": -74.072708,
      "alt": 11350,
      "spd": 225,
      "ts": 1764773004,
      "hd": 4
    },
    {
      "lat": 4.729111,
      "lng": -74.072899,
      "alt": 11275,
      "spd": 223,
      "ts": 1764773002,
      "hd": 4
    },
    {
      "lat": 4.726588,
      "lng": -74.07309,
      "alt": 11200,
      "spd": 221,
      "ts": 1764773000,
      "hd": 4
    },
    {
      "lat": 4.724633,
      "lng": -74.07328,
      "alt": 11150,
      "spd": 220,
      "ts": 1764772998,
      "hd": 5
    },
    {
      "lat": 4.72197,
      "lng": -74.073502,
      "alt": 11100,
      "spd": 218,
      "ts": 1764772995,
      "hd": 5
    },
    {
      "lat": 4.720139,
      "lng": -74.073685,
      "alt": 11050,
      "spd": 218,
      "ts": 1764772993,
      "hd": 5
    },
    {
      "lat": 4.717511,
      "lng": -74.073898,
      "alt": 10975,
      "spd": 216,
      "ts": 1764772991,
      "hd": 5
    },
    {
      "lat": 4.715602,
      "lng": -74.074089,
      "alt": 10900,
      "spd": 215,
      "ts": 1764772989,
      "hd": 4
    },
    {
      "lat": 4.713684,
      "lng": -74.074249,
      "alt": 10850,
      "spd": 214,
      "ts": 1764772987,
      "hd": 4
    },
    {
      "lat": 4.711319,
      "lng": -74.074463,
      "alt": 10775,
      "spd": 214,
      "ts": 1764772985,
      "hd": 4
    },
    {
      "lat": 4.708923,
      "lng": -74.074615,
      "alt": 10700,
      "spd": 213,
      "ts": 1764772982,
      "hd": 5
    },
    {
      "lat": 4.707321,
      "lng": -74.074715,
      "alt": 10650,
      "spd": 212,
      "ts": 1764772980,
      "hd": 7
    },
    {
      "lat": 4.705261,
      "lng": -74.074944,
      "alt": 10575,
      "spd": 211,
      "ts": 1764772978,
      "hd": 10
    },
    {
      "lat": 4.702606,
      "lng": -74.075409,
      "alt": 10525,
      "spd": 209,
      "ts": 1764772976,
      "hd": 17
    },
    {
      "lat": 4.700706,
      "lng": -74.075882,
      "alt": 10475,
      "spd": 209,
      "ts": 1764772974,
      "hd": 21
    },
    {
      "lat": 4.698761,
      "lng": -74.076622,
      "alt": 10400,
      "spd": 208,
      "ts": 1764772972,
      "hd": 26
    },
    {
      "lat": 4.696655,
      "lng": -74.077591,
      "alt": 10350,
      "spd": 208,
      "ts": 1764772970,
      "hd": 30
    },
    {
      "lat": 4.695007,
      "lng": -74.078529,
      "alt": 10275,
      "spd": 208,
      "ts": 1764772967,
      "hd": 35
    },
    {
      "lat": 4.693397,
      "lng": -74.079582,
      "alt": 10200,
      "spd": 210,
      "ts": 1764772965,
      "hd": 39
    },
    {
      "lat": 4.691767,
      "lng": -74.080856,
      "alt": 10125,
      "spd": 210,
      "ts": 1764772963,
      "hd": 43
    },
    {
      "lat": 4.690338,
      "lng": -74.082115,
      "alt": 10050,
      "spd": 212,
      "ts": 1764772961,
      "hd": 47
    },
    {
      "lat": 4.688782,
      "lng": -74.08374,
      "alt": 9975,
      "spd": 212,
      "ts": 1764772959,
      "hd": 51
    },
    {
      "lat": 4.6875,
      "lng": -74.085373,
      "alt": 9900,
      "spd": 212,
      "ts": 1764772957,
      "hd": 55
    },
    {
      "lat": 4.686356,
      "lng": -74.087006,
      "alt": 9850,
      "spd": 212,
      "ts": 1764772955,
      "hd": 59
    },
    {
      "lat": 4.685211,
      "lng": -74.088722,
      "alt": 9800,
      "spd": 212,
      "ts": 1764772953,
      "hd": 65
    },
    {
      "lat": 4.68425,
      "lng": -74.090584,
      "alt": 9725,
      "spd": 211,
      "ts": 1764772951,
      "hd": 70
    },
    {
      "lat": 4.683472,
      "lng": -74.0924,
      "alt": 9675,
      "spd": 211,
      "ts": 1764772949,
      "hd": 74
    },
    {
      "lat": 4.682648,
      "lng": -74.095146,
      "alt": 9600,
      "spd": 210,
      "ts": 1764772946,
      "hd": 80
    },
    {
      "lat": 4.682178,
      "lng": -74.097435,
      "alt": 9525,
      "spd": 209,
      "ts": 1764772944,
      "hd": 84
    },
    {
      "lat": 4.681915,
      "lng": -74.099335,
      "alt": 9450,
      "spd": 211,
      "ts": 1764772942,
      "hd": 88
    },
    {
      "lat": 4.681778,
      "lng": -74.101479,
      "alt": 9350,
      "spd": 212,
      "ts": 1764772939,
      "hd": 92
    },
    {
      "lat": 4.681824,
      "lng": -74.10334,
      "alt": 9275,
      "spd": 212,
      "ts": 1764772937,
      "hd": 97
    },
    {
      "lat": 4.681991,
      "lng": -74.105293,
      "alt": 9175,
      "spd": 214,
      "ts": 1764772935,
      "hd": 104
    },
    {
      "lat": 4.682457,
      "lng": -74.107712,
      "alt": 9075,
      "spd": 213,
      "ts": 1764772933,
      "hd": 109
    },
    {
      "lat": 4.683062,
      "lng": -74.109695,
      "alt": 9000,
      "spd": 211,
      "ts": 1764772931,
      "hd": 113
    },
    {
      "lat": 4.683701,
      "lng": -74.111443,
      "alt": 8950,
      "spd": 210,
      "ts": 1764772929,
      "hd": 117
    },
    {
      "lat": 4.686879,
      "lng": -74.117035,
      "alt": 8650,
      "spd": 207,
      "ts": 1764772923,
      "hd": 124
    },
    {
      "lat": 4.695212,
      "lng": -74.128067,
      "alt": 8025,
      "spd": 204,
      "ts": 1764772908,
      "hd": 127
    },
    {
      "lat": 4.703018,
      "lng": -74.138306,
      "alt": 7975,
      "spd": 162,
      "ts": 1764772893,
      "hd": 126
    },
    {
      "lat": 4.708666,
      "lng": -74.145782,
      "alt": 7975,
      "spd": 107,
      "ts": 1764772879,
      "hd": 126
    },
    {
      "lat": 4.710766,
      "lng": -74.148582,
      "alt": 0,
      "spd": 78,
      "ts": 1764772872,
      "hd": 126
    },
    {
      "lat": 4.711156,
      "lng": -74.149086,
      "alt": 0,
      "spd": 74,
      "ts": 1764772870,
      "hd": 126
    },
    {
      "lat": 4.711459,
      "lng": -74.149475,
      "alt": 0,
      "spd": 66,
      "ts": 1764772869,
      "hd": 126
    },
    {
      "lat": 4.711727,
      "lng": -74.149841,
      "alt": 0,
      "spd": 61,
      "ts": 1764772867,
      "hd": 126
    },
    {
      "lat": 4.711899,
      "lng": -74.15007,
      "alt": 0,
      "spd": 57,
      "ts": 1764772866,
      "hd": 126
    },
    {
      "lat": 4.712082,
      "lng": -74.150299,
      "alt": 0,
      "spd": 53,
      "ts": 1764772865,
      "hd": 126
    },
    {
      "lat": 4.712254,
      "lng": -74.150536,
      "alt": 0,
      "spd": 48,
      "ts": 1764772864,
      "hd": 126
    },
    {
      "lat": 4.712495,
      "lng": -74.150848,
      "alt": 0,
      "spd": 40,
      "ts": 1764772863,
      "hd": 126
    },
    {
      "lat": 4.712693,
      "lng": -74.151108,
      "alt": 0,
      "spd": 35,
      "ts": 1764772861,
      "hd": 126
    },
    {
      "lat": 4.712952,
      "lng": -74.151443,
      "alt": 0,
      "spd": 21,
      "ts": 1764772859,
      "hd": 126
    },
    {
      "lat": 4.713158,
      "lng": -74.151733,
      "alt": 0,
      "spd": 9,
      "ts": 1764772855,
      "hd": 126
    },
    {
      "lat": 4.713375,
      "lng": -74.151939,
      "alt": 0,
      "spd": 6,
      "ts": 1764772839,
      "hd": 70
    },
    {
      "lat": 4.713181,
      "lng": -74.152153,
      "alt": 0,
      "spd": 8,
      "ts": 1764772831,
      "hd": 36
    },
    {
      "lat": 4.712963,
      "lng": -74.152328,
      "alt": 0,
      "spd": 7,
      "ts": 1764772823,
      "hd": 42
    },
    {
      "lat": 4.712734,
      "lng": -74.152534,
      "alt": 0,
      "spd": 6,
      "ts": 1764772813,
      "hd": 42
    },
    {
      "lat": 4.71253,
      "lng": -74.152718,
      "alt": 0,
      "spd": 6,
      "ts": 1764772803,
      "hd": 42
    },
    {
      "lat": 4.712322,
      "lng": -74.152893,
      "alt": 0,
      "spd": 0,
      "ts": 1764772408,
      "hd": 25
    },
    {
      "lat": 4.711967,
      "lng": -74.153,
      "alt": 0,
      "spd": 11,
      "ts": 1764772395,
      "hd": 354
    },
    {
      "lat": 4.711459,
      "lng": -74.152779,
      "alt": 0,
      "spd": 9,
      "ts": 1764772384,
      "hd": 309
    },
    {
      "lat": 4.711292,
      "lng": -74.152557,
      "alt": 0,
      "spd": 8,
      "ts": 1764772378,
      "hd": 306
    },
    {
      "lat": 4.711098,
      "lng": -74.152313,
      "alt": 0,
      "spd": 7,
      "ts": 1764772369,
      "hd": 309
    },
    {
      "lat": 4.710938,
      "lng": -74.152107,
      "alt": 0,
      "spd": 8,
      "ts": 1764772362,
      "hd": 306
    },
    {
      "lat": 4.710761,
      "lng": -74.151878,
      "alt": 0,
      "spd": 7,
      "ts": 1764772354,
      "hd": 306
    },
    {
      "lat": 4.710609,
      "lng": -74.151665,
      "alt": 0,
      "spd": 7,
      "ts": 1764772345,
      "hd": 306
    },
    {
      "lat": 4.710434,
      "lng": -74.151451,
      "alt": 0,
      "spd": 5,
      "ts": 1764772337,
      "hd": 306
    },
    {
      "lat": 4.71026,
      "lng": -74.15123,
      "alt": 0,
      "spd": 2,
      "ts": 1764772322,
      "hd": 306
    },
    {
      "lat": 4.710109,
      "lng": -74.151016,
      "alt": 0,
      "spd": 8,
      "ts": 1764772104,
      "hd": 306
    },
    {
      "lat": 4.709942,
      "lng": -74.150787,
      "alt": 0,
      "spd": 9,
      "ts": 1764772097,
      "hd": 306
    },
    {
      "lat": 4.709725,
      "lng": -74.150528,
      "alt": 0,
      "spd": 9,
      "ts": 1764772089,
      "hd": 306
    },
    {
      "lat": 4.709553,
      "lng": -74.150276,
      "alt": 0,
      "spd": 10,
      "ts": 1764772082,
      "hd": 306
    },
    {
      "lat": 4.709358,
      "lng": -74.150032,
      "alt": 0,
      "spd": 10,
      "ts": 1764772075,
      "hd": 306
    },
    {
      "lat": 4.709155,
      "lng": -74.149757,
      "alt": 0,
      "spd": 10,
      "ts": 1764772068,
      "hd": 306
    },
    {
      "lat": 4.708945,
      "lng": -74.149475,
      "alt": 0,
      "spd": 10,
      "ts": 1764772060,
      "hd": 306
    },
    {
      "lat": 4.70874,
      "lng": -74.149193,
      "alt": 0,
      "spd": 10,
      "ts": 1764772053,
      "hd": 306
    },
    {
      "lat": 4.708549,
      "lng": -74.148941,
      "alt": 0,
      "spd": 10,
      "ts": 1764772046,
      "hd": 306
    },
    {
      "lat": 4.708363,
      "lng": -74.148697,
      "alt": 0,
      "spd": 9,
      "ts": 1764772040,
      "hd": 306
    },
    {
      "lat": 4.708165,
      "lng": -74.14843,
      "alt": 0,
      "spd": 7,
      "ts": 1764772031,
      "hd": 306
    },
    {
      "lat": 4.707985,
      "lng": -74.148209,
      "alt": 0,
      "spd": 6,
      "ts": 1764772022,
      "hd": 306
    },
    {
      "lat": 4.707813,
      "lng": -74.147972,
      "alt": 0,
      "spd": 6,
      "ts": 1764772012,
      "hd": 306
    },
    {
      "lat": 4.707653,
      "lng": -74.147766,
      "alt": 0,
      "spd": 6,
      "ts": 1764772004,
      "hd": 306
    },
    {
      "lat": 4.707355,
      "lng": -74.147369,
      "alt": 0,
      "spd": 0,
      "ts": 1764771981,
      "hd": 306
    },
    {
      "lat": 4.707164,
      "lng": -74.147133,
      "alt": 0,
      "spd": 8,
      "ts": 1764771846,
      "hd": 306
    },
    {
      "lat": 4.707001,
      "lng": -74.146904,
      "alt": 0,
      "spd": 8,
      "ts": 1764771838,
      "hd": 306
    },
    {
      "lat": 4.706841,
      "lng": -74.14669,
      "alt": 0,
      "spd": 8,
      "ts": 1764771831,
      "hd": 306
    },
    {
      "lat": 4.706664,
      "lng": -74.146469,
      "alt": 0,
      "spd": 8,
      "ts": 1764771823,
      "hd": 306
    },
    {
      "lat": 4.706497,
      "lng": -74.146248,
      "alt": 0,
      "spd": 8,
      "ts": 1764771816,
      "hd": 306
    },
    {
      "lat": 4.706326,
      "lng": -74.146019,
      "alt": 0,
      "spd": 8,
      "ts": 1764771808,
      "hd": 306
    },
    {
      "lat": 4.706152,
      "lng": -74.145782,
      "alt": 0,
      "spd": 8,
      "ts": 1764771801,
      "hd": 306
    },
    {
      "lat": 4.705948,
      "lng": -74.145515,
      "alt": 0,
      "spd": 9,
      "ts": 1764771792,
      "hd": 306
    },
    {
      "lat": 4.705756,
      "lng": -74.145264,
      "alt": 0,
      "spd": 9,
      "ts": 1764771784,
      "hd": 306
    },
    {
      "lat": 4.705558,
      "lng": -74.145012,
      "alt": 0,
      "spd": 9,
      "ts": 1764771776,
      "hd": 306
    },
    {
      "lat": 4.705384,
      "lng": -74.144775,
      "alt": 0,
      "spd": 9,
      "ts": 1764771769,
      "hd": 306
    },
    {
      "lat": 4.705215,
      "lng": -74.144531,
      "alt": 0,
      "spd": 9,
      "ts": 1764771762,
      "hd": 306
    },
    {
      "lat": 4.705011,
      "lng": -74.144279,
      "alt": 0,
      "spd": 9,
      "ts": 1764771755,
      "hd": 306
    },
    {
      "lat": 4.704837,
      "lng": -74.144043,
      "alt": 0,
      "spd": 10,
      "ts": 1764771748,
      "hd": 309
    },
    {
      "lat": 4.704674,
      "lng": -74.143829,
      "alt": 0,
      "spd": 10,
      "ts": 1764771742,
      "hd": 306
    },
    {
      "lat": 4.704437,
      "lng": -74.143532,
      "alt": 0,
      "spd": 10,
      "ts": 1764771734,
      "hd": 306
    },
    {
      "lat": 4.704255,
      "lng": -74.14328,
      "alt": 0,
      "spd": 11,
      "ts": 1764771727,
      "hd": 306
    },
    {
      "lat": 4.704034,
      "lng": -74.142998,
      "alt": 0,
      "spd": 11,
      "ts": 1764771720,
      "hd": 306
    },
    {
      "lat": 4.703813,
      "lng": -74.1427,
      "alt": 0,
      "spd": 11,
      "ts": 1764771713,
      "hd": 306
    },
    {
      "lat": 4.703557,
      "lng": -74.142357,
      "alt": 0,
      "spd": 11,
      "ts": 1764771705,
      "hd": 306
    },
    {
      "lat": 4.703327,
      "lng": -74.142059,
      "alt": 0,
      "spd": 12,
      "ts": 1764771698,
      "hd": 306
    },
    {
      "lat": 4.703098,
      "lng": -74.141762,
      "alt": 0,
      "spd": 12,
      "ts": 1764771691,
      "hd": 306
    },
    {
      "lat": 4.702812,
      "lng": -74.141365,
      "alt": 0,
      "spd": 12,
      "ts": 1764771682,
      "hd": 306
    },
    {
      "lat": 4.70256,
      "lng": -74.141052,
      "alt": 0,
      "spd": 12,
      "ts": 1764771675,
      "hd": 306
    },
    {
      "lat": 4.702393,
      "lng": -74.140823,
      "alt": 0,
      "spd": 12,
      "ts": 1764771670,
      "hd": 306
    },
    {
      "lat": 4.70224,
      "lng": -74.14061,
      "alt": 0,
      "spd": 12,
      "ts": 1764771665,
      "hd": 306
    },
    {
      "lat": 4.702068,
      "lng": -74.140388,
      "alt": 0,
      "spd": 12,
      "ts": 1764771660,
      "hd": 309
    },
    {
      "lat": 4.701869,
      "lng": -74.140144,
      "alt": 0,
      "spd": 11,
      "ts": 1764771655,
      "hd": 309
    },
    {
      "lat": 4.70166,
      "lng": -74.1399,
      "alt": 0,
      "spd": 10,
      "ts": 1764771648,
      "hd": 326
    },
    {
      "lat": 4.701427,
      "lng": -74.139778,
      "alt": 0,
      "spd": 9,
      "ts": 1764771642,
      "hd": 5
    },
    {
      "lat": 4.701176,
      "lng": -74.139839,
      "alt": 0,
      "spd": 9,
      "ts": 1764771636,
      "hd": 33
    },
    {
      "lat": 4.700958,
      "lng": -74.139992,
      "alt": 0,
      "spd": 8,
      "ts": 1764771629,
      "hd": 36
    },
    {
      "lat": 4.700717,
      "lng": -74.140167,
      "alt": 0,
      "spd": 7,
      "ts": 1764771621,
      "hd": 30
    },
    {
      "lat": 4.700484,
      "lng": -74.140274,
      "alt": 0,
      "spd": 6,
      "ts": 1764771613,
      "hd": 357
    },
    {
      "lat": 4.700283,
      "lng": -74.140259,
      "alt": 0,
      "spd": 5,
      "ts": 1764771606,
      "hd": 331
    },
    {
      "lat": 4.700042,
      "lng": -74.140076,
      "alt": 0,
      "spd": 3,
      "ts": 1764771591,
      "hd": 306
    },
    {
      "lat": 4.699871,
      "lng": -74.139847,
      "alt": 0,
      "spd": 3,
      "ts": 1764771191,
      "hd": 306
    },
    {
      "lat": 4.699711,
      "lng": -74.139641,
      "alt": 0,
      "spd": 3,
      "ts": 1764771144,
      "hd": 303
    },
    {
      "lat": 4.699611,
      "lng": -74.139862,
      "alt": 0,
      "spd": 3,
      "ts": 1764771124,
      "hd": 233
    },
    {
      "lat": 4.69939,
      "lng": -74.139992,
      "alt": 0,
      "spd": 3,
      "ts": 1764771106,
      "hd": 208
    },
    {
      "lat": 4.699181,
      "lng": -74.140099,
      "alt": 0,
      "spd": 3,
      "ts": 1764771092,
      "hd": 208
    },
    {
      "lat": 4.698971,
      "lng": -74.140221,
      "alt": 0,
      "spd": 0,
      "ts": 1764770865,
      "hd": 205
    }
  ],
  "firstTimestamp": 1764770865,
  "s": "xcWVjfBfzz1Hm_K38kHo4D9jlDhZoTofnV-NRyBdyKicjfkQpF5mZ1CACAPDu6Ev"
})";

#endif // MEMORY_H