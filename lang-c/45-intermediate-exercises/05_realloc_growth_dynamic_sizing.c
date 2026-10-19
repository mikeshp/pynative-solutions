/* PYnative.com C Exercise Solutions
 * 
 * Exercise 05: Realloc Growth Dynamic Sizing 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

#define INIT_CAP 2

struct Array
{
	int capacity;
	int size;
	int* data;
};

int main()
{
	struct Array array;
	array.capacity = INIT_CAP;
	array.size = 0;

	printf("Initial capacity of the array: %d\n", array.capacity);

	array.data = malloc(INIT_CAP * sizeof(int));
	if (array.data == NULL) exit(1);

	while (array.size < 5)
	{
		array.size++;
		if (array.size > array.capacity)
		{
			array.capacity *= 2;

			int* temp = realloc(array.data, array.capacity * sizeof(int));
			if (temp == NULL) exit(1);
			array.data = temp;

			printf("Capacity doubled to %d\n", array.capacity);
		}
		array.data[array.size - 1] = array.size * 10;
	}

	printf("Final capacity: %d\n", array.capacity);

	printf("Final data:");
	for (int i = 0; i < array.size; i++) printf(" %d", array.data[i]);
	printf("\n");

	free(array.data);

	return 0;
}
