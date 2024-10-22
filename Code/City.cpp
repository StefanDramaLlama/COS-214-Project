#include "City.h"

City* City :: uniqueInstanceCity = nullptr;

City* City::instanceCity() {
	if (uniqueInstanceCity == nullptr)
	{
		uniqueInstanceCity = new City();
	}

	return uniqueInstanceCity;
}
