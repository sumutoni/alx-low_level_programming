#include "lists.h"

/**
 * counte - counts number of nodes in list
 * @h: head of list
 *
 * Return: number of node
 */
unsigned int counte(listint_t *h)
{
	unsigned int count;
	listint_t *node;

	node = h;
	count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
/**
 * insert_nodeint_at_index - insert a node at given index
 * @head: pointer to head
 * @idx: index where to insert
 * @n: value
 *
 * Return: address of new inserted node or NULL if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index, size;
	listint_t *node;
	listint_t *prev;
	listint_t *new;

	if (!head)
		return (NULL);
	size = counte(*head);
	if (size <= idx)
		return (NULL);
	index = 0;
	node = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 || *head == NULL)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node && index < idx)
	{
		prev = node;
		node = node->next;
		index++;
	}
	prev->next = new;
	new->next = node;
	return (new);
}
