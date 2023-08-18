#include "lists.h"





size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
  	
	while (dlistint != NULL)
 	{
 		count++;
 		dlistin_t = dlistint_t->next;
	}
	return (count);
}
