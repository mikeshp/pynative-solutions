/* Exercise 48: Copy Array 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void copy_array(int[], int[], int);
void show_array(int[], int);

int main()
{
	int array_size;
	int source_array[5] = {7,8,12,5,4};

	array_size = sizeof(source_array) / sizeof(source_array[0]);

	int destination_array[array_size];
	copy_array(source_array, destination_array, array_size);

	printf("Source array was: ");
	show_array(source_array, array_size);
	printf("\n");

	printf("Destination array is: ");
	show_array(destination_array, array_size);
	printf("\n");

	return 0;
}

void show_array(int array[], int size)
{
	for (int i = 0; i < size; i++) printf("%d ", array[i]);
}

void copy_array(int source_arr[], int dest_arr[], int size)
{
	for (int i = 0; i < size; i++) dest_arr[i] = source_arr[i];
}
