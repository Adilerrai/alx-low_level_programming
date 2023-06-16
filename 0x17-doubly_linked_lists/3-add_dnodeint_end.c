#include "lists.h"
/**
 * add_dnodeint_end - Add a new element at the end of a doubly linked list
 * @head: pointer to the first element of the linked list
 * @n: new value to add
 *
 * Return: a pointer of the newly added element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
