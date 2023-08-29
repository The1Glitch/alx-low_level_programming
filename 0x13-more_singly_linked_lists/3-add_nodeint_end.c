#include "lists.h"

/**
 * Adds_nodeint_end - Adds a node ata the end of the linked list.
 * @Head: Pointers to the new element in the list.
 * @n: Data to insert in the new element.
 *
 * Return: Pointers to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
