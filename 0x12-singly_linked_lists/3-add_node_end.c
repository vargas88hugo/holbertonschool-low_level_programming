#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end
 * @head: Beginning of the list
 * @str: String to be stored
 * Return: The adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	list_t *last = (*head);

	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (*head);
}
