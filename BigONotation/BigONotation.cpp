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


int main()
{
	return 0;
}

