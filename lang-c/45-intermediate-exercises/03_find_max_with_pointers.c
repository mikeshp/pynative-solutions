/* PYnative.com C Exercise Solutions
 * 
 * Exercise 03: Find Max With Pointers 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

void display_array(int[], int);
void display_max(int[], int);
int* find_max(int[], int);

int main()
{
//	int array[] = {12, 45, 7, 99, 23};
//	int array[] = {611, 23, 36, 116, 322};
	int array[] = {95, 385, 283, 125, 275};

	display_array(array, sizeof(array) / sizeof(array[0]));
	display_max(array, sizeof(array) / sizeof(array[0]));

	return 0;
}

int* find_max(int arr[], int size)
{
	int max = 0;
	for (int i = 1; i < size; i++)
			if (arr[i] > arr[max]) max = i;
	return &arr[max];
}

void display_max(int arr[], int size)
{
	int *max_index = find_max(arr, size);
	printf("Max value: %d found at index: %d\n",
			*max_index, max_index - arr);
}

void display_array(int arr[], int size)
{
	printf("Given array: {");
	for (int i = 0; i < size - 1; i++) printf("%d, ", arr[i]);
	printf("%d}\n", arr[size - 1]);
}
