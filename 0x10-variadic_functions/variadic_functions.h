#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct types - struct for types of arguments
 * @pr: pointer to printing function
 * @str: formatted string
 * @sym: symbol
 */
typedef struct types
{
	void (*pr)(char *, va_list);
	char *str;
	char sym;
}type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
