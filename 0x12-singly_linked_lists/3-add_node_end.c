#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end
 * @head: Beginning of the list
 * @str: String to be stored
 * Return: The adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;
	list_t *last = (*head);

	if (*head == NULL)
	{
		(*head) = new;
		return (*head);
	}
	else
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
