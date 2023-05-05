#include <unistd.h>

/**
 * _putchar - my own function calling the c putchar
 * @ch: a character
 *
 * Description: take in a character
 *
 * Return: int
 */

int _putchar(int ch)
{
	return (write(1, &ch, 1));
}
