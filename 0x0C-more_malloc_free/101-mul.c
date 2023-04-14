#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two positive integers
 * @argc: argument counter
 * @argv: arrayy of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
	{
		printf("Error\n");
		exit(98);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
