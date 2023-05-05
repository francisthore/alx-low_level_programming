#include "main.h"

/**
 * binary_to_uint - coverts a binary number to an unsigned int
 * @b: binary string
 * Return: unsigned int in base 10
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, weight = 1, len = 0;
	int i;

	if (b == NULL)
		return (0);
	for(i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			converted += weight;
		weight *= 2;
	}
	return (converted);
}
