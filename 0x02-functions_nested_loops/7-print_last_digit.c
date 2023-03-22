#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints last digit of number
 * @num: a number
 * Description: takes in a number an returns the last digit
 * Return: last digit
 */
int print_last_digit(int num)
{
	return (abs(num % 10));
	printf("%d", abs(num % 10));
}
