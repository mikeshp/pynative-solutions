/* PYnative.com C Exercise Solutions
 * 
 * Exercise 09: Vowel Or Consonant 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <stdbool.h>

bool is_letter(const char ch)
{
	if ((ch >= 'A' && ch <= 'Z')
	||  (ch >= 'a' && ch <= 'z'))
	{
		return true;
	}

	return false;
}

char to_upper(const char ch)
{
	char chr = (char) ch;

	if (chr > 'Z')
	{
		chr = chr - 32;
	}

	return chr;
}

bool is_vowel(const char ch)
{

	switch (to_upper(ch))
	{
		case 'A':
			return true;
		case 'O':
			return true;
		case 'U':
			return true;
		case 'E':
			return true;
		case 'I':
			return true;
		default:
			return false;
	}
}

int main(void)
{
	char input_char, *input = &input_char;
	bool loop = true;

	while (loop)
	{
		printf("Enter an alphabet character: ");
		if (scanf(" %c",input) == 1
		&& is_letter(input_char) == true)
		{
			loop = false;
		}
	}

	printf("\'%c\' is a %s.\n",to_upper(input_char),
	(is_vowel(input_char))
	? "Vowel" : "Consonant");

	return 0;
}
