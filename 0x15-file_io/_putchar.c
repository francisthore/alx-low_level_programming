#include <unistd.h>

/**
 * _putchar - prints a character
 * @ch: the character to be printed
 * Return: bytes written
*/

int _putchar(int ch)
{
	return(write(1, &ch, 1));
}
