#include <stdio.h>
#include <stlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of integers
 * Return: 0 if success or 1 if error
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		exit(1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
