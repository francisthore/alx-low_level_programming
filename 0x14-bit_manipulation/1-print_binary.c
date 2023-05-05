#include "main.h"

/**
 * print_binary - prints binary represantation of a number
 * @n: base 10 number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int converted;
	int i, j = 0;

	i = 63;
	while (i >= 0)
	{
		converted = n >> i;
		if (converted & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
		i--;
	}
	if (!j)
		_putchar('0');
}
