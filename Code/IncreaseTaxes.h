#ifndef INCREASETAXES_H
#define INCREASETAXES_H

#include "Strategy.h"

class IncreaseTaxes : public Strategy {

    public:
        string implementPolicy(string stateType, string stateColour) override;

};

#endif
