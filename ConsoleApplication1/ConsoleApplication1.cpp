// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello, world, from Visual C++!" << endl;
	int arr[] = { 1,2,3,4,5 };
	printf("arr [0] is %d\n", arr[0]);

	// arr[10] is out of bound 
	printf("arr[10] is %d\n", arr[10]);
	
	return 0;
	
	
    
}

int getValueFromArray(int *array, int len, int index) {

	int value;

	// check that the array index is less than the maximum 

	// length of the array 
	if (index < len) {

		// get the value at the specified index of the array 
		value = array[index];
	}
	// if array index is invalid then output error message 

	// and return value indicating error 
	else {
		printf("Value is: %d\n", array[index]);
		value = -1;
	}

	return value;
}
