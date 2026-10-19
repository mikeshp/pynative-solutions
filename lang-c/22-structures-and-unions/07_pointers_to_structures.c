/* Exercise 07: Pointers To Structures 
 * https://pynative.com/c-programming-structures-unions-exercises
 */

#include <stdio.h>
#include <stdlib.h>
struct Car
{
	int model_year;
	char color[16];
};
void clear_buffer()
{
	int clear;
	while((clear = getchar())!='\n'&&clear!=EOF);
}
void assign_data(struct Car *p_car)
{
	printf("Enter Car's Model Year (YYYY): ");
	scanf("%d",&p_car->model_year);
	clear_buffer();
	printf("Enter Car's Color: ");
	scanf("%s",p_car->color);
	clear_buffer();
}
void print_data(struct Car *p_car)
{
	printf("--- Car Details (via Pointer): ---\n");
	printf("Model Year: %4d\n",p_car->model_year);
	printf("Color: %s\n",p_car->color);
}
int main()
{
//	struct Car car;
//	struct Car *p_car = &car;
	/* Achieve same result with only pointer in dynamic memory */
	struct Car *p_car = malloc(sizeof(struct Car));
	if (p_car == NULL) exit(1);
	assign_data(p_car);
	print_data(p_car);
	return 0;
}
