/* Exercise 10: Palindrome Checker Two Pointer Method 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

#define STR_SIZE 100

void user_input(char*);
int is_palindrome(char*);

int main()
{
	char word[STR_SIZE];

	user_input(word);

	printf("The word: %s\n", word);
	printf("Result: %s a palindrome!\n",
	is_palindrome(word) ? "is" : "is not");

	return 0;
}

int is_palindrome(char* p_start)
{
	if (*(p_start + 1) == '\0') return 1;

	char* p_end = p_start;
	while (*(p_end + 1) != '\0') p_end++;

	while (p_start < p_end)
	{
		if (*p_start != *p_end)	return 0;
		p_start++;
		p_end--;
	}

	return 1;
}

void user_input (char* input)
{
	int clear;

	printf("Enter a word >> ");
	scanf(" %99s", input);
	while ((clear = getchar()) != '\n' && clear != EOF);
}
