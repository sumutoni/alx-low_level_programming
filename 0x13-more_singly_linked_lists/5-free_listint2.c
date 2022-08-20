#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *prev;

	if (!head || *head == NULL)
		return;
	node = *head;
	while(node != NULL)
	{
		prev = node;
		node = node->next;
		free(prev);
	}
	*head = NULL;
}
