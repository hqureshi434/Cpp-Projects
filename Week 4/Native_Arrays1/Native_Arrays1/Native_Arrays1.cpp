// Native_Arrays1.cpp : Defines the entry point for the console application.
/*
_______________________________________________________
            W O R K I N G   W I T H   A R R A Y S   P A R T  1
                                       Ron Kessler
                                 Created 1/7/2017

                                Native C++ Version

This project demonstrates the use of a single-dimensional array.
Arrays allow us to store related pieces of data in an organized and
efficient manner.

Think of an array as a varaible with a single name that can store mulitple
values. Each value is indexed by a number starting with zero(0). An array
is like having a bunch of shoe boxes lined up with a separate value stored
in each box. The values in each box are called elements.

Working with an array is very similar to working with items in a Listbox.

You define an array by doing two things (beside the name): the type of data
to store and how many values you need to store.

To store 10 integers you do:

int myArray[10];		Notice we use square brackets here

Now you have enough memory to store 10 values. To get the value
of any particular element, just type in:

int thisValue = myArray[4];		//this grabs the 5th element's value (remember 0-9)!

int firstValue = myArray[0];	//grab the first value, and so on.

To assign a value:
myArray[6] = 203;		//just like assigning to a variable


Run using CTL-F5

*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



int main()
{
	cout << "Working With Arrays Part 1\n\n";

	//---STEP 1: Create an array to hold Ages of people or dogs or something
	int ages [5];

	//---STEP 2: Assign initial values (the hard way)
	ages [0] = 24;
	ages [1] = 18;
	ages [2] = 43;
	ages [3] = 29;
	ages [4] = 30;

	//---STEP 2: Assign values the easy way
	int dogAges [5] = { 4, 6, 5, 12, 7 };
	//      element     0  1  2  3  4	         With 5 elements highest index = 4. Range = 0-4               

	// assign 4th dogs age to a new variable
	int blackDogAge = dogAges [3];		//remember we start at 0


	//---STEP 3: get values from user and store in an array
	int someNumbers [5];
	int sum = 0;

	//---user enters 5 numbers and we add them on the fly. Loops and arrays work great together
	cout << "Please enter 5 numbers : \n\n";
	    for (int x = 0; x < 5; x++)
		{
			cin >> someNumbers [x];
			sum += someNumbers [x];
		}

	//---STEP 4: Display result
	cout << "The sum of your numbers = " << sum << "\n";

	return 0;
}

