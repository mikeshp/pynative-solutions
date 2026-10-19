/* PYnative.com C Exercise Solutions
 * 
 * Exercise 37: Character Frequency Count 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void countCharFreqs(char[], int*, int[]);
int countStringLength(char[]);
void showCharFreqs(int[]);

int main()
{
	char string[100] = "";
	int char_freqs[26] = {0};
	int string_len = 0;
	
	printf("Give me a string:\n");
	scanf("%s", string);
	
	//for (int i = 0; i < 26; i++) char_freqs[i] = 0;
	
	string_len = countStringLength(string);
	countCharFreqs(string, &string_len, char_freqs);
	
	printf("String: %s\n", string);
	showCharFreqs(char_freqs);
	
	return 0;
}

void showCharFreqs(int frq[])
{
	for (int i = 0; i < 26; i++)
	{
		if (frq[i] > 0) printf("\'%c\' - %d\n", i + 'a', frq[i]);
	}
}

int countStringLength(char string[])
{
	int i = 0;
	while (string[i] != '\0') i++;
	return i;
}

void countCharFreqs(char str[], int* len, int frq[])
{
	char ch;
	for (int i = 0; i < *len; i++)
	{
		ch = str[i];
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) // A-z
		{
			if (ch <= 'Z') ch += 32; // to lowercase
			frq[(ch - 'a')] += 1;
		}
	}
}

