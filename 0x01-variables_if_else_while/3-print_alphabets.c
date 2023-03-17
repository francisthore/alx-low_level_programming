#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaring my variable and array and initializing*/
	int i = 0;
	char str[52] = {
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
	'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	/**
	 * A while loop
	 *
	 * It iterates through the alphabet array and prints to stdout
	 */
	while (i < 52)
	{
		putchar(str[i]);
		i++;
	}
	/* Prints a new line */
	putchar('\n');
	return (0);
}
