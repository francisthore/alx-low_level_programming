#include <string.h>

/**
 * _strncpy - copies string from source to destination
 * @dest: destination string
 * @src: source string
 * @n: bytes
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
