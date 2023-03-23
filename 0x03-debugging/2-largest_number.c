/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: thrid integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (c > b && b > c)
	{
		largest = c;
	}
	esle if (b > c && c > a)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	esle if (b > a && a > c)
	{
		largest = b;
	}
	else if (a > c && c > b)
	{
		largest = a;
	}
	else
	{
		largest = a;
	}
	return (largest);
}
