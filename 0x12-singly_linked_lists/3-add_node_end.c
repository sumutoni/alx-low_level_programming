#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node to at the end of list
 * @head: pointer to pointer to head of list
 * @str: string to duplicate into added node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newHead;
	list_t *next;
	list_t *prev;

	newHead = malloc(sizeof(list_t));
	next = malloc(sizeof(list_t));
	if (newHead == NULL || next == NULL)
	{
		free(newHead);
		free(next);
		return (NULL);
	}
	newHead->len = strlen(str);
	newHead->str = strdup(str);
	if (newHead->str == NULL)
	{
		free(newHead);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newHead;
		(*head)->next = NULL;
		return (newHead);
	}
	next = (*head)->next;
	while (next)
	{
		prev = next;
		next = next->next;
	}
	newHead->next = next;
	prev->next = newHead;
	return (newHead);
}
