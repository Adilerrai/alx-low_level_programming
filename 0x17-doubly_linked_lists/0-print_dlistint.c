#include "lists.h"
/**
 * print_dlistint - Print the doubly linked list elements
 * @h: pointer to the first element of the linked list
 *
 * Return: the number of linked list elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
