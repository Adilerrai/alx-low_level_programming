#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * add_nodeint - a function that adds a new node at
 * beginning of a list
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declaring the new node and allocate the memory */
	listint_t *new_node;
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (0);
		if (*head == NULL)
			new_node->next = NULL;
		else
			new_node->next = *head;



	new_node->n = n;

	*head = new_node;
	return (*head);
}
