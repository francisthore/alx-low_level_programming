#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - allocates a memory block that has a string copy
 * @str: original string
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *strdup;
	unsigned long int i;

	if (str == NULL)
		return (NULL);

	strdup = malloc(1 + sizeof(char) * strlen(str));

	if (strdup == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		strdup[i] = str[i];
	return (strdup);
}
