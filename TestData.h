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

#endif // MEMORY_H