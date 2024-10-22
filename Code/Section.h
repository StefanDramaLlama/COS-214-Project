#ifndef SECTION_H
#define SECTION_H

#include "Visitor.h"
class Block;

class Section {

public:
	virtual void addSection(Section* section) = 0;

	virtual void removeSection(Section* section) = 0;

	virtual Section* getSection(int idx) = 0;

	virtual void acceptVisitor(Visitor* v) = 0;
};

#endif
