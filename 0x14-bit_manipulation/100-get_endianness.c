#include "main.h"

/**
 * get_endianness - checks endianness
 * Return:void
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *str = (char *) &i;

	return (*str);
}
