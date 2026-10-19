/* PYnative.com C Exercise Solutions
 * 
 * Exercise 01: Swap By Reference 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

void input_values(int*, int*);
void swap_values(int*, int*);

int main()
{
	int a, b;

	input_values(&a, &b);
	printf("Before swap: A = %d B = %d\n", a, b);

	swap_values(&a, &b);
	printf("After swap: A = %d B = %d\n", a, b);

	return 0;
}

void swap_values(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void input_values(int *a, int *b)
{
	printf("Enter number A:\n");
	scanf(" %d", a);
	printf("Enter number B:\n");
	scanf(" %d", b);
}
