/* PYnative.com C Exercise Solutions
 * 
 * Exercise 37: Sort Strings Alphabetically 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <string.h>

void display_strings(const char**,int);
void sort_strings(const char**,int);

int main()
{
	const char* strings[] =
	{
		"Zebra",
		"Apple",
		"Monkey",
		"Orange",
		"Banana",
		"Umbrella",
		"Mango"
	};

	int number;

	number = sizeof(strings)/sizeof(strings[0]);

	printf("%s", "Before:");
	display_strings(strings,number);
	printf("\n");

	sort_strings(strings,number);

	printf("%s", "After:");
	display_strings(strings,number);
	printf("\n");

	return 0;
}

void sort_strings(const char** strings, int number)
{
	int current;
	int sorted;

	sorted = 0;
	while (sorted < number - 1)
	{
		current = sorted + 1;
		while (current < number)
		{
			//check for swap
			if (strcmp(strings[sorted],strings[current]) > 0)
			{
				const char* temp = strings[sorted];
				strings[sorted] = strings[current];
				strings[current] = temp;
			}
			current++;
		}
		sorted++;
	}
}

void display_strings(const char** strings, int number)
{
	for (int i = 0; i < number; i++)
	{
		printf(" %s", strings[i]);
	}
}
