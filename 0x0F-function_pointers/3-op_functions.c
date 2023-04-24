#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first num
 * @b: second num
 * Return: sum
 */

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: first num
 * @b: second num
 * Return: difference
 */

int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first num
 * @b: second num
 * Return: product
 */

int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}

/**
 * op_div - divides 2 numbers
 * @a: first num
 * @b: sec num
 * Return: result
 */

int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;

	return (result);
}

/**
 * op_mod - calculates remainder
 * @a: first num
 * @b: sec num
 * Return: remainder
 */

int op_mod(int a, int b)
{
	int remainder;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	remainder = a % b;

	return (remainder);
}
