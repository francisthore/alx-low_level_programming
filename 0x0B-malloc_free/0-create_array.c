#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: char to initialize
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
