#ifndef COMMERCIALFACTORY_H
#define COMMERCIALFACTORY_H

#include "BuildingFactory.h"

class CommercialFactory : public BuildingFactory {


public:
	Commercial* createShop();

	Commercial* createOffice();

	Commercial* createMall();
};

#endif
