#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char str[26] = {
	'a', 'b', 'c', 'd', 'e',
	'f', 'g', 'h', 'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z' };

	i = 25;
	while (i > -1)
	{
		putchar(str[i]);
		/*putchar('\n');*/
		i--;
	}
	putchar('\n');
	return (0);
}
