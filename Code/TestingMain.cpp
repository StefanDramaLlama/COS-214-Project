#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Block.h"
#include "Visitor.h"
#include "Section.h"
#include "Buildings.h"
#include "Hospital.h"
#include "People.h"
#include "Green.h"
#include "Government.h"
#include "AddPublicTransport.h"
#include "ExpandCity.h"
#include "IncreaseTaxes.h"
#include "IncreaseWages.h"

TEST_CASE("Composite") {
    Section* test = new Block();
    Section* test2 = new Block();

    Section* building1 = new Hospital();

    test->addSection(building1);
    test2->addSection(building1);

    test->addSection(test2);

    CHECK(test->getSection(0) == building1);
    CHECK(test->getSection(1) == test2);

    test->removeSection(test2);

    CHECK(test->getSection(1) == nullptr);
}

TEST_CASE("State"){
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

TEST_CASE("Government Singleton"){

    Government* newGovernment = Government::onlyInstance();
    Government* newGovernment2 = Government::onlyInstance();
    delete newGovernment;

}

TEST_CASE("Strategy"){
    Government* newGovernment = Government::onlyInstance();

    People* people = new People(new Green());
    Budget* budget = new Budget(new Green());
    Disatisfaction* dissatisfaction = new Disatisfaction(new Green());

    newGovernment->setPeopleState(people);
    newGovernment->setBudgetState(budget);
    newGovernment->setMoraleState(dissatisfaction);

    AddPublicTransport* newStrategy = new AddPublicTransport();
    newGovernment->setStrategy(newStrategy);
    CHECK("AddPublicTransport" == newGovernment->implementPolicyBudget());

    newGovernment->setBudgetState(new Budget(new Red()));
    IncreaseTaxes* increasingTaxes = new IncreaseTaxes();
    newGovernment->setStrategy(increasingTaxes);
    CHECK("IncreaseTaxes" == newGovernment->implementPolicyBudget());

    newGovernment->setMoraleState(new Disatisfaction(new Red()));

    IncreaseWages* increasingWages = new IncreaseWages();
    newGovernment->setStrategy(increasingWages);
    CHECK("IncreaseWages" == newGovernment->implementPolicyMorale());

    ExpandCity* expandingCity = new ExpandCity();

    newGovernment->setStrategy(expandingCity);
    cout << newGovernment->implementPolicyPeople() << endl;
    CHECK("\033[38;5;210mNo new policy changes\033[0m" == newGovernment->implementPolicyPeople());


    newGovernment->setPeopleState(new People(new Red()));
    newGovernment->setStrategy(expandingCity);
    CHECK("ExpandCity" == newGovernment->implementPolicyPeople());
}

