#ifndef DEPARTMENT_H
#define DEPARTMENT_H

class Department {

private:
	Department* successor;

public:
	virtual void handle() = 0;
};

#endif
