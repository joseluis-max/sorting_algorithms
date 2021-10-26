#ifndef _SORT_H_
#define _SORT_H_
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void swap(listint_t **list, listint_t *current);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
int _pow(int x, int y);
size_t _length(listint_t **list);
void swap_left(listint_t **list, listint_t *node);
void cocktail_sort_list(listint_t **list);

#endif /* sort.h */
