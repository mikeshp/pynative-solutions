/* 
 * Exercise 02: Simple Calculator 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
void clear_input();
void display_result(float,float,char);
void wrong_input();
int main()
{
	char operation;
	float number_a;
	float number_b;
	printf("Enter operator (+, -, *, / or :)\n");
	while (1)
	{
		if (scanf("%c",&operation) == 1)
		{
			if (operation!='+'&&operation!='-'&&operation!='/'&&operation!=':'&&operation!='*')
			{
				wrong_input();
			}
			else
			{
				clear_input();
				break;
			}
		}
		else
		{
			wrong_input();
		}
	}
	printf("Enter two operands separated by space:\n");
	while (1)
	{
		if (scanf("%f %f",&number_a,&number_b) == 2)
		{
			clear_input();
			break;
		}
		else
		{
			wrong_input();
		}
	}
	if (operation == '/') operation = ':';
	printf("%0.2f %c %0.2f = ",number_a,operation,number_b);
	display_result(number_a,number_b,operation);
	printf("\n");
	return 0;
}
void wrong_input()
{
	clear_input();
	printf("Wrong input, try again!\n");
}
void display_result(float a,float b,char op)
{
	switch (op)
	{
		case '+':
				printf("%0.2f",a+b);
				break;
		case '-':
				printf("%0.2f",a-b);
				break;
		case '*':
				printf("%0.2f",a*b);
				break;
		case ':':
				if (b == 0)
				printf("Not possible!");
				else
				printf("%0.2f",a/b);
				break;
	}
}
void clear_input()
{
	char clear;
	while ((clear = getchar()) && clear != '\n' && clear != EOF);
}
