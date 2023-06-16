#include "lists.h"
/**
 * free_dlistint - Free the allocated memory to the linked list
 * @head: pointer to the first element of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buff = head;

	if (head != NULL)
	{
		if (buff->next != NULL)
			free_dlistint(head->next);
	}
	free(buff);
}
