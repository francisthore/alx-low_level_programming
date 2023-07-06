/**
 * flip_bits - determines number of bits needed to be flipped
 * to get from one num to the other
 * @n: first num
 * @m: second num
 * Return: bits needed to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num1, num2;
	int i, counter;

	num1 = n ^ m;
	counter = 0;
	i = 63;
	while (i >= 0)
	{
		num2 = num1 >> i;
		if (num2 & 1)
			counter += 1;
		i--;
	}
	return (counter);
}
