#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - determines the number of elements in a linked list
 * @h: single linked lists
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
