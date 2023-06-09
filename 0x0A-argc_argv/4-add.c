#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: array of integers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(*argv[i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
