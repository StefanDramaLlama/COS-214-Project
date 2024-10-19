#ifndef SECTION_H
#define SECTION_H

class Block;
#include "Visitor.h"

class Section {

public:
	virtual void addSection(Block* otherBlock) = 0;

	virtual void removeSection(Block* otherBlock) = 0;

	virtual Block* getBlock(int idx) = 0;

	virtual void acceptVisitor(Visitor* v) = 0;
};

#endif
