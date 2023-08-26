#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - a function that adds adds a new node at the end of a listint_t list.
 *
 * @head: pointer to the head of the list
 * @n: integer
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cursor = *head;

	new = malloc(sizeof(listint_t));

	if (new!= NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new;
	}
	else
		*head = new;

	return (new);
}


