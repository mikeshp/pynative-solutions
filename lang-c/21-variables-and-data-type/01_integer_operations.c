/* Exercise 01: Integer Operations 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void assign_numbers(int*, int*);
void show_result(int, int, char);

int main()
{
	int num_a, num_b;

	assign_numbers(&num_a, &num_b);
	show_result(num_a, num_b, 's');
	show_result(num_a, num_b, 'd');
	show_result(num_a, num_b, 'p');
	show_result(num_a, num_b, 'q');

	return 0;
}

void show_result(int a, int b, char op)
{
	switch (op)
	{
		case 's':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case 'd':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case 'p':
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		case 'q':
			if (b == 0) printf("Can not devide by 0\n");
			else
			{
				if (a % b == 0) printf("%d : %d = %d\n", a, b, a / b);
				else printf("%d : %d = %f\n", a, b, (float)a / (float)b);
			}
			break;
	}
}

void assign_numbers(int *a, int *b)
{
	printf("Input number A: ");
	scanf(" %d", a);
	printf("Input number B: ");
	scanf(" %d", b);
}
