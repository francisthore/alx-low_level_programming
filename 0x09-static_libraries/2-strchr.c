#include <string.h>

/**
 * _strchr - returns pointer to first occurance of character (search)
 * @s: string to look character from
 * @c: character
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);

	return (ptr);
}
