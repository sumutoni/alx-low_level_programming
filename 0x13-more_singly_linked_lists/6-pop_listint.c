#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head node
 *
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int value;

	if (!head || *head == NULL)
		return (0);
	node = (*head)->next;
	value = (*head)->n;
	*head = node;
	return (value);
}
