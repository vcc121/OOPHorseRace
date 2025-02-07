#include <iostream>
#include "horse.h"
#include <random>

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
	Horse::position = 0;
	Horse::index = 0;
	Horse::trackLength = 15;
}

void Horse::init(int index, int trackLength){

