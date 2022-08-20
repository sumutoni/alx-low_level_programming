#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
	listint_t *first;
	listint_t * second;
	size_t n;

	first = malloc(sizeof(listint_t));
	second = malloc(sizeof(listint_t));
	first->n = 120;
	second->n = 9;
	first->next = second;
	second->next = NULL;
	n = listint_len(first);
	printf("-> %lu elements\n", n);
	add_nodeint(&first, 2430);
	n = print_listint(first);
	printf("-> %lu elements\n", n);
	add_nodeint_end(&first, 23406);
	add_nodeint_end(&first, 12);
	n = print_listint(first);
	printf("-> %lu elements\n", n);
	return(0);
}
