#include "main.h"
#include <string.h>

/**
 * print_chessboard - function to print chessboard
 * @a: array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j, len;

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
