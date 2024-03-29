#include "variadic_functions.h"

/**
 * sum_them_all - performs summation of its arguments
 * @n: first parameter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
