#include <stdio.h>

/**
 * main - print digits from 0
 *
 * Return: 0 signify success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
