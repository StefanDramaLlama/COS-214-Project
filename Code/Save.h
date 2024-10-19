#ifndef SAVE_H
#define SAVE_H

class Save {

private:
	SystemState systemState;

	SystemState* getSave();

	void setSave(SystemState* sState);
};

#endif
