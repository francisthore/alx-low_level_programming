#include "main.h"

/**
 * flip_bits - counts the number of bits needed to be flipped
 * @n: first num
 * @m: sec num
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bits = 0;
	unsigned long int xor_val = n ^ m, converted;

	i = 63;

	while (i >= 0)
	{
		converted = xor_val >> i;
		if (converted & 1)
			bits++;
		i--;
	}
	return (bits);
}
