/* Exercise 44: Function With Poitner Pass By Reference 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void square_value(int*);

int main()
{
    int x = 0;

    printf("Give me value: ");
    scanf(" %d", &x);

    square_value(&x);

    printf("Square of the value is %d\n", x);

    return 0;
}

void square_value(int* p_value)
{
    *p_value *= *p_value;
}
