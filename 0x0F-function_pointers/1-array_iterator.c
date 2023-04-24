#include <stddef.h>

/**
 * array_iterator - iterates through an array
 * @array: array to be iterated
 * @size: size of array
 * @action: ponter to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
