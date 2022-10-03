#include "main.h"
#include <string.h>

/**
 * _strspn - function returns the length of the 
 * initial substring of the string pointed to by str1
 * that is made up of only those character contained in 
 * the string pointed to by str2
 * @s: string to check in
 * @accept: string to search up for
 *
 * Return: the number of characters in the 
 * initial segment of str1 which consist 
 * only of characters from str2.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
