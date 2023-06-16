#include "lists.h"
/**
 * dlistint_len - Return the number of elements in a doubly linked list
 * @h: pointer to the first element of the linked list
 *
 * Return: the number of linked list elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 1;

	if (!h)
		return (0);
	while (h->next)
	{
		h = h->next;
		count++;
	}
	return (count);
}
