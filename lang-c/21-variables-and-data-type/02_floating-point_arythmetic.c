/* 
 * Exercise 02: Floating-Point Arythmetic 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void input_numbers(float*, float*);
void display_results(float, float);

int main()
{
	float num_a, num_b;

	input_numbers(&num_a, &num_b);
	display_results(num_a, num_b);

	return 0;
}

void display_results(float a, float b)
{
	int precision = 2;
	printf("Summ: %.*f\n", precision, a + b);
	printf("Difference: %.*f\n", precision, a - b);
	printf("Product: %.*f\n", precision, a * b);
}

void input_numbers(float *a, float *b)
{
	printf("Input number A: ");
	scanf(" %f", a);
	printf("Input number B: ");
	scanf(" %f", b);
}
