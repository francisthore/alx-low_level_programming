#include <stddef.h>

/**
 * int_index - returns the index to a matching integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of 1st match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
