#include "IncreaseTaxes.h"

string IncreaseTaxes::implementPolicy(string stateType, string stateColour) {
    if(stateType == "Budget" && stateColour == "Red"){
        cout << "New policy implemented. Taxes will be raised by 20%" << endl;
        return "IncreaseTaxes";
    }
    return "No new policy changes";
}
