#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
* @head : pointer to the first node of the list
 * @idx  : index of the list where the new node will be added
* @n    : value for the new node to be added
 * Return: the address of the new node, or NULL if it failed */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *now;
	unsigned int index;

	now = *head; 

	new = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new == NULL)
		return (NULL);

	new ->n = n; 

	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		now = now->next;
		if (now == NULL)
			return (NULL);
	}

	if (idx == 0) 
	{
		
		new ->next = *head;
		*head = new;
	}
	else if (now->next) 
	{
		new ->next = now->next; 
		now->next = new;
	}
	else 
	{
		new ->next = NULL;
		now->next = new;
	}

	return (new);
}


