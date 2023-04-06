int is_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - returns 1 if a number is prime
 * @n: number to be checked
 * @i: recursion looper
 * Return: 1 if number is prime, else 0
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	is_prime(n, i + 1);
	return (1);
}
