#pragma once
#include <iostream>
#include <string.h>
using namespace std;;

class Planet {
private:
    string name;
    double distanceFromSun;
    double diameter;

public:
    Planet(string name = "Unknown", double distance = 0.0, double diameter = 0.0);
    string getName();
    double getDistanceFromSun();
    double getDiameter();
    double distanceTo(Planet& destination);
};

