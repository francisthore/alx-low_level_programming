/**
 * clear_bit - sets a bit to 0 at an index
 * @n: pointer to a number
 * @index: the index to set bit to 0 at
 * Return: 1 on success or -1 on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1 << index));
	return (-1);
}
