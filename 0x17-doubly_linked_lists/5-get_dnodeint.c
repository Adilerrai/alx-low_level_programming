#include "lists.h"
/**
 * get_len - Gives the length of a doubly linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: the length of the linked list
 */
unsigned int get_len(dlistint_t **head)
{
	dlistint_t *buff = *head;
	unsigned int len = 1;

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
 * get_dnodeint_at_index - get an element at a given index
 * in a doubly linked list
 * @head: pointer to the first element of the linked list
 * @index: the index to look for
 *
 * Return: a pointer to the searched element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0, len;
	dlistint_t *buff = head;

	len = get_len(&head);
	if (index >= len)
	{
		return (NULL);
	}
	while (n != index)
	{
		buff = buff->next;
		n++;
	}
	return (buff);
}
