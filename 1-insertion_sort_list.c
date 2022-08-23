#include "sort.h"

/**
 * swap - swaps two elements in a linked list
 * @temp: list temp
 * @p: current ppointer
 */

void swap(listint_t *temp, listint_t *p)
{
	int temp2 = 0;

	temp2 = temp->n;
	*((int *)&(temp->n)) = (int)p->n;
	*((int *)&(p->n)) = (int)temp2;
}

/**
 * insertion_sort_list - instertion algorithm
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p = *list, *temp = 0;

	if (!p)
		return;
	for (p = p->next; p; p = p->next)
	{
		if (p->n < p->prev->n)
		{
			swap(p, p->prev);
			print_list(*list);
			insertion_sort_list(list);
			return;
		}
	}
}
