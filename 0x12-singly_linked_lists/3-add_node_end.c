#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to a list
 * @head: pointer to first list node
 * @str: string data value
 * Return: pointer to next node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	*head = new_node;

	return (new_node);
}
