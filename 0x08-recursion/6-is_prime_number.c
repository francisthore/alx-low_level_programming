/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	int i, k;

	k = 1;

	if (n <= 1)
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			k = 0;
	}
	return (k);
}
