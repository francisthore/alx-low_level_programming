#include <string.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: number of bytes
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = strpbrk(s, accept);

	return (ptr);
}
