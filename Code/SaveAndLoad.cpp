#include "SaveAndLoad.h"

int SaveAndLoad::dummyInt = 0;

Save* SaveAndLoad::createSave() {
	//create memento
		//memento is Save with SystemState in it.
	SystemState* currentState = new SystemState();

	//FOR TESTING
	currentState->dummyInt = dummyInt;
	currentState->dummyString = "Testing_" + to_string(dummyInt);
	dummyInt++;

	Save* save = new Save();
	save->setSystemState(currentState);

	return save;
}

void SaveAndLoad::saveSystem(Saves* saves) {
	Save* save = createSave();
	saves->storeSave(save);
}

void SaveAndLoad::loadSystem(int saveNum, Saves *saves) {
	Save* save = saves->getSave(saveNum);
	currentSave = save->getSystemState();
}

SystemState* SaveAndLoad::getCurrentSystemState() {
	return currentSave;
}

void SaveAndLoad::printCurrentSave()
{
	if (currentSave) {
		currentSave->printState();
	}
	else {
		cout << "No current save loaded." << endl;
	}
}

SaveAndLoad::SaveAndLoad() {
	currentSave = nullptr;
	dummyInt = 0;
}