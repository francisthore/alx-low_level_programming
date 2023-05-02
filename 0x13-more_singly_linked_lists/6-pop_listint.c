#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node of a list
 * @head: ref of head node
 * Return: data popped
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;
	
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (n);
}
