#include "main.h"

/**
 * get_endiannes - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *end;

	n = 1;
	*end = (char)&n;
	return (*end);
}
