#ifndef CITIZEN_H
#define CITIZEN_H

#include "Population.h"
#include "Residential.h"
#include <string>

using namespace std;

class Citizen {

protected:
	int happiness;
	Residential* accommodation;
	string employment;
private:
	float money;
	string businessAdress;

public:
	Citizen* procreate();
};

#endif
