#include "main.h"

/**
 * prime - checks if n is divisible by i
 * @n: number to check divisibilty
 * @i: number to check if it divides n
 *
 * Return: 1 if divisible 0 if not
 */
int prime(int n, int i)
{
	int res;

	res = 1;
	if (i <= (n / 2))
	{
		if ((n % i == 0) && (i != n))
		{
			return (0);
		}
		else
			res = prime(n, ++i);
	}
	return (res);
}
/**
 * is_prime_number -  checks if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	else
		return (prime(n, i));

}
