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
 * delete_dnodeint_at_index - returns nth node of list
 * @head: head of list
 * @index: index of node
 *
 * Return: 1 for success -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int size, counter = 0;

	if (!head || !*head)
		return (-1);
	size = count(*head);
	if (index >= size)
		return (-1);
	if (index == 0)
	{
		if (size > 1)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		return (1);
	}
	curr = *head;
	while (curr)
	{
		if (counter == index)
			break;
		curr = curr->next;
		counter++;
	}
	if (index == size - 1)
		curr->prev->next = curr->next;
	else
	{
		curr->prev->next = curr->next;
		curr->next->prev = curr->prev;
	}
	curr->prev = NULL;
	curr->next = NULL;
	free(curr);
	curr = NULL;
	return (1);
}
