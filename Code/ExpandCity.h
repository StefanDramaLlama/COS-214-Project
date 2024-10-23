#ifndef EXPANDCITY_H
#define EXPANDCITY_H

#include "Strategy.h"

class ExpandCity : public Strategy {

    public:
        string implementPolicy(string stateType, string stateColour) override;

};

#endif
