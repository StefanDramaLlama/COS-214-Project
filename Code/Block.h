#ifndef BLOCK_H
#define BLOCK_H

#include "Visitor.h"
#include "Section.h"
#include <vector>

class Block : public Section {

private:
    vector<Section*> children;

public:
	void addSection(Section* section);

	void removeSection(Section* section);

	Section* getSection(int idx);

	void acceptVisitor(Visitor* v);
};

#endif
