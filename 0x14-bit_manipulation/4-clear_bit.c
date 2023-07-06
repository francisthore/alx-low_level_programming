/**
 * clear_bit - turns a bit at an index to zero
 * @n: address to number
 * @index: index to set bit to zero
 * Return: 1 on success and -1 on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
