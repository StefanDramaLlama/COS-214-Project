#ifndef LANDMARKFACTORY_H
#define LANDMARKFACTORY_H

#include "BuildingFactory.h"

class LandmarkFactory : public BuildingFactory {


public:
	void Park();

	void Museum();
};

#endif
