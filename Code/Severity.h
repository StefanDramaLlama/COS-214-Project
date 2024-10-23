#ifndef SEVERITY_H
#define SEVERITY_H

#include "People.h"
#include "Disatisfaction.h"
#include "Budget.h"

#include <iostream>
using namespace std;

class Severity {

    public:
        virtual ~Severity() {}
        virtual string getSeverity() = 0 ;
        virtual Severity* handle(bool increment) = 0;

};

#endif
