#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints a binary represendation of a number
 * @n: a decimal number
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int dec_var;
	int i, counter;

	i = 63;
	counter = 0;
	while (i >= 0)
	{
		dec_var = n >> i;
		if (dec_var & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
		i--;
	}
	if (!counter)
	{
		_putchar('0');
	}
}
