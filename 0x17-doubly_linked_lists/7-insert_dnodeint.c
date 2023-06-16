#include "lists.h"
/**
 * get_len - Gives the length of a linked list
 * @head: first element of the linked list
 *
 * Return: The length of the linked list
 */
unsigned int get_len(dlistint_t **head)
{
	unsigned int len = 1;
	dlistint_t *buff = *head;

	if (buff == NULL)
		return (0);
	while (buff->next != NULL)
	{
		buff = buff->next;
		len++;
	}
	return (len);
}
/**
 * insert_dnodeint_at_index - Insert a new element at a given position
 * of a doubly linked list
 * @h: first element of the linked list
 * @idx: The position where the new element should be added
 * @n: The new element's value
 *
 * Return: A pointer the newly added element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *buff = *h, *new;
	unsigned int len, i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	len = get_len(&buff);
	if (idx > len)
		return (NULL);
	else if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == len)
	{
		return (add_dnodeint_end(h, n));
	}
	if (len == 0)
	{
		*h = new;
		return (*h);
	}
	while (i != idx)
	{
		buff = buff->next;
		i++;
	}
	new->prev = buff->prev;
	new->next = buff;
	buff->prev->next = new;
	buff->prev = new;
	return (new);
}
