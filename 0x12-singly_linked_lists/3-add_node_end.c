#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node 
 * @str: string to put
 *
 * Return: starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t str_len = 0;

	/*set strig length to 0 if NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length */
	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	/*copy starting node pointer to temp*/
	temp = *head;

	/*if temp is NULL place our new_node at the beginning of the list*/
	/* if its not null we place our new_node to temp-> */
	/*adding our new_node at the end */
	if (temp == NULL)
		*head = new_node;
	else
	{
		/**
		 * we iterate pointer next addr if its not NULL our temp addr
		 * points to the next addr or the next node.
		*/
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}

