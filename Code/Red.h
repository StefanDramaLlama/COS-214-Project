#ifndef RED_H
#define RED_H

#include "Severity.h"
#include "Yellow.h"

class Red : public Severity {
    public:
        string getSeverity() override;
        Severity *handle(bool increment) override;
};

#endif
