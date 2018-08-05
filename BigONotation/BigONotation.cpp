#include "stdafx.h"
#include "BigONotation.h"
#include <iostream>
#include <string>
#define CLOCKS_PER_MS (CLOCKS_PER_SEC / 1000)

BigONotation::BigONotation(int test)
{
	arraySize = test;
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
	std::string indexsWithValue = "";

	start = clock();

	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == value)
		{
			std::cout << "For Loop: " << array[i] << std::endl;
			valueInArray = true;
			std::string value = std::to_string(i);
			indexsWithValue += value + " ";
		}
	}

	duration = (clock() - start) / (double)CLOCKS_PER_MS;

	std::cout << "linearSearchForValue: Duration = " << duration << std::endl;
	std::cout << "linearSearchForValue: arraySize = " << arraySize << std::endl;
	std::cout << "linearSearchForValue: indexsWithValue = " << indexsWithValue << std::endl;

	system("pause");
}

void BigONotation::generateRandomArray()
{
	for (int i = 0; i < arraySize; i++)
	{
		int testInt = rand() % 1000 + 1;
		array.push_back(testInt);
	}

	itemsInArray = arraySize - 1;
}

