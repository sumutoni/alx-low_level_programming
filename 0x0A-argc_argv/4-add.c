#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * check_symbol - checks if there is a non digit symbol in string
 * @s: string
 *
 * Return: 1 if there is 0 if not
 */
int check_symbol(char *s)
{
	if (atoi(s) == 0 && s != "0")
		return (0);
	else
		return (1);
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
			if (check == 1)
				num += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", num);
	}
	else if (argc == 1)
		printf("0\n");
	else
	{
		printf("Error\n");
		return (1);
	}
}
