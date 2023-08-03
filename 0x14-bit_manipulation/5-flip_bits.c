/**
 * flip_bits - determines number of bits needed to be flipped
 * to get from one num to the other
 * @n: first num
 * @m: second num
 * Return: bits needed to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int first_num, second_num;
	int i, ctr;

	first_num = n ^ m;
	ctr = 0;
	i = 63;
	while (i >= 0)
	{
		second_num = first_num >> i;
		if (second_num & 1)
			ctr += 1;
		i--;
	}
	return (ctr);
}
