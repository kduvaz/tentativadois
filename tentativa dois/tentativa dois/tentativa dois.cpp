// bucky13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class BuckyClass {
public:
	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
private:
	string name;
};

int main()
{
	BuckyClass bo;
	bo.setName("Sir Bucky Wallace");
	cout << bo.getName();

	system("PAUSE");
	return 0;
}