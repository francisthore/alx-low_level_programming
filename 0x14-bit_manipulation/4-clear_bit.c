#include "main.h"

/**
 * clear_bit - sets bit to 0 at an index
 * @n: pointer to number
 * @index: index to set
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);

	return (1);
}
