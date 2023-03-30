#include <string.h>

/**
 * _strcat - concatenantes 2 strings
 * @dest: destinantion string
 * @src: source string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);

	return (ptr);
}
