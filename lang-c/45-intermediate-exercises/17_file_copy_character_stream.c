/* PYnative.com C Exercise Solutions
 * 
 * Exercise 17: File Copy Character Stream 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

int main()
{
	FILE* source = fopen("source.txt", "r");
	FILE* destination = fopen("destination.txt", "w");

	if (source == NULL && destination == NULL)
	{
		printf("Couldn't open files!");
		return 1;
	}

	printf("Source file opened!\n");
	printf("Copying source content to destination...\n");

	char ch;
	while ((ch = fgetc(source)) != EOF) fputc(ch, destination);

	printf("Done!\n");

	fclose(source);
	fclose(destination);

	return 0;
}
