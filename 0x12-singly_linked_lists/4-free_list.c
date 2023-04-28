#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - frees a list
 * @head: first list item
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp != 0)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(tmp);
}
