#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings separated by a separator
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
			printf("%s%s", va_arg(list, *char), separator);
		}
		else
			printf("%s", va_arg(list, *char));
	}
	va_end(list);
	printf("\n");

}
