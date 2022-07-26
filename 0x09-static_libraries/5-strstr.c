#include "main.h"
#include <string.h>

/**
 * _strstr - function to find first occurence of a substring in a string
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);
	return (ptr);
}
