#include "main.h"

/**
 * count_binary - counts bits in binary representation of a number
 * @n: number to convert
 * @count: counts position
 * @idx: index of bit
 *
 * Return: value of bit at position idx
 */
char count_binary(unsigned long int n, unsigned int count, unsigned int idx)
{
	char bit;

	if (n == 0)
	{
		bit = '0';
		return (bit);
	}
	if (n == 1)
	{
		bit = '1';
		return (bit);
	}
	if (n >> 1)
	{
		count++;
		bit = count_binary(n >> 1, count, idx);
		if (count == idx)
			return (bit);
		bit = ((n & 1) == 0) ? '0' : '1';
	}
	return (bit);
}
/**
 * get_bit - get bit at index position
 * @n: number to convert to binary
 * @index: index of bit
 *
 * Return: value of bit, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int count;

	count = -1;
	bit = count_binary(n, count, index) - '0';
	return (bit);
}
