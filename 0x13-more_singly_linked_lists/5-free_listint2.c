#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head : pointer to the first node of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}


