#include "lists.h"

/**
 * print_listsint - Print all the elements of linked list.
 * @h: link list of type listint_t to point.
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
