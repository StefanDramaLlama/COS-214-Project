#ifndef VEHICLE_H
#define VEHICLE_H

class Visitor;
#include <string>

using namespace std;

class Vehicle {

protected:
	int passengerLimit;
	int x;
	int y;
	string vehicleType;

public:
	void acceptVisitor(Visitor* v);
};

#endif