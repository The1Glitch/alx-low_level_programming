#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a certain index in a linked list.
 * @Head: First node in the linked list.
 * @Index: Index of the node to return.
 *
 * Return: Pointer of the new node we are looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
