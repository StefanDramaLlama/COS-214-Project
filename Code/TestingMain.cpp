#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>

#include "Severity.h"
#include "Green.h"
#include "People.h"
#include "Budget.h"
#include "Disatisfaction.h"
#include "Government.h"

void testingSeverity();
void testingSingletonGove();

int main() {
    testingSeverity();
    testingSingletonGove();
    return 0;
}

void testingSeverity(){

    People people(new Green());
    Budget budget(new Green());
    Disatisfaction dissatisfaction(new Green());

    people.handleSeverity(true);
    budget.handleSeverity(false);
    dissatisfaction.handleSeverity(true);

    people.handleSeverity(false);
    budget.handleSeverity(true);
    dissatisfaction.handleSeverity(false);
    dissatisfaction.handleSeverity(false);
    dissatisfaction.handleSeverity(false);
    dissatisfaction.handleSeverity(true);
    dissatisfaction.handleSeverity(true);

}

void testingSingletonGove(){
    Government* newGovernment = Government::onlyInstance();
    Government* newGovernment2 = Government::onlyInstance();
}

