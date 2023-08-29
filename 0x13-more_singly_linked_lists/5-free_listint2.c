#include "lists.h"

/**
 * free_listint2 - Free alinked list.
 * @Head: Pointer to the listint_t list to be free.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
