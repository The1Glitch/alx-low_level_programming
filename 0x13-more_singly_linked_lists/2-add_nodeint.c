#include "lists.h"

/**
 * Add_nodeint - Add a new node at the beginning of a link.
 * @head: Pointers to the first node in the list.
 * @n: Data which inserts in the new node.
 *
 * Return: Pointers to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
