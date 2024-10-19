#ifndef HAPPYOBSERVER_H
#define HAPPYOBSERVER_H

#include "Observer.h"
#include "Citizen.h"

class HappyObserver : public Observer {

public:
	Citizen* subject;

	void update();
};

#endif
