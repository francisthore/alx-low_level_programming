#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints evry other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i, MAX;

	MAX = strlen(str);

	for (i = 0; i < MAX; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
