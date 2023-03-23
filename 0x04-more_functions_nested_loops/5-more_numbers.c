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
			printf("%d", j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
