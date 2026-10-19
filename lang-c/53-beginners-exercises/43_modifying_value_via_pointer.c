/* Exercise 43: Modifying Value Via Pointer 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

int main()
{
    int data;
    int *p_data;

    data = 100;
    p_data = &data;

    *p_data = 250;

    printf("Data value is %d\n", data);

    return 0;
}
