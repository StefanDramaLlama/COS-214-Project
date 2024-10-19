#ifndef CITIZEN_H
#define CITIZEN_H

class Population;

class Citizen : Population {

protected:
	int happiness;
	Residential accommodation;
	string employment;
private:
	float money;
	string businessAdress;

public:
	Citizen* procreate();
};

#endif
