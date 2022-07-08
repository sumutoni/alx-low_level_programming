#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - function that prints last digit of number
 * @n: number
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = n % 10;
		digit = abs(digit);
	}
	else
	{
		digit = n % 10;
	}
	_putchar('0' + digit);
	return (digit);
}
