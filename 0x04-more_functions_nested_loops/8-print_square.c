#include "main.h"

/**
 * print_square - function to print square
 * @size: number of rows and columns
 */
void print_square(int size)
{
	int i, j;	

	if (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
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
