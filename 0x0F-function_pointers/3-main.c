#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - perfoms arithmetic
 * @argc: number of args
 * @argv: array of args
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	return (0);
}
