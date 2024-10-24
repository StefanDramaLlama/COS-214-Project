#include "Save.h"

SystemState* Save::getSystemState() {
	return systemState;
}

void Save::setSystemState(SystemState *sState)
{
	this->systemState = sState;
}

