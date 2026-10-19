/* 
 * Exercise 30: Second Largest Element In Array 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

#define ARR_SIZE 5

void print_array(int*);
void find_max_and_second(int*,int*,int*);

int main()
{
//	int array[ARR_SIZE] = {12,35,1,10,34};
	int array[ARR_SIZE] = {54,1,566,33,24};
	int max;
	int secondMax;

	print_array(array);
	find_max_and_second(array,&max,&secondMax);
	printf("Largest: %d | Second Largest: %d\n", array[max], array[secondMax]);

	return 0;
}

void find_max_and_second(int* array, int* p_max, int* p_second)
{
	*p_max = 0;
	*p_second = 0;

	for (int i = 1; i < ARR_SIZE; i++)
	{
		if (array[i] > array[*p_max])
		{
			*p_second = *p_max;
			*p_max = i;
		}
		else if (array[i] > array[*p_second])
		{
			*p_second = i;
		}
	}
}

void print_array(int* array)
{
	printf("Array: ");

	for (int i = 0; i < ARR_SIZE - 1; i++)
	{
		printf("%d, ", array[i]);
	}

	printf("%d\n", array[ARR_SIZE - 1]);
}
