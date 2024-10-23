#include "IncreaseWages.h"

string IncreaseWages::implementPolicy(string stateType, string stateColour) {
    if((stateType == "Disatisfaction" || stateType == "Dissatisfaction") && stateColour == "Red"){
        cout << "\033[38;5;48mThe economy are in shambles, we are giving you more money \033[0m" << endl;
        return "IncreaseWages";
    }
    return "\033[38;5;210mNo new policy changes\033[0m";
}
