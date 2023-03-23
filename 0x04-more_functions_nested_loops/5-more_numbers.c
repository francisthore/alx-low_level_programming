#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints a number patter 0-14 10x
 * Description: prints 0-14 10x
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j / 10);
			if (j / 10 == 1)
			{
				_putchar('0' + j % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
