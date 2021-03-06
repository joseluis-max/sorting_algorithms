#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 *
 * @list: Double linked list to be ordered
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *c_outer = *list;

	if (list == NULL || *list == NULL)
		return;
	while (c_outer->next != NULL)
	{
		if (c_outer->n > c_outer->next->n)
			swap(list, c_outer->next);
		else
			c_outer = c_outer->next;
	}
}
/**
 * swap - interchange two nodes and make bubble sort reverse
 * @list: double pointer to linked list
 * @c_inner: current node in linked list.
 */
void swap(listint_t **list, listint_t *c_inner)
{
	while (c_inner->prev != NULL && c_inner->n < c_inner->prev->n)
	{
		/* REMOVE */
		c_inner->prev->next = c_inner->next;
		if (c_inner->next != NULL)
			c_inner->next->prev = c_inner->prev;
		/* insert node to new position*/
		c_inner->next = c_inner->prev;
		c_inner->prev = c_inner->prev->prev;
		/* Connect Adjacent nodes to node */
		c_inner->next->prev = c_inner;
		if (c_inner->prev == NULL)
			*list = c_inner;
		else
			c_inner->prev->next = c_inner;
		print_list(*list);
	}
}
