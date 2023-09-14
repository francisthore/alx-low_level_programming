#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the begining of list
 * @head: pointer to head node
 * @n: data val
 * Return: pointer to new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (*head)
	{
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = *head;
		new_node->next->prev = new_node;
		*head = new_node;

		return (new_node);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	*head = new_node;

	return (new_node);
}

