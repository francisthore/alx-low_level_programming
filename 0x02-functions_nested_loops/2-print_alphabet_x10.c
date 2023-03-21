#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Description: This function prints out the alphabet 10x in low caps
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;
	char letters[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z' };
	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 26)
		{
			putchar(letters[i]);	
			i++;
		}
		putchar('\n');
		j++;
	}

}
