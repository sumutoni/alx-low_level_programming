#include "lists.h"

/**
 * sum_listint- calculates sum of elements of a listint_t list
 * @head: head of list
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	if (!head)
		return (0);
	node = head;
	sum = 0;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
