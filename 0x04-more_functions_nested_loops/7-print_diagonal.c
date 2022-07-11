#include "main.h"

/**
 * print_diagonal - print \, n number of times
 * @n: number of times to print \
 */
void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{	
				if (i == 1)
				{
					continue;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
