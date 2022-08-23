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
	int i = 0, temp, check = 0;

	while (i < pivot)
	{
		if (array[i] > array[pivot])
		{
			temp = array[pivot];
			array[pivot] = array[i];
			array[i] = temp;
			check++;
			break;
		}
		i++;
	}
	if (pivot > 0)
	{
		if (check)
			print_array(array, size);
		quick_sort_recursion(array, size, pivot - 1);
	}
}
