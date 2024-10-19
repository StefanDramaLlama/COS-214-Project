#ifndef SAVEANDLOAD_H
#define SAVEANDLOAD_H

class SaveAndLoad {

private:
	SystemState* currentSave;

public:
	Save* createSave();

	void LoadSystem(Save* save);
};

#endif
