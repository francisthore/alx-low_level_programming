#include "lists.h"

/**
 * dlistint_len - returns the num number of elements in a list
 * @h: header node
 * Return: number of items
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);
	while (h->next)
	{
		nodes++;
		h = h->next;
	}
	nodes++;
	return (nodes);
}

