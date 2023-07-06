#include <unistd.h>

/**
 * _putchar - prints a character to the std out
 * @ch: character to be printed
 * Return: number of bytes printed (1)
*/

int _putchar(int ch)
{
	return(write(1, &ch, 1));
}
