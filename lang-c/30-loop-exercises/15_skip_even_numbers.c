/* Exercise 15: Skip Even Numbers 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
void clear_buffer(void)
{
	int c;
	while ((c=getchar())!='\n' && c!=EOF);
}
int main(void)
{
	int number, *input_number = &number;

	printf(">  Enter a positive number: ");

	while (scanf(" %d",input_number) != 1)
	{
		clear_buffer();
	}

	clear_buffer();
	printf("Odd numbers from 1 to %d:",number);

	for (int i = 1;i <= number;i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}

		printf(" %d",i);
	}

	printf("\n");

	return 0;
}
