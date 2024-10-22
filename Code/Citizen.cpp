#include "Citizen.h"

// Citizen - Default Constructor
Citizen::Citizen(){
    happiness = 100;
	employment = "unemployed";
	money = 0;
    // Residence and business address can be added later, e.g., addResidence and addBusinessAdress
}

// Citizen - Copy Constructor
Citizen::Citizen(const Citizen& other){
    happiness = other.happiness;
	employment = other.employment;
	money = other.getMoney();
}

// Citizen - Get Money
float Citizen::getMoney(){
    return money;
}

// Citizen - Get Business Address
string Citizen::getBusinessAddress(){
    return businessAddress;
}

Citizen* Citizen::procreate() {
	return new Citizen(*this);
}
