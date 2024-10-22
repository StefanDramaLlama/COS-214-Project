#include "AddPublicTransport.h"

string AddPublicTransport::implementPolicy(string stateType, string stateColour) {
    if(stateType == "Budget" && stateColour == "Green"){
        cout << "Things have been looking good. We are upgrading the public transport and replacing all the Putco busses" << endl;
        return "AddPublicTransport";
    }
    return "No new policy changes";
}

