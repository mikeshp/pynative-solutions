/* 
 * Exercise 12: Function Scope With Helper 
 * https://pynative.com/c-programming-functions-exercises
 */

#include <stdio.h>
const float TAX_RATE = 15;
float calculate_tax(const float income)
{
	return income / 100 * TAX_RATE;
}
float calculate_net_salary(const float gross)
{
	return gross - calculate_tax(gross);
}
int main(void)
{
	float gross, *input_gross = &gross;

	printf("Enter your gross: ");
	scanf(" %f",input_gross);

	printf("Gross Salary: %.2f\n",gross);
	printf("Tax Deducted: %.2f\n",calculate_tax(gross));
	printf("Net Salary Received: %.2f\n",calculate_net_salary(gross));

	return 0;
}
