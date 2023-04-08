#include <string.h>

/**
 * _strspn - gets the length of aprefix substring
 * @s: string
 * @accept: bytes
 * Return: number of bytes of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
