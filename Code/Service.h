#ifndef SERVICE_H
#define SERVICE_H

#include "Visitor.h"

class Service {


public:
	void acceptVisitor(Visitor* v);
};

#endif
