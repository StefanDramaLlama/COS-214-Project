#ifndef CODE_ADDPUBLICTRANSPORT_H
#define CODE_ADDPUBLICTRANSPORT_H

#include "Strategy.h"

class AddPublicTransport : public Strategy{
public:
    string implementPolicy(string stateType, string stateColour) override;


};


#endif //CODE_ADDPUBLICTRANSPORT_H
