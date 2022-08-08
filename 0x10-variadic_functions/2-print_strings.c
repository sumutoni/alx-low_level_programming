#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_null - check if string is null
 * @s: string
 */
void check_null (char *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}
/**
 * print_strings - print strings separated by a separator
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
				check_null(va_arg(list, char *));
				printf("%s", separator);
			}
			else
				check_null(va_arg(list, char *));
		}
		else
			check_null(va_arg(list, char *));
	}
	va_end(list);
	printf("\n");

}
