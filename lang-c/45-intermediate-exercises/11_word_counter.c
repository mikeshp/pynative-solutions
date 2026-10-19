/* Exercise 11: Word Counter 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

#define STR_SIZE 100

void user_input(char*);
int word_count(char*);

int main()
{
	char sentence[STR_SIZE];

	user_input(sentence);
	printf("Sentence: %s\n", sentence);
	printf("Word count: %d\n", word_count(sentence));

	return 0;
}

int word_count(char* sentence)
{
	int in_word = 0;
	int counter = 0;

	while (*sentence != '\0')
	{
		switch (*sentence)
		{
			case ' ':
				if (!in_word) break;
				in_word--;
				break;
			default:
				if (!in_word)
				{
					counter++;
					in_word++;
				}
		}

		sentence++;
	}

	return counter;
}

void user_input(char* sentence)
{
	printf("Enter a sentence: >> ");
	fgets(sentence, STR_SIZE, stdin);
	while (*sentence != '\0')
	{
		if (*sentence == '\n') *sentence = 0;
		sentence++;
	}
}
