#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * test_int - function to test if input is an integer
 * @value: value to test
 *
 * Return: 1 if yes, 0 if no
 */
int test_int(char *value)
{
	int i;

	for (i = 0; i < (int)strlen(value); i++)
	{
		if (value[i] >= 48 || value[i] <= 57)
			continue;
		else
			return (0);
	}
	return (1);
}
/**
 * main - receives 2 integers and multiply them
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, res, product;

	product = 1;
	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		res = test_int(argv[i]);
		if (res == 1)
		{
			product *= atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%d\n", product);
	return (0);
}
