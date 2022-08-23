#include "sort.h"

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
	printf("PIVOT = %d - SIZE %d -- ARRAY 0 %d\n ", pivot,(int) size, array[0]);
	if ((int)size <= 0)
	{
		puts("SALGOOOOOO\n\n\n\n\n\n\n\n");
		return;
	}
	while (i < pivot)
	{
		if (array[i] > array[pivot])
		{
			puts("entra 1");
			has_swap = 0;
			for (x = i + 1; x < pivot; x++)
			{
				if (array[x] < array[pivot])
				{
					puts("SAWP");
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
				printf("PIVOT %d - SUBPIVOT %d\n", array[pivot], array[i]);
				puts("swapea pivot");
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
	if (has_swap > 0 && (int)size > 0 && pivot < (int)size);
	{
		printf("Distribuir - %d\n", has_swap);

		if (has_swap == 0)
			return;
		if (pivot > 0)
		{
			puts("PRIMERO");
			quick_sort_recursion(array, size, pivot - 1, full_size, full_array);
		}
		if (((int)size - 2) > 0)
		{
			puts("SEGUNDO");
			quick_sort_recursion(&array[i + 1], size - (i + 1), (int)size - 2, full_size, full_array);
		}
	}
}
