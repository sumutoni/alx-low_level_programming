#include "lists.h"

/**
 * listint_len - returns number of elements of a listint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *node;

	node = h;
	count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
