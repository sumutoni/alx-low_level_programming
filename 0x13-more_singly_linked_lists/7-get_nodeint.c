#include "lists.h"

/**
 * counter - counts nodes in list
 * @h: head of list
 *
 * Return: number of nodes
 */
int counter (listint_t *h)
{
	int count;
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
 * get_nodeint_at_index - returns nth node of linked list
 * @head: head of list
 * @index: index of the node
 *
 * Return: node or Null if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	int ind, size;

	index = 0;
	node = head;
	size = counter(head);
	if (head == NULL)
		return (NULL);
	if (size < index)
		return (NULL);
	while (node)
	{
		if (index == ind)
			break;
		else
		{
			node = node->next;
			ind++;
		}
	}
	return (node);
}
