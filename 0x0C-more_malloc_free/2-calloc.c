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
	void *ptr;
	unsigned int i, j;

	(void)i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	ptr =  malloc(j);
	if (ptr == NULL)
		return (NULL);
	/**
	* for (i = 0; i < nmemb; i++)
	*	ptr[i] = 0;
	*/
	return (ptr);
}
