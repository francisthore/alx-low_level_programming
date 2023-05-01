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
	if (va_arg(args, char *) == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", va_arg(args, char *));
}

/**
 * print_all - prints a formated string
 * @format: format string
 * @...: args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;

	fmt types[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string}
	};

	va_start(args, format);
	i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == *types[i].tp)
			types[i].f(args);
		i++;
	}
	va_end(args);
	putchar('\n');
}
