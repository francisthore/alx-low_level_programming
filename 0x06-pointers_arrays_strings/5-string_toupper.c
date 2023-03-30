#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes string lowercase letters to upper
 * @str: string to be cooverted
 * Return: string in uppercase
 */

char *string_toupper(char *str)
{
	int i, j;
	char s1[100];

	i = 0;
	j = strlen(str);

	strcpy(s1, str);

	while (i < j)
	{
		str[i] = toupper(s1[i]);
		i++;
	}
	return (str);
}
