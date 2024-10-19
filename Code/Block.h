#ifndef BLOCK_H
#define BLOCK_H

class Block {


public:
	void addSection(Block otherBlock);

	void removeSection(Block otherBlock);

	Block* getBlock(int idx);

	void acceptVisitor(Visitor* v);
};

#endif
