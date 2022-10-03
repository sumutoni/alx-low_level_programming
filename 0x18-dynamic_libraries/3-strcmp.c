#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare strings
 * @s1: first string
 * @s2:second string
 *
 * Return: 0 if equal, negative int if s1<s2, positive int if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = strcmp(s1, s2);
	return (i);
}
