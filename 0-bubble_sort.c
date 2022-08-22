#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array of ints
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int i, check = 0, temp = 0, j = 1;

	for (i = 0; i < size; i++, j++)
	{
		if (array[i] > array[j])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			check = 1;
		}
	}
	if (check != 0)
		bubble_sort(array, size);
}
