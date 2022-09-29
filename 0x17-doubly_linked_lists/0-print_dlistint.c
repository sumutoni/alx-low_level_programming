#include "lists.h"

/**
 * print_dlistint - prints all element of dlistint
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *curr;

	if (!h)
		return (0);
	curr = h;
	while (curr)
	{
		printf("%d\n", curr->n);
		size++;
		curr = curr->next;
	}
	return (size);
}
