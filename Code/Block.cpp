#include "Block.h"

void Block::addSection(Section* section) {
	//Come back to to go through the childrent
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
		if (idx == children.size()-1)
		{
			return children[idx]->getSection(idx);
		}
		
		return nullptr;
	}
}

void Block::acceptVisitor(Visitor* v) {
	
}
