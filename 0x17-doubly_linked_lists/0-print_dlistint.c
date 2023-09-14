#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: header of the list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
	{
		return (nodes);
	}
	while (h->next)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	printf("%d\n", h->n);
	nodes++;
	return (nodes);
}
