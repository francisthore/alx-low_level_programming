#include <stdio.h>

/**
 * main - the code
 * Return: 0
 */

int main(void)
{
	int i, j, k, num, factor;

	i = 1;
	k = 1;
	num = 1231952;

	while (i <= num)
	{
		if (num % i == 0)
		{
			factor = i;

			printf("%d is a factor of %d\n", factor, num);

			for (j = 2; j < factor; j++)
			{
				if (factor % j == 0)
				{
					k = 0;
				}
			}

			if (k == 1)
			{
				printf("%d is a prime factor.\n", factor);
			}

		}
		i++;
	}
	return (0);
}
