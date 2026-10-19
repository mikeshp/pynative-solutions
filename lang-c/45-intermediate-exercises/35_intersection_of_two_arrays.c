/* 
 * Exercise 35: Intersection Of Two Arrays 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
//	int array1[] = {1,2,3,4,5};
//	int array2[] = {3,4,5,6,7};
	int array1[] = {3,2,5,1,12,5,11};
	int array2[] = {3,3,3,33,2,11};
//	int array2[] = {4,4,6,13};

	int  matches = 0;
	int* match_array = malloc(matches * sizeof(int));

	//iterate array1 and check against array2 to find matches
	for (int i = 0; i < sizeof(array1)/sizeof(array1[0]); i++)
	{
		for (int j = 0; j < sizeof(array2)/sizeof(array2[0]); j++)
		{
			if (array1[i] == array2[j])
			{
				//check against match_array and break if happy
				int no_break = 1;
				int k = 0;
				while (k < matches)
				{
					if (match_array[k] == array2[j])
					{
						no_break = 0;
						break;
					}
					k++;
				}

				//if no break then increment matches and record to matches_array
				if (no_break)
				{
					matches++;
					int* temp = realloc(match_array, matches * sizeof(int));
					if (temp == NULL) exit(1);
					match_array = temp;
					match_array[matches - 1] = array2[j];
				}
			}
		}
	}

	//print our both arrays and intersections
	printf("Array 1: ");
	for (int i = 0; i < sizeof(array1)/sizeof(array1[0]); i++)
	printf("%d ", array1[i]);
	printf("\n");

	printf("Array 2: ");
	for (int i = 0; i < sizeof(array2)/sizeof(array2[0]); i++)
	printf("%d ", array2[i]);
	printf("\n");

	printf("Intersections: ");
	if (matches)
	{
		for (int i = 0; i < matches; i++)
		printf("%d ", match_array[i]);
	}
	else
	{
		printf("none");
	}
		printf("\n");

	free(match_array);

	return 0;
}
