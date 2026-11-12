/* 
 * Exercise 22: Inline Function Optimization Hint 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void get_number(int*);
void print_min(int);
int get_min(int,int);
int main(void)
{
	int number_a, *input_a = &number_a;
	int number_b, *input_b = &number_b;

	get_number(input_a);
	get_number(input_b);

	print_min(get_min(number_a,number_b));

	return 0;
}
inline void print_min(int number)
{
	printf("The minimal number is %d\n",number);
}
inline int get_min(int number_a,int number_b)
{
	if (number_a > number_b)
		return number_b;
	else
		return number_a;
}
inline void get_number(int* number)
{
	printf("Enter a number: ");
	scanf(" %d",number);
}
