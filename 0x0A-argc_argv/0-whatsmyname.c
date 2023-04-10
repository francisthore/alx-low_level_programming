#include <stdio.h>

/**
 * main - runs the code
 * @argc:  arguments counter
 * @argv: array of arguments from the cmd
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
