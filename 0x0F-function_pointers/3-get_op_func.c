#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - selects correct function based on operation
 * @s: operator
 * Return: pointer to function that perfoms relant arithmetic
 */

int (*get_op_func(char *s))(int, int)
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

	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
