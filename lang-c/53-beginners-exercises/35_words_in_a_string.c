/* 
 * Exercise 35: Words In A String 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void countWords(char[], int*);

int main()
{
	//char string[] = "This is a test string"; // 5
	//char string[] = " This is yet another string to test!  "; // 7
	char string[] = "  And again  —  another string! "; // 4
	int counter_words = 0;
	
	countWords(string, &counter_words);
	
	printf("String: %s\n", string);
	printf("Number of words: %d\n", counter_words);
	
	return 0;
}

void  countWords(char string[], int* words)
{
	int i = 0;
	while (string[i] != '\0')
	{
		i++;
		if (
			(string[i] >= 'A' && string[i] <= 'z' && *words == 0) ||
			(string[i] >= 'A' && string[i] <= 'z' && string[i-1] == ' ')
		) (*words)++;
	}
}
