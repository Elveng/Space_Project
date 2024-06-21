#include "Planet.h"

using namespace std;;

Planet::Planet(std::string name, double distance, double dm)
	: name(name), distanceFromSun(distance), diameter(dm) {}

string Planet::getName()
{
	return name;
}

double Planet::getDistanceFromSun()
{
	return distanceFromSun;
}

double Planet::getDiameter()
{
	return diameter;
}

double Planet::distanceTo(Planet& destination)
{
	double distance = distanceFromSun - destination.distanceFromSun;
	if (distance < 0) {
		distance = (-1) * distance;
	}
	return distance;
}
