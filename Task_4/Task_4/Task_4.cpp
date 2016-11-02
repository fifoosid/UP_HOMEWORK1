// Task_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
	int number1, number2, result;
	cin >> number1 >> number2;

	if (number1 > number2)
	{
		result = number1;
	}
	else
	{
		result = number2;
	}

	result = (result < 0) ? (result*(-1)) : (result * 1);
	cout << result << endl;
    return 0;
}

