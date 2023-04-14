#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - allocates additional memory to a pointer
 * @ptr: pointer with old address
 * @old_size: old memor size
 * @new_size: new memory size
 * Return: pointer to new mem
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);

	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

