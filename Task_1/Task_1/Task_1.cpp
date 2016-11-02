// Task_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int number1, number2, number3, number4, number5;
	cin >> number1 >> number2 >> number3 >> number4 >> number5;

	if (number1 >= number2&&number1 >= number3&&number1 >= number4&&number1 >= number5)
	{
		cout << number1 << endl;
	}
	else
	{
		if (number2 >= number1&&number2 >= number3&&number2 >= number4&&number2 >= number5)
		{
			cout << number2 << endl;
		}
		else
		{
			if (number3 >= number1&&number3 >= number2&&number3 >= number4&&number3 >= number5)
			{
				cout << number3 << endl;
			}
			else
			{
				if (number4 >= number1&&number4 >= number2&&number4 >= number3&&number4 >= number5)
				{
					cout << number4 << endl;
				}
				else
				{
					if (number5 >= number1&&number5 >= number2&&number5 >= number3&&number5 >= number4)
					{
						cout << number5 << endl;
					}
				}
			}
		}
	}
    return 0;
}

