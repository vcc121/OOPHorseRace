#include "race.h"
#include <iostream>

Race::Race(){
	for (int hn = 0; hn < NUM_HORSES; hn++){
		horses[hn].init(hn, TRACK_LENGTH);
	}
}

void Race::run(){
	bool keepGoing = true;
	for (int hn = 0; hn < NUM_HORSES; hn++){
		horses[hn].advance();
		horses[hn].printLane();
		if (horses[hn].isWinner()){
			keepGoing = false;
		}
	}
}

