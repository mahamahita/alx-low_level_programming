#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the sum of all (n) or 0 - if the list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}


