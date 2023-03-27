#include "main.h"

/**
 *reset_to98 - resets var to 98
 *@n: pointer
 *Description: takes a pointer of a var and resets it to 98
 *Return: void
 */
void reset_to_98(int *n)
{
	int *ptr;

	ptr = n;

	*ptr = 98;
}
