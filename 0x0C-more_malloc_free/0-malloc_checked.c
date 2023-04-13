#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - alloctaes memory
 * @b: memory to be allocated
 * Return: memory location allocated
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		return ((void *)98);
	return (malloc(b));
}
