#include <stdio.h>
/**
 * print_most_numbers - prints numbers from 0 to 9 exept 2 and 4
 * Description: prints 0 to 9 besides 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
		
		}
		else
		{
			putchar('0' + i);
		}
		i++;
	}
	putchar('\n');
}
