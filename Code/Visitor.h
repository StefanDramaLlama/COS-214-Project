#ifndef VISITOR_H
#define VISITOR_H

class Citizen;
#include "Vehicle.h"
class Section;
class Visitor {


public:
	virtual void visitCitizens(Citizen* ele) = 0;

	//virtual void visitTransport(Vehicle* ele) = 0;

	virtual void visitBuilding(Section* ele) = 0;
};

#endif
