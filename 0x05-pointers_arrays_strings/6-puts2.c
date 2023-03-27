#include "main.h"
#include <string.h>

/**
 * puts2 - prints evry other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i, j, MAX;

	MAX = strlen(str);
	j = 0;

	for (i = 0; i <= MAX; i++)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
