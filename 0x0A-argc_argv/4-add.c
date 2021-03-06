#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * check_symbol - checks if there is a non digit symbol in string
 * @s: string
 *
 * Return: 1 if there is, 0 if not
 */
int check_symbol(char *s)
{
	int res, i;

	for (i = 0; i < (int)strlen(s); i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			res = 0;
			break;
		}
		else
			res = 1;
	}
	return (res);
}
/**
 * to_int - function to convert string to integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int to_int(char *s)
{
	int i, num;

	num = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + s[i] - '0';
		i++;
	}
	return (num);
}
/**
 * main - adds 2 numbers
 * @argc: number of arguments
 * @argv: string array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, num, check;

	num = 0;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			check = check_symbol(argv[i]);
			if (check == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				num += to_int(argv[i]);
			}
		}
		printf("%d\n", num);
	}
	else
		printf("0\n");
	return (0);
}
