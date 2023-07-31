#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head : pointer to the first node of the linked list
 * @index: index of the node to return
 * Return: pointer to the returned node or NULL  if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}


