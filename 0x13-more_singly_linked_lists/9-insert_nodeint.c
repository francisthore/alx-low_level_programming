#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: ref of head node
 * @idx: index
 * @n: data value to assign
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_int, *tmp;
	unsigned int i;

	new_int = malloc(sizeof(listint_t));
	if (new_int == NULL)
		return (NULL);
	new_int->n = n;
	if (*head == NULL)
	{
		new_int->next = NULL;
		*head = new_int;
		return (*head);
	}
	tmp = *head;
	if (idx == 0)
	{
		new_int->next = tmp;
		*head = new_int;
		return (new_int);
	}

	i = 0;
	while (i < idx - 1)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		i++;
	}
	new_int->next = tmp->next;
	tmp->next = new_int;

	return (new_int);
}
