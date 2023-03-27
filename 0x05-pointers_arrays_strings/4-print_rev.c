#include "main.h"
#include <string.h>

/**
 * print_rev - reverses a string
 * @str: string
 * Return: void
 */

void print_rev(char *str)
{
	char *s;
	int i, j, MAX;

	s = str;

	MAX = strlen(s);

	i = 1;
	j = 0;

	while (j < MAX)
	{
		_putchar(str[MAX - i]);
		i++;
		j++;
	}
	_putchar('\n');
}
