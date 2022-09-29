#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	if (head->next == NULL)
	{
		free(head);
		head = NULL;
		return;
	}
	if (head->next)
	{
		free_dlistint(head->next);
		free(head);
	}
}
