#include "lists.h"

/**
 * pop_listint - Delete the head node of the linked list.
 * @head: Pointers the the first ele in the linked list.
 *
 * Return: Data in the ele which was deleted,
 * or 0 if the list is found empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
