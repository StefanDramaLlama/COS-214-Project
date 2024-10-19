#ifndef COMMERCIAL_H
#define COMMERCIAL_H

class Commercial {


public:
	virtual float taxBuilding() = 0;

	void acceptVisitor(Visitor* v);
};

#endif
