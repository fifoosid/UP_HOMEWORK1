// Task_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
	int integer1, integer2;
	cin >> integer1 >> integer2;

	cout << (((integer1 + integer2) % 2 == 0) ? ((integer1 + integer2) * 2) : ((integer1 + integer2) / 2)) << endl;
    return 0;
}

