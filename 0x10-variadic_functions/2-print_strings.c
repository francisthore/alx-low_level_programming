#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints string args
 * @separator: separator
 * @n: num of strings
 * @...: strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (!str)
			str = "(nil)";
		if (i == n - 1)
		{
			printf("%s", str);
			break;
		}
		if (separator != NULL)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	va_end(strings);
	printf("\n");
}
