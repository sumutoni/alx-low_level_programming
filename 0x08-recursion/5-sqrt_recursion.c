#include "main.h"

/**
 * _sqrt - computes square root recursively
 * @n: number to get square root of
 * @i: possible root
 *
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int res;

	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	res = _sqrt(n, ++i);
	return (res);
}
/**
 * _sqrt_recursion - gets the square root of a number
 * @n: number 
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i, res;

	i = 0;
	if (n < 0)
		return (-1);
	res = _sqrt(n, i);
	return (res);
}
