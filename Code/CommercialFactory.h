#ifndef COMMERCIALFACTORY_H
#define COMMERCIALFACTORY_H

#include "BuildingFactory.h"

class CommercialFactory : BuildingFactory {


public:
	void Shop();

	void Office();

	void Mall();
};

#endif
