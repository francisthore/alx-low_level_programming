#include <string.h>

/**
 * _strlen - returns string length
 * @s: string pointer
 * Return: string length
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = s;
	len = strlen(str);

	return (len);
}
