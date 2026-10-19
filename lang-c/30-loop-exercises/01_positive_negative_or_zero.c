/* Exercise 01: Positive Negative Or Zero 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
void clear_input();
int check_number(int);
int main()
{
	int number;
	printf("Enter a number:\n");
	while (1)
	{
		if (scanf("%d",&number) == 1)
		{
			clear_input();
			break;
		}
		else
		{
			printf("Wrong input (must enter a number!)\n");
			clear_input();
		}
	}
	printf("Number %d is ",number);
	switch (check_number(number))
	{
		case -1:
				printf("Negative!\n");
				break;
		case  1:
				printf("Positive!\n");
				break;
		default:
				printf("Zero!\n");
	}
	return 0;
}
int check_number(int number)
{
	if (number < 0)
	return -1;
	else if (number > 0)
	return 1;
	else return 0;
}
void clear_input()
{
	char clear;
	while ((clear = getchar()) && clear != '\n' && clear != EOF);
}
