/* 
 * Exercise 34: Fibonacci Series Recursion 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

//#define TERMS 10
#define TERMS 15

void populate_fibonacci(int[],int);

int main()
{
//	int f1 = 0;
//	int f2 = 1;
	int fibonacci[TERMS];

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	//populate the rest of fibonacci
	populate_fibonacci(fibonacci,TERMS);

	//output the series
	printf("Fibonacci Series (%d terms): ", TERMS);
	for (int i = 0; i < TERMS; i++) printf("%d ", fibonacci[i]);
	printf("\n");

	return 0;
}

void populate_fibonacci(int array[], int length)
{
	if (length - 1 > 2) populate_fibonacci(array, length - 1);
	array[length - 1] = array[length - 2] + array[length - 3];
}
