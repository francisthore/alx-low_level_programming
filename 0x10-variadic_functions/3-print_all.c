#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: va_lis of args
 * Return: void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list of args
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: list of args
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: list of args
 * Return: void
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - prints a formated string
 * @format: format string
 * @...: args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *seperator = "";

	fmt types[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string}
	};

	va_start(args, format);
	i = 0;
	(void)types;
	while (format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *types[j].tp)
			{
				printf("%s", seperator);
				types[j].f(args);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	putchar('\n');
}
