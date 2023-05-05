#include "main.h"

/**
 * set_bit - sets bit to 1 at any given index
 * @n: pointer to number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);

	return (1);
}
