#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 * @head: head of list
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr;

	if (!head)
		return (sum);
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
