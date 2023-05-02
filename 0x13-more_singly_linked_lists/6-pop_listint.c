#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: ref of head node
 * Return: data popped
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	n = tmp->n;

	tmp = tmp->next;
	*head = tmp;

	return (n);
}
