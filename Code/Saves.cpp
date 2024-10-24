#include "Saves.h"

void Saves::storeSave(Save* save){
    saves.push_back(save);
}

Save* Saves::getSave(int index){
    if (this->saves.size() <= 0) {
        throw "No saves available";
        return nullptr;
    }

    if (index < 0 || index >= this->saves.size()) {
        throw "Invalid save number";
        return nullptr;
    }

    Save* save = this->saves[index];
    return save;
}


void Saves::printAllSaves() {
    for (size_t i = 0; i < saves.size(); ++i)
    {
        cout << "Save " << i << ": ";
        saves[i]->getSystemState()->printState();
    }
}