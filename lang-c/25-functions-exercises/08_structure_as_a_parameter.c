/* 
 * Exercise 08: Structure As A Parameter 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define X 5
#define Y 3
struct Point
{
	int x;
	int y;
};
void print_map(int,int);
void print_point(struct Point);
int main(void)
{
	srandom((unsigned int)time(NULL));

	struct Point new_point = {(rand()%X),(rand()%Y)};

	print_point(new_point);

	return 0;
}
void print_map(int x,int y)
{
	printf("\n");
	printf("  ");

	for (int col = 0; col < X; col++)
	{
		printf("%d ",col);
	}
	printf("\n");

	for (int row = 0; row < Y; row++)
	{
		printf("%d ",row);

		for (int col = 0; col < X; col++)
		{
			if (row == y && col == x)
			{
				printf("X ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
void print_point(struct Point point)
{
	printf("The point coordinates:\n");
	printf("x: %d,\ty: %d\n",point.x,point.y);
	print_map(point.x,point.y);
}
