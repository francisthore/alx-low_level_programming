#include <stdio.h>

/**
 * linear_search - implementation of the linear search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be search
 * Return: -1 on failure or index of the element
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);
	if (!array[(size - 1)])
		return (-1);
	idx = 0;
	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
