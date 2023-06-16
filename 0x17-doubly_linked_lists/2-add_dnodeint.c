#include "lists.h"
/**
 * add_dnodeint - Add a new element at the start of a doubly linked list
 * @head: pointer to the first element of the linked list
 * @n: new value to add
 *
 * Return: a pointer of the newly added element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (*head);
}
