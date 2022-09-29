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
 * get_dnodeint_at_index - returns nth node of list
 * @head: head of list
 * index: index of node
 *
 * Return: node at nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int size, count = 0;

	if (!head)
		return (NULL);
	size = count(head);
	if (index >= size)
		return (NULL);
	curr = head;
	while (curr)
	{
		if (count == index)
			break;
		curr = curr->next;
		count++;
	}
	return (curr);
}
