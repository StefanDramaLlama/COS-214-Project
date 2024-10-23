#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
using namespace std;

class Strategy {
private:

    public:
    virtual string implementPolicy(string stateType, string stateColour);
};

#endif
