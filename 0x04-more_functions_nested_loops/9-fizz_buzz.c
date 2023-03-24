#include <stdio.h>

/**
 * FizzBuzz - prints Fizz or Buzz
 * Description: Prints Fizz or Buzz or FizzBuzz
 * Return: void
 */

void FizzBuzz(void)
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
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}

/**
 * main - runs function above
 * Return: 0
 */

int main(void)
{
	FizzBuzz();
	return (0);
}
