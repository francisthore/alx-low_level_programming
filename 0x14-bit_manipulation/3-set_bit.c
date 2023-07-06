#include <stdio.h>
/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to a number
 * @index: the position where the bit has to be set
 * Return: 1 on succes or -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index >= 64)
		return (-1);
	tmp = *n;
	tmp = (tmp | (1 << index));
	*n = tmp;

	return (1);
}
