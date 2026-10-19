/* Exercise 45: Simple Pointer Arythmetic 
 * https://pynative.com/c-programming-exercises-for-beginners
 */

#include <stdio.h>

void show_array(int[], int);
void assign_values_to_array(int[], int);

int main()
{
    // int array[3] = {10,20,30};
    // int *p_array = array;
    int array_size = 0;

    printf("What size of the array? ");
    scanf(" %d", &array_size);

    int array[array_size];
    assign_values_to_array(array, array_size);

    // printf("The second value via pointer to an array is %d\n", *(p_array + 1));

    show_array(array, array_size);

    return 0;
}

void assign_values_to_array(int array[], int size)
{
    int i, value;
    for (i = 0; i < size; i++)
    {
        printf("Assign value #%d : ", i + 1);
        scanf(" %d", &value);
        *(array + i) = value;
    }
}

void show_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
        printf("Value #%d is %d\n", i + 1, *(array + i));
}
