#ifndef MEMORY_H
#define MEMORY_H

const char* const JSON_FLIGHT_DATA = R"(
{
  "data": [
    {
      "callsign": "RYR68DK",
      "clicks": 234,
      "flight": "FR9949",
      "flight_id": "3d56d8f9",
      "from_city": "Krakow",
      "from_iata": "KRK",
      "model": "B738",
      "squawk": null,
      "to_city": "Toulouse",
      "to_iata": "TLS",
      "type": "Boeing 737-8AS"
    },
    {
      "callsign": "THA320",
      "clicks": 233,
      "flight": "TG320",
      "flight_id": "3d56e33b",
      "from_city": "Kathmandu",
      "from_iata": "KTM",
      "model": "A333",
      "squawk": "2510",
      "to_city": "Bangkok",
      "to_iata": "BKK",
      "type": "Airbus A330-343"
    },
    {
      "callsign": "HLF9837",
      "clicks": 231,
      "flight": "I99837",
      "flight_id": "3d559966",
      "from_city": "Chengdu",
      "from_iata": "CTU",
      "model": "B77L",
      "squawk": "5235",
      "to_city": "Prague",
      "to_iata": "PRG",
      "type": "Boeing 777-F1H"
    }
  ],
  "update_time": 1764667600,
  "version": "0.4.0"
}
)";

#endif // MEMORY_H