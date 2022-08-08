#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers separated by a separator
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_integers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			if (separator)
			{
				printf("%d%s", va_arg(list, int), separator);
			}
			else
				printf("%d", va_arg(list, int));
		}
		else
			printf("%d", va_arg(list, int));
	}
	va_end(list);
	printf("\n");

}
