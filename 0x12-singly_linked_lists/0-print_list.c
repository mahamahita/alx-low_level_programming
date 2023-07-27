#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints linked list's elements
 * @l: pointer to the list_t 
 *
 * Return: number of printed nodes
 */
size_t print_list(const list_t *l)
{
	size_t s = 0;

	while (l)
	{
		if (!l->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", l->len, l->str);
		l = l->next;
		s++;
	}

	return (s);
}
