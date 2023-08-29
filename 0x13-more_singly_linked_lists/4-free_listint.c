#include "lists.h"

/**
 * Free_listin - Free a linked list.
 * @Head: listin_t Frees the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
