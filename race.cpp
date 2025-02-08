#include "race.h"
#include <iostream>

Race::Race(){
	for (int hn = 0; hn < NUM_HORSES; hn++){
		horses[hn].init(hn, TRACK_LENGTH);
	}
}

void Race::run(){
    bool keepGoing = true;

    while (keepGoing) {
        keepGoing = false;
        for (int hn = 0; hn < NUM_HORSES; hn++) {
            horses[hn].advance();
            horses[hn].printLane();
            if (horses[hn].isWinner()) {
                std::cout << "Horse " << hn << " WINS!!!" << std::endl;
                return;
            }
            keepGoing = true;
        }
        std::cout << "Press Enter to advance the race...";
    	std::cin.ignore();
    }
}