/* PYnative.com C Exercise Solutions
 * 
 * Exercise 02: Dynamic Array Allocation 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

#define N 4

void assign_values(int[], int);
void free_pointer(int*);

int main()
{
	int *array = (int*) malloc(N * sizeof(int));
	if (array == NULL)
	{
		printf("Error: failed to allocate memory\n");
		return 1;
	}

	assign_values(array, 100);

	printf("Array located on the Heap address: %p\n", (void*) array);
	for (int i = 0; i < N; i++)
			printf("Value at array[%d]: %d\n", i, array[i]);

	free_pointer(array);

	return 0;
}

void free_pointer(int *ptr)
{
	free(ptr);
	ptr = NULL;
	printf("Memory sucessfully freed\n");
}

void assign_values(int arr[], int val)
{
	for (int i = 1; i <= N; i++) arr[i - 1] = i * val;
}
