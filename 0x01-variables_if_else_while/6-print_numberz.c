#include <stdio.h>

/**
 * main - print digits from 0
 *
 * Return: 0 signify success
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
