#ifndef CITYMEDIATOR_H
#define CITYMEDIATOR_H

#include "Mediator.h"
#include "City.h"

class CityMediator : public Mediator {

public:
	City* colleagueList;

	void notify();
};

#endif
