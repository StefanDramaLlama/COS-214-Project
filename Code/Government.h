#ifndef GOVERNMENT_H
#define GOVERNMENT_H

class Government {

private:
	Population* populationState;
	Budget* budgetState;
	Dissatisfaction* disatisfactionState;
	Strategy* strategy;
	Government* uniqueInstanceGov;

public:
	void whatToDo();

	Governmanr* instanceGove();
};

#endif
