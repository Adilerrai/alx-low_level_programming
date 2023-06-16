#include "lists.h"
/**
 * get_len - Gives the length of a linked list
 * @head: first element of the linked list
 *
 * Return: The length of the linked list
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
 * delete_dnodeint_at_index - Delete an element from a given position
 * of a doubly linked list
 * @head: first element of the linked list
 * @index: The position where the new element should be added
 *
 * Return: Return 1 on success and  -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *buff = *head;
	unsigned int len, i = 0;

	len = get_len(head);
	if (index >= len)
		return (-1);
	while (i != index)
	{
		buff = buff->next;
		i++;
	}
	if (len == 1)
	{
		*head = NULL;
		free(buff);
		return (1);
	}
	if (index == 0)
	{
		buff->next->prev = NULL;
		*head = buff->next;
		free(buff);
		return (1);
	}
	else if (index == (len - 1))
	{
		buff->prev->next = NULL;
		free(buff);
		return (1);
	}
	buff->prev->next = buff->next;
	buff->next->prev = buff->prev;
	free(buff);
	return (1);
}
