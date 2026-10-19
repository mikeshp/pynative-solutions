/* 
 * Exercise 31: Merge Two Sorted Arrays 
 * https://pynative.com/intermediate-c-programming-exercises
 */

#include <stdio.h>
#include <stdlib.h>

void sort_array(int*,int);
void merge_arrays(int*,int*,int,int*,int);
void display_array(int*,int);

int main()
{
//	int arr1[] = {1,3,5};
//	int arr1[] = {5,1,3};
//	int arr1[] = {15,5,4,1};
	int arr1[] = {33,22,51,7,71,1};
//	int arr2[] = {2,4,6};
//	int arr2[] = {4,2,6};
//	int arr2[] = {12,3,5,66,2};
	int arr2[] = {2,3,5};

	int arr1_size = sizeof(arr1)/sizeof(arr1[0]);
	int arr2_size = sizeof(arr2)/sizeof(arr2[0]);

//	int arr3[6];
	int* arr3 = malloc(sizeof(int)*(arr1_size+arr2_size));
	if (arr3 == NULL)
	{
		printf("Failed to allocate memory!]n");
		exit(1);
	}

	sort_array(arr1,arr1_size);
	sort_array(arr2,arr2_size);

	merge_arrays(arr3,arr1,arr1_size,arr2,arr2_size);

	printf("Array 1: ");
	display_array(arr1,arr1_size);
	printf("\n");

	printf("Array 2: ");
	display_array(arr2,arr2_size);
	printf("\n");

	printf("Merged:  ");
	display_array(arr3,arr1_size+arr2_size);
	printf("\n");

	free(arr3);
	return 0;
}

void merge_arrays(int* dst, int* src1, int src1_size, int* src2, int src2_size)
{
	int ptr_s1 = 0;
	int ptr_s2 = 0;

	for (int i = 0; i < (src1_size + src2_size); i++)
	{
		if (ptr_s1 == src1_size)
		{
			dst[i] = src2[ptr_s2];
			ptr_s2 ++;
		}
		else if (ptr_s2 == src2_size)
		{
			dst[i] = src1[ptr_s1];
			ptr_s1 ++;
		}
		else if (src1[ptr_s1] > src2[ptr_s2])
		{
			dst[i] = src2[ptr_s2];
			ptr_s2 ++;
		}
		else
		{
			dst[i] = src1[ptr_s1];
			ptr_s1 ++;
		}
	}
}

void display_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ",array[i]);
	}
}

void sort_array(int* array, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				array[i] = array[i] + array[j];
				array[j] = array[i] - array[j];
				array[i] = array[i] - array[j];
			}
		}
	}
}
