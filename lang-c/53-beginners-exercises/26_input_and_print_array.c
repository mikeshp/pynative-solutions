/* PYnative.com C Exercise Solutions
 * 
 * Exercise 26: Input And Print Array 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

#define SIZE 5

int main()
{
	//const int SIZE = 5;
	int array[SIZE], i;
	
	printf("Give me 5 numbers: \n");
	
	for (i = 0; i < SIZE; i++) scanf(" %d", &array[i]);
	
	for (i = 0; i < SIZE; i++)
		printf("number #%d is %d\n", i + 1, array[i]);
	
	
	return 0;
}
