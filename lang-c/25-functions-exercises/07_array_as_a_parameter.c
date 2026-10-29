/* 
 * Exercise 07: Array As A Parameter 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define ARR_SIZE 6
void populate_array(int[],const int);
void print_array(int[],const int);
int find_max(int[],const int);
int main(void)
{
	srandom((unsigned int)time(NULL));

	int numbers[ARR_SIZE];

	populate_array(numbers,ARR_SIZE);
	print_array(numbers,ARR_SIZE);

	printf("The largest element in the array: %d\n",
	find_max(numbers,ARR_SIZE));

	return 0;
}
void populate_array(int array[],const int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = (rand()%100) + 1;
	}
}
void print_array(int array[],const int size)
{
	printf("int number[] = {");
	for (int i = 0; i < size; i++)
	{
		printf(" %d",array[i]);
	}
	printf(" }\n");
}
int find_max(int array[],const int size)
{
	int max = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}
