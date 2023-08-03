/**
 * set_bit - sets a bit at a gien index
 * @n: pointer to the number
 * @index: the index to set the bit at
 * Return: 1 on success or -1 on failure
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
