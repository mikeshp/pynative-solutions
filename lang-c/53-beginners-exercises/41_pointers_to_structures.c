/* Exercise 41: Pointers To Structures 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h> 

typedef struct {
	int model_year;
	char color[30];
} Car;

void inputCarData(Car*);
void displayCarData(Car*);

int main()
{
	Car car1;
	Car *p_car = &car1;
	
	inputCarData(p_car);
	displayCarData(p_car);
	
	return 0;
}

void displayCarData(Car *car)
{
	printf("--- Car Details (via Poitner) ---\n");
	printf("Model Year: %d\n", car->model_year);
	printf("Color: %s\n", car->color);
}

void inputCarData(Car *car)
{
	printf("--- Input car Data ---\n");
	
	printf("Model Year: ");
	scanf(" %d", &car->model_year);
	
	printf("Color: ");
	scanf(" %s", car->color);
}
