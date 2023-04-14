#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - alloctaes memory
 * @b: memory to be allocated
 * Return: memory location allocated
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (void *) malloc(b);

	if (ptr == NULL)
		return ((void *)98);
	return ((void *)ptr);
}
