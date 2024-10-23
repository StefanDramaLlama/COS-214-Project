#include "HappyObserver.h"

HappyObserver::HappyObserver(Citizen* subj) : subject(subj) {}

void HappyObserver::update() {
	cout << "Observer: Citizen's happiness is now " << subject->getHappiness() << "!" << endl;
}


