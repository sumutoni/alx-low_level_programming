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
	char *str;

	str = va_arg(list, char *);
	if (!str)
		printf("(nil)");
	else
		printf(s, str);
}
/**
 * print_all - prints anything passed to it
 * @format: list of types of arguments passed to the function
 * types are: c(char), i(int), f(float), s(string)
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list list;
	type typ[] = {{print_int_char},
		      {print_int_char},
		      {print_float},
		      {print_string}};

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				typ[0].pr("%c", list);
				break;
			case 'i':
				typ[1].pr("%d", list);
				break;
			case 'f':
				typ[2].pr("%f", list);
				break;
			case 's':
				typ[3].pr("%s", list);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
