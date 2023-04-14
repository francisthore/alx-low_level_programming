#include <stdlib.h>
#include <stddef.h>
#include <strings.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each individual element
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr =  malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	bzero(ptr, nmemb * size);
	return (ptr);
}
