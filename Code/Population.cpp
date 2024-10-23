#include "Population.h"

// Population - Default constructor
Population::Population(){
    observerList = new observer[maxObservers];
    listOfCitizens = new Citizen[maxCitizens];

    for (int i = 0; i < maxObservers; ++i){
        observerList[i] = nullptr;
    }
    
    for (int i = 0; i < maxCitizens; ++i){
        listOfCitizens[i] = nullptr;
    }
}

// Add observer
void Population::attach(Observer* obs) {
    if (observerCount < maxObservers) {
        observerList[observerCount++] = obs;
    } else {
        cout << "Observer list is full." << endl;
    }
}

// Remove observer
void Population::detach(Observer* obs) {
    for (int i = 0; i < observerCount; ++i) {
        if (observerList[i] == obs) {
            for (int j = i; j < observerCount - 1; ++j) {
                observerList[j] = observerList[j + 1];
            }
            observerList[--observerCount] = nullptr;
            break;
        }
    }
}

void Population::notify() {
	for (int i = 0; i < observerCount; ++i) {
        if (observerList[i]) {
            observerList[i]->update();
        }
    }
}

// Add a new citizen
void Population::addCitizen(Citizen* citizen) {
    if (citizenCount < maxCitizens) {
        listOfCitizens[citizenCount++] = citizen;
    } else {
        cout << "Citizen list is full." << endl;
    }
}

void Population::allProcreate() {
	for (int i = 0; i < citizenCount; ++i) {
        if (listOfCitizens[i]) {
            Citizen* newCitizen = listOfCitizens[i]->procreate();
            addCitizen(newCitizen);                                  // Add the new citizen
        }
    }
}

void Population::acceptVisitor(Visitor* v) {
	 cout << "Visitor " << visitor << " has become part of the population." << endl;
}
