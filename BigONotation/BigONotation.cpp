// BigONotation.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "stdafx.h"

using namespace std;

class BigONotation
{
	public:
		BigONotation();
		~BigONotation();
		void addItemToArray(int);
		void linearSearchForValue(int);
		void generateRandomArray();

	private:
		vector<int> array;
		int arraySize;
		int itemsInArray;
		clock_t start;
		clock_t duration;
};

BigONotation::BigONotation()
{
}

BigONotation::~BigONotation()
{
}

void BigONotation::addItemToArray(int newItem)
{
	array[itemsInArray++] = newItem;
}

void BigONotation::linearSearchForValue(int value)
{
	bool valueInArray = false;
	string indexsWithValue = "";

	start = clock();

	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == value)
		{
			valueInArray = true;
			indexsWithValue += i + " ";
		}
	}

	cout << "Here is the value found: " << valueInArray << endl;
	duration = (clock() - start) / (double) CLOCKS_PER_SEC;

	cout << "Duration: " << duration << endl;
}

void BigONotation::generateRandomArray()
{
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = rand() % 1000 + 1;
	}

	itemsInArray = arraySize - 1;
}

int main()
{
	return 0;
}

