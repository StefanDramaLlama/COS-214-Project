#include "HappyObserver.h"
#include <iostream>

HappyObserver::HappyObserver(Citizen* subj) : subject(subj) {}

void HappyObserver::update() {
	std::cout << "Observer: Citizen's happiness is now " << subject->getHappiness() << "!" << std::endl;
}


