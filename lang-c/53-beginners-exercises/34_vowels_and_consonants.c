/* Exercise 34: Vowels And Consonants 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void countVowelsAndConsonants(char[], int*, int*);

int main()
{
	char string[100] = "Programming In C is fun.";
	int counter_vowels = 0;
	int counter_consonants = 0;
	
	//printf("Give me a string:\n");
	//scanf("%s", string);
	
	countVowelsAndConsonants(string, 
	&counter_vowels, &counter_consonants);
	
	printf("String: %s\nVowels: %d\nConsonants: %d\n",
	string, counter_vowels, counter_consonants);
	
	return 0;
}

void countVowelsAndConsonants(char str[], int* vow, int* con)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			if
			(
				str[i] == 'a' || str[i] == 'A' ||
				str[i] == 'e' || str[i] == 'E' ||
				str[i] == 'i' || str[i] == 'I' ||
				str[i] == 'o' || str[i] == 'O' ||
				str[i] == 'u' || str[i] == 'U'
			)	(*vow)++;
			else (*con)++;
		}
		i++;
	}
}
