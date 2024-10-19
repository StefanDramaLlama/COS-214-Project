#ifndef CVISITOR_H
#define CVISITOR_H

class CVisitor : Visitor {


public:
	void visitCitizens(Population* ele);

	void visitTransport(Vehicle* ele);

	void visitBuilding(Section* ele);
};

#endif
