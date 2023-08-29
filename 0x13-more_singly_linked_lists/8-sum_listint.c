#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the data in the listint_t list.
 * @Head: First node in the linked list.
 *
 * Return: Results in sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
