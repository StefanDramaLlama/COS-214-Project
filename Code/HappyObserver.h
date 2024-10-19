#ifndef HAPPYOBSERVER_H
#define HAPPYOBSERVER_H

class HappyObserver : Observer {

public:
	Citizen* subject;

	void update();
};

#endif
