#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position;
		int trackLength;
		int index;
	public:
		Horse();
		init(int index, int trackLength);
		void advance();
		void printLane();
		bool isWinner ();
};
