#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n)
 * in a doubly linked list.
 *
 * @head: Pointer to the hea of the list.
 * Return: Sum of the data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
