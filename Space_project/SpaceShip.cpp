#include "SpaceShip.h"

using namespace std;

Spaceship::Spaceship(string name, double fuel, Planet* currentloc) 
    : name(name), fuel(fuel), currentLocation(nullptr){}

string Spaceship::getName()
{
	return name;
}

double Spaceship::getFuel()
{
	return fuel;
}

Planet* Spaceship::getCurrentLocation()
{
	return currentLocation;
}

void Spaceship::travel(Planet &destination, double fuelPerDistance)
{   
    if (currentLocation != nullptr) {
        double distance = currentLocation->distanceTo(destination);
        double fuelneed = distance * fuelPerDistance;

        if (fuel >= fuelneed) {
            fuel -= fuelneed;
            currentLocation = &destination;
            cout << "Succesfully traveled to " << currentLocation->getName() << endl;
        }
        else {
            cout << "There is not enough fuel to go to " << destination.getName() << endl;
            cout << "Pick a closer planet or exit from your spaceship!" << endl;
        }
    }
    else{
        currentLocation = &destination;
        cout << "Starting at " << destination.getName() << endl;
    }
}

void Spaceship::displayInfo()
{
    cout << "Name: " << name << endl;
    cout << "Current Fuel: " << fuel << endl;
    if (currentLocation != nullptr) {
        cout << "Current location: " << currentLocation->getName() << endl;
    }
    else {
        cout << "Current location: Unknown" << endl;
    }
}
