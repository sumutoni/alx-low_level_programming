#include "lists.h"

/**
 * get_size - gets number of nodes in list
 * @h: head of list
 *
 * Return: size of list
 */
int get_size(listint_t *h)
{
	int size;
	listint_t *node;

	node = h;
	size = 0;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}
/**
 * pop_listint - deletes the head node
 * @head: head node
 *
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int value, size;

	if (!head || *head == NULL)
		return (0);
	node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = node;
	return (value);
}
