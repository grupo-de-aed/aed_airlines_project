//
// Created by ritac on 28/12/2022.
//

#ifndef TRABALHOAED2_MENU_H
#define TRABALHOAED2_MENU_H


#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <unordered_set>
#include "Airport.h"

using namespace std;

class Menu {
private:
    unordered_set<Airport, AirportHash> nodes; // The list of nodes being represented
public:
    Menu();
    static void Error(const string &s);
    void goBack();
    double haversine(double lat1, double lon1, double lat2, double lon2);
};


#endif //TRABALHOAED2_MENU_H
