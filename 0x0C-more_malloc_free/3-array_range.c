#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting num
 * @max: ending number
 * Return: pointer to arrat or null
 */

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
