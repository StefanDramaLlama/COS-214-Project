#ifndef SAVE_H
#define SAVE_H

#include "SystemState.h"

class Save {

private:
	SystemState systemState;

	SystemState* getSave();

	void setSave(SystemState* sState);
};

#endif
