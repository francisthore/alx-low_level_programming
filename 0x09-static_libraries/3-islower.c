#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks if a character is lower case
 * @c: an int aparameter
 *
 * Description: a function that checks if a lower
 *
 * Return: an int type
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
