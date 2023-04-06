#include <math.h>

/**
 * _pow_recursion - returns x raised to y
 * @x: base
 * @y: power
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (_pow_recursion(x, y - 1) * x);
}
