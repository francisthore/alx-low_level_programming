#include <stdlib.h>
#include <stdio.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of integers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		exit(0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
