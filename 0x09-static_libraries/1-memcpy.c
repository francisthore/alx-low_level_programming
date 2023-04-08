#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destinantion
 * @src: source
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
