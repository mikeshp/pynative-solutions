/* Exercise 10: Average Of Three Numbers 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void input_numbers(int*, int*, int*);
float calculate_average(int, int, int);

int main()
{
	int num_a, num_b, num_c;

	input_numbers(&num_a, &num_b, &num_c);
	printf("The average of the three numbers is %f\n",
			calculate_average(num_a, num_b, num_c));

	return 0;
}

float calculate_average(int a, int b, int c)
{
	return ((float)a + (float)b + (float)c) / 3;
}

void input_numbers(int *a, int *b, int *c)
{
	printf("Input number A: ");
	scanf(" %d", a);
	printf("Input number B: ");
	scanf(" %d", b);
	printf("Input number C: ");
	scanf(" %d", c);
}
