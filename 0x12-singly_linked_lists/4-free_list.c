#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free list of elements
 * @head: first element
 */
void free_list(list_t *head)
{
	list_t *prev;
	
	if (!head)
		return;
	while (head)
	{
		prev = head;
		head = head->next;
		free(prev->str);
		free(prev);
	}
}
