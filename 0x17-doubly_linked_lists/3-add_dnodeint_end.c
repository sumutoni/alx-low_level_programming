#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of list
 * @head: pointer to head of list
 * @n: value to add
 *
 * Return: address of new node or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *curr, *prev;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	if (!head)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	curr = *head;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = node;
	node->prev = prev;
	return (node);
}
