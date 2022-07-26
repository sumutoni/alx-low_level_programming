#include "main.h"

/**
 * check_sign - check how many - signs are there
 * @s: string to check in
 *
 * Return: -1 if number is odd and +1 if even
 */
int check_sign(char *s)
{
	int i, total;

	total = 0;
	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == '-')
		{
			total++;
		}
	}
	if (total % 2 == 0)
		return (1);
	return (-1);
}
/**
 * check_int - check if there are integers in string
 * @s: string to check in
 *
 * Return: 0 if none and a + int if there are
 */
int check_int(char *s)
{
	int i, num;

	num = 0;
	for (i = 0; i != '\0'; i++)
	{
		if (s[i] >= '0' || s[i] <= '9')
			num++;
	}
	return (num);
}
/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign, num, num2;

	num = 0;
	num2 = check_int(s);
	sign = check_sign(s);
	if (num2)
	{
		for (i = 0; i != '\0'; i++)
		{
			if (s[i] >= '0' || s[i] <= '9')
			{
				num = num * 10 + s[i] - '0';
			}
		}
	}
	return (num * sign);
}
