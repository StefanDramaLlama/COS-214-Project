#include "IncreaseTaxes.h"

string IncreaseTaxes::implementPolicy(string stateType, string stateColour) {
    if(stateType == "Budget" && stateColour == "Red"){
        cout << "\033[38;5;48mNew policy implemented. Taxes will be raised by 20% \033[0m" << endl;
        return "IncreaseTaxes";
    }
    return "\033[38;5;210mNo new policy changes\033[0m";
}
