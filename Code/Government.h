#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "People.h"
#include "Budget.h"
#include "Disatisfaction.h"
#include "Strategy.h"

class Government {

private:
	People* peopleState;
	Budget* budgetState;
	Disatisfaction* disatisfactionState;
	Strategy* strategy;
	Government* uniqueInstanceGov;

public:
	void whatToDo();

	Government* instanceGove();
};

#endif
