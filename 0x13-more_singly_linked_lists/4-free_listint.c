#include <stdio.h>
#include "lists.h"
/*
*
*
*
*
*
*/
void free_listint(listint_t *head)
{
	listint_t *current;
	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current);
	}
}
