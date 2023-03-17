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

	i = 0;
	while (i < 26)
	{
		if ((i != 16 && i == 4) || (i != 4 && i == 16))
		{
			/*okay let me try this*/
		}		
		else
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
