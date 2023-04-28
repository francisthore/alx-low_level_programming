#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints items of a list
 * @h: a list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t elems = 0;

	while (h != NULL)
	{
		if (h.str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h.len, h.str);
		elems += 1;
		h = h.next;
	}
	return (elems);
}
