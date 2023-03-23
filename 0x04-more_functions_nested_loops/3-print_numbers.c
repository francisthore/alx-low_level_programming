#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9
 * Description: prints 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
}
