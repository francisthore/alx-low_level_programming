/**
 * _sqrt_recursion - calculates square root of a number
 * @n: number whose square root we are calculating
 * Return: the square root
 */
int sqrt_wrap(int n, int i);

int _sqrt_recursion(int n)
{
	return (sqrt_wrap(n, 1));
}

/**
 * sqrt_wrap - calculates the sqaureroot of a number
 * @n: number whose square root we are looking for
 * @i: a number to iterate recursiveley with
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
