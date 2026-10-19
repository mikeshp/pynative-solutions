/* Exercise 01: Float Input Output 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
	float input_number;
	
	printf("Give me a pointed number:\n");
	scanf("%f", &input_number);
	
	
	printf("You entered: %.2f\n\n", input_number);
	
	return 0;
}
