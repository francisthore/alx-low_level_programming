#include <stdlib.h>
#include <stdio.h>

/**
 * main - gives change in coins
 * @argc: numbner of argumts
 * @argv: array of money
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money, m25, m25r, m10, m10r, m5, m5r, m2, m2r, m1, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	money = atoi(argv[1]);
	m25 = money / 25;
	m25r = money % 25;
	m10 = m25r / 10;
	m10r = m25r % 10;
	m5 = m10r / 5;
	m5r = m10r % 5;
	m2 = m5r / 2;
	m2r = m5r % 2;
	m1 = m2r / 1;

	if (m25 > 0)
		coins += m25;
	if (m25r > 0)
		coins += m10;
	if (m10r > 0)
		coins += m5;
	if (m5r > 0)
		coins += m2;
	if (m2r > 0)
		coins += m1;

	printf("%d\n", coins);

	return (0);
}
