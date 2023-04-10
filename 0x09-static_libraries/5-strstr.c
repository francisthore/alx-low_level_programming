#include <string.h>

/**
 * _strstr - locates substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr = strstr(haystack, needle);

	return (ptr);
}
