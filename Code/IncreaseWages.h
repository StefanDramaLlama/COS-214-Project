#ifndef CODE_INCREASEWAGES_H
#define CODE_INCREASEWAGES_H

#include "Strategy.h"

class IncreaseWages : public Strategy {

    public:
        string implementPolicy(string stateType, string stateColour) override;

};


#endif //CODE_INCREASEWAGES_H
