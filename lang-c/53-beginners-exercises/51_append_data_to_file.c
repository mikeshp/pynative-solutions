/* 
 * Exercise 51: Append Data To File 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char* get_current_date();
void write_to_file(char[], char[]);

int main()
{
	char file_name[] = "data.txt";
	char *current_date;

	current_date = get_current_date();
	write_to_file(file_name, current_date);

	return 0;
}

void write_to_file(char file_name[], char date[])
{
	FILE *file;
	file = fopen(file_name, "a");

	if (file != NULL)
	{
		printf("Writing current date to %s...\n", file_name);
		fprintf(file, "Successfully appended:\n%s", date);
		printf("Done!\n");
	}
	else
	{
		printf("Could not open %s\n", file_name);
		exit(1);
	}

	fclose(file);
}

char* get_current_date()
{
	time_t current_time = time(&current_time);
	char *current_date;
	current_date = ctime(&current_time);
	return current_date;
}
