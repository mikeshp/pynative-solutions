/* PYnative.com C Exercise Solutions
 * 
 * Exercise 05: Passing Structure To A Function 
 * https://pynative.com/c-programming-structures-unions-exercises
 */

#include <stdio.h>
struct Rectangle
{
	float length;
	float width;
};
void calculate_properties(struct Rectangle rect)
{
	printf("Length: %2.2f, Width: %2.2f\n",rect.length,rect.width);
	printf("Area: %2.2f\n",rect.length*rect.width);
	printf("Perimeter: %2.2f\n",2*(rect.length+rect.width));
}
void clear_buffer()
{
	int clear;
	while((clear=getchar())!='\n'&&clear!=EOF);
}
int main()
{
	struct Rectangle rect;
	printf("Enter Length of Rectangle: ");
	scanf("%f",&rect.length);
	clear_buffer();
	printf("Enter Width of Rectangle: ");
	scanf("%f",&rect.width);
	clear_buffer();
	printf("--- Calculation Results ---\n");
	calculate_properties(rect);
	return 0;
}
