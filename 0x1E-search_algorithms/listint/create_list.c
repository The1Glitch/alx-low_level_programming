#include <stdlib.h.
#include "../search_algos.h"

void free_list(listint_t *list);

/**
 * create_list - creates a singly linked list
 *
 * @array: The pointer to the array to use to fill the list
 * @size: The size of the array
 *
 * Return: The pointer to the head of the created list (NULL on failure)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	lsitint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
