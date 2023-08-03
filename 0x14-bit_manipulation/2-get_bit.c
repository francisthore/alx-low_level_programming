/**
 * get_bit - returns the bit at a given index/bit
 * @n: a decimal number
 * @index: the position to get the bit
 * Return: val of the bit on success or -1 on failure
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index > 64)
		return (-1);
	if ((n >> index) & 1)
		bit = 1;
	return (bit);
}
