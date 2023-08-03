#include <stdio.h>
/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: binary number as a string
 * Return: converted number on success or 0 on failure
*/

unsigned int binary_to_uint(char *b)
{
	unsigned int dec = 0, pow = 1;
	int i = 0, j;

	if (!b)
		return (0);
	j = 0;
	while (b[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			dec += pow;
		pow = pow << 1;
	}
	return (dec);
}
