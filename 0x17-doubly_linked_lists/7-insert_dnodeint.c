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

	if (dlistint_len(*h) == 0)
		return(add_dnodeint(h, n));	
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx >= dlistint_len(*h))
		return (NULL);
	if (idx == dlistint_len(*h) - 1)
		return (add_dnodeint_end(h, n));
	tmp = *h;
	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(tmp);
		return (NULL);
	}
	tmp1 = tmp->next;
	new_node->prev = tmp;
	new_node->n = n;
	new_node->next = tmp1;
	tmp->next = new_node;
	tmp1->prev = new_node;

	return (new_node);

}
