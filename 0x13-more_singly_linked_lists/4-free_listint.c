#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head node of first elem
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;
	
	if (head == NULL)
		return;
	tmp = head;	
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
