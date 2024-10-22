#include "Residential.h"

void Residential::acceptVisitor(Visitor* v) {
	v->visitBuilding(this);
}
