#include "sort.h"

/**
 * selection_sort - selection algorithm
 * @array: array of ints
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int i = 0, temp1 = 0, x = 0, temp2 = 0;

	if (!array)
		return;
	for (i = 0; i < (int) size; i++)
	{
		temp2 = i;
		for (x = i + 1; x < (int)size; x++)
		{
			if (array[temp2] > array[x])
				temp2 = x;
		}
		if (array[temp3] < array[i])
		{
			temp1 = array[i];

			array[i] = array[temp2];
			array[temp2] = temp1;
			print_array(array, size);
			temp2 = 0;
			temp1 = 0;
		}
	}
}
