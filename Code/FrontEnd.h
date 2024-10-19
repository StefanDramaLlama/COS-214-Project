#ifndef FRONTEND_H
#define FRONTEND_H

#include "Mediator.h"

class FrontEnd {

private:
	Mediator* mediator;

public:
	void change();
};

#endif
