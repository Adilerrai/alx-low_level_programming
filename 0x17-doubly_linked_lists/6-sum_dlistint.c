#include "lists.h"
/**
 * sum_dlistint - Gives the sum of all the linked list elements
 * @head: pointer to the first element of the linked list
 *
 * Return: The sum of all the elements of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *buff = head;
	int sum = 0;

	if (buff == NULL)
		return (0);
	while (buff != NULL)
	{
		sum += buff->n;
		buff = buff->next;
	}
	return (sum);
}
