#include "Population.h"
#include <iostream>

// Population - Default constructor
Population::Population(){
    for (int i = 0; i < maxObservers; ++i){
        observerList[i] = NULL;
    }
    
}

// Add observer
void Population::attach(Observer* obs) {
    if (observerCount < maxObservers) {
        observerList[observerCount++] = obs;
    } else {
        std::cout << "Observer list is full." << std::endl;
    }
}

// Remove observer
void Population::detach(Observer* obs) {
    for (int i = 0; i < observerCount; ++i) {
        if (observerList[i] == obs) {
            for (int j = i; j < observerCount - 1; ++j) {
                observerList[j] = observerList[j + 1];
            }
            observerList[--observerCount] = NULL;
            break;
        }
    }
}

void Population::notify() {
	for (int i = 0; i < observerCount; ++i) {
        if (observerList[i] != NULL) {
            observerList[i]->update();
        }
    }
}

// Add a new citizen
void Population::addCitizen(Citizen* citizen) {
    listOfCitizens.push_back(citizen);
}

void Population::allProcreate() {
    std::cout << "All Citizens have procreated." << std::endl;
    // vector<Citizen*> newCitizens;
	// for (int i = 0; i < listOfCitizens.size(); ++i) {
    //     Citizen* newCitizen = listOfCitizens[i]->procreate();
    //     newCitizens.push_back(newCitizen);                                  // Add the new citizen
    // }
    // listOfCitizens.insert(listOfCitizens.end(), newCitizens.begin(), newCitizens.end());
}

void Population::acceptVisitor(Visitor* v) {
	for (Citizen* cit : listOfCitizens){
		v->visitCitizens(cit);
	}
	
}
