#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes each word of a string
 * @str: string to be capitalized its words
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i, len;

	len = strlen(str);

	/* strcpy(s1, str); */

	for (i = 0; i < len; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '.' || str[i] == ',' || str[i] == ';'
		|| str[i] == '!' || str[i] == '?' || str[i] == '('
		|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
