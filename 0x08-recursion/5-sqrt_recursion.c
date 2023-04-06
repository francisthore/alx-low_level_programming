int sqrt_wrap(int, int);

/**
 * _sqrt_recursion - returns square root of a number
 * @n: number whose square root we are calculating
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_wrap(n, 1));
}

/**
 * sqrt_wrap - calculates the sqaureroot of a number
 * @n: number whose square root we are looking for
 * @i: recursion looper
 * Return: square root
 */

int sqrt_wrap(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_wrap(n, i + 1));
}
