/* PYnative.com C Exercise Solutions
 * 
 * Exercise 18: Casting With Expressions 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void input_values(int*, float*);
int multiply_int(int, float);
float multiply_float(int, float);

int main()
{
	int num_int;
	float num_float;

	input_values(&num_int, &num_float);

	printf("The float result is %f\n",
			multiply_float(num_int, num_float));
	printf("The int result is %d\n",
			multiply_int(num_int, num_float));

	return 0;
}

float multiply_float(int num_int, float num_float)
{
	return num_int * num_float;
}

int multiply_int(int num_int, float num_float)
{
	return (int)(num_int * num_float);
}

void input_values(int *num_int, float *num_float)
{
	printf("Enter int number:\n");
	scanf(" %d", num_int);
	printf("Enter float number:\n");
	scanf(" %f", num_float);
}
