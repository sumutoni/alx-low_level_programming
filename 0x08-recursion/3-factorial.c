#include "main.h"

/**
 * factorial - return factorial of an int
 * @n: integer to get factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
