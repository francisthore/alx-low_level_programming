#include <stdlib.h>
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

/**
 * get_dnodeint_at_index - gets a node at index
 * @head: pointer to the head
 * @index: index to get node from
 * Return: node or NULL on failure
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len;

	if (!head)
		return (NULL);
	len = dlistint_len(head);
	if (index > len - 1)
		return (NULL);
	if (index == 0)
		return (head);
	while (index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
