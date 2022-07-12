#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size - i; k++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
