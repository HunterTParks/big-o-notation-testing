#include "stdafx.h"
#include "BigONotation.h"

using namespace std;

int main()
{
	BigONotation test(20000);
	test.generateRandomArray();

	test.linearSearchForValue(500);
	return 0;
}