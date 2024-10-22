#ifndef DISATISFACTION_H
#define DISATISFACTION_H

#include "Severity.h"

class Severity;

class Disatisfaction {

    private:
        Severity* severity;

    public:
        //State methods
        Disatisfaction(Severity* sev) : severity(sev) {}
        ~Disatisfaction();
        void setSeverity(Severity* sev);
        void handleSeverity(bool upOrDown);


        void lowerTaxes();
};

#endif
