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
	int (*operation)(int, int);
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	ans = operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", ans);

	return (0);
}
