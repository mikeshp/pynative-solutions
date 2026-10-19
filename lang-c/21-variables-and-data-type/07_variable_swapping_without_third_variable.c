/* PYnative.com C Exercise Solutions
 * 
 * Exercise 07: Variable Swapping Without Third Variable 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void input_numbers(int*, int*);
void swap_numbers(int*, int*);

int main()
{
	int num_a;
	int num_b;

	input_numbers(&num_a, &num_b);
	printf("Before swap: A = %d, B = %d\n", num_a, num_b);

	swap_numbers(&num_a, &num_b);
	printf("After swap: A = %d, B = %d\n", num_a, num_b);

	return 0;
}

void swap_numbers(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void input_numbers(int *a, int *b)
{
	printf("Give me number A: ");
	scanf(" %d", a);
	printf("Give me number B: ");
	scanf(" %d", b);
}
