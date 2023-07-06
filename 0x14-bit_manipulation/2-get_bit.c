/**
 * get_bit - returns the value at a given bit
 * @n: the decimal number
 * @index: position of bit
 * Return: value stored on bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index < 0)
		return (-1);
	if ((n >> index) & 1)
		bit = 1;
	return (bit);
}
