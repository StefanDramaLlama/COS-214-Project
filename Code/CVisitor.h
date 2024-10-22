#ifndef CVISITOR_H
#define CVISITOR_H

#include "Visitor.h"


class CVisitor : public Visitor {

public:
	void visitCitizens(Citizen* ele);

	void visitTransport(Vehicle* ele);

	void visitBuilding(Section* ele);
};

#endif
