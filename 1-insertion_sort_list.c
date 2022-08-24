#include "sort.h"

/**
 * copy_listint_node - Copy a pointer of listint_t
 * @original: a pointer of listint_t
 * Return: return a copy of original node
 */
listint_t *copy_listint_node(listint_t *original)
{
	listint_t *list;
	int *tmp;

	list = malloc(sizeof(listint_t));
	if (!list)
		return (NULL);
	tmp = (int *)&list->n;
	*tmp = original->n;
	list->next = original->next;
	list->prev = original->prev;
	return (list);
}
/**
 * swap_listint_node - Swap two elements of a list
 * @list: pointer of a list
 * @first: a pointer of listint_t
 * @second: a pointer of listint_t
 */
void swap_listint_node(listint_t **list, listint_t *first, listint_t *second)
{
	listint_t *first_t;
	listint_t *second_t;
	int second_next_first = 0;

	first_t = copy_listint_node(first);
	second_t = copy_listint_node(second);
	second_next_first = first->next == second;

	first->next = second_t->next;
	first->prev = second_next_first ? second : second_t->prev;
	second->next = second_next_first ? first : first_t->next;
	second->prev = first_t->prev;

	if (!second_next_first)
	{
		first_t->next->prev = second;
		second_t->prev->next = first;
	}

	if (first_t->prev)
		first_t->prev->next = second;
	if (second_t->next)
		second_t->next->prev = first;

	if (!first_t->prev)
		*list = second;

	free(first_t);
	free(second_t);
}


/**
 * insertion_sort_list - instertion algorithm
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p = 0;

	if (!list)
		return;
	p = (*list);
	for (p = p->next; p; p = p->next)
	{
		if (p->n < p->prev->n)
		{
			swap_listint_node(list, p->prev, p);
			print_list(*list);
			insertion_sort_list(list);
			return;
		}
	}
}
