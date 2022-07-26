#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: string array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, num;

	num = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num *= atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
