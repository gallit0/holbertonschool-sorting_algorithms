#include "sort.h"

/**
 * quick_sort - quickest way to sort alogrithm
 * @array: array of ints
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, size, size - 1);
}
/**
 * quick_sort_recursion - quickest way to sort alogrithm
 * @array: array of ints
 * @size: size of the array
 * @pivot: selected pivot
 */
void quick_sort_recursion(int *array, size_t size, int pivot)
{
	int i = 0, j = 0, temp, check = 0;

	while (i < pivot)
	{
		if (array[i] >= array[pivot])
		{
			j = i;
			for (; j < pivot; j++)
			{
				if (array[j] < array[i])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					break;
				}
			}
			temp = array[pivot];
			array[pivot] = array[i];
			array[i] = temp;
			check++;
		}
		i++;
	}
	if (check != 0)
	{
		print_array(array, size);
		quick_sort_recursion(array, size, pivot - 1);
	}
}
