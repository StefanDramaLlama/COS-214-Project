#ifndef SAVEANDLOAD_H
#define SAVEANDLOAD_H

#include "SystemState.h"
#include "Save.h"

class SaveAndLoad {

private:
	SystemState* currentSave;

public:
	Save* createSave();

	void LoadSystem(Save* save);
};

#endif
