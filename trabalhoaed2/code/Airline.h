//
// Created by ritac on 29/12/2022.
//

#ifndef TRABALHOAED2_AIRLINE_H
#define TRABALHOAED2_AIRLINE_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Airline {
public:
    Airline();
    Airline(string code,string name,string callsign, string country);

    static void getAllAirlines();

    //getters
    string getCode() const;
    string getName() const;
    string getCallsign() const;
    string getCountry() const;

private:
    string code_;
    string name_;
    string callsign_;
    string country_;
};


#endif //TRABALHOAED2_AIRLINE_H
