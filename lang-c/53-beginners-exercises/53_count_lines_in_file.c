/* Exercise 53: Count Lines In File 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>
#include <stdlib.h>

int count_by_chars(char[]);
int count_by_strings(char[]);

int main()
{
	char file_name[] = "data.txt";
	int count_lines;

	count_lines = count_by_chars(file_name);
	printf("Number of lines in %s (counted by fgetc) is %d\n",
			file_name, count_lines);

	count_lines = count_by_strings(file_name);
	printf("Number of lines in %s (counted by fgets) is %d\n",
			file_name, count_lines);

	return 0;
}

int count_by_strings(char file_name[])
{
	FILE *file;
	file = fopen(file_name, "r");

	if (file == NULL)
	{
		printf("Couldn't open %s!\n", file_name);
		exit(1);
	}

	int i = 0;
	char buffer[100];
	while (fgets(buffer, sizeof(buffer), file)) i++;

	fclose(file);
	return i;
}

int count_by_chars(char file_name[])
{
	FILE *file;
	file = fopen(file_name, "r");

	if (file == NULL)
	{
		printf("Can't open %s!\n", file_name);
		exit(1);
	}

	int i = 0;
	int ch;
	while ((ch = fgetc(file)) != EOF) if (ch == '\n') i++;

	fclose(file);
	return i == 0 ? 1 : i;
}
