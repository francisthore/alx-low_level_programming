#include "main.h"

/**
 *reset_to_98 - resets var to 98
 *@n: pointer
 *Description: takes an address and resets the value to 98
 *you know the bies
 *
 *Return: void
 */
void reset_to_98(int *n)
{
	int *ptr;

	ptr = n;

	*ptr = 98;
}
