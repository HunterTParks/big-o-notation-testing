#include "stdafx.h"
#include "BigONotation.h"

using namespace std;

int main()
{
	BigONotation test(20000);
	test.generateRandomArray();

	BigONotation test2(40000);
	test2.generateRandomArray();

	BigONotation test3(60000);
	test3.generateRandomArray();

	test.linearSearchForValue(500);
	test2.linearSearchForValue(500);
	test3.linearSearchForValue(500);
	return 0;
}