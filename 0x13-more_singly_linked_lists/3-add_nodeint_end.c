#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: pointer to pointer to head of list
 * @n: value of node to add
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newHead;
	listint_t *node;
	newHead = malloc(sizeof(listint_t));
	if (!newHead)
	{
		free(newHead);
		return (NULL);
	}
	node = *head;
	newHead->n = n;
	newHead->next = NULL;
	if (*head == NULL)
		*head = newHead;
	else
	{
		while (node->next)
			node = node->next;
		node->next = newHead;
	}
	return (newHead);
}
