//
// Created by ritac on 28/12/2022.
//

#include <fstream>
#include <sstream>
#include "Airport.h"
#include <algorithm>
#include <iostream>
#include <string>

Airport::Airport(){

}

Airport::Airport(string code, string name, string city, string country, double latitude, double longitude){
    code_ = code;
    name_ = name;
    city_ = city;
    country_ = country;
    coord_.latitude = latitude;
    coord_.longitude = longitude;

}

//getters
string Airport::getCode() const{
    return code_;
}

string Airport::getName() const{
    return name_;
}

string Airport::getCity() const{
    return city_;
};

string Airport::getCountry() const{
    return country_;
};
Airport::coordinates Airport::getCoordinates(){
    return coord_;
};

//member functions
void Airport::getAllAirports() {
    string code;
    string name;
    string city;
    string country;
    double latitude;
    double longitude;


    ifstream aiportsDB;
    aiportsDB.open("../dataset/airports.csv");


    for (string stri; getline(aiportsDB, stri);) {
        stringstream in(stri);
        string temp;

        getline(in, temp, ',');
        if (temp == "Code")
            continue;
        code = temp;
        getline(in, temp, ',');
        name = temp;
        getline(in, temp, ',');
        city = temp;
        getline(in, temp, ',');
        country = temp;
        getline(in, temp, ',');
        latitude = stod(temp);
        getline(in, temp, ',');
        longitude = stod(temp);
        getline(in, temp, '\r');

        Airport newAirport;
        newAirport = Airport(code, name, city, country, latitude, longitude);
        cout << code+ " " + name + " " + city + " " + country + "\n" ;
    }
    aiportsDB.close();

}