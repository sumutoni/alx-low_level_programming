#include"function_pointers.h"

/**
 * print_name - function that prints name with use of function pointer
 * @name: string to be printed
 * @f: pointer to function that will print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
