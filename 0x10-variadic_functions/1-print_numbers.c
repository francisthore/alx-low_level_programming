#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers
 * @separator: separator between numbers
 * @n: counter
 * @...: numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(nums, int));
			break;
		}
		if (separator != NULL)
		{
			printf("%d%s", va_arg(nums, int), separator);
		}
		else
			printf("%d", va_arg(nums, int);
	}
	va_end(nums);
	putchar('\n');
}
