#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string
 * @str: string to copy
 *
 * Return: pointer to copy of the string passed
 */
char *_strdup(char *str)
{
	char *stcpy;
	int len;

	if (str == NULL)
		return (NULL);
	/*This is to avoid writing malloc(sizeof(str)); causes error*/
	len = strlen(str);
	stcpy = malloc(len + 5);
	if (stcpy == NULL)
		return (NULL);
	strcpy(stcpy, str);
	return (stcpy);
}
