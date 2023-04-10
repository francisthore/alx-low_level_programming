#include <string.h>

/**
 * _strcpy - copies string
 * @dest: destination of copied string
 * @src: soruce of string
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = strcpy(dest, src);

	return (tmp);
}
