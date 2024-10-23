#ifndef CITY_H
#define CITY_H

class City {

private:
	static City* uniqueInstanceCity;

public:
	static City* instanceCity();
};

#endif
