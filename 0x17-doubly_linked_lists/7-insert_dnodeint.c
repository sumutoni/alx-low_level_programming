#include "lists.h"

/**
 * count - returns number of nodes in list
 * @head: head of list
 *
 * Return: number of nodes
 */
unsigned int count(dlistint_t *head)
{
	unsigned int size = 0;
	dlistint_t *curr;

	curr = head;
	while (curr)
	{
		size++;
		curr = curr->next;
	}
	return (size);
}
/**
 * insert_dnodeint_at_index - inserts node at specific position in a list
 * @h: head of list
 * @idx: index of node
 * @n: value of new node
 *
 * Return: address of new node or NULL if failed to add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *prev, *node;
	unsigned int size, counter = 0;

	if (!h)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	size = count(*h);
	if (idx > size)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	if (idx == size || idx == size - 1)
		add_dnodeint_end(h, n);
	curr = *h;
	while (curr)
	{
		prev = curr;
		if (counter == idx)
			break;
		curr = curr->next;
		counter++;
	}
	node->prev = prev->prev;
	node->next = prev;
	node->prev->next = node;
	prev->prev = node;
	return (node);
}
