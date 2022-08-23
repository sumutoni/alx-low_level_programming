#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	char bit;

	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	if (n >> 1)
	{
		print_binary(n >> 1);
		bit = ((n & 1) == 0) ? '0' : '1';
		_putchar(bit);
	}
}
