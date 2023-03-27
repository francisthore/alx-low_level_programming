#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char *str;
	int i, j, MAX;

	str = s;

	MAX = strlen(str);

	i = 0;
	j = 1;

	while (i < MAX)
	{
		putchar(str[MAX - j]);
		i++;
		j++;
	}
	putchar('\n');

}
