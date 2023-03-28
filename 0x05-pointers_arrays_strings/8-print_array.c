#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n items of an array
 * @a: an array of integers
 * @n: number of items to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, MAX, *ptr;

	MAX = n;
	ptr = a;

	for (i = 0; i < MAX; i++)
	{
		if (i == MAX - 1)
		{
			printf("%d", *ptr);
		}
		else
		{
			printf("%d, ", *ptr);
		}
		ptr++;
	}
	putchar('\n');
}
