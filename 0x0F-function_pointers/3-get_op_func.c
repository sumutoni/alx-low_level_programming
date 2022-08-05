#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct function to perform the operation 
 * asked by the user
 * @s: operation to perform
 * @a: integer
 * @b: integer
 *
 * Return: result of operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (*(ops[i].op) != *s && i < 5)
	{
		i++;
	}
	if (*(ops[i].op) == *s)
	{
		return (ops[i].f);
	}
	return (NULL);
}
