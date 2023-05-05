#include "main.h"

void print_long_int(unsigned long int n);
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
	print_long_int(converted);
	/* _putchar('\n'); */
}

/**
 * print_long_int - prints a long int
 * @n: long int
 * Return: void
 */

void print_long_int(unsigned long int n)
{
	if (n / 10)
		print_long_int(n / 10);
	_putchar(n % 10 + '0');
}
