/* 
 * Exercise 32: Remove Duplicate Elements 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int main()
{
//	int array[] = {1,2,2,3,4,4,5};
	int array[] = {3,3,3,5,6,6,7,11,11,12,13,13,13,13,14};
	int length = sizeof(array) / sizeof(array[0]);

	printf("Original: ");
	for (int i = 0; i < length; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	int unique = 0;
	for (int pointer = 1; pointer < length; pointer++)
	{
		if (array[pointer] != array[unique])
		{
			unique++;
			array[unique] = array[pointer];
		}
	}
	length = unique + 1;

	printf("Unique: ");
	for (int i = 0; i < length; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	return 0;
}
