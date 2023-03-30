/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: number of items in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	/*int size = n; */
	int b[100];
	int i, j;

	j = 0;

	for (i = n - 1; i >=  0; i--)
	{
		b[j] = a[i];
		j++;
	}

	j = 0;

	for (i = 0; i < n; i++)
	{
		a[i] = b[j];
		j++;
	}
}
