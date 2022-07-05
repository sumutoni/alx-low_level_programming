#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 *
 * Return: 0 signify success
 */
int main(void)
{
	ch alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
