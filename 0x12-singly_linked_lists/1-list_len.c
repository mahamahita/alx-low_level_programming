#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: pointer list_t 
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}

