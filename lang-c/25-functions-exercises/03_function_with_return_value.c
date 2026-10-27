/* 
 * Exercise 03: Function With Return Value 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void clear_buffer(void);
long int multiply(int,int);
int main(void)
{
	int a, *input_a = &a;
	int b, *input_b = &b;

	printf("Enter number A: ");
	scanf(" %d",input_a);
	clear_buffer();

	printf("Enter number B: ");
	scanf(" %d",input_b);
	clear_buffer();

	long int result = multiply(a,b);
	printf("%d * %d = %ld\n",a,b,result);

	return 0;
}
long int multiply(int a, int b)
{
	return a * b;
}
void clear_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
