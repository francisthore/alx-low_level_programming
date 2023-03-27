#include "main.h"

/**
 * swap_int - swaps the values of 2 ints
 * @a: pointer to a
 * @b: pointer to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *tmp, tmp2; /* declare a temporary pointer */

	tmp = a;
	tmp2 = *b;

	*tmp = *a; /* now the tmp pointer has the address of a */

	*b = *tmp; /* now b = a */
	*a = tmp2;
}
