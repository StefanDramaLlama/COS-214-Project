#include "AddPublicTransport.h"

string AddPublicTransport::implementPolicy(string stateType, string stateColour) {
    if(stateType == "Budget" && stateColour == "Green"){
        cout << "\033[38;5;48mThings have been looking good. We are upgrading the public transport and replacing all the Putco busses \033[0m" << endl;
        return "AddPublicTransport";
    }
    return "\033[38;5;210mNo new policy changes\033[0m";
}

