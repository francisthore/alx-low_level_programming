#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end;
 * @head: pointer to  head
 * @n: data val
 * Return: pointer to new node or Null on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (!*head)
	{
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;

	return (new_node);
}
