#include <stdio.h>
/**
 * print_to_98 - prints to 98 from both sides
 *@n: a number
 * Description: prints to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n++;
		}
		printf("%d", 98);
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			putchar(',');
			putchar(' ');
			n--;
		}
		printf("%d", 98);
		putchar('\n');
	}
}
