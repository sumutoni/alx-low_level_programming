#include "main.h"

/**
 * count - counts non-zero bits
 * @n: number to convert
 *
 * Return: number of non-zero bits
 */
unsigned int count(unsigned long int n)
{
	char bit;
	unsigned int counter;

	counter = 0;
	if (n == 0)
		return (0);
	if (n == 1)
	{
		return (1);
	}
	if (n >> 1)
	{
		counter += count(n >> 1);
		bit = ((n & 1) == 0) ? '0' : '1';
		if (bit == '1')
			counter++;
	}
	return (counter);
}
/**
 * flip_bits - counts number of flips number to get to another number
 * @n: first number
 * @m: second number
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	unsigned int flips;

	p = (n ^ m);
	flips = count(p);
	return (flips);
}
