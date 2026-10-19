/* Exercise 04: Circumference Area Of A Circle 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

#define PI 3.14159

int main()
{
	int radius;
	float perimeter;
	float area;
	
	radius = 5;
	perimeter = (float)PI * 2 * radius;
	area = (float)PI * radius * radius;
	
	printf("Perimeter of a circle is %.2f\n", perimeter);
	printf("Area of a circle is %.2f\n", area);
	
	return 0;
}
