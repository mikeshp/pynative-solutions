/* Exercise 12: Simple Calculator Using Switch 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

float calculate(float*, float*, char*);

int main()
{
	float number_a, number_b, result;
	char operator;
	
	printf("Input FIRST number, OPERATOR, SECOND number:\n");
	scanf(" %f %c %f", &number_a, &operator, &number_b);
	
	result = calculate(&number_a, &number_b, &operator);
	
	printf("Result: %.2f", result);
		
	return 0;
}

float calculate(float* a, float* b, char* op)
{
	switch (*op)
	{
		case 43:
			return *a + *b;
			break;
		case 45:
			return *a - *b;
			break;
		case 42:
			return *a * *b;
			break;
		case 47:
			if (*b != 0) return *a / *b;
			else return 0;
			break;
		default:
			return 0;
	}	
}
