#include <ctype.h>
/**
 * _isdigit - checks a digit
 * @c: digit
 * Description: checks if input is a digit
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
