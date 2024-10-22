#include "Block.h"

void Block::addSection(Section* section) {
	children.push_back(section);
}

void Block::removeSection(Section* section){
	int idx = 0;
	for (Section* sec : children)
	{
		if(sec == section)
		{
			children.erase(children.begin() + idx);
		}
	}
}

Section* Block::getSection(int idx){
	if (idx >= 0 && idx < children.size()) 
	{
		return children[idx];
	}
	else
	{
		return nullptr;
	}
}

void Block::acceptVisitor(Visitor* v) {
	
}
