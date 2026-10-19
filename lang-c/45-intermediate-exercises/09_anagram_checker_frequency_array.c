/* 
 * Exercise 09: Anagram Checker Frequency Array 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

#define STR_BUFFER 100

void user_input(char**);
int str_len(char*);
void str_cpy(char**, char*);
int find_anagram(char*, char*);

int main()
{
	char* string1;
	char* string2;

	printf("Enter string A\n");
	user_input(&string1);
	printf("Enter string B\n");
	user_input(&string2);

	printf("String A: \"%s\" | String B: \"%s\"\n", string1, string2);
	printf("Result: %s\n", find_anagram(string1, string2) ?
	"Anagram was found!" : "No anagram was found...");

	free(string1);
	free(string2);

	return 0;
}

int find_anagram(char* string1, char* string2)
{
	int ascii_hash[256] = {0};

	while (*string1 != '\0') ascii_hash[*string1++]++;
	while (*string2 != '\0') ascii_hash[*string2++]--;

	for (int i = 0; i < 256; i++)
	if (ascii_hash[i] != 0) return 0;

	return 1;
}

int str_len(char* ptr1)
{
	char* ptr2 = ptr1;
	while (*ptr2 != '\0') ptr2++;
	return ptr2 - ptr1;
}

void str_cpy(char** p_destination_string, char* source_string)
{
	for (int i = 0; i <= str_len(source_string); i++)
	*(*p_destination_string + i) = *(source_string + i);
}

void user_input(char** p_string)
{
	int clear;
	char input[STR_BUFFER];

	printf(">> ");
	scanf(" %99s", input);
	while ((clear = getchar()) != '\n' && clear != EOF);

	*p_string = malloc(str_len(input) + 1);
	if (*p_string == NULL) exit(1);
	str_cpy(p_string, input);
}
