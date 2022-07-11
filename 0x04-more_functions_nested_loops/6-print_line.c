#include "main.h"

/**
 * print_line - print _ n number of times
 * @n: number of times to print _
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
