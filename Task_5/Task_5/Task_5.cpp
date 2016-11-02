// Task_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
	int integer;
	cin >> integer;

	switch (integer)
	{
	case 1:
	case 2:
	case 3:
		cout << integer * 10 << endl;
		break;

	case 4:
	case 5:
	case 6:
		cout << integer * 100 << endl;
		break;

	case 7:
	case 8:
	case 9:
		cout << integer * 1000 << endl;
		break;

	default: 
		cout << "Invalid input" << endl;

	}
    return 0;
}

