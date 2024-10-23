#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "IndustrialFactory.h"
#include "LandmarkFactory.h"
#include "ResidentialFactory.h"
#include "CommercialFactory.h"
#include "ServiceFactory.h"

TEST_CASE("Factory method") {
    IndustrialFactory i = IndustrialFactory();
    Industrial* p = i.createForestry();
    p = i.createSteelFactory();
    p = i.createForestry();
    p = i.createConcreteFactory();

    LandmarkFactory l = LandmarkFactory();
    Landmarks* park = l.createPark();
    park = l.createMuseum();

    ServiceFactory s = ServiceFactory();

    Service* serv = s.createAirport();
    serv = s.createHospital();
    serv = s.createPoliceStation();
    serv = s.createSchool();
    serv = s.createTownHall();
    serv = s.createTrainStation();
    
    Utilities* utls = s.createPowerPlant();
    utls = s.createWastePlant();
    utls = s.createWaterPlant();

    ResidentialFactory r = ResidentialFactory();
    Residential* house = r.createComplex();
    house = r.createApartment();
    house = r.createHouse();

    CommercialFactory f = CommercialFactory();
    Commercial* business = f.createMall();
    business = f.createShop();
    business = f.createOffice();
}