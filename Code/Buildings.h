#ifndef BUILDINGS_H
#define BUILDINGS_H

class Buildings {

protected:
	int maxCitizens;
	int currentNumberOfCitizens;
private:
	int* sectionCoordinate;

public:
	int getMaxCitizens();

	virtual float taxBuilding() = 0;
};

#endif
