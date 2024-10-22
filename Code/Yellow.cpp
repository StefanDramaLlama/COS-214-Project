#include "Yellow.h"

string Yellow::getSeverity() {
    return "Yellow";
}

Severity *Yellow::handle(bool increment) {
    if(increment){
        cout << "\033[38;5;76m Things are looking better! State changing to green \033[0m" << endl;
        return new Green();
    }
    else{
        cout << "\033[38;5;9m Oh oh... you need to pay attention! State changing to red \033[0m" << endl;
        return new Red();
    }
}
