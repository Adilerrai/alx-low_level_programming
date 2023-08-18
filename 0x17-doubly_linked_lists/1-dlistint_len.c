#include "lists.h"



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
