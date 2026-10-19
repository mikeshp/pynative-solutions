/* 
 * Exercise 21: Smallest And Largest 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdlib.h>
#include <stdio.h>
void populate_array(int* array, int number, char* input, int input_size)
{
	printf("\nNow enter %d integers:\n",number);

	for (int i = 0; i < number; i++)
	{
		printf("> %2d: ",i+1);
		fgets(input,input_size,stdin);

		array[i] = atoi(input);
	}
}
void find_small_and_large(int* array, int number, int* small, int* large)
{
	*small = array[0];
	*large = array[0];

	for (int i = 1; i < number; i++)
	{
		if (array[i] < *small)
		{
			*small = array[i];
		}
		if (array[i] > *large)
		{
			*large = array[i];
		}
	}
}
int main(void)
{
	int number;
	int small,  *find_small = &small;
	int large,  *find_large = &large;

	const int input_size = 32;
	char user_input[input_size];

	printf("> How many integers? ");
	fgets(user_input,input_size,stdin);

	number = atoi(user_input);

	int* num_array = (int*)malloc(sizeof(int)*(unsigned int)number);

	populate_array(num_array,number,user_input,input_size);
	find_small_and_large(num_array,number,find_small,find_large);

	printf("Largest number entered: %d\n",large);
	printf("Smallest number entered: %d\n",small);

	free(num_array);
	return 0;
}
