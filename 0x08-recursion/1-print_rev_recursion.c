#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *@s: string to be reversed
 *Return: void
 */
int i = 1;

void _print_rev_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		return;
	}
	_putchar(s[strlen(s) - i]);
	i++;
	_print_rev_recursion(s + 1);
}
