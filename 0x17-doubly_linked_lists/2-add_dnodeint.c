#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the begining of list
 * @head: pointer to head node
 * @n: data val
 * Return: pointer to new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (!*head)
		return (NULL);
	tmp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	new_node->next = tmp;
	tmp->prev = new_node;
	*head = new_node;

	return (*head);
}

