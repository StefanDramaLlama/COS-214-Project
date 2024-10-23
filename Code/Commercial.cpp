#include "Commercial.h"

void Commercial::acceptVisitor(Visitor* v) {
	v->visitBuilding(this);
}
