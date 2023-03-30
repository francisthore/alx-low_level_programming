/**
 * leet - encodes a string into 1337 by replacings some letters with numbers
 * @str: the string
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char rep[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	i = 0;

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == rep[j] || str[i] == rep[i] - 32)
			{
				str[i] = num[j];
			}
		}
		i++;
	}
	return (str);
}
