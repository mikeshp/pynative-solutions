/* Exercise 25: Binary Search 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

#define ARR_SIZE 12
#define STEP 10
#define SEARCH 57

void occupy_array(int*, int, int);
void display_array(int*, int);
int binary_search(int*, int, int);

int main()
{
	int array[ARR_SIZE];

	occupy_array(array, ARR_SIZE, STEP);

	printf("\nArray:");
	display_array(array, ARR_SIZE);
	printf("\nSearch: %d\n", SEARCH);

	int index = binary_search(array, ARR_SIZE, SEARCH);

	index >= 0 ?
	printf("Found at index %d!\n", index) :
	printf("Couldn't find index!\n");

	return 0;
}

int binary_search(int* array, int size, int key)
{
	int bot = 0;
	int top = size - 1;

	while (bot <= top)
	{
		printf("Searching between indices %d and %d\n", bot, top);

		int mid = bot + ((top - bot) / 2);

		if (array[mid] == key)
		return mid;

		if (array[mid] > key)
		top = mid - 1;
		else
		bot = mid + 1;
	}

	return -1;
}

void display_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	printf(" %d", *(array + i));
}

void occupy_array(int* array, int size, int step)
{
	for (int i = 0; i < size; i++)
	*(array + i) = step * (i + 1);
}
