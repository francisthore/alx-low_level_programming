#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - prints length of a list
 * @h: a list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elems = 0;

	while (h != NULL)
	{
		elems += 1;
		h = h->next;
	}
	return (elems);
}
