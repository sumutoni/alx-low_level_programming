#include "lists.h"
/**
 * add_dnodeint - adds node at the beginning of list
 * @head: pointer to head of list
 * @n: value to add
 *
 * Return: address of new node or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	node->n = n;
	node->prev = NULL;
	if (!head || *head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	node->next = *head;
	*head = node;
	return (node);
}
