#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * list_len - counts elements of a list
 * @h: list of elements
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t nodes;
	const list_t *next;

	next = h;
	nodes = 0;
	while (next != NULL)
	{
		nodes++;
		next = next->next;
	}
	return (nodes);
}
