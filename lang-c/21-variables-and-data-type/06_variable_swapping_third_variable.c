/* PYnative.com C Exercise Solutions
 * 
 * Exercise 06: Variable Swapping Third Variable 
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
	int c = *b;
	*b = *a;
	*a = c;
}

void input_numbers(int *a, int *b)
{
	printf("Input number A: ");
	scanf(" %d", a);
	printf("Input number B: ");
	scanf(" %d", b);
}
