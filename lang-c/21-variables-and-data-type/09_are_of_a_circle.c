/* 
 * Exercise 09: Are Of A Circle 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

#define PI 3.14159

void input_radius(float*);
float circle_area(float);

int main()
{
	float radius = 5;

	input_radius(&radius);

	printf("The area of the circle is %f\n", circle_area(radius));

	return 0;
}

float circle_area(float radius)
{
	return PI * radius * radius;
}

void input_radius(float *radius)
{
	printf("What is the circle radius?\n");
	scanf(" %f", radius);
}
