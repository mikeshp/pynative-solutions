/* PYnative.com C Exercise Solutions
 * 
 * Exercise 50: Read Display File Content 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_data(char[], char[], int);

int main()
{
	const int STRING_SIZE = 1024;
	char data_string[STRING_SIZE];
	char file_name[] = "data.txt";

	read_data(file_name, data_string, STRING_SIZE);

	printf("The %s file contains:\n%s", file_name, data_string);

	return 0;
}

void read_data(char file_name[], char string[], int size)
{
	FILE *file;
	file = fopen(file_name, "r");
	char temp[100];

	if (file != NULL)
	{
		while (fgets(temp, size, file))
		{
			strcat(string, temp);
			continue;
		}
	}
	else
	{
		printf("Could not open %s!\n", file_name);
		exit (1);
	}
}
