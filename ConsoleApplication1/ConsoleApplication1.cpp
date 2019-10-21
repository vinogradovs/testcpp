// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
void func1(void)
{
	printf("\nIn func1");
}

using namespace std;
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

#define BIT_READ 0x0001 // 00000001
#define BIT_WRITE 0x0010 // 00010000
int MAX_SIZE = 10;

unsigned int mask = BIT_READ & BIT_WRITE; /* intended to use "|" */

// using "&", mask = 00000000
// using "|", mask = 00010001

// determine if user has read and write access
int hasReadWriteAccess(unsigned int userMask) {
// if the userMask has read and write bits set
// then return 1 (true)
if (userMask & mask) {
return 1;
}

// otherwise return 0 (false)
return 0;
}

char * copy_input(char *user_supplied_string){
int i, dst_index;
char *dst_buf = (char*)malloc(4*sizeof(char) * MAX_SIZE);
if ( MAX_SIZE <= strlen(user_supplied_string) ){
printf("%s","user string too long, die evil hacker!");
}
dst_index = 0;
for ( i = 0; i < strlen(user_supplied_string); i++ ){
if( '&' == user_supplied_string[i] ){
dst_buf[dst_index++] = '&';
dst_buf[dst_index++] = 'a';
dst_buf[dst_index++] = 'm';
dst_buf[dst_index++] = 'p';
dst_buf[dst_index++] = ';';
}
else if ('<' == user_supplied_string[i] ){

/* encode to &lt; */ 
}
else dst_buf[dst_index++] = user_supplied_string[i];
}
return dst_buf;
}

int main()
{
	func1();
#pragma deprecated(func1)
	func1();   // C4995
	cout << "Hello, world, from Visual C++!" << endl;
	int arr[] = { 1,2,3,4,5 };
	printf("arr [0] is %d\n", arr[0]);

	// arr[10] is out of bound 
	printf("arr[10] is %d\n", arr[10]);
	char str[20];
strcat(str, "hello world");
printf("%s", str);
	
	
	
	int d = getValueFromArray(arr, 20, 30);
	return 0;
    
}


