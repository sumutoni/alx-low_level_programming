#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint - add node to at the beginning of list
 * @head: pointer to pointer to head of list
 * @n: value of node to add
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead;

	newHead = malloc(sizeof(listint_t));
	if (!newHead)
	{
		free(newHead);
		return (NULL);
	}
	newHead->n = n;
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
