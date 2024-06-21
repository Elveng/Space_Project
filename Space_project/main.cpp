#include <iostream>
#include <string.h>
#include "Planet.h"
#include "Spaceship.h"
using namespace std;;

int main() {
    cout << "Lab10(labwork2) project of Tahsin Berk Oztekin - 21070001035 \n\n ";


    Planet planetArray[9] = {
        Planet("Mercury", 5.791e+07, 4879),
        Planet("Venus", 1.082e+08, 12104),
        Planet("Earth", 1.496e+08, 12742),
        Planet("Mars", 2.279e+08, 6779),
        Planet("Jupiter", 7.783e+08, 139822),
        Planet("Saturn", 1.42e+09, 116460),
        Planet("Uranus", 2.87e+09, 50724),
        Planet("Neptune", 4.5e+09, 49244),
        Planet("Pluto", 5.91e+09, 2370)
    };
    
    string name;
    double fuel;
    cout << "Enter the spaceship's name (one word only): ";
    cin >> name;
    cout << "Enter the spaceship's initial fuel (in units): ";
    cin >> fuel;
    cout << "\n";
    Spaceship spaceship(name, fuel, nullptr);

    spaceship.displayInfo();
    int choice;
    cout << "\nList of Planets;\n";
    for (int i = 0; i < 9; i++) {
        cout << i + 1 << ". " << planetArray[i].getName() << " - Distance from Sun: " << planetArray[i].getDistanceFromSun() << " km, Diameter: " << planetArray[i].getDiameter() << " km" << endl;
    }
    cout << "Select the planet number you want to start (1-9) or enter 0 to exit: ";
    cin >> choice;
    cout << "\n";
    spaceship.travel(planetArray[choice - 1], 0);
    spaceship.displayInfo();
    
    do {
        
        cout << "\nList of Planets;\n";
        for (int i = 0; i < 9; i++) {
            cout << i + 1 << ". " << planetArray[i].getName() << " - Distance from Sun: " << planetArray[i].getDistanceFromSun() << " km, Diameter: " << planetArray[i].getDiameter() << " km" << endl;
        }
        

        
        cout << "Select the planet number you want to travel to (1-9) or enter 0 to exit: ";
        cin >> choice;
        cout << "\n";

        if (choice > 0 && choice <= 9) {
          
            double fuelPerDistance = 0.000001;
            spaceship.travel(planetArray[choice - 1], fuelPerDistance);
            spaceship.displayInfo();
            
        }
        else if (choice != 0) {
            cout << "Invalid entry. Please enter a number from 0 to 9." << endl;
        }
    } while (choice != 0);
    cout << "\n You landed and decided to stay.\n";
    return 0;
}