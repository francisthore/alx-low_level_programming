#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: ref of head node
 * @index: index to delete
 * Return: 1 if success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i, j;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	j = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		j++;
	}
	if (j < index)
		return (-1);
	tmp = *head;
	i = 0;
	if (index == 0)
	{
		*head = tmp->next;
		/* free(tmp); */
		return (1);
	}
	while (i < index - 1)
	{
		if (tmp->next != NULL)
			tmp = tmp->next;
		i++;
	}
	tmp->next = tmp->next->next;
	tmp = tmp->next;
	/* free(tmp); */
	return (1);
}


