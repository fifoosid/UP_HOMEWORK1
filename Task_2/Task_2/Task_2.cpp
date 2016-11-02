// Task_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
	int integer1, integer2, integer3;
	cin >> integer1 >> integer2 >> integer3;

	if (integer1 == 0 || integer2 == 0 || integer3 == 0)
	{
		cout << "0" << endl;
	}
	else
	{
		if ((integer1 < 0) || (integer2 < 0) || (integer3 < 0) || (integer1 < 0 && integer2 < 0 && integer3 < 0))
		{
			cout << "-" << endl;
		}
		else
		{
			cout << "+" << endl;
		}
	}
    return 0;
}

