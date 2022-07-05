#include <stdio.h>

/**
 * main - function to print alphabet in lowercase
 *
 * Return: 0 signify success
 */
int main(void)
{
	char alpha = 'a';
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
