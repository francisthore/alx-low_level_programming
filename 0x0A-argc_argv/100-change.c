#include <stdlib.h>
#include <stdio.h>

/**
 * main - gives change in coins
 * @argc: numbner of argumts
 * @argv: array of money
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (*argv[1] < 0)
	{
		printf("0\n");
	}

	printf("Money/25: %d\n", atoi(argv[1]) / 25);
	printf("Money/25: %d\n", atoi(argv[1]) % 25);

	return (0);
}
