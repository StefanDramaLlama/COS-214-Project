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
	string businessAddress;

public:
    Citizen();
    Citizen(int happy, Residential* acc, string job, float cash, string addr);
    Citizen(const Citizen& other);

    int getHappiness() const;
    void setHappiness(int value);

    Residential* getAccommodation() const;
    void setAccommodation(Residential* acc);

    string getEmployment() const;
    void setEmployment(string job);

    float getMoney() const;
    void setMoney(float cash);

    string getBusinessAddress();
    void setBusinessAddress(string address);

	Citizen* procreate();
};

#endif
