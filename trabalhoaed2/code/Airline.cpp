//
// Created by ritac on 29/12/2022.
//

#include <sstream>
#include "Airline.h"
#include "Airport.h"

Airline::Airline(){

};

void Airline::getAllAirlines(){
    string code;
    string name;
    string callsign;
    string country;


    ifstream airlinesDB;
    airlinesDB.open("../dataset/airlines.csv");

    for (string stri; getline(airlinesDB, stri);) {
        stringstream in(stri);
        string temp;

    getline(in, temp, ',');
    if (temp == "Code")
    continue;
    code = temp;
    getline(in, temp, ',');
    name = temp;
    getline(in, temp, ',');
    callsign = temp;
    getline(in, temp, ',');
    country = temp;
    getline(in, temp, '\r');

    Airline newAirline;
    newAirline = Airline(code, name, callsign, country);
cout << code+ " " + name + " " + callsign + " " + country + "\n" ;
}
    airlinesDB.close();

};