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
	char s[] = "";

	MAX = strlen(str);

	for (i = 0; i <= MAX; i += 2)
	{
		s[i / 2] = str[i];
	}
	printf("%s\n", s);
}
