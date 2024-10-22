#ifndef YELLOW_H
#define YELLOW_H

#include "Severity.h"
#include "Green.h"
#include "Red.h"

class Yellow : public Severity {
    public:
        string getSeverity();
        Severity *handle(bool increment) override;

};

#endif
