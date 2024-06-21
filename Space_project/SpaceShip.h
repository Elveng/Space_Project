#pragma once
#include <iostream>
#include <string.h>
#include "Planet.h"

class Spaceship {
private:
    string name;
    double fuel;
    Planet* currentLocation;

public:
    Spaceship(string name, double fuel, Planet* currentloc = nullptr);
    string getName();
    double getFuel();
    Planet* getCurrentLocation();
    void travel(Planet& destination, double fuelPerDistance);
    void displayInfo();
};
