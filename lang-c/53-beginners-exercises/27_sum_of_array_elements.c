/* 
 * Exercise 27: Sum Of Array Elements 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	const int SIZE = 5;
	int array[SIZE], i, sum;
	
	printf("Give me 5 numbers:\n");
	
	for (i = 0; i < SIZE; i++) scanf(" %d", &array[i]);
	
	printf("The numbers are:");
	for (i = 0; i < SIZE; i++) printf(" %d", array[i]);
	
	sum = 0;
	for (i = 0; i < SIZE; i++) sum += array[i];
	
	printf("\nTheir total sum is: %d\n", sum);
	
	
	return 0;
}
