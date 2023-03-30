/**
 * leet - encodes a string into 1337 by replacings some letters with numbers
 * @str: the string
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j, k;
	char rep[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	j = 0;
	k = 0;

	while (str[i])
	{
		if (str[i] == rep[j])
			str[i] = num[k];

		j++;
		k++;
		i++;
	}
	return (str);
}
