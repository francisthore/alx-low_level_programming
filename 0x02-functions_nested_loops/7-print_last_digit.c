#include <stdio.h>
/**
 * print_last_digit - prints last digit of number
 * @num: a number
 * Description: takes in a number an returns the last digit
 * Return: last digit
 */
int print_last_digit(int num)
{
	write(num % 10);
	return (num % 10);
}