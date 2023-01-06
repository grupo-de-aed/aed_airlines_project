//
// Created by ritac on 28/12/2022.
//

#ifndef TRABALHOAED2_AIRPORT_H
#define TRABALHOAED2_AIRPORT_H

#include <string>

using namespace std;

class Airport {
public:
    //constructors
    Airport();
    Airport(string code, string name, string city, string country, double latitude, double longitude );
    struct coordinates{
        float latitude;
        float longitude;
    };

    //getters
    string getCode() const;
    string getName() const;
    string getCity() const;
    string getCountry() const;
    coordinates getCoordinates();

    //member functions
    static void getAllAirports();

    // Add edge from source to destination with a certain weight
    void addAirport(string code, string name, string city, string country, string latitude, string longitude );
    //não sei se precisamos desta função


private:
    string code_;
    string name_;
    string city_;
    string country_;
    coordinates coord_;
};

struct AirportHash {
    size_t operator()(const Airport& airport) {
        size_t hash = std::hash<string>()(airport.getCode());
        return hash;
    }
};


#endif //TRABALHOAED2_AIRPORT_H
