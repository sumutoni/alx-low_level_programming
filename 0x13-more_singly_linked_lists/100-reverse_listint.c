#include "lists.h"

/**
 * reverse - recursively reverse a list
 * @h: head of list
 *
 * Return: address to head of reversed list
 */
listint_t *reverse(listint_t *h)
{
	listint_t *prev, *node, *newHead;

	if (h->next)
	{
		prev = h;
		node = h->next;
		newHead = reverse(node);
	}
	if (h->next == NULL)
	{
		newHead = h;
		return(newHead);
	}
	node->next = prev;
	prev->next = NULL;
	return (newHead);
}
/**
 * reverse_listint - reverses a list
 * @head - pointer to pointer of head of list
 *
 * Return: address to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *newHead;

	if (!head || *head == NULL)
		return (NULL);
	newHead = reverse(*head);
	return (newHead);
}
