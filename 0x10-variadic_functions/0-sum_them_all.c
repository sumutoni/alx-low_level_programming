#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - performs summation of its arguments
 * @n: first parameter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i, sum;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
