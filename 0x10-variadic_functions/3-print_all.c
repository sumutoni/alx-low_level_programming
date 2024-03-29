#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_separator - prints separator
 * @c: character to print separator after
 * @d: next character
 *
 * Return: 1 for separator, 0 otherwise
 */
void print_separator(char c, char d)
{
	int j;
	char str[] = {'c', 'i', 'f', 's'};

	j = 0;
	while (j < 4 && d != '\0')
	{
		if (c == str[j])
		{
			printf(", ");
			break;
		}
		j++;
	}
}
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
		str = "(nil)";
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
				print_separator('c', format[i + 1]);
				break;
			case 'i':
				typ[1].pr("%d", list);
				print_separator('i', format[i + 1]);
				break;
			case 'f':
				typ[2].pr("%f", list);
				print_separator('f', format[i + 1]);
				break;
			case 's':
				typ[3].pr("%s", list);
				print_separator('s', format[i + 1]);
				break;
			default:
				print_separator(format[i], format[i + 1]);
				break;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
