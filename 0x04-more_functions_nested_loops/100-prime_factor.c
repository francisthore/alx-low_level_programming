#include <stdio.h>

/**
 * main - the code
 * Return: 0
 */

int main(void)
{
	int i, j, k, num;

	i = 2;
	k = 1;
	num = 1231952;

	while (i <= num)
	{
		if (num % i == 0)
		{
			printf("%d is a factor of %d\n", i, num);

			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					k = 0;
				}
			}

			if (k == 1)
			{
				printf("%d is a prime factor.\n", i);
			}

		}
		i++;
	}
	return (0);
}
