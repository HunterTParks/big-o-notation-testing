// BigONotation.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <ctime>
#include "stdafx.h"

using namespace std;

class MyClass
{
	public:
		MyClass();
		~MyClass();
		void addItemToArray(int);
		void linearSearchForValue(int);

	private:
		vector<int> array;
		int arraySize;
		int itemsInArray;
		clock_t start;
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::addItemToArray(int newItem)
{
	array[itemsInArray++] = newItem;
}

void MyClass::linearSearchForValue(int value) {
	
}

int main()
{
	return 0;
}

