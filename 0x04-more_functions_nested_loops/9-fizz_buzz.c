#include <stdio.h>
/**
 * main - prints fuzz for multiples of 3 and buzz for multiples of 5
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			putchar(' ');
		}
		else
		{
			printf("%d ", i);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}

