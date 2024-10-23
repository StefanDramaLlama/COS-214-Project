#ifndef GREEN_H
#define GREEN_H

#include "Severity.h"
#include "Yellow.h"

class Green : public Severity {

    public:
        string getSeverity() override;
        Severity *handle(bool increment) override;
};

#endif
