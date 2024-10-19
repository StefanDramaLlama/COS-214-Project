#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

class BuildingFactory {


public:
	virtual void Hospital() = 0;

	virtual void TownHall() = 0;

	virtual void WaterPlant() = 0;

	virtual void PowerPlant() = 0;

	virtual void WastePlant() = 0;

	virtual void SewageTreatmentPlant() = 0;

	virtual void School() = 0;

	virtual void TrainStation() = 0;

	virtual void Airport() = 0;

	virtual void PoliceStation() = 0;

	virtual void House() = 0;

	virtual void Apartment() = 0;

	virtual void Complex() = 0;

	virtual void Foresty() = 0;

	virtual void SteelFactory() = 0;

	virtual void ConcreteFactory() = 0;

	virtual void Shop() = 0;

	virtual void Office() = 0;

	virtual void Mall() = 0;

	virtual void Park() = 0;

	virtual void Museum() = 0;
};

#endif
