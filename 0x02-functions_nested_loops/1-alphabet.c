#include "main.h"

/**
 * main - function to print alphabet in lowercase
 *
 * Return: 0 signify success
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
											}
	_putchar('\n');
	return (0);

}
