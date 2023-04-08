#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks if a character is lower case
 * @c: an int aparameter
 *
 * Description: a function that checks if an alpha
 *
 * Return: an int type
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
