#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i, j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (j != 9)
			{
				if (prod < 10 && j != 0)
				{
					_putchar(' ');
					_putchar((prod % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (prod < 10)
				{
					_putchar(' ');
					_putchar((prod % 10) + '0');
				}
				else
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
