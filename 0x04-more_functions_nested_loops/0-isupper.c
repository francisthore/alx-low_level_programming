#include <ctype.h>
/**
 * _isupper - checks if a char is upper
 * @c: character
 * Description: takes in a character and checks if it is upper
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
