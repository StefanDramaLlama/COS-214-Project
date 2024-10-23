#include "Service.h"

float Service::taxBuilding()
{
	return 0.0f;
}

void Service::acceptVisitor(Visitor* v) {
	v->visitBuilding(this);
}
