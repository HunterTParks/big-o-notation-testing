#pragma once
#include <vector>
#include <ctime>

class BigONotation
{
	public:
		BigONotation(int);
		~BigONotation();
		void addItemToArray(int);
		void linearSearchForValue(int);
		void generateRandomArray();

	private:
		std::vector<int> array;
		int arraySize;
		int itemsInArray;
		clock_t start;
		clock_t duration;
};