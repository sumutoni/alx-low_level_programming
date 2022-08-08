#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers separated by a separator
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		exit(0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d%c ", va_arg(list, unsigned int), *separator);
		}
		else
			printf("%d", va_arg(list, unsigned int));
	}
	printf("\n");

}
