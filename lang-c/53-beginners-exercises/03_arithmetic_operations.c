/* 
 * Exercise 03: Arithmetic Operations 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

float calculate(int, int, char);

int main()
{
	int a, b;
	
	printf("Give me two numbers:\n");
	scanf("%d %d", &a, &b);

	printf("Sum:        %d\n", (int)(calculate(a, b, '+')));
	printf("Difference: %d\n", (int)(calculate(a, b, '-')));
	printf("Product:    %d\n", (int)(calculate(a, b, '*')));
	printf("Quotient:   %.2f\n", calculate(a, b, '/'));
	
	return 0;
}

float calculate(int a, int b, char operator)
{
	if (operator == '+') return a + b;
	if (operator == '-') return a - b;
	if (operator == '*') return a * b;
	if (operator == '/') return (float)a / b;
	else return 0;
}
