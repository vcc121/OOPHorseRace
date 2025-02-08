#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS
#include horse.h

const int TRACK_LENGTH = 15;
const int NUM_HORSES = 5;  

class Race {
	private:
		Horse horses[NUM_HORSES];
	public:
		Race();
		void run();
};

#endif