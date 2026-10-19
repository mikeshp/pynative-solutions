/* 
 * Exercise 26: Bubble Sort Vs Selection Sort 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int main()
{
//	int array[] = {64, 25, 12, 22, 11};
	int array[] = {45, 22, 84, 90, 12, 13, 31};
	int ar_size = sizeof(array) / sizeof(int);

	printf("Original:");
	for (int i = 0; i < ar_size; i++)
	printf(" %d", array[i]);
	printf("\n");

	for (int i = 0; i < ar_size; i++)
	{
		int small = i;
		for (int j = i + 1; j < ar_size; j++)
		if (array[j] < array[small]) small = j;

		int temp = array[small];
		array[small] = array[i];
		array[i] = temp;

		printf("After swap # %d:", i + 1);
		for (int a = 0; a < ar_size; a++)
		printf(" %d", array[a]);
		printf("\n");
	}

	return 0;
}
