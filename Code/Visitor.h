#ifndef VISITOR_H
#define VISITOR_H

class Visitor {


public:
	virtual void visitCitizens(Population* ele) = 0;

	virtual void visitTransport(Vehicle* ele) = 0;

	virtual void visitBuilding(Section* ele) = 0;
};

#endif
