/* PYnative.com C Exercise Solutions
 * 
 * Exercise 20: Formatted Output 
 * https://pynative.com/c-programming-variables-data-types-exercises
 */

#include <stdio.h>

#define THE_CODE 'A'

void input_values(int*, float*, char*);
float calculate_price(char, float, int);

int main()
{
	int quantity;
	float unit_price;
	char unit_code;

	input_values(&quantity, &unit_price, &unit_code);

	float total_price =
			calculate_price(unit_code, unit_price, quantity);

	if (total_price)
	{
		printf("Item Code: %c, Total Price: %.2f\n",
				unit_code, total_price);
	}
	else
	{
		printf("Unknown Item Code!\n");
	}

	return 0;
}

float calculate_price(char code, float price, int quant)
{
	if (code == THE_CODE) return price * quant;
	return 0;
}

void input_values(int *quant, float *price, char *code)
{
	printf("What is the unit Code?\n");
	scanf(" %c", code);
	printf("What is the unit price?\n");
	scanf(" %f", price);
	printf("How many units?\n");
	scanf(" %d", quant);
}
