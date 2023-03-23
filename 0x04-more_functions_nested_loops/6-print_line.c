#include "main.h"
/**
 * print_line - prints line
 * @n: integer determining how many times a line is printed
 * Descriptiom: prints space n x
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
