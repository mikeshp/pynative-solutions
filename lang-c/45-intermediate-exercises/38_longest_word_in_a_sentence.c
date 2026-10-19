/* PYnative.com C Exercise Solutions
 * 
 * Exercise 38: Longest Word In A Sentence 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int main()
{
//	char string[] = "I am learning Programming";
	char string[] = "This new string, randomly added, has some punctuation!";
	int word_start = 0;
	int word_length = 0;
	int max_start = 0;
	int max_length = 0;
	int pointer = 0;
	char ch;

	// traverse a pointer through string
	while (ch != '\0')
	{
		ch = string[pointer];
		// detect words as substrings [a-z|A-Z]
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			if (word_length == 0)
			{
				word_start = pointer;
			}
			word_length++;
		}
		else
		{
			if (word_length != 0)
			{
				// when out of substring, compare the substring length with max_length
				if (word_length > max_length)
				{
					// store max_start and max_length of longest substring
					max_start = word_start;
					max_length = word_length;
				}
				word_length = 0;
			}
		}
		pointer++;
	}

	// display the longest word from max_start as a pointer
	printf("%s: %s\n", "Sentence", string);
	printf("%s: ", "Longest word");
	for (int i = 0; i < max_length; i++)
	{
		printf("%c", string[max_start + i]);
	}
	printf("\n");

	return 0;
}
