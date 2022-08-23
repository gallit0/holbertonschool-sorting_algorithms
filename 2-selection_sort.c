#include "sort.h"

/**
 * insertion_sort_list - instertion algorithm
 * @list: doubly linked list
 */

void selection_sort(int *array, size_t size)
{
	int temp = 0, i = 0, temp2 = 0, x = 0, temp3 = 0;
	
	if (!array)
		return;
	for (i = 0; i < (int) size; i++)
	{
		temp3 = i;
		for (x = i + 1; x < (int)size; x++)
		{
		if ( array[temp3] > array[x])
		{
			temp3 = x;
		}
		}
		if (array[temp3] < array[i])
		{
			temp2 = array[i];

			array[i] = array[temp3];
			array[temp3] = temp2;
			print_array(array, size);
			//selection_sort(array, size);
			//return;
			temp3 = 0;
			temp2 = 0;
			i++;
		}
	}
}
