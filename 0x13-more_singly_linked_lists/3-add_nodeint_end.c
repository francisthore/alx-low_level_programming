#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end
 * @head: ref of head node
 * @n: data value to be ssigned
 * Return: null or address to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_int;

	new_int = malloc(sizeof(listint_t));

	if (new_int == NULL)
		return (NULL);
	new_int->n = n;
	new_int->next = NULL;

	if (*head == NULL)
	{
		*head = new_int;
		return (*head);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_int;

	return (new_int);
}
