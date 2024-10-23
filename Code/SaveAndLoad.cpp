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
	save->setSave(currentState);

	return save;
}

void SaveAndLoad::SaveSystem(Saves* saves) {
	Save* save = createSave();
	saves->saves.push_back(*save);
}

void SaveAndLoad::LoadSystem(int saveNum, Saves *saves) {
	if (saves->saves.size() <= 0){
		throw "No saves available";
		return;
	}
	
	if (saveNum < 0 || saveNum >= saves->saves.size())
	{
		throw "Invalid save number";
		return;
	}

	Save save = saves->saves[saveNum];
	currentSave = save.getSave();
}

void SaveAndLoad::printCurrentSave()
{
	if (currentSave)
	{
		currentSave->printState();
	}
	else
	{
		cout << "No current save loaded." << endl;
	}
}

SaveAndLoad::SaveAndLoad() {
	currentSave = nullptr;
	dummyInt = 0;
}