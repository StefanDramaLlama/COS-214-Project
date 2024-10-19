#ifndef VEHICLE_H
#define VEHICLE_H

class Visitor;
#include <string>

using namespace std;

class Vehicle {

protected:
	int passengerLimit;
	int cargoSpace;
	string vehicleType;

public:
	void acceptVisitor(Visitor* v);
};

#endif
