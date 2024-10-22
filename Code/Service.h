#ifndef SERVICE_H
#define SERVICE_H

#include "Visitor.h"
#include "Buildings.h"

class Service : public Buildings{


public:
	float taxBuilding();
	
	void acceptVisitor(Visitor* v);
};

#endif
