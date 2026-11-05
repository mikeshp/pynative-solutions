/* 
 * Exercise 15: Recursion With Base Case 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
void print_sum_digits(int);
void print_digits(int,int);
int sum_digits(int);
int main(void)
{
	int number, *input_number = &number;

	printf("Enter a positive number: ");
	scanf(" %d",input_number);

	printf("The sum of digits of %d is:\n",number);
	print_sum_digits(number);

	return 0;
}
void print_digits(int number,int equal)
{
	// Use equal flag to print = at first iteration,
	// print + at every other iteration, 
	// call recursion prior to the base
	// to print digits in reversed order

	if (number > 0)
	{
		print_digits(number/10,0);
		printf("%d%s",number%10,
		(equal)?" = ":" + ");
	}
}
void print_sum_digits(int number)
{
	printf("%d -> ",number);

	print_digits(number,1);

//	int temp_number = number;
//
//	while (temp_number > 0)
//	{
//		printf("%d%s",temp_number%10,
//		(temp_number/10==0)?" = ":" + ");
//		temp_number = temp_number/10;
//	}

	printf("%d\n",sum_digits(number));
}
int sum_digits(int number)
{
	if (number == 0)
	return 0;

	return (number%10)
	+ sum_digits(number/10);
}
