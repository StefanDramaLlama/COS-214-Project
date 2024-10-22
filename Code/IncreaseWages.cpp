#include "IncreaseWages.h"

string IncreaseWages::implementPolicy(string stateType, string stateColour) {
    if((stateType == "Disatisfaction" || stateType == "Dissatisfaction") && stateColour == "Red"){
        cout << "The economy are in shambles, we are giving you more money" << endl;
        return "IncreaseWages";
    }
    return "No new policy changes";
}
