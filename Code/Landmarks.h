#ifndef LANDMARKS_H
#define LANDMARKS_H

#include "Visitor.h"

class Landmarks {


public:
	virtual float taxBuilding() = 0;

	void acceptVisitor(Visitor* v);
};

#endif
