#include "ExpandCity.h"

string ExpandCity::implementPolicy(string stateType, string stateColour) {
    if(stateType == "People" && stateColour == "Red"){
        cout << "\033[38;5;48mApparantly we have a city of rabbits, we are expanding it to make space for all the new babies \033[0m" << endl;
        return "ExpandCity";
    }

    return "\033[38;5;210mNo new policy changes\033[0m";

}
