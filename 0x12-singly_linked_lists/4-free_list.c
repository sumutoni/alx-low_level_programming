#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free list of elements
 * @head: first element
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *prev;

	node = head;
	while (node)
	{
		prev = node;
		node = node->next;
		free(prev);
	}
}
