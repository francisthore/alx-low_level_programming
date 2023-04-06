#include <string.h>
#include "main.h"

void revstr(char *s, int i);

/**
 * _print_rev_recursion - prints a string in reverse
 *@s: string to be reversed
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	revstr(s, 1);
}

/**
 * revstr - reverses a string and prints it
 * @s: the string to be reversed
 * @i: recursion looper
 * Return: void
 */

void revstr(char *s, int i)
{
	if (strlen(s) == 0)
		return;
	_putchar(s[strlen(s) - i]);
	revstr(s + 1, i + 1);
}
