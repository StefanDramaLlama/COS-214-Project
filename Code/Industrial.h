#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H

class Industrial : Buildings {


public:
	virtual float taxBuilding() = 0;

	void acceptVisitor(Visitor* v);
};

#endif
