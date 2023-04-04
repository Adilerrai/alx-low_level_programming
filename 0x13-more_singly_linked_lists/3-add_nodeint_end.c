#include <stdio.h>
#include "lists.h"
/*
 *
 *
 *
 *
 * add_nodeint_end - a function that adds a new node
 *at the end of the node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;
		node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	temp = *head;
	/*place new_node first if head is NULL*/
	if (temp == NULL)
		*head = node;
	else
		{
				/*if head is not null, and next is not NULL*/
				while (temp->next != NULL)
					temp = temp->next;	/*go to the last node*/

					/*place our new node at the end*/
			temp->next = node;
		}

	return (*head);
}
