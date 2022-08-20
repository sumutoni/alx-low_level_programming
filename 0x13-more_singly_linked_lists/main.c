#include "lists.h"

int main(void)
{
	listint_t *first;
	listint_t *second;
	size_t n;

	first = malloc(sizeof(listint_t));
	second = malloc(sizeof(listint_t));
	first->n = 120;
	second->n = 9;
	first->next = second;
	second->next = NULL;
	n = print_listint(first);
	printf("->%lu elements\n", n);
	return(0);
}
