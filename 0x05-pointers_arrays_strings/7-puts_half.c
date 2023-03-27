#include "main.h"
#include <string.h>

/**
 * puts_half - prints half second of string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, MAX;

	MAX = strlen(str);

	if (MAX % 2 == 0)
	{
		for (i = (MAX / 2); i < MAX; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (j = (((MAX - 1) / 2) + 1); j < MAX; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
