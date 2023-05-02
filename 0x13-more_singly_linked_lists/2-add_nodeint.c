#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node to a list
 * @head: ref of head node
 * @n: data value to be assigned
 * Return: address of new added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* So I will try to doc this program */
	/* First I declare my variables */
	listint_t *new_int;

	/* Allocating memory for the new node */
	new_int = malloc(sizeof(listint_t));

	 /* Handling malloc fail */
	if (new_int == NULL)
		return (NULL);
	new_int->n = n; /* Assining the value */
	new_int->next = *head; /* Pointing new node to the previou head */
	*head = new_int; /* making the new node to be the head */

	return (*head);
}
