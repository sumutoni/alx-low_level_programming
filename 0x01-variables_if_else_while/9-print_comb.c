#include <stdio.h>

/**
 * main - prints possible combo of single-digit values
 *
 * Return: 0 signify success
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
