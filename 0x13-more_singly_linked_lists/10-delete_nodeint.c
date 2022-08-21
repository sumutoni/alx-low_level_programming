#include "lists.h"

/**
 * counted - counts number of nodes in list
 * @h: head of list
 *
 * Return: number of node
 */
unsigned int counted(listint_t *h)
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
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to pointer of head of list
 * @index: index ofnode to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size, idx;
	listint_t *node, *prev, *next;

	idx = 0;
	if (!head || *head == NULL)
		return (-1);
	size = counted(*head);
	if (index >= size)
		return (-1);
	node = *head;
	if (index == 0)
	{
		next = node->next;
		*head = next;
		return (1);
	}
	while (node && idx < index)
	{
		prev = node;
		node = node->next;
		next = node->next;
		idx++;
	}
	prev->next = next;
	return (1);
}
