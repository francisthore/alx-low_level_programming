#include <stdarg.h>

/**
 * sum_them_all - adds all arguments
 * @n: counter of args
 * @...: list
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
