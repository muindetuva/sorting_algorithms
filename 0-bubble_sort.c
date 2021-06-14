#include "sort.h"

/**
  * bubble_sort - Sorts an array in ascending order using the Bubble sort
  * algorithm
  * @array: The array to be sorted
  * @size: The size of the array
  */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
