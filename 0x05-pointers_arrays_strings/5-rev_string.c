#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, MAX;

	MAX = strlen(s);

	for (i = 0; i < MAX / 2; i++)
	{
		j = s[i];
		s[i] = s[MAX - i - 1];
		s[MAX - i - 1] = j;
	}
}
