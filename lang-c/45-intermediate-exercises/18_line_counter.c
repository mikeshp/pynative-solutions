/* Exercise 18: Line Counter 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int count_strings(FILE*);
void user_input(char*);

int main()
{
//	char filename[] = "text.txt";
	char filename[100];

	user_input(filename);

	FILE* file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("Couldn't open the file!\n");
		return 1;
	}

	printf("The file %s contains %d string!\n",
	filename, count_strings(file));

	fclose(file);

	return 0;
}

void user_input(char* filename)
{
	int clear;

	printf("Enter name of file >> ");
	scanf(" %99s", filename);
	while ((clear = getchar()) != '\n' && clear != EOF);
}

int count_strings(FILE* file)
{
	int counter = 0;
	int lastCharEnd;
	char ch;

	while ((ch = fgetc(file)) != EOF)
	if (ch == '\n')
	{
		counter++;
		lastCharEnd = 1;
	}
	else lastCharEnd = 0;

	if (lastCharEnd == 0) counter++;

	return counter;
}
