/* PYnative.com C Exercise Solutions
 * 
 * Exercise 06: Returning Structure From Function 
 * https://pynative.com/c-programming-structures-unions-exercises
 */

#include <stdio.h>
struct Rectangle
{
	float length;
	float width;
	float area;
};
void clear_buffer()
{
	int clear;
	while((clear=getchar())!='\n'&&clear!=EOF);
}
struct Rectangle get_rectangle_data()
{
	float length;
	float width;
	printf("Enter Rectangle Length: ");
	scanf("%f",&length);
	clear_buffer();
	printf("Enter Rectangle Width: ");
	scanf("%f",&width);
	clear_buffer();
	struct Rectangle rect = {length,width,length*width};
	return rect;
}
int main()
{
	struct Rectangle rect;
	rect = get_rectangle_data();
	printf("--- Rectangle Report ---\n");
	printf("Length: %2.2f\n",rect.length);
	printf("Width: %2.2f\n",rect.width);
	printf("Calculated Area: %2.2f\n",rect.area);
	return 0;
}
