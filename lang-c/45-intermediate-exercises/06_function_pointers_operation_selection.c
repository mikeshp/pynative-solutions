/* PYnative.com C Exercise Solutions
 * 
 * Exercise 06: Function Pointers Operation Selection 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int calc_add(int, int);
int calc_sub(int, int);

int main()
{
	int a, b, clear;
	int (*pf_calc)(int, int);

	printf("Enter number A: >> ");
	scanf(" %d", &a);
	while ((clear = getchar()) != '\n' && clear != EOF);

	printf("Enter number B: >> ");
	scanf(" %d", &b);
	while ((clear = getchar()) != '\n' && clear != EOF);

	pf_calc = calc_sub;
	printf("Operation: SUB | Result: %d - %d = %d\n", a, b, pf_calc(a, b));
	pf_calc = calc_add;
	printf("Operation: ADD | Result: %d + %d = %d\n", a, b, pf_calc(a, b));

	return 0;
}

int calc_sub(int a, int b)
{
	return a - b;
}

int calc_add(int a, int b)
{
	return a + b;
}
