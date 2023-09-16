#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to head node
 * @index: the index
 * Return: 1 on success or -1 otherwise
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp, *tmp1;

	if (!head)
		return (-1);
	tmp = *head;
	tmp1 = NULL;
	if (index == 0)
	{
		if (tmp)
		{
			*head = tmp->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
		return (-1)
	}
	for (i = 0; i < index && tmp; i++)
	{
		tmp1 = tmp;
		tmp = tmp->next;
	}

	if (i < index)
		return (-1);
	if (tmp->next)
	{
		tmp1->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	tmp1->next = NULL;
	free(tmp);
	return (1);
}
