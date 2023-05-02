#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets the node at an index
 * @head: list
 * @index: index of node
 * Return: node address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		exit(98);
	tmp = head;

	for (i = 0; i < index; i++)
		tmp = tmp->next;
	return (tmp);
}
