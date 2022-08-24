#include "sort.h"
#include <unistd.h>

/**
 * quick_sort - quickest way to sort alogrithm
 * @array: array of ints
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, size, (int)size - 1, (int)size, array);
}
/**
 * quick_sort_recursion - quickest way to sort alogrithm
 * @array: array of ints
 * @size: size of the array
 * @pivot: selected pivot
 */
void quick_sort_recursion(int *array, size_t size, int pivot, int full_size, int *full_array)
{
	int i = 0;
	int x = 0;
	int temp = -1;
	int has_swap = 0;
	if ((int)size <= 0)
	{
		return;
	}
	while (i < pivot)
	{
		if (array[i] > array[pivot])
		{
			has_swap = 0;
			for (x = i + 1; x < pivot; x++)
			{
				if (array[x] < array[pivot])
				{
					temp = array[x];
					array[x] = array[i];
					array[i] = temp;
					has_swap = 1;
					print_array(full_array, full_size);
					break;
				}
			}
			if (!has_swap)
			{
				temp = array[i];
				array[i] = array[pivot];
				array[pivot] = temp;
				has_swap = 1;
				pivot = i;
				print_array(full_array, full_size);
				break;
			}	
		}
		i++;
	}
	if ((int)size > 0 && pivot < (int)size)
	{
		if (pivot > 1 && (pivot - 1) < ((int)size))
		{
			quick_sort_recursion(array, pivot, pivot - 1, full_size, full_array);
		}

		if ((int)size - (i + 1) > 0 && pivot < ((int)size) && has_swap)
		{
			int new_size = 0;
			new_size = (int)size - (pivot + 2);
			quick_sort_recursion(&array[i + 1], size - (pivot + 1), new_size, full_size, full_array);
		}
	}
}
