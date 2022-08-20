#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * check_negative - checks if num is negative
 * @i: integer
 *
 * Return: that integer
 */
int check_negative(int i)
{
	if (i < 0)
	{
		return (1);
	}
	return (0);
}
/**
 * print_num - prints an intger
 * @i: integer to print
 */
void print_num(int i)
{
	unsigned int num;

	if (check_negative(i))
	{
		_putchar('-');
		num = -i;
	}
	else
		num = i;
	if (i == 0)
		return;
	print_num(num / 10);
	_putchar((num % 10) + '0');
}
/**
 * print_zero - prints zero
 */
void print_zero(void)
{
	_putchar('0');
}
