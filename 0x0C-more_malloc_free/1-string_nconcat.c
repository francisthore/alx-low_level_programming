#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates n bytes of string 2 to string 1
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be concat of s2
 * Return: ponter to concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	if (n >= strlen(s2))
		s = malloc((1 + strlen(s1)) + (strlen(s2)));
	else
		s = malloc((1 + strlen(s1)) + (sizeof(char) * n));
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	j = i;

	for (i = 0; i < n; i++)
	{
		s[j] = s2[i];
		j++;
	}
	s[j] = '\0';
	return (s);
}
