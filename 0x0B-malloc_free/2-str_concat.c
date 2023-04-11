#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned long int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(((sizeof(char) * strlen(s1)) + (sizeof(char) * strlen(s2))) + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];

	j = i;

	for (i = 0; i < strlen(s2); i++)
	{
		str[j] = s2[i];
		j++;
	}

	return (str);
}
