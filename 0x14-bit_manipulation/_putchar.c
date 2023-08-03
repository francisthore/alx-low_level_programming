#include <unistd.h>

/**
 * _putchar - prints a character to std out
 * @ch: the character to be printed
 * Return: write of the char
*/

int _putchar(int ch)
{
	return(write(1, &ch, 1));
}
