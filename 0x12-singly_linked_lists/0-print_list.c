#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print - print a number
 * @i: number to print
 */
void print(unsigned int i)
{
	if (i / 10)
		print(i / 10);
	_putchar((i % 10) + '0');
}
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
		print(next->len);
		_putchar(']');
		_putchar(' ');
		s = malloc(sizeof(char) * strlen(next->str));
		if (!s)
		{
			free(s);
			break;
		}
		s = next->str;
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		_putchar('\n');
		nodes++;
		next = next->next;
	}
	return (nodes);
}
