#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array of ints
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, check = 0, j = 1;
	int temp = 0;

	for (i = 0; i < size; i++, j++)
	{
		if (j < size && (array[i] > array[j]))
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
