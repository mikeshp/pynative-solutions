/* 
 * Exercise 15: Nested Structs Composition 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>

#define PI 3.14159

struct Point
{
	int x;
	int y;
};

struct Circle
{
	float radius;
	struct Point center;
};

float circle_area(const struct Circle*);
void display_circle(const struct Circle*);
void user_input(struct Circle*);

int main()
{
//	struct Circle circle = {5, {0, 0}};
	struct Circle circle;

	user_input(&circle);
	display_circle(&circle);

	return 0;
}

void user_input(struct Circle* circle)
{
	int clear;

	printf("Enter circle center, X: >> ");
	scanf(" %d", &circle->center.x);
	while ((clear = getchar()) != '\n' && clear != EOF);

	printf("Enter circle center, Y: >> ");
	scanf(" %d", &circle->center.y);
	while ((clear = getchar()) != '\n' && clear != EOF);

	printf("Enter circle radius: >> ");
	scanf(" %f", &circle->radius);
	while ((clear = getchar()) != '\n' && clear != EOF);
}

void display_circle(const struct Circle* circle)
{
	printf("Circle Coordinates: %d, %d\n", circle->center.x, circle->center.y);
	printf("Circle Radius: %.1f\n", circle->radius);
	printf("Circle Area: %.2f\n", circle_area(circle));
}

float circle_area(const struct Circle* circle)
{
	return PI * circle->radius * circle->radius;
}
