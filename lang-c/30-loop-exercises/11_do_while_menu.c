/* PYnative.com C Exercise Solutions
 * 
 * Exercise 11: Do While Menu 
 * https://pynative.com/c-programming-loops-exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void clear_buffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
	srand((unsigned int)time(NULL));
	bool loop = true;
	unsigned int select, *input_select = &select;

	char* greet_prompt[] =
	{
		 "Hello"
		,"Greetings"
		,"Welcome"
	};

	char* bye_prompt[] =
	{
		 "Goodbye"
		,"Fare thee well"
		,"Servus"
	};

	char* exit_prompt[] =
	{
		 "That's it"
		,"As you wish"
		,"This is the end, my friend"
	};

	do
	{
		printf("\n");
		printf("1. Greet\n");
		printf("2. Say Goodbye\n");
		printf("3. Exit\n");
		printf("\n%s ","Choose your option:");

		if (scanf(" %u",input_select) != 1)
		{
			clear_buffer();
			continue;
		}

		clear_buffer();

		switch (select)
		{
			case 1:
				printf("\n%s!\n",greet_prompt[rand()%3]);
				break;
			case 2:
				printf("\n%s!\n",bye_prompt[rand()%3]);
				break;
			case 3:
				printf("\n%s...\n",exit_prompt[rand()%3]);
				loop = false;
				break;
			default:
				continue;
		}
	}
	while (loop);

	return 0;
}
