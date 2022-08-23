#include "main.h"

/**
 * get_bit - get bit at index position
 * @n: number to convert to binary
 * @index: index of bit
 *
 * Return: value of bit, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
