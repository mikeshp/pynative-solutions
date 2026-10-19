/* Exercise 31: Function To Find Maximum In Array 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int findMax(int[], int);
void showArray(int[], int);

int main()
{
	int data[] = {8, 15, 2, 70, 9, 33};
	int size, max_value, max_index;
	
	size = sizeof(data) / sizeof(data[0]);
	
	showArray(data, size);
	
	max_index = findMax(data, size);
	max_value = data[max_index];
	
	printf("\nMaximum value found is %d at index %d\n",
	max_value, max_index);
	
	
	return 0;
}

void showArray(int array[], int size)
{
	printf("The array of given numbers:");
	
	for (int i = 0; i < size; i++) printf(" %d", array[i]);
	
	printf("\n");
}

int findMax(int array[], int size)
{
	int max_index = 0;
	
	for (int i = 1; i < size; i++)
	if (array[i] > array[max_index]) max_index = i;
	
	return max_index;
}
