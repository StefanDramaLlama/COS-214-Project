#include "Industrial.h"

void Industrial::acceptVisitor(Visitor* v) {
	v->visitBuilding(this);
}
