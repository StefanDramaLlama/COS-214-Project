#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

class Residential {

protected:
	int numberOfHouseholds;

public:
	virtual float taxBuilding() = 0;

	void acceptVisitor(Visitor* v);
};

#endif
