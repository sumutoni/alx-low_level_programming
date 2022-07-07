#include "main.h"

/**
 * main - prints '_putchar' to stdout
 *
 * Return: 0 signify success
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
