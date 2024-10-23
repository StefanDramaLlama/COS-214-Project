#include "CVisitor.h"

void CVisitor::visitCitizens(Citizen* ele) {
	cout << "Citizen Have been vistesd" << endl;
}

// void CVisitor::visitTransport(Vehicle* ele) {
// 	// TODO - implement CVisitor::visitTransport
// 	throw "Not yet implemented";
// }

void CVisitor::visitBuilding(Section* ele) {
	cout << "Building Have been vistesd" << endl;
}
