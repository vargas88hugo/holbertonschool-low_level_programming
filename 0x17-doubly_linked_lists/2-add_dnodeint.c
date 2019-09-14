#include "lists.h"

/**
 * add_dnodeint - Function that adds a node at the beginning of a list
 * @head: Head of the linked list
 * @n: Number variable of the new node
 * Return: The address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
