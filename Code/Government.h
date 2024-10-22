#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "People.h"
#include "Budget.h"
#include "Disatisfaction.h"
#include "Strategy.h"

#include <iostream>
using namespace std;

class Government {

    private:
        People* peopleState;
        Budget* budgetState;
        Disatisfaction* disatisfactionState;
        Strategy* strategy;
        static Government* uniqueInstanceGov;

    protected:
        Government(){};

    public:
        void whatToDo();

        static Government* onlyInstance();
};

#endif
