#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of
 * Description: print triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;

		while (i <= size)
		{
			j = size - i;

			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			k = 1;

			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
