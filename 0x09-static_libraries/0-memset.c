#include <string.h>

/**
 * _memset - fills the first n bytes of memory with constant
 * @s: string s pointer
 * @b: character to fill memory with
 * @n: number of bytes to fill memory
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
