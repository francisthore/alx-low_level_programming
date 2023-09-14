#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head node
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	tmp = head;
	while (head)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	free(tmp);
}
