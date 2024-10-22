#include "People.h"

void People::setSeverity(Severity *sev) {
//    delete this->severity;
    this->severity = sev;

}

void People::handleSeverity(bool upOrDown) {

    cout << "People: ";
    Severity* newSev = this->severity->handle(upOrDown);
    this->setSeverity(newSev);

}

People::~People() {

    delete severity;

}

void People::increaseDisatidfaction() {
    // TODO - implement People::increaseDisatidfaction
    throw "Not yet implemented";
}
