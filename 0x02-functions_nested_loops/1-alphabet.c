#include <stdio.h>

/**
 * print_alphabet - prints alphabet
 *
 * Description: This function prints out the alphabet in low caps
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	char letters[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z' }
	i = 0;
	while (i < 26)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
}
