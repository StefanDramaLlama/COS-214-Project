#include "Citizen.h"

// Citizen - Default Constructor
Citizen::Citizen(){
    happiness = 100;
	employment = "unemployed";
	money = 0;
    // Residence and business address can be added later, e.g., addResidence and addBusinessAdress
}

// Citizen - Variable constructor
Citizen::Citizen(int happy, Residential* acc, string job, float cash, string addr)
        : happiness(happy), accommodation(acc), employment(job), money(cash), businessAddress(addr) {}

// Citizen - Copy Constructor
Citizen::Citizen(const Citizen& other){
    happiness = other.happiness;
	employment = other.employment;
	money = other.getMoney();
}

// Citizen - Get Happiness
int Citizen::getHappiness() const {
    return happiness;
}

void Citizen::setHappiness(int value) {
    happiness = value;
}

// Citizen - Get Residence
Residential* Citizen::getAccommodation() const{
    return accommodation;
}

void Citizen::setAccommodation(Residential* acc){
    accommodation = *acc;
}

// Citizen - Get Employment
string Citizen::getEmployment() const{
    return employment;
}

void Citizen::setEmployment(string job){
    employment = job;
}

// Citizen - Get Money
float Citizen::getMoney() const{
    return money;
}

void Citizen::setMoney(float cash){
    money = cash;
}

// Citizen - Get Business Address
string Citizen::getBusinessAddress(){
    return businessAddress;
}

void Citizen::setBusinessAddress(string address){
    businessAddress = address;
}

Citizen* Citizen::procreate() {
	return new Citizen(*this);
}
