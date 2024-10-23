#ifndef SAVES_H
#define SAVES_H

#include <vector>
#include "iostream"
#include "Save.h"

using namespace std;

class Saves {
friend class SaveAndLoad;    
    //attributes
    private:
        vector <Save> saves;

    public:
        // FOR TESTING
        void printAllSaves()
        {
            for (size_t i = 0; i < saves.size(); ++i)
            {
                cout << "Save " << i << ": ";
                saves[i].getSave()->printState();
            }
        }
};

#endif


/*
    Visual Paradigm changes:
    Vector of Save objects
*/