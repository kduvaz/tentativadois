// bucky10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void printCrap(int x);

int main()
{
	printCrap(20);

	system("pause");
	return 0;
}

void printCrap(int x)
{
	cout << "buckys favorite number is " << x << endl;
}
