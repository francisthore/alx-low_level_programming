#include "main.h"

/**
 * get_bit - gets the bit at an index
 * @n: number
 * @index: index
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
