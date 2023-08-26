#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head : pointer to fi_rst node
 * Return: the head node’s data (n) or if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nm);
}


