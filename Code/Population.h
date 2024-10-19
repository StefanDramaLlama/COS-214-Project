#ifndef POPULATION_H
#define POPULATION_H

class Population {

private:
	Observer* observerList;
	Citizen* listOfCitizens;

public:
	void attach(Observer obs);

	void detach(Observer obs);

	void notify();

	void allProcreate();

	void acceptVisitor(Visitor* v);
};

#endif
