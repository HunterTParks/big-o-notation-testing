// BigONotation.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include "stdafx.h"

using namespace std;

class MyClass
{
	public:
		MyClass();
		~MyClass();
		void addItemToArray(int);

	private:
		vector<int> array;
		int arraySize;
		int itemsInArray;

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::addItemToArray(int newItem)
{
}


int main()
{
	return 0;
}

