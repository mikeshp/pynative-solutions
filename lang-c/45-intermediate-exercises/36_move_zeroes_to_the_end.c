/* PYnative.com C Exercise Solutions
 * 
 * Exercise 36: Move Zeroes To The End 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

void display_array(int*,int);
void move_zeroes(int*,int);

int main()
{
//	int array[] = {0,1,0,3,12};
	int array[] = {2,5,40,0,0,0,5,50,41,0,23,0,0,66};
	int length;

	length = sizeof(array)/sizeof(array[0]);

	printf("%s", "Original:");
	display_array(array,length);
	printf("\n");

	move_zeroes(array,length);

	printf("%s", "Modified:");
	display_array(array,length);
	printf("\n");

	return 0;
}

void move_zeroes(int* array, int length)
{
	int nonzero = 0;
	int current = 0;
	while (current < length)
	{
		if (array[current] != 0)
		{
			array[nonzero] = array[current];
			nonzero++;
		}
		current++;
	}
	while (nonzero < length)
	{
		array[nonzero] = 0;
		nonzero++;
	}
}

void display_array(int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf(" %d", array[i]);
	}
}
