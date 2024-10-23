#ifndef LANDMARKFACTORY_H
#define LANDMARKFACTORY_H

#include "BuildingFactory.h"

class LandmarkFactory : public BuildingFactory {


public:
	Residential* createHouse() override;

	Residential* createApartment() override;

	Residential* createComplex() override;
	Landmarks* createPark() override;

	Landmarks* createMuseum() override;

	Service* createHospital() override;

	Service* createTownHall() override;

	Utilities* createWaterPlant() override;

	Utilities* createPowerPlant() override;

	Utilities* createWastePlant() override;

	Service* createSchool() override;

	Service* createTrainStation() override;

	Service* createAirport() override;

	Service* createPoliceStation() override;

	Industrial* createForestry() override;

	Industrial* createSteelFactory() override;

	Industrial* createConcreteFactory() override;

	Commercial* createShop() override;

	Commercial* createOffice() override;

	Commercial* createMall() override;
};

#endif