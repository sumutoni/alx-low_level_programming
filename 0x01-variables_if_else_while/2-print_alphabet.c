#include <stdio.h>

/**
 * main - function to print alphabet in lowercase
 *
 * Return: 0 signify success
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar("\n");
	return(0);
}
