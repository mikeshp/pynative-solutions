/* PYnative.com C Exercise Solutions
 * 
 * Exercise 42: Alternating Positive And Negative Order 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_MAX_LENGTH 24

void display_array(int*,int);
void arrange_array(int*,int);
void swap_values(int*,int,int);
void populate_array(int*,int);

int main()
{
//	int array[] = {-1,2,-3,4,5,6,-7,8,9};
//	int array[] = {3,-3,-3,5,5,-5,-6,9,-9,-9,2,3,-9,-8};
//	int length = sizeof(array)/sizeof(array[0]);

	/* Implement randomized arrays with randomized length */
	srand(time(NULL));
	int array[ARR_MAX_LENGTH];
	int length = (rand() % ARR_MAX_LENGTH) + 1;

	populate_array(array,length);

	printf("Original:");
	display_array(array,length);
	printf("\n");

	arrange_array(array,length);

	printf("Arranged:");
	display_array(array,length);
	printf("\n");

	return 0;
}

void populate_array(int* array, int length)
{
	/* Populate array with random integers,
	 * randomly set to negative via flag */
	int is_negative;
	for (int i = 0; i < length; i++)
	{
		array[i] = (rand() % 9) + 1;
		is_negative = rand() % 2;		// sets is_negative to either 0 or 1
		if (is_negative)
		{
			array[i] = array[i] * -1;
		}
	}
}
void display_array(int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%4.0d",array[i]);
	}
}
void swap_values(int* array, int i, int j)
{
	array[i] = array[i] + array[j];
	array[j] = array[i] - array[j];
	array[i] = array[i] - array[j];
}
void arrange_array(int* array, int length)
{
	/* Use two checks: the index for odd/even and the value for negative/positive.
	 * If odd index contains positive value, or even index contains negative value,
	 * find the next appropriate value and swap. */
	for (int i = 0; i < length; i++)
	{
		if (i % 2 == 0 && array[i] < 0)
		{
			for (int j = i + 1; j < length; j++)
			{
				if (array[j] > 0)
				{
					swap_values(array,i,j);
					break;
				}
			}
		}
		else if (i % 2 > 0 && array[i] > 0)
		{
			for (int j = i + 1; j < length; j++)
			{
				if (array[j] < 0)
				{
					swap_values(array,i,j);
					break;
				}
			}
		}
	}
}
