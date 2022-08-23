#include "main.h"

/**
 * clear_bit - set a bit to 0
 * @n: pointer to an int
 * @index: index of bit to set
 *
 * Return: 1 if secceeded, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	if (*n & (1 << index))
		*n = (*n ^ (1 << index));
	return (1);
}
