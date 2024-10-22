#include "ExpandCity.h"

string ExpandCity::implementPolicy(string stateType, string stateColour) {
    if(stateType == "People" && stateColour == "Red"){
        cout << "Apparantly we have a city of rabbits, we are expanding it to make space for all the new babies" << endl;
        return "ExpandCity";
    }

    return "No new policy changes";

}
