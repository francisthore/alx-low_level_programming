#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each individual element
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (malloc(nmemb * size) == NULL)
		return (NULL);
	return (malloc(nmember * size));
}
