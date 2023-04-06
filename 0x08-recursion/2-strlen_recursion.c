#include <ctype.h>
#include <string.h>

/**
 * _strlen_recursion - get the srting lenght
 * @s: the string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
		return (0);
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (_strlen_recursion(s + 1));
}
