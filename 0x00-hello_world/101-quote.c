#include <stdio.h>

/**
 * main - display string to standard error
 *
 * Return: 1 to signify success
 */
int main(void)
{
	char str[120] = "and that piece of art is useful\" - Dora Korpar, 2015-1					0-19\n";

	fwrite(str, sizeof(str), 1, stderr);
	return (1);
}
