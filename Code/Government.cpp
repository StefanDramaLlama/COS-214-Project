#include "Government.h"

void Government::whatToDo() {
	// TODO - implement Government::whatToDo
	throw "Not yet implemented";
}

Government* Government :: uniqueInstanceGov = nullptr;

Government* Government::onlyInstance() {
    if( uniqueInstanceGov == nullptr){
        uniqueInstanceGov = new Government ();
        cout << "Your city's Government has been created." << endl;
    }
    else{
        cout << "There already exists a government. Check the city books in the library to be educated on the ruling of this city" << endl;
    }

    return uniqueInstanceGov;
}
