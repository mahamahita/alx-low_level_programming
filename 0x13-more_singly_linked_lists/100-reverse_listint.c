#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *n;

	i = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = n;
	}

	*head = i;
	return (*head);
}


