/* Exercise 41: Solid Diamond Pattern 
 * https://pynative.com/intermediate-c-programming-exercises
 */
#include <stdio.h>
void clear_input();
void diamond_growth(int);
void diamond_shrink(int);
void diamond_middle(int);
void diamond_generate(int);
void draw_space(int);
void draw_stars(int);
int is_odd(int);
int main()
{
	int max_width;
	int user_input;
	printf("Enter maximum width (how many stars in the center): ");
	while (1)
	{
		if (scanf("%u",&user_input) && user_input > 0)
		{
			clear_input();
			max_width = user_input;
			break;
		}
		else
		{
			clear_input();
			printf("Wrong input, try again! ");
		}
	}
	printf("Generating solid diamond (max width %d):\n",max_width);
	max_width = is_odd(user_input) ?
	user_input : user_input - 1;
	diamond_generate(max_width);
	return 0;
}
void draw_space(int number)
{
	for (int i = 0; i < number; i++)
	{
		printf(" ");
	}
}
void draw_stars(int number)
{
	for (int i = 0; i < number; i++)
	{
		printf("*");
	}
}
int is_odd(int number)
{
	if (number % 2 == 0)
	return 0;
	return 1;
}
void diamond_generate(int max_width)
{
	diamond_growth(max_width);
	diamond_middle(max_width);
	diamond_shrink(max_width);
}
void diamond_middle(int max_width)
{
	draw_stars(max_width);
	printf("\n");
}
void diamond_growth(int max_width)
{
	for (int i = 1; i < max_width; i += 2)
	{
		draw_space((max_width - i)/2);
		draw_stars(i);
		draw_space((max_width - i)/2);
		printf("\n");
	}
}
void diamond_shrink(int max_width)
{
	for (int i = max_width - 2; i > 0; i -= 2)
	{
		draw_space((max_width - i)/2);
		draw_stars(i);
		draw_space((max_width - i)/2);
		printf("\n");
	}
}
void clear_input()
{
	char clear;
	while ((clear = getchar()) && clear != '\n' && clear != EOF);
}
