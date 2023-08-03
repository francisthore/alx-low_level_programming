#include "main.h"

/**
 * print_binary - prints a number in binary
 * @n: a decimal number to be printed in binary
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int dec;
	int i, ctr;

	ctr = 0;
	for (i = 63; i >= 0; i--)
	{
		dec = n >> i;
		if (dec & 1)
		{
			_putchar('1');
			ctr++;
		}
		else if (ctr)
			_putchar('0');
	}
	if (!ctr)
	_putchar('0');
}
