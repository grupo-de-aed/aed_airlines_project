//
// Created by ritac on 28/12/2022.
//

#include <cmath>
#include<iomanip>
#include <algorithm>
#include "Menu.h"
#include "Airport.cpp"

//Main menu principal function
Menu::Menu() {
    cout << "\n\n╒═════════════════════════════════════════════╕\n"
            "│                500 thousand                 │\n"
            "╘═════════════════════════════════════════════╛\n";
    cout << "Have a safe flight!" << ".\n";
    cout << "Select the number of the topic...\n"
            "[1]> Find your perfect flight!\n"
            "[2]> Find what your airport has to offer!\n"

            "\n[0]> Quit\n";

    //Select a topic in main menu
    int topic_in_main_menu;
    string striTemp;
    while (true) {
        //Prevent errors in the program
        topic_in_main_menu = 0;
        striTemp = "";
        cin >> striTemp;
        try {
            topic_in_main_menu = stoi(striTemp);
        }
        catch (...) {
            topic_in_main_menu = 100;
        }


        //Topics
        if (topic_in_main_menu == 1) {


        }
        else if (topic_in_main_menu == 2) {
            Airport::getAllAirports();
        }


        //Stop the program
        else if (topic_in_main_menu == 0) break;
        //Invalid topic
        else cout << "Error: Choose one number of the Main Menu.\n";
    }
}

//Return to main menu function
void Menu::goBack() {
    cout << "\n[1]> Back to Main Menu.\n"
            "[0]> Quit.\n";

    //Select a topic in back menu
    int back;
    string striBack;
    while (true) {
        back = 0;
        striBack = "";
        cin >> striBack;
        try {
            back = stoi(striBack);
        }
        catch (...) {
            back = 10;
        }
        if (back == 1) Menu();
        else if (back == 0) break;
        cout << "> Invalid choice.\n"
                "[1]> Back to Main Menu.\n"
                "[0]> Quit.\n";
    }
}

//Print of the errors
void Menu::Error(const std::string &erro) {
            cout << "Error: " << erro << endl;
}

double haversine(double lat1, double lon1, double lat2, double lon2)
{
    // distance between latitudes
    // and longitudes
    double dLat = (lat2 - lat1) *
                  M_PI / 180.0;
    double dLon = (lon2 - lon1) *
                  M_PI / 180.0;

    // convert to radians
    lat1 = (lat1) * M_PI / 180.0;
    lat2 = (lat2) * M_PI / 180.0;

    // apply formulae
    double a = pow(sin(dLat / 2), 2) +
               pow(sin(dLon / 2), 2) *
               cos(lat1) * cos(lat2);
    double rad = 6371;
    double c = 2 * asin(sqrt(a));
    return rad * c;
}