#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *node;

	node = h;
	count = 0;
	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
