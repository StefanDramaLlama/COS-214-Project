#ifndef SAVE_H
#define SAVE_H

#include "SystemState.h"

class Save {

private:
	SystemState* systemState;

public:
	SystemState *getSystemState();

	void setSystemState(SystemState *sState);
};

#endif


/*
Visual Paradigm Changes:
	+ getSave() : SystemState*
	+ setSave(sState : SystemState*) : void

*/