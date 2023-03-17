#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	while (i < 10)
	{
		putchar('0' + digits[i]);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
