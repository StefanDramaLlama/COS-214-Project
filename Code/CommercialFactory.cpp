#include "CommercialFactory.h"

Commercial* CommercialFactory::createShop() {
	return new Shop();
}

Commercial* CommercialFactory::createOffice() {
	return new Office();
}

Commercial* CommercialFactory::createMall() {
	return new Mall();
}
