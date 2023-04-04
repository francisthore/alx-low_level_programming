#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagnals of a sqaure matrix of integers
 * @a: 2d array of integers
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k;

	i = 0;

	j = 0;

	while (i <= size * size)
	{
		j = j + a[i];
		i = i + size + 1;
	}

	i = size - 1;

	k = 0;

	while (i < size * size)
	{
		k = k + a[i];
		i = i + size - 1;
	}

	printf("%d, %d\n", j, k);
}
