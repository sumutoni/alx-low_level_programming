#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int_char - print int or char argument
 * @list: va_list
 * @s: formatted string
 */
void print_int_char(char *s, va_list list)
{
	printf(s, va_arg(list, int));
}
/**
 * print_float - print float argument
 * @list: va_list
 * @s:formatted string
 */
void print_float(char *s, va_list list)
{
	printf(s, va_arg(list, double));
}
/**
 * print_string - print string argument
 * @list:va_list
 * @s: formatted string
 */
void print_string(char *s, va_list list)
{
	if (va_arg(list, char *) == NULL)
		printf("(nil)");
	else
		printf(s, va_arg(list, char *));
}
/**
 * print_all - prints anything passed to it
 * @format: list of types of arguments passed to the function
 * types are: c(char), i(int), f(float), s(string)
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list list;
	type typ[] = {{print_int_char, "%d", 'i'},
		      {print_int_char, "%c", 'c'},
		      {print_float, "%f", 'f'},
		      {print_string, "%s", 's'}};

	va_start(list, format);
	i = 0;
	j = 0;
	while (format && format[i])
	{
		while (format[i] != typ[j].sym)
			j++;
		if (format[i] == typ[j].sym)
		{
			typ[j].pr(typ[j].str, list);
			printf(", ");
		}
		else
			typ[j].pr(typ[j].str, list);
		j++;
	}
	va_end(list);
	printf("\n");
}
