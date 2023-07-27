#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of  a linked list's elements
 * @l: pointer to  list_t 
 *
 * Return: number of elements in l
 */
size_t list_len(const list_t *l)
{
	size_t n = 0;

	while (l)
	{
		n++;
		l = l->next;
	}
	return (n);
}
