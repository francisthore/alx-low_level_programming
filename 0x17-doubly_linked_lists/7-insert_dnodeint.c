#include "lists.h"
#include <stdlib.h>

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
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to head node
 * @idx: index
 * @n: data val
 * Return: pointer to new node or NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *tmp1, *new_node;
	unsigned int i;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	tmp1 = NULL;
	for (i = 0; i < idx && tmp; i++)
	{
		tmp1 = tmp;
		tmp = tmp->next;
	}
	if (i < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp1;
	new_node->next = tmp;

	if (tmp1)
		tmp1->next = new_node;
	else
		*h = new_node;
	if (tmp)
		tmp->prev = new_node;
	return (new_node);
}
