#include "lists.h"

/**
 * sum_dlistint - sums up data from a linked list
 * @head: pointer to head node
 * Return: sum or 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
