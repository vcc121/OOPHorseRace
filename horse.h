class Horse {
	private:
		int position;
		int trackLength;
		int id;
	public:
		Horse();
		init(int id, int trackLength);
		void advance();
		void printLane();
		bool isWinner ();
};
