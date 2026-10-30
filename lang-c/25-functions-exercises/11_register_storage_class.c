/* 
 * Exercise 11: Register Storage Class 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void clear_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}
void sum_two(register int a,register int b)
{
	printf("a:%d b:%d\n",a,b);
	printf("Sum: %d\n",a+b);
}
void increment_var(register int a,register int b)
{
	for (register int i = 0; i < b; i++)
	{
		a++;
	}
	printf("a incremented b times: %d\n",a);
}
int main(void)
{
	int a, *input_a = &a;
	int b, *input_b = &b;

	printf("Enter value a: ");
	scanf(" %d",input_a);
	clear_buffer();

	printf("Enter value b: ");
	scanf(" %d",input_b);
	clear_buffer();

	sum_two(a,b);
	increment_var(a,b);

	return 0;
}
