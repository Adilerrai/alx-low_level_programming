#include "lists.h"
/**
 * print_dlistint - Print the doubly linked list elements
 * @h: pointer to the first element of the linked list
 *
 * Return: the number of linked list elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 1;

	if (!h)
		return (0);
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	printf("%d\n", h->n);
	return (count);
}
