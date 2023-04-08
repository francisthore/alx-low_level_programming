#include <string.h>

/**
 * _strncat - concatenates 2 strings n bytes
 * @dest: destination string
 * @src: source string
 * @n: bytes to be appended to dest
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
