// Arrays_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numberStored [5];
	int sum = {};

	cout << "Welcome to my arrays example program\n\n";

	cout << "Please enter five numbers in any order: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> numberStored[i];
		sum += numberStored[i];;
	}

	cout << "The sum of your numbers is " << sum << "\n\n";

    return 0;
}

