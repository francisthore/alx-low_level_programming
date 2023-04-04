#include "main.h"

/**
 * print_chessboard - prints a chess board from a 2d array
 * @a: a 2d array resembling a chessboad
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
