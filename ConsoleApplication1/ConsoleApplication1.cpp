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
    return 0;
}

