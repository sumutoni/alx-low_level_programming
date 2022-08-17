#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node to at the beginning of list
 * @head: pointer to pointer to head of list
 * @str: string to duplicate into added node
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *newHead;

	s = strdup(str);
	newHead = malloc(sizeof(list_t));
	if (!newHead || !s || !str)
	{
		free(newHead);
		free(s);
		return (NULL);
	}
	newHead->len = strlen(s);
	newHead->str = s;
	newHead->next =  *head;
	*head = newHead;
	return (*head);
}
