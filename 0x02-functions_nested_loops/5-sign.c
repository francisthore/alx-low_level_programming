#include <stdio.h>
/**
 * print_sign - prints sign of num
 * @n: an int that is checked sign
 *
 * Desciption: takes in a num and check the sign
 * Return: an int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
