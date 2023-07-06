#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: the binary number as a string
 * Return: 0 on failure or the binary number in decimal on success
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_sum, dec_value, bin_num_len;
	int i;

	if (b == NULL)
		return (0);
	bin_num_len = 0;
	while (b[bin_num_len] != '\0')
	{
		bin_num_len += 1;
	}
	i = bin_num_len - 1;

	dec_sum = 0;
	dec_value = 1;
	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			dec_sum += dec_value;
		dec_value *= 2;
		i--;
	}
	return (dec_sum);
}
