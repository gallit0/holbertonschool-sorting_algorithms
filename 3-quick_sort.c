#include "sort.h"
/**
 * swap_array - Swap two elements in a array
 * @first_value: a value of the array
 * @second_value: a valua of the array
 */
void swap_array(int *first_value, int *second_value)
{
	int temp_value = 0;

	temp_value = *first_value;
	*first_value = *second_value;
	*second_value = temp_value;
}
/**
 * quick_sort - quickest way to sort alogrithm
 * @array: array of ints
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_r(array, size, (int)size, array);
}
/**
 * quick_sort_r - quickest way to sort alogrithm
 * @array: array of ints
 * @size: size of the array
 * @full_size: full size of original array
 * @full_array: original array
 */
void quick_sort_r(int *array, size_t size, int full_size, int *full_array)
{
	int i = 0;
	int x = 0;
	int has_swap = 0;
	int pivot = 0;

	pivot = (int)size - 1;
	while (i < pivot)
	{
		if (array[i] > array[pivot])
		{
			has_swap = 0;
			for (x = i + 1; x < pivot; x++)
			{
				if (array[x] < array[pivot])
				{
					swap_array(&array[x], &array[i]);
					has_swap = 1;
					print_array(full_array, full_size);
					break;
				}
			}
			if (!has_swap)
			{
				swap_array(&array[i], &array[pivot]);
				has_swap = 1;
				pivot = i;
				print_array(full_array, full_size);
				break;
			}
		}
		i++;
	}
	if (pivot > 0)
		quick_sort_r(array, pivot, full_size, full_array);

	if ((int)size - (pivot + 1) > 0)
		quick_sort_r(&array[pivot + 1], size - (pivot + 1), full_size, full_array);
}
