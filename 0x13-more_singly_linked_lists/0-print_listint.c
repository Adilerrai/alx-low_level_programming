#include <stdio.h>
#include <stdlib.h>
#include "lists.h"



size_t print_listint(const listint_t *P)
{
	size_t Node_C = 1;
	if (P == NULL)
		return (0);
	while (P->next != NULL)
{
		printf("%d\n", P->n);
		P = P->next;
		Node_C++;
}
	/*print last node*/
	printf("%d\n", P->n);

	return (Node_C);
}
