#include "lists.h"
/**
 * dlistint_len - returns number of nodes in list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *curr;

	if (!h)
		return (0);
	curr = h;
	while (curr)
	{
		size++;
		curr = curr->next;
	}
	return (size);
}
