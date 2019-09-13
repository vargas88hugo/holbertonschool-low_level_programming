#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a linked list
 * @head: Head of the linked list
 * @n: Number of the linked list
 * Return: The address of the new node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

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

	tmp = *head;

	for (; tmp->next;)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
