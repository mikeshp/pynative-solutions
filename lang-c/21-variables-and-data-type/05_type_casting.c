/* 
 * Exercise 05: Type Casting 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void input_numbers(int*, float*);
float convert_int_to_float(int);
int convert_float_to_int(float);

int main()
{
	int var_int;
	float var_float;

	input_numbers(&var_int, &var_float);

	printf("Integer converted to float: %f\n",
			convert_int_to_float(var_int));
	printf("Float converted to integer: %d\n",
			convert_float_to_int(var_float));

	return 0;
}

int convert_float_to_int(float num)
{
	return (int)num;
}

float convert_int_to_float(int num)
{
	return (float)num;
}

void input_numbers(int *var_int, float *var_float)
{
	printf("Give me integer number: ");
	scanf(" %d", var_int);
	printf("Give me a float number: ");
	scanf(" %f", var_float);
}
