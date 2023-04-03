#include <stdio.h>
#include <stdlib.h>
#include "lists.h"



size_t print_listint(const listint_t *h)
{
	size_t Node_C = 1;
	if ( h == NULL)
		return (0);
	while (h->next != NULL)
{
		printf("%d\n", h->n);
		h = h->next;
		Node_C++;
}
	/*print last node*/
	printf("%d\n", h->n);

	return (Node_C);
}
