#include "Landmarks.h"

void Landmarks::acceptVisitor(Visitor* v) {
	v->visitBuilding(this);
}
