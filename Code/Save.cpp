#include "Save.h"

SystemState* Save::getSave() {
	return systemState;
}

void Save::setSave(SystemState* sState) {
	this->systemState = sState;
}
