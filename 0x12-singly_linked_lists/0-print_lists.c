#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list - print elements of a list
 * @h: list of elements
 *
 * Return: number of elements printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	const list_t *next;
	char *s;

	next = h;
	nodes = 0;
	while (next != NULL)
	{
		_putchar('[');
		_putchar(next->len);
		_putchar(']');
		_putchar(' ');
		s = malloc(sizeof(char) * strlen(next->str));
		if (!s)
		{
			free(s);
			break;
		}
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		nodes++;
		next = next->next;
	}
	return (nodes);
}
