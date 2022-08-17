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
	char *s;
	list_t *newHead;
	list_t *next;
	list_t *prev;

	s = strdup(str);
	newHead = malloc(sizeof(list_t));
	next = malloc(sizeof(list_t));
	if (!newHead || !s || !str || !next)
	{
		free(newHead);
		free(s);
		free(next);
		return (NULL);
	}
	if (*head == NULL)
	{
		newHead->len = strlen(s);
		newHead->str = s;
		newHead->next = *head;
		*head = newHead;
	}
	next = (*head)->next;
	while (next)
	{
		prev = next;
		next = next->next;
	}

	newHead->len = strlen(s);
	newHead->str = s;
	newHead->next = next;
	prev->next = newHead;
	return (newHead);
}
