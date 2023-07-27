#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list
 * @h: list_t list to free
 */
void free_list(list_t *h)
{
	list_t *temp;

	while (h)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}
