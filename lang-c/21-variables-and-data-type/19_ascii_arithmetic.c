/* Exercise 19: Ascii Arithmetic 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

void input_chars(char*, char*);
int add_chars(int, int);
void display_summ(char, char, int);

int main()
{
	char ch_a, ch_b;
	input_chars(&ch_a, &ch_b);

	int summ = add_chars(ch_a, ch_b);
	display_summ(ch_a, ch_b, summ);

	return 0;
}

void display_summ(char a, char b, int summ)
{
	printf(
		"The summ of ASCII values of '%c' and '%c' is %d\n",
		 a, b, summ);
}

int add_chars(int a, int b)
{
	return a + b;
}

void input_chars(char *a, char *b)
{
	printf("Enter first character:\n");
	scanf(" %c", a);
	printf("Enter second character:\n");
	scanf(" %c", b);
}
