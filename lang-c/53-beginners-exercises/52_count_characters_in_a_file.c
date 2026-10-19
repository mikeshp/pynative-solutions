/* Exercise 52: Count Characters In A File 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>
#include <stdlib.h>

int count_chars(char[]);

int main()
{
	char file_name[] = "data.txt";
	int counter;

	counter = count_chars(file_name);

	printf("There are exactly %d characters in %s!\n", counter, file_name);

	return 0;
}

int count_chars(char file_name[])
{
	FILE *file;
	file = fopen(file_name, "r");

	if (file == NULL)
	{
		printf("Could not open %s.\n", file_name);
		exit(1);
	}

	int i = 0;
	while (fgetc(file) != EOF) i++;

	fclose(file);
	return i;
}
