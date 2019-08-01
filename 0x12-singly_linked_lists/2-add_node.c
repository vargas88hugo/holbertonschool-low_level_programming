#include "lists.h"

/**
 * add_node - Function that adds nodes at the beginning
 * @head: First element of the list
 * @str: String to be stored
 * Return: The adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (head == NULL || str == NULL)
	{
		free(head);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(head);
		return (NULL);
	}

	new = (list_t *)malloc(sizeof(char) * (i + 1));
	if (new == NULL)
	{
		free(new);
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->next = (*head);

	(*head) = new;

	return (new);
}
