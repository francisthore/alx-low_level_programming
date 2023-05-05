#include "main.h"

/**
 * print_binary - prints binary represantation of a number
 * @n: base 10 number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int converted = 0, weight = 1, rem;

	while (n != 0)
	{
		rem = n & 1;
		converted = converted + rem * weight;
		n = n >> 1;
		weight *= 10;
	}
	_putchar('H');
}
