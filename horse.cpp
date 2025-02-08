#include <iostream>
#include "horse.h"
#include "race.h"
#include <random>

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
	Horse::position = 0;
	Horse::index = 0;
	Horse::trackLength = 15;
}

void Horse::init(int index, int trackLength){
	Horse::position = 0;
	Horse::index = index;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
	int turn = dist(rd);
    Horse::position += turn;
}

void Horse::printLane(){
	for (int position = 0; position < Horse::trackLength; position++) {
        if (Horse::position == position) {
            std::cout << Horse::index;
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

bool Horse::isWinner(){
	if (Horse::position >= Horse::trackLength-1) {
        std::cout << "Horse " << Horse::index << " WINS!!! " << std::endl;
        return true;
	}
	return false;
}